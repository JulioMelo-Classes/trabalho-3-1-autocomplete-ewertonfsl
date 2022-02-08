## Como compilar o projeto (em ambiente Linux)
1. Pelo terminal, vá até a pasta do projeto, por exemplo:
```
cd Downloads/trabalho-3-1-autocomplete-ewertonfsl-main
```
2. Crie e entre na pasta build:
```
mkdir build
cd build
```
3. Execute os comandos do `cmake`, um por vez, e aguarde a conclusão do processamento para prosseguir.
```
cmake ..
cmake --build .
```
## Para executar
Você deve executar o programa com um arquivo de entrada (contendo palavras e sua ocorrência), por exemplo:
```
./autocomplete ../data/cities.txt 
```

## Funcionalidades não implementadas
```
busca binária pelo vetor, ordenação pela frequência, melhor estruturamento das classes.
```

## Limitações
Fiquei sobrecarregado e acabei dedicando pouco tempo ao projeto.


# Avaliação

## Ler e validar os argumentos da linha de comando | 7 / 10

- Faltou validar a quantidade de argumentos, bem como o conteúdo do arquivo.

## Ler os dados da base de dados e armazená-los em uma classe apropriada | 10 / 10

- Vou considerar, embora o nome "Processamento" não tenha ficado muito bom.

## Separar a interface textual das demais classes do sistema concentrando os couts e cins em um único objeto | 3 / 10

- Boa parte da interface ainda ficou faltando

## Implementação de uma classe para conter o resultado da requisição do usuário | 0 / 10

- Acho que você ainda não tinha iniciado a implementação desta classe, mas a ideia eu expliquei na aula.

## Implementação eficiente através de referencias e algoritmos de busca binária | 0 / 10

- Não implementado

## Organização do código em src, include, data | 5 / 5

- ok

## Documentação do código usando o padrão doxygen | 5 / 5

- A documentação do construtor é a mesma dos métodos convencionais

## Implementação e documentação de arquivos de teste | 0 / 10

- Não implementado