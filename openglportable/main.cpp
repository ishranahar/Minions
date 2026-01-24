#include <GL/glut.h>
#include<math.h>

void display()
{
  glClear(GL_COLOR_BUFFER_BIT);

float r=0.5;
 int segments = 100;
glBegin(GL_POLYGON);
        glColor3f(1, 1, 0);
for(int i = 0 ;i <= segments; i++){
    float a = 2 * M_PI * (float) i / segments;
    float x = r * cos(a);
    float y = r * sin(a);
    glVertex2f(x  ,y  );

}
glEnd();
    glBegin(GL_POLYGON);
      glColor3f(1, 1, 0);

        glVertex2f(-0.5, 0.0);

        glVertex2f(0.5, 0.0);

        glVertex2f(0.5, -0.8);
        glVertex2f(-0.5, -0.8);
    glEnd();

float t =-0.15;
 int segment = 100;
glBegin(GL_POLYGON);
        glColor3f(0, 0, 0);
for(int i = 0 ;i <= segment; i++){
    float a = M_PI * (float) i / segment;
    float x = t * cos(a);
    float y = t * sin(a);
    glVertex2f(x  ,y - 0.3  );
}
glEnd();


//silver right eye

float k =0.12;
 int st = 100;
glBegin(GL_POLYGON);
        glColor3f(0.75f, 0.75f, 0.75f);



for(int i = 0 ;i <= st; i++){
    float a = 2 * M_PI * (float) i / st;
    float x = k * cos(a);
    float y = k * sin(a);
    glVertex2f(x +0.12  ,y+0.01 );

}
glEnd();

float m =0.1;
 int segm = 100;
glBegin(GL_POLYGON);
        glColor3f(1, 1, 1);


for(int i = 0 ;i <= segm; i++){
    float a = 2 * M_PI * (float) i / segm;
    float x = m * cos(a);
    float y = m * sin(a);
    glVertex2f(x +0.12  ,y+0.01 );

}
glEnd();
//black right eye
float s =0.05;
 int segmen = 100;
glBegin(GL_POLYGON);
        glColor3f(0, 0, 0);


for(int i = 0 ;i <= segmen; i++){
    float a = 2 * M_PI * (float) i / segmen;
    float x = s * cos(a);
    float y = s * sin(a);
    glVertex2f(x +0.12 ,y +0.01  );

}
glEnd();
//silver left eye

float mn =-0.12;
 int str = 100;
glBegin(GL_POLYGON);
        glColor3f(0.75f, 0.75f, 0.75f);



for(int i = 0 ;i <= str; i++){
    float a = 2 * M_PI * (float) i / str;
    float x = mn * cos(a);
    float y = mn * sin(a);
    glVertex2f(x -0.12  ,y+0.01 );

}
glEnd();
//white left eye

float c =-0.1;
 int seg = 100;
glBegin(GL_POLYGON);
        glColor3f(1, 1, 1);


for(int i = 0 ;i <= seg; i++){
    float a = 2 * M_PI * (float) i / seg;
    float x = c * cos(a);
    float y = c * sin(a);
    glVertex2f(x -0.12  ,y + 0.01);

}
glEnd();

float d =-0.05;
 int se = 100;
glBegin(GL_POLYGON);
        glColor3f(0, 0, 0);


for(int i = 0 ;i <= se; i++){
    float a = 2 * M_PI * (float) i / se;
    float x = d * cos(a);
    float y = d * sin(a);
    glVertex2f(x -0.12  ,y + 0.01);

}
glEnd();

    glFlush();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(560, 480);
    glutCreateWindow("OpenGL 64 bit");
    glutDisplayFunc(display);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glutMainLoop();
    return 0;
}
