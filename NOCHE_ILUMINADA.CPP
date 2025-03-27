#include<graphics.h>
#include<conio.h>


void main()
{
int a=9, b=2; // 2-VGA 9=640X400X16colores

initgraph(&a, &b, "c:\\tc\\bgi");

    // Cielo nocturno
    setfillstyle(1, BLACK);
    bar(0, 0, 639, 389);
    
    // Dibujar estrellas (puntos blancos individuales)
    setcolor(WHITE);
    
    // Estrellas pequeñas
    putpixel(50, 30, WHITE);
    putpixel(120, 80, WHITE);
    putpixel(200, 40, WHITE);
    putpixel(250, 70, WHITE);
    putpixel(300, 20, WHITE);
    putpixel(350, 60, WHITE);
    putpixel(400, 30, WHITE);
    putpixel(450, 80, WHITE);
    putpixel(500, 50, WHITE);
    putpixel(550, 70, WHITE);
    putpixel(600, 40, WHITE);
    putpixel(150, 120, WHITE);
    putpixel(220, 150, WHITE);
    putpixel(280, 130, WHITE);
    putpixel(330, 110, WHITE);
    putpixel(380, 140, WHITE);
    putpixel(430, 120, WHITE);
    putpixel(480, 150, WHITE);
    putpixel(530, 130, WHITE);
    putpixel(580, 110, WHITE);
    putpixel(100, 180, WHITE);
    
    // Estrellas más grandes (brillantes)
    putpixel(80, 50, WHITE); 
    putpixel(81, 50, WHITE); 
    putpixel(80, 51, WHITE); 
    putpixel(79, 50, WHITE); 
    putpixel(80, 49, WHITE);
    putpixel(180, 30, WHITE); 
    putpixel(181, 30, WHITE); 
    putpixel(180, 31, WHITE); 
    putpixel(179, 30, WHITE); 
    putpixel(180, 29, WHITE);
    putpixel(400, 100, WHITE); 
    putpixel(401, 100, WHITE); 
    putpixel(400, 101, WHITE); 
    putpixel(399, 100, WHITE); 
    putpixel(400, 99, WHITE);
    putpixel(500, 30, WHITE); 
    putpixel(501, 30, WHITE); 
    putpixel(500, 31, WHITE); 
    putpixel(499, 30, WHITE); 
    putpixel(500, 29, WHITE);
    

//mar
 setfillstyle(1,    1);
 bar(0,390,     639,479);
//anIZ,alIZ,    anDE,alIZ



// Línea roja que separa el mar y el suelo de los edificios
setcolor(RED);
line(0, 390, 639, 390);


    // Dibujar olas usando arcos y líneas curvas
    setcolor(9); // Color azul más claro para las crestas de las olas
    
    // Ola 1 (forma de arco)
    arc(100, 390, 180, 360, 30);
    arc(160, 390, 180, 360, 30);
    arc(220, 390, 180, 360, 30);
    
    // Ola 2 (más abajo)
    arc(50, 410, 180, 360, 25);
    arc(110, 410, 180, 360, 25);
    arc(170, 410, 180, 360, 25);
    arc(230, 410, 180, 360, 25);
    
    // Ola 3 (patrón alternado)
    arc(300, 390, 180, 360, 35);
    arc(370, 390, 180, 360, 35);
    arc(440, 390, 180, 360, 35);
    
    // Ola 4
    arc(270, 410, 180, 360, 28);
    arc(340, 410, 180, 360, 28);
    arc(410, 410, 180, 360, 28);
    arc(480, 410, 180, 360, 28);
    
    // Ola 5 (lado derecho)
    arc(520, 390, 180, 360, 30);
    arc(580, 390, 180, 360, 30);
    
    // Ola 6
    arc(550, 410, 180, 360, 25);
    arc(610, 410, 180, 360, 25);
    
    // Reflejos de luz en el agua (puntos blancos dispersos)
    putpixel(80, 400, WHITE);
    putpixel(120, 405, WHITE);
    putpixel(200, 415, WHITE);
    putpixel(250, 400, WHITE);
    putpixel(280, 410, WHITE);
    putpixel(350, 405, WHITE);
    putpixel(400, 415, WHITE);
    putpixel(450, 400, WHITE);
    putpixel(500, 410, WHITE);
    putpixel(550, 405, WHITE);
    putpixel(600, 415, WHITE);


 //edificios
 //ONE
 setfillstyle(1,  3);
 bar(40,210,     100,388);
 setcolor(15);  // Establecer el color del borde (blanco)
rectangle(40,210,     100,388);  // Dibujar el borde del rectángulo
 int techo[]={40, 160, 40, 210, 100, 210};
 //line(40,160,    100,210);
 //line(40,160,    40,210);
 //line(40,210,    100,210);
 setcolor(15);
 drawpoly(3, techo);
 setfillstyle(1, 3);
 fillpoly(3, techo);

    // Ventanas edificio ONE (todas amarillas)
    // Fila 1
    putpixel(50, 230, YELLOW); putpixel(51, 230, YELLOW); putpixel(50, 231, YELLOW); putpixel(51, 231, YELLOW);
    putpixel(70, 230, YELLOW); putpixel(71, 230, YELLOW); putpixel(70, 231, YELLOW); putpixel(71, 231, YELLOW);
    putpixel(90, 230, YELLOW); putpixel(91, 230, YELLOW); putpixel(90, 231, YELLOW); putpixel(91, 231, YELLOW);
    
    // Fila 2
    putpixel(50, 260, YELLOW); putpixel(51, 260, YELLOW); putpixel(50, 261, YELLOW); putpixel(51, 261, YELLOW);
    putpixel(70, 260, YELLOW); putpixel(71, 260, YELLOW); putpixel(70, 261, YELLOW); putpixel(71, 261, YELLOW);
    putpixel(90, 260, YELLOW); putpixel(91, 260, YELLOW); putpixel(90, 261, YELLOW); putpixel(91, 261, YELLOW);
    
    // Fila 3
    putpixel(50, 290, YELLOW); putpixel(51, 290, YELLOW); putpixel(50, 291, YELLOW); putpixel(51, 291, YELLOW);
    putpixel(70, 290, YELLOW); putpixel(71, 290, YELLOW); putpixel(70, 291, YELLOW); putpixel(71, 291, YELLOW);
    putpixel(90, 290, YELLOW); putpixel(91, 290, YELLOW); putpixel(90, 291, YELLOW); putpixel(91, 291, YELLOW);
    
    // Fila 4
    putpixel(50, 320, YELLOW); putpixel(51, 320, YELLOW); putpixel(50, 321, YELLOW); putpixel(51, 321, YELLOW);
    putpixel(70, 320, YELLOW); putpixel(71, 320, YELLOW); putpixel(70, 321, YELLOW); putpixel(71, 321, YELLOW);
    putpixel(90, 320, YELLOW); putpixel(91, 320, YELLOW); putpixel(90, 321, YELLOW); putpixel(91, 321, YELLOW);
    
    // Fila 5
    putpixel(50, 350, YELLOW); putpixel(51, 350, YELLOW); putpixel(50, 351, YELLOW); putpixel(51, 351, YELLOW);
    putpixel(70, 350, YELLOW); putpixel(71, 350, YELLOW); putpixel(70, 351, YELLOW); putpixel(71, 351, YELLOW);
    putpixel(90, 350, YELLOW); putpixel(91, 350, YELLOW); putpixel(90, 351, YELLOW); putpixel(91, 351, YELLOW);

//TWO

setfillstyle(1, 3);    // Establecer estilo de relleno sólido, color gris
bar(120, 120, 220, 388);  // Dibujar la barra (rectángulo relleno)

setcolor(15);  // Establecer el color del borde (blanco)
rectangle(120, 120, 220, 388);  // Dibujar el borde del rectángulo

    // Ventanas edificio TWO (algunas encendidas, otras apagadas)
    // Fila 1
    putpixel(130, 140, YELLOW); putpixel(131, 140, YELLOW); putpixel(130, 141, YELLOW); putpixel(131, 141, YELLOW);
    putpixel(150, 140, BLACK); putpixel(151, 140, BLACK); putpixel(150, 141, BLACK); putpixel(151, 141, BLACK);
    putpixel(170, 140, YELLOW); putpixel(171, 140, YELLOW); putpixel(170, 141, YELLOW); putpixel(171, 141, YELLOW);
    putpixel(190, 140, BLACK); putpixel(191, 140, BLACK); putpixel(190, 141, BLACK); putpixel(191, 141, BLACK);
    putpixel(210, 140, YELLOW); putpixel(211, 140, YELLOW); putpixel(210, 141, YELLOW); putpixel(211, 141, YELLOW);
    
    // Fila 2
    putpixel(130, 165, BLACK); putpixel(131, 165, BLACK); putpixel(130, 166, BLACK); putpixel(131, 166, BLACK);
    putpixel(150, 165, YELLOW); putpixel(151, 165, YELLOW); putpixel(150, 166, YELLOW); putpixel(151, 166, YELLOW);
    putpixel(170, 165, BLACK); putpixel(171, 165, BLACK); putpixel(170, 166, BLACK); putpixel(171, 166, BLACK);
    putpixel(190, 165, YELLOW); putpixel(191, 165, YELLOW); putpixel(190, 166, YELLOW); putpixel(191, 166, YELLOW);
    putpixel(210, 165, BLACK); putpixel(211, 165, BLACK); putpixel(210, 166, BLACK); putpixel(211, 166, BLACK);
    
    // Fila 3
    putpixel(130, 190, YELLOW); putpixel(131, 190, YELLOW); putpixel(130, 191, YELLOW); putpixel(131, 191, YELLOW);
    putpixel(150, 190, YELLOW); putpixel(151, 190, YELLOW); putpixel(150, 191, YELLOW); putpixel(151, 191, YELLOW);
    putpixel(170, 190, BLACK); putpixel(171, 190, BLACK); putpixel(170, 191, BLACK); putpixel(171, 191, BLACK);
    putpixel(190, 190, YELLOW); putpixel(191, 190, YELLOW); putpixel(190, 191, YELLOW); putpixel(191, 191, YELLOW);
    putpixel(210, 190, YELLOW); putpixel(211, 190, YELLOW); putpixel(210, 191, YELLOW); putpixel(211, 191, YELLOW);
    
    // Fila 4
    putpixel(130, 215, BLACK); putpixel(131, 215, BLACK); putpixel(130, 216, BLACK); putpixel(131, 216, BLACK);
    putpixel(150, 215, YELLOW); putpixel(151, 215, YELLOW); putpixel(150, 216, YELLOW); putpixel(151, 216, YELLOW);
    putpixel(170, 215, YELLOW); putpixel(171, 215, YELLOW); putpixel(170, 216, YELLOW); putpixel(171, 216, YELLOW);
    putpixel(190, 215, BLACK); putpixel(191, 215, BLACK); putpixel(190, 216, BLACK); putpixel(191, 216, BLACK);
    putpixel(210, 215, YELLOW); putpixel(211, 215, YELLOW); putpixel(210, 216, YELLOW); putpixel(211, 216, YELLOW);
    
    // Fila 5
    putpixel(130, 240, YELLOW); putpixel(131, 240, YELLOW); putpixel(130, 241, YELLOW); putpixel(131, 241, YELLOW);
    putpixel(150, 240, BLACK); putpixel(151, 240, BLACK); putpixel(150, 241, BLACK); putpixel(151, 241, BLACK);
    putpixel(170, 240, YELLOW); putpixel(171, 240, YELLOW); putpixel(170, 241, YELLOW); putpixel(171, 241, YELLOW);
    putpixel(190, 240, YELLOW); putpixel(191, 240, YELLOW); putpixel(190, 241, YELLOW); putpixel(191, 241, YELLOW);
    putpixel(210, 240, BLACK); putpixel(211, 240, BLACK); putpixel(210, 241, BLACK); putpixel(211, 241, BLACK);
    
    // Fila 6
    putpixel(130, 265, YELLOW); putpixel(131, 265, YELLOW); putpixel(130, 266, YELLOW); putpixel(131, 266, YELLOW);
    putpixel(150, 265, YELLOW); putpixel(151, 265, YELLOW); putpixel(150, 266, YELLOW); putpixel(151, 266, YELLOW);
    putpixel(170, 265, BLACK); putpixel(171, 265, BLACK); putpixel(170, 266, BLACK); putpixel(171, 266, BLACK);
    putpixel(190, 265, YELLOW); putpixel(191, 265, YELLOW); putpixel(190, 266, YELLOW); putpixel(191, 266, YELLOW);
    putpixel(210, 265, YELLOW); putpixel(211, 265, YELLOW); putpixel(210, 266, YELLOW); putpixel(211, 266, YELLOW);
    
    // Fila 7
    putpixel(130, 290, BLACK); putpixel(131, 290, BLACK); putpixel(130, 291, BLACK); putpixel(131, 291, BLACK);
    putpixel(150, 290, YELLOW); putpixel(151, 290, YELLOW); putpixel(150, 291, YELLOW); putpixel(151, 291, YELLOW);
    putpixel(170, 290, YELLOW); putpixel(171, 290, YELLOW); putpixel(170, 291, YELLOW); putpixel(171, 291, YELLOW);
    putpixel(190, 290, BLACK); putpixel(191, 290, BLACK); putpixel(190, 291, BLACK); putpixel(191, 291, BLACK);
    putpixel(210, 290, YELLOW); putpixel(211, 290, YELLOW); putpixel(210, 291, YELLOW); putpixel(211, 291, YELLOW);
    
    // Fila 8
    putpixel(130, 315, YELLOW); putpixel(131, 315, YELLOW); putpixel(130, 316, YELLOW); putpixel(131, 316, YELLOW);
    putpixel(150, 315, BLACK); putpixel(151, 315, BLACK); putpixel(150, 316, BLACK); putpixel(151, 316, BLACK);
    putpixel(170, 315, YELLOW); putpixel(171, 315, YELLOW); putpixel(170, 316, YELLOW); putpixel(171, 316, YELLOW);
    putpixel(190, 315, YELLOW); putpixel(191, 315, YELLOW); putpixel(190, 316, YELLOW); putpixel(191, 316, YELLOW);
    putpixel(210, 315, BLACK); putpixel(211, 315, BLACK); putpixel(210, 316, BLACK); putpixel(211, 316, BLACK);
    
    // Fila 9
    putpixel(130, 340, YELLOW); putpixel(131, 340, YELLOW); putpixel(130, 341, YELLOW); putpixel(131, 341, YELLOW);
    putpixel(150, 340, YELLOW); putpixel(151, 340, YELLOW); putpixel(150, 341, YELLOW); putpixel(151, 341, YELLOW);
    putpixel(170, 340, BLACK); putpixel(171, 340, BLACK); putpixel(170, 341, BLACK); putpixel(171, 341, BLACK);
    putpixel(190, 340, YELLOW); putpixel(191, 340, YELLOW); putpixel(190, 341, YELLOW); putpixel(191, 341, YELLOW);
    putpixel(210, 340, YELLOW); putpixel(211, 340, YELLOW); putpixel(210, 341, YELLOW); putpixel(211, 341, YELLOW);
    
    // Fila 10
    putpixel(130, 365, BLACK); putpixel(131, 365, BLACK); putpixel(130, 366, BLACK); putpixel(131, 366, BLACK);
    putpixel(150, 365, YELLOW); putpixel(151, 365, YELLOW); putpixel(150, 366, YELLOW); putpixel(151, 366, YELLOW);
    putpixel(170, 365, YELLOW); putpixel(171, 365, YELLOW); putpixel(170, 366, YELLOW); putpixel(171, 366, YELLOW);
    putpixel(190, 365, BLACK); putpixel(191, 365, BLACK); putpixel(190, 366, BLACK); putpixel(191, 366, BLACK);
    putpixel(210, 365, YELLOW); putpixel(211, 365, YELLOW); putpixel(210, 366, YELLOW); putpixel(211, 366, YELLOW);


//THREE
setfillstyle(1,  3);
bar(180,280,     240,388);
setcolor(15);  // Establecer el color del borde (blanco)
rectangle(180,280,     240,388);  // Dibujar el borde del rectángulo

    // Ventanas edificio THREE
    putpixel(190, 290, YELLOW); putpixel(191, 290, YELLOW); putpixel(190, 291, YELLOW); putpixel(191, 291, YELLOW);
    putpixel(210, 290, YELLOW); putpixel(211, 290, YELLOW); putpixel(210, 291, YELLOW); putpixel(211, 291, YELLOW);
    putpixel(230, 290, YELLOW); putpixel(231, 290, YELLOW); putpixel(230, 291, YELLOW); putpixel(231, 291, YELLOW);
    
    putpixel(190, 310, YELLOW); putpixel(191, 310, YELLOW); putpixel(190, 311, YELLOW); putpixel(191, 311, YELLOW);
    putpixel(210, 310, YELLOW); putpixel(211, 310, YELLOW); putpixel(210, 311, YELLOW); putpixel(211, 311, YELLOW);
    putpixel(230, 310, YELLOW); putpixel(231, 310, YELLOW); putpixel(230, 311, YELLOW); putpixel(231, 311, YELLOW);
    
    putpixel(190, 330, YELLOW); putpixel(191, 330, YELLOW); putpixel(190, 331, YELLOW); putpixel(191, 331, YELLOW);
    putpixel(210, 330, YELLOW); putpixel(211, 330, YELLOW); putpixel(210, 331, YELLOW); putpixel(211, 331, YELLOW);
    putpixel(230, 330, YELLOW); putpixel(231, 330, YELLOW); putpixel(230, 331, YELLOW); putpixel(231, 331, YELLOW);
    
    putpixel(190, 350, YELLOW); putpixel(191, 350, YELLOW); putpixel(190, 351, YELLOW); putpixel(191, 351, YELLOW);
    putpixel(210, 350, YELLOW); putpixel(211, 350, YELLOW); putpixel(210, 351, YELLOW); putpixel(211, 351, YELLOW);
    putpixel(230, 350, YELLOW); putpixel(231, 350, YELLOW); putpixel(230, 351, YELLOW); putpixel(231, 351, YELLOW);
    
    putpixel(190, 370, YELLOW); putpixel(191, 370, YELLOW); putpixel(190, 371, YELLOW); putpixel(191, 371, YELLOW);
    putpixel(210, 370, YELLOW); putpixel(211, 370, YELLOW); putpixel(210, 371, YELLOW); putpixel(211, 371, YELLOW);
    putpixel(230, 370, YELLOW); putpixel(231, 370, YELLOW); putpixel(230, 371, YELLOW); putpixel(231, 371, YELLOW);


//FOUR
setfillstyle(1,  3);
bar(280,190,     320,388);
setcolor(15);  // Establecer el color del borde (blanco)
rectangle(280,190,     320,388);  // Dibujar el borde del rectángulo


    // Ventanas edificio FOUR
    putpixel(290, 200, YELLOW); putpixel(291, 200, YELLOW); putpixel(290, 201, YELLOW); putpixel(291, 201, YELLOW);
    putpixel(310, 200, YELLOW); putpixel(311, 200, YELLOW); putpixel(310, 201, YELLOW); putpixel(311, 201, YELLOW);
    
    putpixel(290, 225, YELLOW); putpixel(291, 225, YELLOW); putpixel(290, 226, YELLOW); putpixel(291, 226, YELLOW);
    putpixel(310, 225, YELLOW); putpixel(311, 225, YELLOW); putpixel(310, 226, YELLOW); putpixel(311, 226, YELLOW);
    
    putpixel(290, 250, YELLOW); putpixel(291, 250, YELLOW); putpixel(290, 251, YELLOW); putpixel(291, 251, YELLOW);
    putpixel(310, 250, YELLOW); putpixel(311, 250, YELLOW); putpixel(310, 251, YELLOW); putpixel(311, 251, YELLOW);
    
    putpixel(290, 275, YELLOW); putpixel(291, 275, YELLOW); putpixel(290, 276, YELLOW); putpixel(291, 276, YELLOW);
    putpixel(310, 275, YELLOW); putpixel(311, 275, YELLOW); putpixel(310, 276, YELLOW); putpixel(311, 276, YELLOW);
    
    putpixel(290, 300, YELLOW); putpixel(291, 300, YELLOW); putpixel(290, 301, YELLOW); putpixel(291, 301, YELLOW);
    putpixel(310, 300, YELLOW); putpixel(311, 300, YELLOW); putpixel(310, 301, YELLOW); putpixel(311, 301, YELLOW);
    
    putpixel(290, 325, YELLOW); putpixel(291, 325, YELLOW); putpixel(290, 326, YELLOW); putpixel(291, 326, YELLOW);
    putpixel(310, 325, YELLOW); putpixel(311, 325, YELLOW); putpixel(310, 326, YELLOW); putpixel(311, 326, YELLOW);
    
    putpixel(290, 350, YELLOW); putpixel(291, 350, YELLOW); putpixel(290, 351, YELLOW); putpixel(291, 351, YELLOW);
    putpixel(310, 350, YELLOW); putpixel(311, 350, YELLOW); putpixel(310, 351, YELLOW); putpixel(311, 351, YELLOW);
    
    putpixel(290, 375, YELLOW); putpixel(291, 375, YELLOW); putpixel(290, 376, YELLOW); putpixel(291, 376, YELLOW);
    putpixel(310, 375, YELLOW); putpixel(311, 375, YELLOW); putpixel(310, 376, YELLOW); putpixel(311, 376, YELLOW);

//FIVE
setfillstyle(1,  3);
bar(310,150,     350,388);
setcolor(15);  // Establecer el color del borde (blanco)
rectangle(310,150,     350,388);  // Dibujar el borde del rectángulo

    // Ventanas edificio FIVE
    putpixel(320, 160, YELLOW); putpixel(321, 160, YELLOW); putpixel(320, 161, YELLOW); putpixel(321, 161, YELLOW);
    putpixel(340, 160, YELLOW); putpixel(341, 160, YELLOW); putpixel(340, 161, YELLOW); putpixel(341, 161, YELLOW);
    
    putpixel(320, 180, YELLOW); putpixel(321, 180, YELLOW); putpixel(320, 181, YELLOW); putpixel(321, 181, YELLOW);
    putpixel(340, 180, YELLOW); putpixel(341, 180, YELLOW); putpixel(340, 181, YELLOW); putpixel(341, 181, YELLOW);
    
    putpixel(320, 200, YELLOW); putpixel(321, 200, YELLOW); putpixel(320, 201, YELLOW); putpixel(321, 201, YELLOW);
    putpixel(340, 200, YELLOW); putpixel(341, 200, YELLOW); putpixel(340, 201, YELLOW); putpixel(341, 201, YELLOW);
    
    putpixel(320, 220, YELLOW); putpixel(321, 220, YELLOW); putpixel(320, 221, YELLOW); putpixel(321, 221, YELLOW);
    putpixel(340, 220, YELLOW); putpixel(341, 220, YELLOW); putpixel(340, 221, YELLOW); putpixel(341, 221, YELLOW);
    
    putpixel(320, 240, YELLOW); putpixel(321, 240, YELLOW); putpixel(320, 241, YELLOW); putpixel(321, 241, YELLOW);
    putpixel(340, 240, YELLOW); putpixel(341, 240, YELLOW); putpixel(340, 241, YELLOW); putpixel(341, 241, YELLOW);
    
    putpixel(320, 260, YELLOW); putpixel(321, 260, YELLOW); putpixel(320, 261, YELLOW); putpixel(321, 261, YELLOW);
    putpixel(340, 260, YELLOW); putpixel(341, 260, YELLOW); putpixel(340, 261, YELLOW); putpixel(341, 261, YELLOW);
    
    putpixel(320, 280, YELLOW); putpixel(321, 280, YELLOW); putpixel(320, 281, YELLOW); putpixel(321, 281, YELLOW);
    putpixel(340, 280, YELLOW); putpixel(341, 280, YELLOW); putpixel(340, 281, YELLOW); putpixel(341, 281, YELLOW);
    
    putpixel(320, 300, YELLOW); putpixel(321, 300, YELLOW); putpixel(320, 301, YELLOW); putpixel(321, 301, YELLOW);
    putpixel(340, 300, YELLOW); putpixel(341, 300, YELLOW); putpixel(340, 301, YELLOW); putpixel(341, 301, YELLOW);
    
    putpixel(320, 320, YELLOW); putpixel(321, 320, YELLOW); putpixel(320, 321, YELLOW); putpixel(321, 321, YELLOW);
    putpixel(340, 320, YELLOW); putpixel(341, 320, YELLOW); putpixel(340, 321, YELLOW); putpixel(341, 321, YELLOW);
    
    putpixel(320, 340, YELLOW); putpixel(321, 340, YELLOW); putpixel(320, 341, YELLOW); putpixel(321, 341, YELLOW);
    putpixel(340, 340, YELLOW); putpixel(341, 340, YELLOW); putpixel(340, 341, YELLOW); putpixel(341, 341, YELLOW);
    
    putpixel(320, 360, YELLOW); putpixel(321, 360, YELLOW); putpixel(320, 361, YELLOW); putpixel(321, 361, YELLOW);
    putpixel(340, 360, YELLOW); putpixel(341, 360, YELLOW); putpixel(340, 361, YELLOW); putpixel(341, 361, YELLOW);
    
    putpixel(320, 380, YELLOW); putpixel(321, 380, YELLOW); putpixel(320, 381, YELLOW); putpixel(321, 381, YELLOW);
    putpixel(340, 380, YELLOW); putpixel(341, 380, YELLOW); putpixel(340, 381, YELLOW); putpixel(341, 381, YELLOW);


//SIX
setfillstyle(1,  3);
bar(370,100,     420,388);
setcolor(15);  // Establecer el color del borde (blanco)
rectangle(370,100,     420,388);  // Dibujar el borde del rectángulo

    // Ventanas edificio SIX (patrón aleatorio)
    // Fila 1
    putpixel(380, 120, YELLOW); putpixel(381, 120, YELLOW); putpixel(380, 121, YELLOW); putpixel(381, 121, YELLOW);
    putpixel(395, 120, BLACK); putpixel(396, 120, BLACK); putpixel(395, 121, BLACK); putpixel(396, 121, BLACK);
    putpixel(410, 120, YELLOW); putpixel(411, 120, YELLOW); putpixel(410, 121, YELLOW); putpixel(411, 121, YELLOW);
    
    // Fila 2
    putpixel(380, 145, BLACK); putpixel(381, 145, BLACK); putpixel(380, 146, BLACK); putpixel(381, 146, BLACK);
    putpixel(395, 145, YELLOW); putpixel(396, 145, YELLOW); putpixel(395, 146, YELLOW); putpixel(396, 146, YELLOW);
    putpixel(410, 145, BLACK); putpixel(411, 145, BLACK); putpixel(410, 146, BLACK); putpixel(411, 146, BLACK);
    
    // Fila 3
    putpixel(380, 170, YELLOW); putpixel(381, 170, YELLOW); putpixel(380, 171, YELLOW); putpixel(381, 171, YELLOW);
    putpixel(395, 170, YELLOW); putpixel(396, 170, YELLOW); putpixel(395, 171, YELLOW); putpixel(396, 171, YELLOW);
    putpixel(410, 170, YELLOW); putpixel(411, 170, YELLOW); putpixel(410, 171, YELLOW); putpixel(411, 171, YELLOW);
    
    // Fila 4
    putpixel(380, 195, BLACK); putpixel(381, 195, BLACK); putpixel(380, 196, BLACK); putpixel(381, 196, BLACK);
    putpixel(395, 195, YELLOW); putpixel(396, 195, YELLOW); putpixel(395, 196, YELLOW); putpixel(396, 196, YELLOW);
    putpixel(410, 195, BLACK); putpixel(411, 195, BLACK); putpixel(410, 196, BLACK); putpixel(411, 196, BLACK);
    
    // Fila 5
    putpixel(380, 220, YELLOW); putpixel(381, 220, YELLOW); putpixel(380, 221, YELLOW); putpixel(381, 221, YELLOW);
    putpixel(395, 220, BLACK); putpixel(396, 220, BLACK); putpixel(395, 221, BLACK); putpixel(396, 221, BLACK);
    putpixel(410, 220, YELLOW); putpixel(411, 220, YELLOW); putpixel(410, 221, YELLOW); putpixel(411, 221, YELLOW);
    
    // Fila 6
    putpixel(380, 245, YELLOW); putpixel(381, 245, YELLOW); putpixel(380, 246, YELLOW); putpixel(381, 246, YELLOW);
    putpixel(395, 245, YELLOW); putpixel(396, 245, YELLOW); putpixel(395, 246, YELLOW); putpixel(396, 246, YELLOW);
    putpixel(410, 245, YELLOW); putpixel(411, 245, YELLOW); putpixel(410, 246, YELLOW); putpixel(411, 246, YELLOW);
    
    // Fila 7
    putpixel(380, 270, BLACK); putpixel(381, 270, BLACK); putpixel(380, 271, BLACK); putpixel(381, 271, BLACK);
    putpixel(395, 270, YELLOW); putpixel(396, 270, YELLOW); putpixel(395, 271, YELLOW); putpixel(396, 271, YELLOW);
    putpixel(410, 270, BLACK); putpixel(411, 270, BLACK); putpixel(410, 271, BLACK); putpixel(411, 271, BLACK);
    
    // Fila 8
    putpixel(380, 295, YELLOW); putpixel(381, 295, YELLOW); putpixel(380, 296, YELLOW); putpixel(381, 296, YELLOW);
    putpixel(395, 295, BLACK); putpixel(396, 295, BLACK); putpixel(395, 296, BLACK); putpixel(396, 296, BLACK);
    putpixel(410, 295, YELLOW); putpixel(411, 295, YELLOW); putpixel(410, 296, YELLOW); putpixel(411, 296, YELLOW);
    
    // Fila 9
    putpixel(380, 320, YELLOW); putpixel(381, 320, YELLOW); putpixel(380, 321, YELLOW); putpixel(381, 321, YELLOW);
    putpixel(395, 320, YELLOW); putpixel(396, 320, YELLOW); putpixel(395, 321, YELLOW); putpixel(396, 321, YELLOW);
    putpixel(410, 320, YELLOW); putpixel(411, 320, YELLOW); putpixel(410, 321, YELLOW); putpixel(411, 321, YELLOW);
    
    // Fila 10
    putpixel(380, 345, BLACK); putpixel(381, 345, BLACK); putpixel(380, 346, BLACK); putpixel(381, 346, BLACK);
    putpixel(395, 345, YELLOW); putpixel(396, 345, YELLOW); putpixel(395, 346, YELLOW); putpixel(396, 346, YELLOW);
    putpixel(410, 345, BLACK); putpixel(411, 345, BLACK); putpixel(410, 346, BLACK); putpixel(411, 346, BLACK);
    
    // Fila 11
    putpixel(380, 370, YELLOW); putpixel(381, 370, YELLOW); putpixel(380, 371, YELLOW); putpixel(381, 371, YELLOW);
    putpixel(395, 370, BLACK); putpixel(396, 370, BLACK); putpixel(395, 371, BLACK); putpixel(396, 371, BLACK);
    putpixel(410, 370, YELLOW); putpixel(411, 370, YELLOW); putpixel(410, 371, YELLOW); putpixel(411, 371, YELLOW);


//EIGHT
setfillstyle(1,  3);
bar(390,280,     445,388);
setcolor(15);  // Establecer el color del borde (blanco)
rectangle(390,280,     445,388);  // Dibujar el borde del rectángulo

    // Ventanas edificio EIGHT
    putpixel(400, 290, YELLOW); putpixel(401, 290, YELLOW); putpixel(400, 291, YELLOW); putpixel(401, 291, YELLOW);
    putpixel(430, 290, YELLOW); putpixel(431, 290, YELLOW); putpixel(430, 291, YELLOW); putpixel(431, 291, YELLOW);
    
    putpixel(400, 310, YELLOW); putpixel(401, 310, YELLOW); putpixel(400, 311, YELLOW); putpixel(401, 311, YELLOW);
    putpixel(430, 310, YELLOW); putpixel(431, 310, YELLOW); putpixel(430, 311, YELLOW); putpixel(431, 311, YELLOW);
    
    putpixel(400, 330, YELLOW); putpixel(401, 330, YELLOW); putpixel(400, 331, YELLOW); putpixel(401, 331, YELLOW);
    putpixel(430, 330, YELLOW); putpixel(431, 330, YELLOW); putpixel(430, 331, YELLOW); putpixel(431, 331, YELLOW);
    
    putpixel(400, 350, YELLOW); putpixel(401, 350, YELLOW); putpixel(400, 351, YELLOW); putpixel(401, 351, YELLOW);
    putpixel(430, 350, YELLOW); putpixel(431, 350, YELLOW); putpixel(430, 351, YELLOW); putpixel(431, 351, YELLOW);
    
    putpixel(400, 370, YELLOW); putpixel(401, 370, YELLOW); putpixel(400, 371, YELLOW); putpixel(401, 371, YELLOW);
    putpixel(430, 370, YELLOW); putpixel(431, 370, YELLOW); putpixel(430, 371, YELLOW); putpixel(431, 371, YELLOW);



//NINE
setfillstyle(1,  3);
bar(570,245,     500,388);
setcolor(15);  // Establecer el color del borde (blanco)
rectangle(570,245,     500,388);  // Dibujar el borde del rectángulo
int techo2[]={570, 180, 570, 245, 500, 245};
setcolor(15);
drawpoly(3, techo2);
setfillstyle(1, 3);
fillpoly(3, techo2);

   // Ventanas edificio NINE
   putpixel(510, 255, YELLOW); putpixel(511, 255, YELLOW); putpixel(510, 256, YELLOW); putpixel(511, 256, YELLOW);
   putpixel(530, 255, YELLOW); putpixel(531, 255, YELLOW); putpixel(530, 256, YELLOW); putpixel(531, 256, YELLOW);
   putpixel(550, 255, YELLOW); putpixel(551, 255, YELLOW); putpixel(550, 256, YELLOW); putpixel(551, 256, YELLOW);
   
   putpixel(510, 275, YELLOW); putpixel(511, 275, YELLOW); putpixel(510, 276, YELLOW); putpixel(511, 276, YELLOW);
   putpixel(530, 275, YELLOW); putpixel(531, 275, YELLOW); putpixel(530, 276, YELLOW); putpixel(531, 276, YELLOW);
   putpixel(550, 275, YELLOW); putpixel(551, 275, YELLOW); putpixel(550, 276, YELLOW); putpixel(551, 276, YELLOW);
   
   putpixel(510, 295, YELLOW); putpixel(511, 295, YELLOW); putpixel(510, 296, YELLOW); putpixel(511, 296, YELLOW);
   putpixel(530, 295, YELLOW); putpixel(531, 295, YELLOW); putpixel(530, 296, YELLOW); putpixel(531, 296, YELLOW);
   putpixel(550, 295, YELLOW); putpixel(551, 295, YELLOW); putpixel(550, 296, YELLOW); putpixel(551, 296, YELLOW);
   
   putpixel(510, 315, YELLOW); putpixel(511, 315, YELLOW); putpixel(510, 316, YELLOW); putpixel(511, 316, YELLOW);
   putpixel(530, 315, YELLOW); putpixel(531, 315, YELLOW); putpixel(530, 316, YELLOW); putpixel(531, 316, YELLOW);
   putpixel(550, 315, YELLOW); putpixel(551, 315, YELLOW); putpixel(550, 316, YELLOW); putpixel(551, 316, YELLOW);
   
   putpixel(510, 335, YELLOW); putpixel(511, 335, YELLOW); putpixel(510, 336, YELLOW); putpixel(511, 336, YELLOW);
   putpixel(530, 335, YELLOW); putpixel(531, 335, YELLOW); putpixel(530, 336, YELLOW); putpixel(531, 336, YELLOW);
   putpixel(550, 335, YELLOW); putpixel(551, 335, YELLOW); putpixel(550, 336, YELLOW); putpixel(551, 336, YELLOW);
   
   putpixel(510, 355, YELLOW); putpixel(511, 355, YELLOW); putpixel(510, 356, YELLOW); putpixel(511, 356, YELLOW);
   putpixel(530, 355, YELLOW); putpixel(531, 355, YELLOW); putpixel(530, 356, YELLOW); putpixel(531, 356, YELLOW);
   putpixel(550, 355, YELLOW); putpixel(551, 355, YELLOW); putpixel(550, 356, YELLOW); putpixel(551, 356, YELLOW);
   
   putpixel(510, 375, YELLOW); putpixel(511, 375, YELLOW); putpixel(510, 376, YELLOW); putpixel(511, 376, YELLOW);
   putpixel(530, 375, YELLOW); putpixel(531, 375, YELLOW); putpixel(530, 376, YELLOW); putpixel(531, 376, YELLOW);
   putpixel(550, 375, YELLOW); putpixel(551, 375, YELLOW); putpixel(550, 376, YELLOW); putpixel(551, 376, YELLOW);


    // Luna
    setcolor(WHITE);
    circle(100, 100, 30);
    setfillstyle(1, WHITE);
    floodfill(100, 100, WHITE);


getch();
}

















