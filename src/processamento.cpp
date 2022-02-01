#include <fstream> //<! manipulação de arquivos
#include <iostream>
#include <sstream> //<! stringstream
#include <string>
#include <vector>

#include "../include/processamento.hpp"

using namespace std;

Processamento::Processamento(){} //<! Constructor.

/**
 * Carrega os arquivos de entrada e preenche os vetores de palavras e frequência.
 */
void Processamento::carrega_arquivos( string dados )
{
    arquivo_palavras = dados;

    cout << "Lendo arquivo de palavra [" << dados << "], por favor aguarde" << endl;
    cout << "----------------------------------------------------------------" << endl;

    int frequencia;
    string entrada, palavra;
    
    ifstream arquivo;
    arquivo.open( arquivo_palavras ); //<! abre o arquivo


    // Confere se arquivo foi aberto.
    if( arquivo.is_open() )
    {
        while( getline( arquivo, entrada ) ) 
        {   
            stringstream ss;
            ss << entrada;
            ss >> frequencia;
            frequencias.push_back( frequencia );

            getline( ss, palavra );
            palavras.push_back( palavra );
        }
    }

    // Mensagem caso não encontre arquivo.
    else
    {
        cout << "Arquivo [" << dados << "] não existe" << endl;
        exit(1);
    }

    arquivo.close(); //<! fecha o arquivo
}

