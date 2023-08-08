#include <GL/glut.h>
#include <GL/gl.h>
#include <math.h>

void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0,1,0);
glBegin(GL_TRIANGLES);
glVertex2f(-150,-150);
glVertex2f(150,-150);
glVertex2f(0,150);
glEnd();

glColor3f(0,0,1);
glBegin(GL_POLYGON);
glVertex2f(-10,-10);
glVertex2f(10,-10);
glVertex2f(10,10);
glVertex2f(-10,10);
glEnd();

/*glColor3f(1,1,1);
glRasterPos2f(-0.70,-0.70);
glutBitmapString(GLUT_BITMAP_HELVETICA_18,"SHAHINA ANWARUL");*/
glFlush();
}

/*void sun()
{
int i;

GLfloat x=.0f; GLfloat y=.9f; GLfloat radius =.06f;

int triangleAmount = 20;
float PI=3.14;

GLfloat twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);

glColor3f(255, 204, 0);

glVertex2f(x, y); // center of circle

for(i = 0; i <= triangleAmount;i++) {

glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),
y + (radius * sin(i * twicePi / triangleAmount))
);

}

glEnd();
}*/

void onclick(int button, int state, int x, int y) {
if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
glClearColor(0,0,1,1);
glutPostRedisplay();
}
}

void onclick1(unsigned char key,int x,int y)
{
if(key=='a'){
exit(1);
}
if(key=='s'){
glClearColor(1,0,1,1);
glutPostRedisplay();
}
}

int main(int argc,char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(500,500);
glutInitWindowPosition(300,300);
glutCreateWindow("Green Triangle");
glClearColor(1,0,0,1);
gluOrtho2D(-500,500,-400,400);
glutDisplayFunc(display);
glutMouseFunc(onclick);
glutKeyboardFunc(onclick1);
glutMainLoop();
return 0;
}
