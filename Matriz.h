#include <iostream>

#ifndef MATRIZ_H
#define MATRIZ_H



class Matriz{
private:
  int linhas,colunas;
  double** matriz;
public:
  int getRows();
  int getCols();
  double**  getMatriz();
  Matriz();

  Matriz(int linhas, int colunas, const double &valor = 0);
  void zeros();
  Matriz& operator=(const Matriz &m);
  Matriz operator+(const Matriz&) const;
  Matriz& operator-=(const Matriz&);
  Matriz operator-(const Matriz&) const;
  Matriz& operator+=(const Matriz&);
  Matriz& operator*=(const int & a);
	Matriz& operator*=(const Matriz&m);
	Matriz operator*(const Matriz&a);
  friend std::ostream& operator<<(std::ostream &out, const Matriz &m);
  double& operator()(int linha, int coluna);
};

#endif
