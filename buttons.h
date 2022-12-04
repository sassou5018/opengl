#define BUTTONS_H
#include <GL/glut.h>
#include <stdio.h>
#include "faces.h"

void tClavier(unsigned char touche, int x, int y)
{
    
    //colors 0=normal, 1=green, 2=red, 3=blue
switch(touche)
{
    case 'i':
    facialState = 0;
    glutDisplayFunc(idle);
    break;
    case 's':
    facialState = 1;
    glutDisplayFunc(smile);
    break;
    case 't':
    facialState = 2;
    glutDisplayFunc(frown);
    break;
    case 'g':
    color = 1;
    switch (facialState)
    {
        case 0:
        glutDisplayFunc(idle);
        break;
        case 1:
        glutDisplayFunc(smile);
        break;
        case 2:
        glutDisplayFunc(frown);
        break;
        default:
        glutDisplayFunc(idle);
        break;
    }
    break;
    case 'r':
    color = 2;
    switch (facialState)
    {
        case 0:
        glutDisplayFunc(idle);
        break;
        case 1:
        glutDisplayFunc(smile);
        break;
        case 2:
        glutDisplayFunc(frown);
        break;
        default:
        glutDisplayFunc(idle);
        break;
    }
    break;
    case 'b':
    color = 3;
    switch (facialState)
    {
        case 0:
        glutDisplayFunc(idle);
        break;
        case 1:
        glutDisplayFunc(smile);
        break;
        case 2:
        glutDisplayFunc(frown);
        break;
        default:
        glutDisplayFunc(idle);
        break;
    }
    break;
    case 'n':
    color = 0;
    switch (facialState)
    {
        case 0:
        glutDisplayFunc(idle);
        break;
        case 1:
        glutDisplayFunc(smile);
        break;
        case 2:
        glutDisplayFunc(frown);
        break;
        default:
        glutDisplayFunc(idle);
        break;
    }
    break;
    case 'q':
    glRotatef(90, 1, 0, 0);
    break;
    default:
    printf(" Touche: %c\n Souris a: %d %d \n",touche,x,y);
    printf("Facial State: %d\n", facialState);
    break;
}
glutPostRedisplay();
}

void tSpecial(int touche, int x, int y){
    switch(touche){
        case GLUT_KEY_UP:
        yTranslate=yTranslate+0.1;
        switch (facialState)
    {
        case 0:
        glutDisplayFunc(idle);
        break;
        case 1:
        glutDisplayFunc(smile);
        break;
        case 2:
        glutDisplayFunc(frown);
        break;
        default:
        glutDisplayFunc(idle);
        break;
    }
        break;
        case GLUT_KEY_DOWN:
        yTranslate=yTranslate-0.1;
        switch (facialState)
    {
        case 0:
        glutDisplayFunc(idle);
        break;
        case 1:
        glutDisplayFunc(smile);
        break;
        case 2:
        glutDisplayFunc(frown);
        break;
        default:
        glutDisplayFunc(idle);
        break;
    }
        break;
        case GLUT_KEY_LEFT:
        xTranslate=xTranslate-0.1;
        switch (facialState)
    {
        case 0:
        glutDisplayFunc(idle);
        break;
        case 1:
        glutDisplayFunc(smile);
        break;
        case 2:
        glutDisplayFunc(frown);
        break;
        default:
        glutDisplayFunc(idle);
        break;
    }
        break;
        case GLUT_KEY_RIGHT:
        xTranslate=xTranslate+0.1;
        switch (facialState)
    {
        case 0:
        glutDisplayFunc(idle);
        break;
        case 1:
        glutDisplayFunc(smile);
        break;
        case 2:
        glutDisplayFunc(frown);
        break;
        default:
        glutDisplayFunc(idle);
        break;
    }
        break;
        default:
        printf("Les Touches sont:\n S pour Sourire, T pour Triste, I pour Idle\n G pour Vert, R pour Rouge, B pour Bleu, N pour Normal\n Fleches pour deplacer le Charactere\n");
    }
    glutPostRedisplay();
}

void sMouse(int button, int state, int x, int y)
{
    switch(button){
        case GLUT_LEFT_BUTTON:
        if(state==GLUT_DOWN){
            glRotatef(10, 0, 1, 0);
        }
        break;
        case GLUT_RIGHT_BUTTON:
        if(state==GLUT_DOWN){
            glRotatef(-10, 0, 1, 0);
        }
        break;
        case GLUT_MIDDLE_BUTTON:
        if(state==GLUT_DOWN){
            glRotatef(10, 1, 0, 0);
        }
        break;
    }
    glutPostRedisplay();
}