#include <GL/glut.h>
#include <math.h>

void circle(float cx, float cy, float r, float R, float G, float B)
{
    int segments = 100;
    glColor3f(R, G, B);
    glBegin(GL_POLYGON);
    for (int i = 0; i <= segments; i++)
    {
        float a = 2 * M_PI * i / segments;
        float x = r * cos(a);
        float y = r * sin(a);
        glVertex2f(x + cx, y + cy);
    }
    glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    // ===== Sky =====
    glBegin(GL_POLYGON);
    glColor3f(0.53, 0.81, 0.92); // sky blue
    glVertex2f(-1, 1);
    glVertex2f(1, 1);
    glVertex2f(1, -0.2);
    glVertex2f(-1, -0.2);
    glEnd();

    // ===== Ground =====
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0.7, 0.2); // green
    glVertex2f(-1, -0.2);
    glVertex2f(1, -0.2);
    glVertex2f(1, -1);
    glVertex2f(-1, -1);
    glEnd();

    // ===== Sun =====
    circle(0.7, 0.7, 0.15, 1, 0.9, 0); // yellow sun

    // ===== House base =====
    glBegin(GL_POLYGON);
    glColor3f(0.8, 0.5, 0.2); // brown-orange
    glVertex2f(-0.3, -0.2);
    glVertex2f(0.3, -0.2);
    glVertex2f(0.3, 0.2);
    glVertex2f(-0.3, 0.2);
    glEnd();

    // ===== Roof =====
    glBegin(GL_TRIANGLES);
    glColor3f(0.6, 0.1, 0.1); // dark red
    glVertex2f(-0.4, 0.2);
    glVertex2f(0.4, 0.2);
    glVertex2f(0.0, 0.5);
    glEnd();

    // ===== Door =====
    glBegin(GL_POLYGON);
    glColor3f(0.3, 0.2, 0.1); // dark wood
    glVertex2f(-0.05, -0.2);
    glVertex2f(0.05, -0.2);
    glVertex2f(0.05, 0.05);
    glVertex2f(-0.05, 0.05);
    glEnd();

    // ===== Window Left =====
    glBegin(GL_POLYGON);
    glColor3f(0.7, 0.9, 1); // light blue glass
    glVertex2f(-0.25, 0.0);
    glVertex2f(-0.1, 0.0);
    glVertex2f(-0.1, 0.12);
    glVertex2f(-0.25, 0.12);
    glEnd();

    // ===== Window Right =====
    glBegin(GL_POLYGON);
    glColor3f(0.7, 0.9, 1);
    glVertex2f(0.1, 0.0);
    glVertex2f(0.25, 0.0);
    glVertex2f(0.25, 0.12);
    glVertex2f(0.1, 0.12);
    glEnd();

    // ===== Tree Trunk =====
    glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.0);
    glVertex2f(-0.7, -0.2);
    glVertex2f(-0.65, -0.2);
    glVertex2f(-0.65, 0.1);
    glVertex2f(-0.7, 0.1);
    glEnd();

    // ===== Tree Leaves =====
    circle(-0.675, 0.25, 0.15, 0.0, 0.6, 0.0);
    circle(-0.75, 0.15, 0.12, 0.0, 0.7, 0.0);
    circle(-0.6, 0.15, 0.12, 0.0, 0.7, 0.0);

    // ===== Small River =====
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.9);
    glVertex2f(-1, -0.6);
    glVertex2f(1, -0.8);
    glVertex2f(1, -1);
    glVertex2f(-1, -1);
    glEnd();

    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(600, 600);
    glutCreateWindow("Beautiful Village Scene");
    glutDisplayFunc(display);
    glClearColor(0.9f, 0.9f, 1.0f, 1.0f); // soft sky background
    glutMainLoop();
    return 0;
}
