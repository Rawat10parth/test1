#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>

int x_1, y_1, x_2, y_2;

void bresenham() {
    int dx = abs(x_2 - x_1);
    int dy = abs(y_2 - y_1);
    int x, y, x_inc, y_inc, Pk;
    
    x = x_1;
    y = y_1;
    Pk = 2 * dy - dx;
    
    glVertex2i(x, y);
    
    for (int i = 0; i < dx; i++) {
        if (Pk < 0) {
            Pk += 2 * dy;
        }
        else {
            Pk += 2 * (dy - dx);
            y += 1;
        }
        x += 1;
        glVertex2i(x, y);
    }
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINE_STRIP);
    bresenham();
    glEnd();
    glFlush();
}

int main(int argc, char** argv) {
printf("Enter the starting point (x, y): ");
scanf("%d %d", &x_1, &y_1);
printf("Enter the ending point (x, y): ");
scanf("%d %d", &x_2, &y_2);
    
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE);
glutInitWindowSize(500, 500);
glutInitWindowPosition(100, 100);
glutCreateWindow("Bresenham's Line Algorithm");
glClearColor(0.0, 0.0, 0.0, 0.0);
//gluOrtho2D(0, 500, 0, 500);
glutDisplayFunc(display);
glutMainLoop();

return 0;
}
