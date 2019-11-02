#include <iostream>
#include <limits>
#include "Matriz.h"
using namespace std;



int finalizarPrograma;
int main(){// copiado exemplo do enunciado

  Matriz Y(1,1);
  Matriz X(3,1), A(3,3), C(3,3),D(3,6);
  Matriz W = C;
  Matriz Z(A);
  int numeroLinhas = A.getRows();
  int numeroColunas = A.getCols();
  A(1,1)=20; // altera o valor de uma posição de A
  A(2,1)=30;
  A(3,1)=40;
  A(1,2)=50;
  A(2,2)=60;
  A(3,2)=70;
  A(1,3)=80;
  A(2,3)=90;
  A(3,3)=100;

  C(2,1)=202;
  D(1,5) = 123;
  cout << D;
  // Y.zeros(); // modifica todos os elementos de Y para o valor zero
  //
  // cout << A << endl;
  // cout << C << endl;
  //
  // // if (C==A){
  // //   cout << "Igualdade True" << endl;
  // // } else {
  // //   cout << "Igualdade False" << endl;
  // // }
  // // if (C!=A){
  // //   cout << "Desigualdade True" << endl;
  // // } else {
  // //   cout << "Desigualdade False" << endl;
  // // }
  // // cout << C==A;
  // //C=A+A; // Soma
  // //C-=A; // Subtração
  // // A=C-A; // Subtração
  // //A+=A; // Soma
  // //C=A;
  // C=~A; // A é igual a transposta de C
  // cout << C << endl;
  //X*=2; // multiplicação por uma constante
  //C=A*X; // multiplicação de matrizes
  // if (A == C) // verifica a igualdade entre A e C
  // if(X != Y) // verifica a desigualdade entre A e C
  //cout <<  C << endl; // Impressão de matrizes
  // cin >> Y // leitura de dados para dentro da matriz Y

  // Y=A;
  // cout << Y;
  cin >> Y;
  // std::cout << "Pressione ENTER para finalizar o programa";
  // std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );

  return 0;
}
