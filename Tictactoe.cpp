#ifndef TICTACTOE_CPP
#define TICTACTOE_CPP

#include "Grille.h"
#include "Tictactoe.h"
#include <iostream>


    Tictactoe::Tictactoe() : _symboleCourant('X'),_numeroTour(0) {}

    void Tictactoe::afficheGrille(){
		std::cout << "joueur : " << _symboleCourant << std::endl;
		_grilleDeJeu.affiche();
    }

    void Tictactoe::ajouteSymbole(int x, int y){
		if (_symboleCourant != _grilleDeJeu.getContent(x,y))
		{
			_grilleDeJeu.setContent(x,y, _symboleCourant);
			if (_symboleCourant == 'X')
				_symboleCourant = 'O';
			else if (_symboleCourant == 'O')
				_symboleCourant = 'X';
			_numeroTour++;
		}
    }

    bool Tictactoe::testeVictoireVerticale(){
		for (int i = 0; i<3; i++)
		{
			if (_grilleDeJeu.getContent(i,0) == _grilleDeJeu.getContent(i,1) &&
				_grilleDeJeu.getContent(i,0) == _grilleDeJeu.getContent(i,2) &&
				_grilleDeJeu.getContent(i,0) != ' ')
				return true;
		}
		return false;
    }

    bool Tictactoe::testeVictoireHorizontale(){
		for (int i = 0; i<3; i++)
		{
			if (_grilleDeJeu.getContent(0,i) == _grilleDeJeu.getContent(1,i) &&
				_grilleDeJeu.getContent(0,i) == _grilleDeJeu.getContent(2,i) &&
				_grilleDeJeu.getContent(0,i) != ' ')
				return true;
		}
		return false;
    }

    bool Tictactoe::testeVictoireDiagonale(){
        // à compléter
		return false;
    }

    bool Tictactoe::testeJeuNul(){
        // à compléter
		return false;
    }

    void Tictactoe::finTour(){
        // à compléter
   }

#endif
