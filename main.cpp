
#include <GL/glut.h>
#include <stdio.h>
#include "buttons.h"





int main(int argc, char** argv) {

glutInit(&argc, argv);
glutInitWindowSize(720, 600);
glutCreateWindow("Bonhomme OpenGL: Cancer Man 2. The remake, Nintendo Switch Edition. Next Gen Of Legends...");
glutDisplayFunc(idle);
printf("Les Touches sont:\n S pour Sourire, T pour Triste, I pour Idle\n G pour Vert, R pour Rouge, B pour Bleu, N pour Normal\n Fleches pour deplacer le Charactere\n Clique Gauche pour tourner a gauche, Clique Droit pour tourner a droite, Clique Milieu pour tourner en haut\n");
glutKeyboardFunc(tClavier);
glutSpecialFunc(tSpecial);
glutMouseFunc(sMouse);

glutMainLoop();
return 0;
}