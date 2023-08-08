#include <GL/glut.h>
#include <GL/gl.h>
#include<stdio.h>

float a,rx,b,ry,d1,d2,x,y;

void display()
{
    a=rx;
    b=ry;
    x=0;
    y=b;
    d1=(b*b)+(a*a)*(0.25-b);
    glBegin(GL_POINTS);
    while((x*b*b)<=(y*a*a))
    {
      if(d1<0)
      d1= d1+ (b*b) * (2*x+3);
      else
      {
        d1= d1+ (b*b) * (2*x+3) - (a*a) * (2*y-2);
        y=y-1;
      }
    x = x + 1;
    glVertex2f(x, y);
    glVertex2f(x,-y);
    glVertex2f(-x, -y);
    glVertex2f(-x, y);
    }
    d2=(b*b) * ((x + 0.5) * (x + 0.5)) + (a * a) * ((y - 1) * (y - 1)) - (a * a * b * b);
    while(y!=0)
    {
     if(d2<0)
     {
      d2=d2+ 2* (b*b) * (x+1) - (a*a) *  (2*y-3);
      x=x+1;
     }
     else
     d2=d2+ (a*a) * (3-2*y);
     y=y-1;
    glVertex2f(x, y);
    glVertex2f(x,-y);
    glVertex2f(-x, -y);
    glVertex2f(-x, y);
    }
    glEnd();
    glFlush();
}

int main(int argc,char** argv)
{
    printf("\nEnter the major axis and  minor axis\n");
    scanf("%f%f",&rx,&ry);
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(1000,1000);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Ellipse");
    glClearColor(0,0,0,0);
    gluOrtho2D(-200.0,200.0,-200.0,200.0);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
