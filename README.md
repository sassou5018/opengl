## *Modelisation Du Bonhomme* Avec Mouvement et rotation au clavier
J'ai crée le Projet Avec Linux GNU C++
### Pour Compiler et Lancer le projet vous pouvez:
 - Utiliser le MakeFile inclus: (*Compile seulement pour linux*)
	 - Ouver la console Linux dans le repertoire du projet et simplement taper: make
 - Compiler avec la console:
	 -  `g++ {"fileName"}.cpp -o OUT -lGL -lGLU -lglut`
	 - `./OUT` Si Vous Avez compiler pour Linux
 - Utiliser l'un des fichier inclus:
	- out pour Linux
	- J'ai pas pu compiler pour Windows veulliez tester avec une VM Ubuntu
### Structure des fichiers:
J'ai separer le code sur 3 Fichier:
 - main.cpp :
	 - Contient la fonction main (point d'entrer du code)
	 - Contient les boucles principeaux de glut.
- faces.h
	- Contient 3 Fonctions de type display:
		- idle
		- smile (sourire)
		- frown (triste)
	- Contient les Variables:
		- `int color; //Selector pour la couleur du model`
		`//0 = normalColor, 1= Vert, 2= Rouge, 3= Bleu`
		- `int facialState; // 0 = idle, 1 = smile, 2 = Frown; Selector pour l'etat facial du model`
		- `float xTranslate=0;
		  float yTranslate=0; //Translation Modifier `
- buttons.h
	- Contient les fonctions:
		- tClavier();
		- tSpecial();
		- sMouse();

