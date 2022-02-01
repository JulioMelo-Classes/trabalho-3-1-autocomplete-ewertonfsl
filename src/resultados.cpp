#include <algorithm>
#include <iostream>
#include <string>

#include "../include/processamento.hpp"
#include "../include/resultados.hpp"
#include "../include/ui.hpp"

using namespace std;

Resultados::Resultados(){} //<! Constructor.

/**
 * Procura e retorna as palavras de acordo com a entrada do usuário.
 * @param palavra - palavra que o usuário está procurando.
 */  
void Resultados::encontradas( string palavra )
{
  //Processamento processar;

  // vector<string>::iterator lower, upper;
  
  // lower = lower_bound( processar.palavras.begin(),  processar.palavras.end(), palavra );
  // upper = upper_bound( processar.palavras.begin(),  processar.palavras.end(), palavra );
 
  // cout << "lower_bound for palavra at position " << (lower -  processar.palavras.begin() + 1) << '\n';
    
  // cout << "upper_bound for palavra at position " << (upper -  processar.palavras.begin() + 1) << '\n';

  cout << endl << "Nenhum resultado encontrado" << endl << endl;
}