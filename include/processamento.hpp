#ifndef PROCESSAMENTO_H
#define PROCESSAMENTO_H

#include <iostream>
#include <vector>
#include <string>

class Processamento
{
  private:
    std::string arquivo_palavras; //<! Arquivo inserido na linha de comando.
    

  public:
    Processamento(); //<! Constructor.

    std::vector< std::string > palavras; //<! Vetor com as palavras de um arquivo.    

    std::vector<int> frequencias; //<! Ocorrência das palavras de um arquivo.

		/**
		 * Carrega um arquivo inserido na linha de comando.
		 * @param arquivo_palavras - um arquivo da pasta data.
		 */
    void carrega_arquivos( std::string arquivo_palavras );
    
    /**
		 * Compara duas strings para definir a ordem alfabética.
		 * @param strings a serem comparadas.
		 */
    bool compara( std::string a, std::string b );
};

#endif