#include "Matriz.h"

#include <iostream>


Matriz::Matriz(){
this->linhas = 0;
this->colunas = 0;

}

Matriz::Matriz(int linhas, int colunas, const double &valor){
  this->linhas = linhas;
  this->colunas = colunas;
  matriz = new int* [linhas]; // definir array linhas
  for( int j = 0; j < colunas; j++ ){
    matriz[j]  = new int[2];
  }
  for (int i = 0; i < linhas; i++){
    // std::cout << "Contou Linha" << std::endl;
    for(int j = 0; j < colunas; j++){
      // std::cout << "Contou coluna " ;
      matriz[i][j] = 0;
    }
    // std::cout << std::endl;
  }
}
int** Matriz::getMatriz(){
  return matriz;
}
int Matriz::getRows(){
  return linhas;
}

int Matriz::getCols(){
  return colunas;
}

std::ostream& operator<<(std::ostream &out, const Matriz &m){
  for(int i = 0; i < m.linhas; i++){
    out << "[ ";
    for(int j = 0; j < m.colunas;j++){
      if(j == m.colunas - 1){
        out << m.matriz[i][j];
      }else{
        out << m.matriz[i][j] << " , ";
      }

    }
    out << " ]" << std::endl;
  }
}

int& Matriz::operator()(int linha, int coluna) {
    if (linha > linhas || coluna > colunas) {
        throw std::out_of_range("Error");
    }
    return matriz[linha-1][coluna-1];
}
