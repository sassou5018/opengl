## *Modelisation Du Bonhomme* Avec Mouvement et rotation au clavier
J'ai crée le Projet Avec Linux GNU C++

# Avant de compiler le code veuillez installer freeglut avec: 
`$ sudo apt-get install freeglut3 freeglut3-dev`

`$ sudo apt-get install binutils-gold`
vous pouvez suivre [cette tuto](https://gist.github.com/abdullahkady/f2782157991df652c2baee0bba05b788)
### Pour Compiler et Lancer le projet vous pouvez:
 - Utiliser le MakeFile inclus: (*Compile seulement pour linux*)
	 - Ouver la console Linux dans le repertoire du projet et simplement taper: make
 - Compiler avec la console:
	 -  `g++ {"fileName"}.cpp -o OUT -lGL -lGLU -lglut`
	 - `./OUT`
 - Utiliser l'un des fichier inclus:
	- OUT pour Linux
	- J'ai pas pu compiler pour Windows veulliez tester avec une VM Ubuntu
### Structure des fichiers:
J'ai séparé le code sur 3 fichiers:
 - main.cpp :
	 - Contient la fonction main (point d'entré du code)
	 - Contient les boucles Principaux de glut.
- faces.h:
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
- buttons.h:
	- Contient les fonctions:
		- tClavier();
		- tSpecial();
		- sMouse();

 #### DONE:
 - [x] Changer la couleur avec R(Red), G(Green), B(Blue), N(Normal)
 - [x] Changer les grimaces du model avec S(Sourire),T(Triste),I(idle)
 - [x] Faire la translation du model avec les flèches
 - [x] Faire la rotation du model avec les clicks de la souris


