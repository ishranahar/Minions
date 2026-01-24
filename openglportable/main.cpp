#include <GL/glut.h>
#include <cmath>

// ---------------- HELPER ----------------
void FilledCircle(float cx, float cy, float r, int n) {
    glBegin(GL_TRIANGLE_FAN);
    for(int i=0;i<=n;i++){
        float a = 2*3.1416f*i/n;
        glVertex2f(cx + r*cos(a), cy + r*sin(a));
    }
    glEnd();
}

void windowBack(){
    glBegin(GL_QUADS);
    glVertex2f(-1.72,-0.38);
    glVertex2f(-1.72,-0.43);
    glVertex2f(-1.60,-0.43);
    glVertex2f(-1.60,-0.38);
    glEnd();
}

void window(){
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-1.72,-0.38);
    glVertex2f(-1.72,-0.43);
    glVertex2f(-1.60,-0.43);
    glVertex2f(-1.60,-0.38);
    glEnd();
}

void Origin(){ glLoadIdentity(); }

// ---------------- SAME BUILDING ----------------
void demoBuilding(){
    glBegin(GL_POLYGON);
        glVertex2f(-1.79,0.3);
        glVertex2f(-1.79,-0.62);
        glVertex2f(-1.4,-0.62);
        glVertex2f(-1.4,0.3);
        glVertex2f(-1.595,0.35);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(-1.595,0.35);
        glVertex2f(-1.39,0.29);
        glVertex2f(-1.39,0.3);
        glVertex2f(-1.595,0.36);
        glVertex2f(-1.80,0.3);
        glVertex2f(-1.80,0.29);
    glEnd();

    FilledCircle(-1.595,0.3,0.03,100);

    for(int i=0;i<5;i++){
        for(int j=0;j<2;j++){
            glBegin(GL_QUADS);
            glVertex2f(-1.72,-.43);
            glVertex2f(-1.72,-.44);
            glVertex2f(-1.60,-.44);
            glVertex2f(-1.60,-.43);
            glEnd();
            windowBack();
            window();
            glTranslatef(.17,0,0);
        }
        glTranslatef(-.34,.15,0);
    }
    Origin();
}

// ---------------- MULTIPLE BUILDINGS ----------------
void drawBuildings(){

    // 1️⃣ Short - Magenta
    glPushMatrix();
    glTranslatef(0,0,0);
    glScalef(1.0f,0.6f,1.0f);
    glColor3f(1,0,1);
    demoBuilding();
    glPopMatrix();

    // 2️⃣ Medium - Cyan
    glPushMatrix();
    glTranslatef(2.2f,0,0);
    glScalef(1.0f,0.9f,1.0f);
    glColor3f(0,1,1);
    demoBuilding();
    glPopMatrix();

    // 3️⃣ Tall - Orange
    glPushMatrix();
    glTranslatef(4.4f,0,0);
    glScalef(1.0f,1.3f,1.0f);
    glColor3f(1,0.5f,0);
    demoBuilding();
    glPopMatrix();

    // 4️⃣ Very Tall - Green
    glPushMatrix();
    glTranslatef(6.6f,0,0);
    glScalef(1.0f,1.6f,1.0f);
    glColor3f(0,0.8f,0.3f);
    demoBuilding();
    glPopMatrix();

    // 5️⃣ Medium Short - Blue
    glPushMatrix();
    glTranslatef(8.8f,0,0);
    glScalef(1.0f,0.8f,1.0f);
    glColor3f(0.2f,0.4f,1.0f);
    demoBuilding();
    glPopMatrix();
}

// ---------------- DISPLAY ----------------
void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    drawBuildings();
    glutSwapBuffers();
}

// ---------------- INIT ----------------
void init(){
    glClearColor(0.75f,0.9f,1.0f,1);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-2,11,-1,2);
}

// ---------------- MAIN ----------------
int main(int argc,char** argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutInitWindowSize(1200,500);
    glutCreateWindow("Flappy Bird Height-Based Buildings");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

