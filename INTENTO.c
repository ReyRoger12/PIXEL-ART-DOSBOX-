#include <graphics.h>
#include <conio.h>
#include <math.h>
#include <dos.h> // <- Necesario para delay()

void iniciar_graficos();
void linea(int x1, int y1, int x2, int y2);
void poligono(int n, int *puntos);
void scanlineFill(int n, int *puntos);

void main()
{
    int estrella[] = {
        260,200, 220,214, 218,257, 192,223, 151,235,
        175,200, 151,164, 192,176, 218,142, 220,185,
        260,200
    };

    iniciar_graficos();
    poligono(11, estrella);
    scanlineFill(11, estrella); // Aquí ocurre el relleno con efecto visual

    getch(); // Espera final para ver el resultado
    closegraph();
}

void iniciar_graficos()
{
    int controlador = DETECT, modo;
    initgraph(&controlador, &modo, "c:\\tc\\bgi");
}

void linea(int x1, int y1, int x2, int y2)
{
    int t, distancia;
    int delta_x, delta_y, xerr=0, yerr=0;
    int incx, incy, color;
    color = getcolor();
    delta_x = x2 - x1;
    delta_y = y2 - y1;

    if (delta_x > 0) incx = 1;
    else if (delta_x == 0) incx = 0;
    else incx = -1;

    if (delta_y > 0) incy = 1;
    else if (delta_y == 0) incy = 0;
    else incy = -1;

    delta_x = abs(delta_x);
    delta_y = abs(delta_y);
    distancia = (delta_x > delta_y) ? delta_x : delta_y;

    for (t = 0; t <= distancia; t++)
    {
        putpixel(x1, y1, color);
        xerr += delta_x;
        yerr += delta_y;
        if (xerr > distancia)
        {
            xerr -= distancia;
            x1 += incx;
        }
        if (yerr > distancia)
        {
            yerr -= distancia;
            y1 += incy;
        }
    }
}

void poligono(int n, int *puntos)
{
    int i;
    for (i = 0; i < n - 1; i++)
    {
        linea(puntos[0], puntos[1], puntos[2], puntos[3]);
        puntos += 2;
    }
}

// --------------------------
// Algoritmo Scanline Fill con delay visual
// --------------------------
void scanlineFill(int n, int *puntos)
{
    int i, j, y, x;
    int intersecciones[20], temp;
    int minY = puntos[1], maxY = puntos[1];

    // Obtener minY y maxY
    for (i = 1; i < n * 2; i += 2)
    {
        if (puntos[i] < minY) minY = puntos[i];
        if (puntos[i] > maxY) maxY = puntos[i];
    }

    for (y = minY; y <= maxY; y++)
    {
        int k = 0;

        for (i = 0; i < (n - 1) * 2; i += 2)
        {
            int x1 = puntos[i], y1 = puntos[i + 1];
            int x2 = puntos[i + 2], y2 = puntos[i + 3];

            if ((y1 < y && y2 >= y) || (y2 < y && y1 >= y))
            {
                x = x1 + (y - y1) * (x2 - x1) / (y2 - y1);
                intersecciones[k++] = x;
            }
        }

        // Ordenar intersecciones
        for (i = 0; i < k - 1; i++)
            for (j = i + 1; j < k; j++)
                if (intersecciones[i] > intersecciones[j])
                {
                    temp = intersecciones[i];
                    intersecciones[i] = intersecciones[j];
                    intersecciones[j] = temp;
                }

        // Dibujar entre pares de intersecciones
        for (i = 0; i < k; i += 2)
        {
            linea(intersecciones[i], y, intersecciones[i + 1], y);
            delay(30); // <-- Ralentiza para visualizar línea a línea
        }
    }
}
