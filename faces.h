
#define FACES_H
#include <GL/glut.h>


int color = 0;
float xTranslate = 0;
float yTranslate = 0;
int facialState = 0; // 0 = idle, 1 = smile, 2 = Frown

void idle() {
glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT);
glLineWidth(0.5);

float r;
float g;
float b;

if (color == 0) {
     r = 1.0;
     g = 0.8;
     b = 0.6;
} else if (color == 1)
{
     r = 0.0;
     g = 1.0;
     b = 0.0;
} else if (color == 2)
{
     r = 1.0;
     g = 0.0;
     b = 0.0;
} else if (color == 3)
{
     r = 0.0;
     g = 0.0;
     b = 1.0;
}


//hat
glBegin(GL_TRIANGLES);
glColor3d(1.0, 0.0, 0.0);
glVertex2f(0.0+xTranslate, 1.0+yTranslate);
glVertex2f(0.2+xTranslate, 0.88+yTranslate);
glVertex2f(-0.2+xTranslate, 0.88+yTranslate);
glEnd();

//white thingy on hat
glPushMatrix();
glColor3d(1.0, 1.0, 1.0);
glTranslatef(0.0+xTranslate, 1.0+yTranslate, 0.0);
glScalef(0.05, 0.05, 0.0);
glutSolidSphere(0.5, 20, 20);
glPopMatrix();


//torso
glPushMatrix();
glColor3d(0.0, 1.0, 0.0);
glTranslated(0.0+xTranslate, 0.2+yTranslate, 0.0);
glScaled(0.7, 1, 0.5);
glutSolidCube(0.5);
glPopMatrix();

//head
glPushMatrix();
glColor3f(r, g, b);
glTranslated(0.0+xTranslate, 0.65+yTranslate, 0.0);
glScaled(0.8, 0.8, 1);
glutSolidCube(0.5);
glPopMatrix();

//hair
glPushMatrix();
glColor3d(0.2, 0.2, 0.0);
glTranslated(0.0+xTranslate, 0.86+yTranslate, 0.0);
glScaled(0.8, 0.1, 1);
glutSolidCube(0.5);
glPopMatrix();


//left eye
glPushMatrix();
glColor3d(0.0, 0.0, 0.0);
glTranslated(-0.1+xTranslate, 0.7+yTranslate, 0.2);
glScaled(0.1, 0.1, 0.1);
glutSolidCube(0.5);
glPopMatrix();

//right eye
glPushMatrix();
glColor3d(0.0, 0.0, 0.0);
glTranslated(0.1+xTranslate, 0.7+yTranslate, 0.2);
glScaled(0.1, 0.1, 0.1);
glutSolidCube(0.5);
glPopMatrix();

//nose
glPushMatrix();
glColor3d(1.0, 0.5, 0.0);
glTranslated(0.0+xTranslate, 0.65+yTranslate, 0.2);
glScaled(0.1, 0.1, 0.1);
glutSolidCube(0.5);
glPopMatrix();

//cigar
glPushMatrix();
glColor3d(0.5, 0.5, 0.5);
glTranslated(0.2+xTranslate, 0.55+yTranslate, 0.0);
glScaled(0.5, 0.1, 0.1);
glutSolidCube(0.5);
glPopMatrix();

//cigar butt
glPushMatrix();
glColor3d(1.0, 0.0, 0.0);
glTranslated(0.3+xTranslate, 0.55+yTranslate, 0.0);
glScaled(0.1, 0.1, 0.1);
glutSolidCube(0.5);
glPopMatrix();

//mouth
glPushMatrix();
glColor3d(1.0, 0.0, 0.0);
glTranslated(0.0+xTranslate, 0.55+yTranslate, 0.2);
glScaled(0.3, 0.1, 0.1);
glutSolidCube(0.5);
glPopMatrix();



//left arm
glPushMatrix();
glColor3d(0.0, 1.0, 0.0);
glTranslated(-0.3+xTranslate, 0.3+yTranslate, 0.0);
glScaled(0.5, 0.3, 0.5);
glutSolidCube(0.5);
glPopMatrix();

//left hand
glPushMatrix();
glColor3d(r, g, b);
glTranslated(-0.5+xTranslate, 0.3+yTranslate, 0.0);
glScaled(0.5, 0.3, 0.5);
glutSolidCube(0.5);
glPopMatrix();

//right arm
glPushMatrix();
glColor3d(0.0, 1.0, 0.0);
glTranslated(0.3+xTranslate, 0.3+yTranslate, 0.0);
glScaled(0.5, 0.3, 0.5);
glutSolidCube(0.5);
glPopMatrix();

//right hand
glPushMatrix();
glColor3d(r, g, b);
glTranslated(0.5+xTranslate, 0.3+yTranslate, 0.0);
glScaled(0.5, 0.3, 0.5);
glutSolidCube(0.5);
glPopMatrix();

//belt
glPushMatrix();
glColor3d(0.0, 0.0, 0.0);
glTranslated(0.0+xTranslate, 0.0+yTranslate, 0.0);
glScaled(0.7, 0.1, 0.5);
glutSolidCube(0.5);
glPopMatrix();

//belt buckle
glPushMatrix();
glColor3d(1.0, 1.0, 1.0);
glTranslated(0.0+xTranslate, 0.0+yTranslate, 0.0);
glScaled(0.1, 0.1, 0.1);
glutSolidCube(0.5);
glPopMatrix();

//belt buckle internal
glPushMatrix();
glColor3d(0.0, 0.0, 0.0);
glTranslated(0.0+xTranslate, 0.0+yTranslate, 0.0);
glScaled(0.05, 0.05, 0.05);
glutSolidCube(0.5);
glPopMatrix();

//left leg
glPushMatrix();
glColor3d(0.0, 0.0, 1.0);
glTranslated(-0.1+xTranslate, -0.2+yTranslate, 0.0);
glScaled(0.3, 0.6, 0.5);
glutSolidCube(0.5);
glPopMatrix();

//left foot
glPushMatrix();
glColor3d(r, g, b);
glTranslated(-0.1+xTranslate, -0.3+yTranslate, 0.0);
glScaled(0.3, 0.2, 0.5);
glutSolidCube(0.5);
glPopMatrix();

//left shoe
glPushMatrix();
glColor3d(0.8, 0.2, 0.0);
glTranslated(-0.1+xTranslate, -0.4+yTranslate, 0.0);
glScaled(0.3, 0.2, 0.5);
glutSolidCube(0.5);
glPopMatrix();

//right leg
glPushMatrix();
glColor3d(0.0, 0.0, 1.0);
glTranslated(0.1+xTranslate, -0.2+yTranslate, 0.0);
glScaled(0.3, 0.6, 0.5);
glutSolidCube(0.5);
glPopMatrix();

//right foot
glPushMatrix();
glColor3d(r, g, b);
glTranslated(0.1+xTranslate, -0.3+yTranslate, 0.0);
glScaled(0.3, 0.2, 0.5);
glutSolidCube(0.5);
glPopMatrix();

//right shoe
glPushMatrix();
glColor3d(0.8, 0.2, 0.0);
glTranslated(0.1+xTranslate, -0.4+yTranslate, 0.0);
glScaled(0.3, 0.2, 0.5);
glutSolidCube(0.5);
glPopMatrix();





glFlush();
}

void smile(){
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT);
glLineWidth(0.5);

float r;
float g;
float b;

if (color == 0) {
     r = 1.0;
     g = 0.8;
     b = 0.6;
} else if (color == 1)
{
     r = 0.0;
     g = 1.0;
     b = 0.0;
} else if (color == 2)
{
     r = 1.0;
     g = 0.0;
     b = 0.0;
} else if (color == 3)
{
     r = 0.0;
     g = 0.0;
     b = 1.0;
}

//hat
glBegin(GL_TRIANGLES);
glColor3d(1.0, 0.0, 0.0);
glVertex2f(0.0+xTranslate, 1.0+yTranslate);
glVertex2f(0.2+xTranslate, 0.88+yTranslate);
glVertex2f(-0.2+xTranslate, 0.88+yTranslate);
glEnd();

//white thingy on hat
glPushMatrix();
glColor3d(1.0, 1.0, 1.0);
glTranslatef(0.0+xTranslate, 1.0+yTranslate, 0.0);
glScalef(0.05, 0.05, 0.0);
glutSolidSphere(0.5, 20, 20);
glPopMatrix();


//torso
glPushMatrix();
glColor3d(0.0, 1.0, 0.0);
glTranslated(0.0+xTranslate, 0.2+yTranslate, 0.0);
glScaled(0.7, 1, 0.5);
glutSolidCube(0.5);
glPopMatrix();

//head
glPushMatrix();
glColor3d(r, g, b);
glTranslated(0.0+xTranslate, 0.65+yTranslate, 0.0);
glScaled(0.8, 0.8, 1);
glutSolidCube(0.5);
glPopMatrix();

//hair
glPushMatrix();
glColor3d(0.2, 0.2, 0.0);
glTranslated(0.0+xTranslate, 0.86+yTranslate, 0.0);
glScaled(0.8, 0.1, 1);
glutSolidCube(0.5);
glPopMatrix();


//left eye
glPushMatrix();
glColor3d(0.0, 0.0, 0.0);
glTranslated(-0.1+xTranslate, 0.7+yTranslate, 0.2);
glScaled(0.1, 0.1, 0.1);
glutSolidCube(0.5);
glPopMatrix();

//right eye
glPushMatrix();
glColor3d(0.0, 0.0, 0.0);
glTranslated(0.1+xTranslate, 0.7+yTranslate, 0.2);
glScaled(0.1, 0.1, 0.1);
glutSolidCube(0.5);
glPopMatrix();

//nose
glPushMatrix();
glColor3d(1.0, 0.5, 0.0);
glTranslated(0.0+xTranslate, 0.65+yTranslate, 0.2);
glScaled(0.1, 0.1, 0.1);
glutSolidCube(0.5);
glPopMatrix();

//cigar
glPushMatrix();
glColor3d(0.5, 0.5, 0.5);
glTranslated(0.2+xTranslate, 0.55+yTranslate, 0.0);
glScaled(0.5, 0.1, 0.1);
glutSolidCube(0.5);
glPopMatrix();

//cigar butt
glPushMatrix();
glColor3d(1.0, 0.0, 0.0);
glTranslated(0.3+xTranslate, 0.55+yTranslate, 0.0);
glScaled(0.1, 0.1, 0.1);
glutSolidCube(0.5);
glPopMatrix();

//mouth
glPushMatrix();
glColor3d(1.0, 0.0, 0.0);
glTranslated(0.0+xTranslate, 0.55+yTranslate, 0.2);
glScaled(0.3, 0.1, 0.1);
glutSolidCube(0.5);
glPopMatrix();

//left smile
glPushMatrix();
glColor3d(1.0, 0.0, 0.0);
glTranslated(-0.1+xTranslate, 0.60+yTranslate, 0.2);
glScaled(0.1, 0.1, 0.1);
glutSolidCube(0.5);
glPopMatrix();

//right smile
glPushMatrix();
glColor3d(1.0, 0.0, 0.0);
glTranslated(0.1+xTranslate, 0.60+yTranslate, 0.2);
glScaled(0.1, 0.1, 0.1);
glutSolidCube(0.5);
glPopMatrix();


//left arm
glPushMatrix();
glColor3d(0.0, 1.0, 0.0);
glTranslated(-0.3+xTranslate, 0.3+yTranslate, 0.0);
glScaled(0.5, 0.3, 0.5);
glutSolidCube(0.5);
glPopMatrix();

//left hand
glPushMatrix();
glColor3d(r, g, b);
glTranslated(-0.5+xTranslate, 0.3+yTranslate, 0.0);
glScaled(0.5, 0.3, 0.5);
glutSolidCube(0.5);
glPopMatrix();

//right arm
glPushMatrix();
glColor3d(0.0, 1.0, 0.0);
glTranslated(0.3+xTranslate, 0.3+yTranslate, 0.0);
glScaled(0.5, 0.3, 0.5);
glutSolidCube(0.5);
glPopMatrix();

//right hand
glPushMatrix();
glColor3d(r, g, b);
glTranslated(0.5+xTranslate, 0.3+yTranslate, 0.0);
glScaled(0.5, 0.3, 0.5);
glutSolidCube(0.5);
glPopMatrix();

//belt
glPushMatrix();
glColor3d(0.0, 0.0, 0.0);
glTranslated(0.0+xTranslate, 0.0+yTranslate, 0.0);
glScaled(0.7, 0.1, 0.5);
glutSolidCube(0.5);
glPopMatrix();

//belt buckle
glPushMatrix();
glColor3d(1.0, 1.0, 1.0);
glTranslated(0.0+xTranslate, 0.0+yTranslate, 0.0);
glScaled(0.1, 0.1, 0.1);
glutSolidCube(0.5);
glPopMatrix();

//belt buckle internal
glPushMatrix();
glColor3d(0.0, 0.0, 0.0);
glTranslated(0.0+xTranslate, 0.0+yTranslate, 0.0);
glScaled(0.05, 0.05, 0.05);
glutSolidCube(0.5);
glPopMatrix();

//left leg
glPushMatrix();
glColor3d(0.0, 0.0, 1.0);
glTranslated(-0.1+xTranslate, -0.2+yTranslate, 0.0);
glScaled(0.3, 0.6, 0.5);
glutSolidCube(0.5);
glPopMatrix();

//left foot
glPushMatrix();
glColor3d(r, g, b);
glTranslated(-0.1+xTranslate, -0.3+yTranslate, 0.0);
glScaled(0.3, 0.2, 0.5);
glutSolidCube(0.5);
glPopMatrix();

//left shoe
glPushMatrix();
glColor3d(0.8, 0.2, 0.0);
glTranslated(-0.1+xTranslate, -0.4+yTranslate, 0.0);
glScaled(0.3, 0.2, 0.5);
glutSolidCube(0.5);
glPopMatrix();

//right leg
glPushMatrix();
glColor3d(0.0, 0.0, 1.0);
glTranslated(0.1+xTranslate, -0.2+yTranslate, 0.0);
glScaled(0.3, 0.6, 0.5);
glutSolidCube(0.5);
glPopMatrix();

//right foot
glPushMatrix();
glColor3d(r, g, b);
glTranslated(0.1+xTranslate, -0.3+yTranslate, 0.0);
glScaled(0.3, 0.2, 0.5);
glutSolidCube(0.5);
glPopMatrix();

//right shoe
glPushMatrix();
glColor3d(0.8, 0.2, 0.0);
glTranslated(0.1+xTranslate, -0.4+yTranslate, 0.0);
glScaled(0.3, 0.2, 0.5);
glutSolidCube(0.5);
glPopMatrix();





glFlush();
}
void frown(){
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT);
glLineWidth(0.5);

float r;
float g;
float b;

if (color == 0) {
     r = 1.0;
     g = 0.8;
     b = 0.6;
} else if (color == 1)
{
     r = 0.0;
     g = 1.0;
     b = 0.0;
} else if (color == 2)
{
     r = 1.0;
     g = 0.0;
     b = 0.0;
} else if (color == 3)
{
     r = 0.0;
     g = 0.0;
     b = 1.0;
}

//hat
glBegin(GL_TRIANGLES);
glColor3d(1.0, 0.0, 0.0);
glVertex2f(0.0+xTranslate, 1.0+yTranslate);
glVertex2f(0.2+xTranslate, 0.88+yTranslate);
glVertex2f(-0.2+xTranslate, 0.88+yTranslate);
glEnd();

//white thingy on hat
glPushMatrix();
glColor3d(1.0, 1.0, 1.0);
glTranslatef(0.0+xTranslate, 1.0+yTranslate, 0.0);
glScalef(0.05, 0.05, 0.0);
glutSolidSphere(0.5, 20, 20);
glPopMatrix();


//torso
glPushMatrix();
glColor3d(0.0, 1.0, 0.0);
glTranslated(0.0+xTranslate, 0.2+yTranslate, 0.0);
glScaled(0.7, 1, 0.5);
glutSolidCube(0.5);
glPopMatrix();

//head
glPushMatrix();
glColor3d(r, g, b);
glTranslated(0.0+xTranslate, 0.65+yTranslate, 0.0);
glScaled(0.8, 0.8, 1);
glutSolidCube(0.5);
glPopMatrix();

//hair
glPushMatrix();
glColor3d(0.2, 0.2, 0.0);
glTranslated(0.0+xTranslate, 0.86+yTranslate, 0.0);
glScaled(0.8, 0.1, 1);
glutSolidCube(0.5);
glPopMatrix();


//left eye
glPushMatrix();
glColor3d(0.0, 0.0, 0.0);
glTranslated(-0.1+xTranslate, 0.7+yTranslate, 0.2);
glScaled(0.1, 0.1, 0.1);
glutSolidCube(0.5);
glPopMatrix();

//right eye
glPushMatrix();
glColor3d(0.0, 0.0, 0.0);
glTranslated(0.1+xTranslate, 0.7+yTranslate, 0.2);
glScaled(0.1, 0.1, 0.1);
glutSolidCube(0.5);
glPopMatrix();

//nose
glPushMatrix();
glColor3d(1.0, 0.5, 0.0);
glTranslated(0.0+xTranslate, 0.65+yTranslate, 0.2);
glScaled(0.1, 0.1, 0.1);
glutSolidCube(0.5);
glPopMatrix();

//cigar
glPushMatrix();
glColor3d(0.5, 0.5, 0.5);
glTranslated(0.2+xTranslate, 0.55+yTranslate, 0.0);
glScaled(0.5, 0.1, 0.1);
glutSolidCube(0.5);
glPopMatrix();

//cigar butt
glPushMatrix();
glColor3d(1.0, 0.0, 0.0);
glTranslated(0.3+xTranslate, 0.55+yTranslate, 0.0);
glScaled(0.1, 0.1, 0.1);
glutSolidCube(0.5);
glPopMatrix();

//mouth
glPushMatrix();
glColor3d(1.0, 0.0, 0.0);
glTranslated(0.0+xTranslate, 0.55+yTranslate, 0.2);
glScaled(0.3, 0.1, 0.1);
glutSolidCube(0.5);
glPopMatrix();

//left frown
glPushMatrix();
glColor3d(1.0, 0.0, 0.0);
glTranslated(-0.1+xTranslate, 0.50+yTranslate, 0.2);
glScaled(0.1, 0.1, 0.1);
glutSolidCube(0.5);
glPopMatrix();

//right frown
glPushMatrix();
glColor3d(1.0, 0.0, 0.0);
glTranslated(0.1+xTranslate, 0.50+yTranslate, 0.2);
glScaled(0.1, 0.1, 0.1);
glutSolidCube(0.5);
glPopMatrix();


//left arm
glPushMatrix();
glColor3d(0.0, 1.0, 0.0);
glTranslated(-0.3+xTranslate, 0.3+yTranslate, 0.0);
glScaled(0.5, 0.3, 0.5);
glutSolidCube(0.5);
glPopMatrix();

//left hand
glPushMatrix();
glColor3d(r, g, b);
glTranslated(-0.5+xTranslate, 0.3+yTranslate, 0.0);
glScaled(0.5, 0.3, 0.5);
glutSolidCube(0.5);
glPopMatrix();

//right arm
glPushMatrix();
glColor3d(0.0, 1.0, 0.0);
glTranslated(0.3+xTranslate, 0.3+yTranslate, 0.0);
glScaled(0.5, 0.3, 0.5);
glutSolidCube(0.5);
glPopMatrix();

//right hand
glPushMatrix();
glColor3d(r, g, b);
glTranslated(0.5+xTranslate, 0.3+yTranslate, 0.0);
glScaled(0.5, 0.3, 0.5);
glutSolidCube(0.5);
glPopMatrix();

//belt
glPushMatrix();
glColor3d(0.0, 0.0, 0.0);
glTranslated(0.0+xTranslate, 0.0+yTranslate, 0.0);
glScaled(0.7, 0.1, 0.5);
glutSolidCube(0.5);
glPopMatrix();

//belt buckle
glPushMatrix();
glColor3d(1.0, 1.0, 1.0);
glTranslated(0.0+xTranslate, 0.0+yTranslate, 0.0);
glScaled(0.1, 0.1, 0.1);
glutSolidCube(0.5);
glPopMatrix();

//belt buckle internal
glPushMatrix();
glColor3d(0.0, 0.0, 0.0);
glTranslated(0.0+xTranslate, 0.0+yTranslate, 0.0);
glScaled(0.05, 0.05, 0.05);
glutSolidCube(0.5);
glPopMatrix();

//left leg
glPushMatrix();
glColor3d(0.0, 0.0, 1.0);
glTranslated(-0.1+xTranslate, -0.2+yTranslate, 0.0);
glScaled(0.3, 0.6, 0.5);
glutSolidCube(0.5);
glPopMatrix();

//left foot
glPushMatrix();
glColor3d(r, g, b);
glTranslated(-0.1+xTranslate, -0.3+yTranslate, 0.0);
glScaled(0.3, 0.2, 0.5);
glutSolidCube(0.5);
glPopMatrix();

//left shoe
glPushMatrix();
glColor3d(0.8, 0.2, 0.0);
glTranslated(-0.1+xTranslate, -0.4+yTranslate, 0.0);
glScaled(0.3, 0.2, 0.5);
glutSolidCube(0.5);
glPopMatrix();

//right leg
glPushMatrix();
glColor3d(0.0, 0.0, 1.0);
glTranslated(0.1+xTranslate, -0.2+yTranslate, 0.0);
glScaled(0.3, 0.6, 0.5);
glutSolidCube(0.5);
glPopMatrix();

//right foot
glPushMatrix();
glColor3d(r, g, b);
glTranslated(0.1+xTranslate, -0.3+yTranslate, 0.0);
glScaled(0.3, 0.2, 0.5);
glutSolidCube(0.5);
glPopMatrix();

//right shoe
glPushMatrix();
glColor3d(0.8, 0.2, 0.0);
glTranslated(0.1+xTranslate, -0.4+yTranslate, 0.0);
glScaled(0.3, 0.2, 0.5);
glutSolidCube(0.5);
glPopMatrix();





glFlush();
}