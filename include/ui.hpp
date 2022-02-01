#ifndef UI_H
#define UI_H

#include <string>

class UI
{
  private:
    std::string palavra; //<! Palavra que o usuário procura.
    
  public:
    UI(); //<! Constructor.

    /**
    * Atualiza a palavra que o usuário deseja encontrar.
    * @param palavra.
    */
    void setPalavra( std::string palavra );

    /**
    * Retorna a palavra que o usuário deseja encontrar.
    */  
    std::string getPalavra();
};

#endif