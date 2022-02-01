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
