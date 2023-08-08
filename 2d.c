#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>


float vertices[] = {-0.5, -0.5, 0.5, -0.5, 0.5, 0.5, -0.5, 0.5};
float angle = 0.0;
float scale_factor = 1.0;
float shear_factor = 0.0;
int reflect_x = 1;
int reflect_y = 1;

void drawSquare() {
    glBegin(GL_QUADS);
    glVertex2f(vertices[0], vertices[1]);
    glVertex2f(vertices[2], vertices[3]);
    glVertex2f(vertices[4], vertices[5]);
    glVertex2f(vertices[6], vertices[7]);
    glEnd();
}

void handleKey(unsigned char key, int x, int y) {
    switch (key) {
        case 'r': 
            angle += 10.0;
            break;
        case 's': 
            scale_factor += 0.1;
            break;
        case 'h': 
            shear_factor += 0.1;
            break;
        case 'x': 
            reflect_x *= -1;
            break;
        case 'y': 
            reflect_y *= -1;
            break;
        default:
            break;
    }
    glutPostRedisplay();
}


void handleDisplay() {
 
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    
  
    glTranslatef(0.0, 0.0, 0.0);
    glRotatef(angle, 0.0, 0.0, 1.0);
    glScalef(scale_factor, scale_factor, 1.0);
    glTranslatef(shear_factor, 0.0, 0.0);
    glScalef(reflect_x, reflect_y, 1.0);
    
   
    glColor3f(1.0, 1.0, 1.0);
    drawSquare();
    
   
    glutSwapBuffers();
}

int main(int argc, char** argv) {

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("2D Transformations");
    
    
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
    glutDisplayFunc(handleDisplay);
    glutKeyboardFunc(handleKey);
    glutMainLoop();
    
    return 0;
}

