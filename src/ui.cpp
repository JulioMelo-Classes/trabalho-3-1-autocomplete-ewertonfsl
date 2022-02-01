#include <iostream>

#include "../include/ui.hpp"
#include "../include/resultados.hpp"

using namespace std;

UI::UI(){} //<! Constructor.

/**
* Atualiza a palavra que o usuário deseja encontrar.
* @param palavra.
*/
void UI::setPalavra( string palavra )
{
  this->palavra = palavra;
}

/**
* Retorna a palavra que o usuário deseja encontrar.
*/
string UI::getPalavra()
{
  return palavra;
}