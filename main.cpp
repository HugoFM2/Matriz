#include <iostream>
#include <limits>
#include "Matriz.h"
using namespace std;



int finalizarPrograma;
int main(){// copiado exemplo do enunciado

  Matriz Y;
  Matriz X(3,1), A(3,3), C(3,3);
  Matriz W = C;
  Matriz Z(A);
  int numeroLinhas = A.getRows();
  int numeroColunas = A.getCols();
  A(2,1)=20; // altera o valor de uma posição de A
  C(2,1)=10;
  Y.zeros(); // modifica todos os elementos de Y para o valor zero

  cout << A << endl;
  cout << C << endl;

  C=~A;
  //C=A+A; // Soma
  //C-=A; // Subtração
  // A=C-A; // Subtração
  //A+=A; // Soma
  //C=A;
  // A=~C; // A é igual a transposta de C
  //X*=2; // multiplicação por uma constante
  //C=A*X; // multiplicação de matrizes
  // if (A == C) // verifica a igualdade entre A e C
  // if(X != Y) // verifica a desigualdade entre A e C
  //cout <<  C << endl; // Impressão de matrizes
  // cin >> Y // leitura de dados para dentro da matriz Y



  std::cout << "Pressione ENTER para finalizar o programa:";
  std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );

  return 0;
}
