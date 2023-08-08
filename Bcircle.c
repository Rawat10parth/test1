#include <GL/glut.h>
#include <stdio.h>


int radius = 50;
int xc = 200;
int yc = 200;

void plot(int x, int y) {
    printf("(%d, %d)\n", xc + x, yc + y);
    printf("(%d, %d)\n", xc + x, yc - y);
    printf("(%d, %d)\n", xc + y, yc + x);
    printf("(%d, %d)\n", xc + y, yc - x);
    printf("(%d, %d)\n", xc - x, yc - y);
    printf("(%d, %d)\n", xc - y, yc - x);
    printf("(%d, %d)\n", xc - x, yc + y);
    printf("(%d, %d)\n", xc - y, yc + x);

    glBegin(GL_POINTS);
    glVertex2i(xc + x, yc + y);
    glVertex2i(xc + x, yc - y);
    glVertex2i(xc + y, yc + x);
    glVertex2i(xc + y, yc - x);
    glVertex2i(xc - x, yc - y);
    glVertex2i(xc - y, yc - x);
    glVertex2i(xc - x, yc + y);
    glVertex2i(xc - y, yc + x);
    glEnd();
}

void bresenhamCircle() {
    int x = 0;
    int y = radius;
    int d = 3 - 2 * radius;

    plot(x, y);

    while (y >= x) {
        x++;

        if (d > 0) {
            y--;
            d = d + 4 * (x - y) + 10;
        } else {
            d = d + 4 * x + 6;
        }

        plot(x, y);
    }
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    bresenhamCircle();
    glFlush();
}

void init() {
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glColor3f(1.0, 1.0, 1.0);
    gluOrtho2D(0.0, 400.0, 0.0, 400.0);
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutCreateWindow("Bresenham Circle Algorithm");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
