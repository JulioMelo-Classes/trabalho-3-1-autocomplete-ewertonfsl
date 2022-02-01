cmake_minimum_required(VERSION 3.5)
project(concordo VERSION 0.1 LANGUAGES CXX )


### Executável
# Diretório contendo os .hpp
include_directories( include )

# Cria um executável com nome "autocomplete", adiciona neste executável os arquivos src/ui.cpp src/processamento.cpp src/resultados.cpp
add_executable( autocomplete
                src/autocomplete.cpp
                src/ui.cpp
                src/processamento.cpp
                src/resultados.cpp )
# The end
