#ifndef RESULTADOS_H
#define RESULTADOS_H

#include <string>

class Resultados
{
  private:

  public:
    Resultados(); //<! Constructor.
    
  	/**
		 * Procura  e retorna as palavras de acordo com a entrada do usuário.
		 * @param palavra - palavra que o usuário está procurando.
		 */  
    void encontradas( std::string palavra );
};

#endif