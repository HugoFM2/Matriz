#include <iostream>

#ifndef MATRIZ_H
#define MATRIZ_H



class Matriz{
private:
  int linhas,colunas;
  int** matriz;
public:
  int getRows();
  int getCols();
  int**  getMatriz();
  Matriz();
  Matriz(int linhas, int colunas, const double &valor = 0);
  void zeros();





  friend std::ostream& operator<<(std::ostream &out, const Matriz &m);
  int& operator()(int linha, int coluna);



};

#endif
