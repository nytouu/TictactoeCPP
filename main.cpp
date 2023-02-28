#include "Grille.cpp"
#include "Tictactoe.cpp"
#include <iostream>
#include <string>


int main(){

    bool partiegagnee = false;
    Tictactoe * jeu = new Tictactoe();

    int numeroCase;



    while(!partiegagnee && !(jeu->testeJeuNul())){

		bool legalAction;

        jeu->afficheGrille();
        std::cin >> numeroCase;

		if (numeroCase > 2) {legalAction = false;} else legalAction = true;

		if (legalAction){
			jeu->ajouteSymbole(numeroCase,0);
			partiegagnee = jeu->testeVictoireDiagonale() || jeu->testeVictoireHorizontale() || jeu->testeVictoireVerticale();
			jeu->finTour();
		}
    }



    return 0;
}
