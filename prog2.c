#include<stdio.h>
#include <math.h>
#include <GL/glut.h>
#include <GL/gl.h>

void display()
{
  glClear(GL_COLOR_BUFFER_BIT);

  // Draw the sky
  glColor3f(0.0, 0.7, 1.0);
  glBegin(GL_QUADS);
  glVertex2f(-1.0, 1.0);
  glVertex2f(1.0, 1.0);
  glVertex2f(1.0, -0.3);
  glVertex2f(-1.0, -0.3);
  glEnd();

  /* Draw the sun
  glColor3f(1.0, 1.0, 0.0);
  int i;
  GLfloat x=0.0f; GLfloat y=0.9f; GLfloat radius=0.06f;
  int triangleAmount = 20;
  float PI=3.14;
  GLfloat twicePi = 2.0f * PI;
  glBegin(GL_TRIANGLE_FAN);
  glVertex2f(x, y); 
  for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
      x + (radius * cos(i * twicePi / triangleAmount)),
      y + (radius * sin(i * twicePi / triangleAmount))
    );
  }
  glEnd();*/
  
  
  //Draw Hut
  glBegin(GL_TRIANGLES);
  glColor3f(0.5, 0.35, 0.05);
  glVertex2f(-0.45, 0.7);
  glVertex2f(-0.9, 0.2);
  glVertex2f(0.0, 0.2);
  glEnd();
  
  glBegin(GL_QUADS);
  glColor3f(1.0, 0.5, 0.0);
  glVertex2f(-0.8, 0.2);
  glVertex2f(-0.8, -0.3);
  glVertex2f(-0.1, -0.3);
  glVertex2f(-0.1, 0.2);
  glEnd();
  
  glBegin(GL_QUADS);
  glColor3f(0.5, 0.35, 0.05);
  glVertex2f(-0.6, -0.3);
  glVertex2f(-0.4, -0.3);
  glVertex2f(-0.4, -0.1);
  glVertex2f(-0.6, -0.1);
  glEnd();
  
  glBegin(GL_QUADS);
  glColor3f(0.7, 0.25, 0.0);
  glVertex2f(-0.3, 0.1);
  glVertex2f(-0.3, 0.0);
  glVertex2f(-0.2, 0.0);
  glVertex2f(-0.2, 0.1);
  glEnd();
  
  //Draw Tree
  glBegin(GL_QUADS);
  glColor3f(0.4, 0.25, 0.05);
  glVertex2f(0.4, -0.3);
  glVertex2f(0.5, -0.3);
  glVertex2f(0.5, 0.2);
  glVertex2f(0.4, 0.2);
  glEnd();
  
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.5, 0.0);
  glVertex2f(0.1, 0.2);
  glVertex2f(0.8, 0.2);
  glVertex2f(0.8, 0.3);
  glVertex2f(0.1, 0.3);
  glEnd();
  
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.5, 0.0);
  glVertex2f(0.2, 0.3);
  glVertex2f(0.7, 0.3);
  glVertex2f(0.7, 0.4);
  glVertex2f(0.2, 0.4);
  glEnd();
  
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.5, 0.0);
  glVertex2f(0.3, 0.4);
  glVertex2f(0.6, 0.4);
  glVertex2f(0.6, 0.5);
  glVertex2f(0.3, 0.5);
  glEnd();
  
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.5, 0.0);
  glVertex2f(0.4, 0.5);
  glVertex2f(0.5, 0.5);
  glVertex2f(0.5, 0.6);
  glVertex2f(0.4, 0.6);
  glEnd();
  
  //Draw River
  glBegin(GL_QUADS);
  glColor3f(0.5, 1.0, 1.0);
  glVertex2f(-1.0, -0.7);
  glVertex2f(-1.0, -1.0);
  glVertex2f(1.0, -1.0);
  glVertex2f(1.0, -0.7);
  glEnd();
  
  //Draw Sun
  glBegin(GL_TRIANGLE_FAN);
  glColor3f(1.0, 1.0, 0.0);
  glVertex2f(0.1, 0.7);
  glVertex2f(0.3, 0.7);
  glVertex2f(0.25, 0.8);
  glVertex2f(0.2, 0.85);
  glVertex2f(0.1, 0.9);
  glVertex2f(0.0, 0.85);
  glVertex2f(-0.05, 0.8);
  glVertex2f(-0.1, 0.7);
  glVertex2f(-0.05, 0.6);
  glVertex2f(0.0, 0.55);
  glVertex2f(0.1, 0.5);
  glVertex2f(0.2, 0.55);
  glVertex2f(0.25, 0.6);
  glVertex2f(0.3, 0.7);
  glEnd();
  
  

  //Draw the ground
  glColor3f(0.0, 0.9, 0.0);
  glBegin(GL_QUADS);
  glVertex2f(-1.0, -0.7);
  glVertex2f(1.0, -0.7);
  glVertex2f(1.0, -0.3);
  glVertex2f(-1.0, -0.3);
  glEnd();

  glFlush();
}

//Event Creation
void onclick1(unsigned char key,int x,int y)
  {
  if(key=='a')
  {
     exit(1);
  }
  
  if(key=='n'){
  glColor3f(0, 0, 0);
  glBegin(GL_QUADS);
  glVertex2f(-1.0, 1.0);
  glVertex2f(1.0, 1.0);
  glVertex2f(1.0, -0.3);
  glVertex2f(-1.0, -0.3);
  glEnd();
  
  //Draw Hut
  glBegin(GL_TRIANGLES);
  glColor3f(0.5, 0.35, 0.05);
  glVertex2f(-0.45, 0.7);
  glVertex2f(-0.9, 0.2);
  glVertex2f(0.0, 0.2);
  glEnd();
  
  glBegin(GL_QUADS);
  glColor3f(1.0, 0.5, 0.0);
  glVertex2f(-0.8, 0.2);
  glVertex2f(-0.8, -0.3);
  glVertex2f(-0.1, -0.3);
  glVertex2f(-0.1, 0.2);
  glEnd();
  
  glBegin(GL_QUADS);
  glColor3f(0.5, 0.35, 0.05);
  glVertex2f(-0.6, -0.3);
  glVertex2f(-0.4, -0.3);
  glVertex2f(-0.4, -0.1);
  glVertex2f(-0.6, -0.1);
  glEnd();
  
  glBegin(GL_QUADS);
  glColor3f(0.7, 0.25, 0.0);
  glVertex2f(-0.3, 0.1);
  glVertex2f(-0.3, 0.0);
  glVertex2f(-0.2, 0.0);
  glVertex2f(-0.2, 0.1);
  glEnd();
  
  //Draw Tree
  glBegin(GL_QUADS);
  glColor3f(0.4, 0.25, 0.05);
  glVertex2f(0.4, -0.3);
  glVertex2f(0.5, -0.3);
  glVertex2f(0.5, 0.2);
  glVertex2f(0.4, 0.2);
  glEnd();
  
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.5, 0.0);
  glVertex2f(0.1, 0.2);
  glVertex2f(0.8, 0.2);
  glVertex2f(0.8, 0.3);
  glVertex2f(0.1, 0.3);
  glEnd();
  
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.5, 0.0);
  glVertex2f(0.2, 0.3);
  glVertex2f(0.7, 0.3);
  glVertex2f(0.7, 0.4);
  glVertex2f(0.2, 0.4);
  glEnd();
  
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.5, 0.0);
  glVertex2f(0.3, 0.4);
  glVertex2f(0.6, 0.4);
  glVertex2f(0.6, 0.5);
  glVertex2f(0.3, 0.5);
  glEnd();
  
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.5, 0.0);
  glVertex2f(0.4, 0.5);
  glVertex2f(0.5, 0.5);
  glVertex2f(0.5, 0.6);
  glVertex2f(0.4, 0.6);
  glEnd();
  
  //Draw Sun
  glBegin(GL_TRIANGLE_FAN);
  glColor3f(1.0, 1.0, 1.0);
  glVertex2f(0.1, 0.7);
  glVertex2f(0.3, 0.7);
  glVertex2f(0.25, 0.8);
  glVertex2f(0.2, 0.85);
  glVertex2f(0.1, 0.9);
  glVertex2f(0.0, 0.85);
  glVertex2f(-0.05, 0.8);
  glVertex2f(-0.1, 0.7);
  glVertex2f(-0.05, 0.6);
  glVertex2f(0.0, 0.55);
  glVertex2f(0.1, 0.5);
  glVertex2f(0.2, 0.55);
  glVertex2f(0.25, 0.6);
  glVertex2f(0.3, 0.7);
  glEnd();
  
  glFlush();
  }
  }

int main(int argc, char** argv)
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutInitWindowSize(1000, 800);
  glutInitWindowPosition(100, 100);
  glutCreateWindow("Scenery");
  glClearColor(0.0, 0.0, 0.0, 0.0);
  gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
  
  glutKeyboardFunc(onclick1);
  glutDisplayFunc(display);
  glutMainLoop();
  return 0;
}

