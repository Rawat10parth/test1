#include <GL/glut.h>

void display()
{
 glClear(GL_COLOR_BUFFER_BIT);
 glColor3f(0,1,0);
 glBegin(GL_TRIANGLES);
 glVertex2f(-0.3,0.1);
 glVertex2f(0.1,0.1);
 glVertex2f(-0.1,0.4);
 glEnd();
 
 glBegin(GL_LINES);
 glVertex2f(-0.5, 0.9); 
 glVertex2f(-0.1, 0.9); 
 glVertex2f(-0.5, 0.7); 
 glVertex2f(-0.1, 0.7);
 glEnd();
 
 glPointSize(5);
 glBegin(GL_POINTS);
 glVertex2f(-0.9, 0.9); 
 glVertex2f(-0.7, 0.9); 
 glVertex2f(-0.9, 0.7); 
 glVertex2f(-0.7, 0.7); 
 glEnd();
 
 glBegin( GL_QUADS);
 glVertex2f(-0.4, -0.5);
 glVertex2f(-0.1, -0.5);
 glVertex2f(0.0, -0.3);
 glVertex2f(-0.3, -0.3);
 glEnd();
 
 glBegin(GL_LINE_STRIP);
 glVertex2f(0.6, 0.9);
 glVertex2f(0.9, 0.9);
 glVertex2f(0.6, 0.7);
 glVertex2f(0.9, 0.7); 
 glEnd();
 
 glBegin(GL_LINE_LOOP);
 glVertex2f(0.1, 0.9); 
 glVertex2f(0.4, 0.9); 
 glVertex2f(0.4, 0.7); 
 glVertex2f(0.1, 0.7); 
 glEnd();
 
 glBegin(GL_POLYGON);
 glVertex2f(-0.9, 0.3); 
 glVertex2f(-0.9, 0.2); 
 glVertex2f(-0.8, 0.1); 
 glVertex2f(-0.6, 0.1);
 glVertex2f(-0.5, 0.2); 
 glVertex2f(-0.7, 0.4); 
 glEnd();
 
 glBegin(GL_TRIANGLE_STRIP);
 glVertex2f(0.4, 0.1); 
 glVertex2f(0.6, 0.1); 
 glVertex2f(0.4, 0.2); 
 glVertex2f(0.7, 0.2);
 glVertex2f(0.5, 0.3); 
 glVertex2f(0.8, 0.3); 
 glEnd();
 
 glBegin(GL_TRIANGLE_FAN);
 glVertex2f(-0.9, -0.5); 
 glVertex2f(-0.9, -0.2); 
 glVertex2f(-0.7, -0.3); 
 glVertex2f(-0.6, -0.4);
 glVertex2f(-0.6, -0.5); 
 glEnd();
 
 glBegin(GL_QUAD_STRIP);
 glVertex2f(0.2, -0.6); 
 glVertex2f(0.2, -0.3); 
 glVertex2f(0.4, -0.5); 
 glVertex2f(0.4, -0.3);
 glVertex2f(0.6, -0.6); 
 glVertex2f(0.6, -0.3);
 glVertex2f(0.8, -0.6); 
 glVertex2f(0.8, -0.4); 
 glEnd();
 
 glColor3f(1,1,1);
 glRasterPos2f(-0.9,0.6);
 glutBitmapString(GLUT_BITMAP_HELVETICA_12,"GL_Points");
 
 glRasterPos2f(-0.4,0.6);
 glutBitmapString(GLUT_BITMAP_HELVETICA_12,"GL_Lines");
 
 glRasterPos2f(0.1,0.6);
 glutBitmapString(GLUT_BITMAP_HELVETICA_12,"GL_Line_Loop");
 
 glRasterPos2f(0.6,0.6);
 glutBitmapString(GLUT_BITMAP_HELVETICA_12,"GL_Line_Strip");
 
 glRasterPos2f(-0.9,0.0);
 glutBitmapString(GLUT_BITMAP_HELVETICA_12,"GL_Polygon");
 
 glRasterPos2f(-0.25,0.0);
 glutBitmapString(GLUT_BITMAP_HELVETICA_12,"GL_Triangle");
 
 glRasterPos2f(0.4,0.0);
 glutBitmapString(GLUT_BITMAP_HELVETICA_12,"GL_Triangle_Strip");
 
 glRasterPos2f(-0.9,-0.6);
 glutBitmapString(GLUT_BITMAP_HELVETICA_12,"GL_Triangle_Fan");
 
 glRasterPos2f(-0.35,-0.6);
 glutBitmapString(GLUT_BITMAP_HELVETICA_12,"GL_Quads");
 
 glRasterPos2f(0.3,-0.7);
 glutBitmapString(GLUT_BITMAP_HELVETICA_12,"GL_Quad_Strip");
 
 glFlush();
}

void onclick(int button, int state, int x, int y) {
if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
glClearColor(0,0,1,1);
glutPostRedisplay();
}
}
void onclick1(char key,int x,int y)
{
if(key=='a'){
exit(1);
}
if(key=='s'){
glClearColor(1,0,0,0);
glutPostRedisplay();
}
}

int main(int argc,char** argv)

{
 glutInit(&argc,argv);   // Initializes the glut libraries that are passed at the time of compilation using command line arguments
 glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);  // Defines the usage of single buffer and RGB mode
 glutInitWindowSize(500,500);      // Created the window of size 500*500
 glutInitWindowPosition(300,300);   // Sets the position of created window on the laptop screen at (300,300)
 glutCreateWindow("Basic Objects");
 glutDisplayFunc(display);
 glutMouseFunc(onclick);
 glutKeyboardFunc(onclick1);
 glutMainLoop();
 return 0;
}

