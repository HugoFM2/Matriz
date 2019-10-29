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
  for( int j = 0; j < linhas; j++ ){
    matriz[j]  = new int[j];
  }
  for (int i = 0; i < linhas; i++){
    // std::cout << "Contou Linha" << std::endl;
    for(int j = 0; j < colunas; j++){
      // std::cout << "Contou coluna " ;
      matriz[i][j] = valor;
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
void Matriz::zeros(){
  for (int i = 0; i < linhas; i++){
    // std::cout << "Contou Linha" << std::endl;
    for(int j = 0; j < colunas; j++){
      // std::cout << "Contou coluna " ;
      matriz[i][j] = 0;
    }
    // std::cout << std::endl;
  }
}

std::ostream& operator<<(std::ostream &out, const Matriz &m){
  if(m.linhas == 0 || m.colunas == 0 ){
    throw std::out_of_range("Error, linha ou coluna de tamanho 0");
  }
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
  return out;
}

int& Matriz::operator()(int linha, int coluna) {
    if (linha > linhas || coluna > colunas) {
        throw std::out_of_range("Error");
    }
    return matriz[linha-1][coluna-1];
}
