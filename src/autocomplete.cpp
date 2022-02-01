#include <string>
#include <iostream>
#include <algorithm>

#include "../include/processamento.hpp"
#include "../include/resultados.hpp"
#include "../include/ui.hpp"

using namespace std;

/**
 * Compara duas strings para definir a ordem alfabética.
 * @param strings a serem comparadas.
 */
bool compara( string a, string b ) 
{
  return a < b;
}

/**
 * Cabeçalho para entrada do usuário.
 */
void cabecalho()
{
  cout << ">>> Escreva uma palavra e tecle ENTER para autocompletar ou tecle Ctrl+D para sair: ";
}

/**
 * Método principal responsável por inicializar o projeto.
 */
int main( int argc, char *argv[] )
{
  Resultados resultados;
  Processamento processar;

	/**
	 * Carrega um arquivo.
	 * @param inserido na linha de comando..
	 */  
  processar.carrega_arquivos( argv[1] );

  /**
   * Ordena as palavras alfabeticamente.
   */
  sort( processar.palavras.begin(), processar.palavras.end(), compara );

  string palavra;
  
  /**
   * Loop para receber as entradas do usuário e exibir um resultado. Encerra ao receber string vazia.
   */
  while ( true ) 
  {
    cabecalho();

    getline( cin, palavra );
    if( palavra.empty() ) break;

    resultados.encontradas( palavra );
  } 
  
  return 0;
}