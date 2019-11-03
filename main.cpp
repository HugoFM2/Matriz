#include <iostream>
#include <limits>
#include "Matriz.h"
using namespace std;



int finalizarPrograma;
int main(){// copiado exemplo do enunciado
  Matriz Y;
  Matriz X(3,1), A(3,3), C(3,3),D(3,6);
  Matriz W = C;
  Matriz Z(A);
  Matriz E(3,2), F(2,2);
  Matriz G;
  E(1,1)=2;
  E(1,2)=3;
  E(2,1)=1;
  E(2,2)=0;
  E(3,1)=4;
  E(3,2)=5;
  F(1,1)=3;
  F(1,2)=1;
  F(2,1)=2;
  F(2,2)=4;
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
  cout << D << endl;
  Y.zeros(); // modifica todos os elementos de Y para o valor zero
  cout <<"A = :" << endl <<  A << endl;
  cout <<"C = :" << endl << C << endl;
  C=A+A; // Soma
  cout<< "C = A+A = :" << endl << C << endl;
  C-=A; // Subtração
  cout << "C -= A = :" << endl << C << endl;
  A=C-A; // Subtração
  cout << "A = C-A = :" << endl << A << endl;
  if (C==A){
    cout << "Igualdade True" << endl;
  } else {
    cout << "Igualdade False" << endl;
  }
  if (C!=A){
    cout << "Desigualdade True" << endl;
  } else {
    cout << "Desigualdade False" << endl;
  }
  A = C;
  cout << "A = C = :" << endl << A << endl;
  A+=A; // Soma
  cout << "A +=A = :" << endl << A << endl;
  C=~A; // A é igual a transposta de C
  cout << "C =~A = :" << endl << C << endl;
  A*=2; // multiplicação por uma constante
  cout << "A *=2 = :" << endl << A << endl;
  G = E*F;
  cout << "G= E*F = :" << endl << G << endl;
  E*=F;
  cout << "E *=F = :" << endl << E << endl;
  cin >> Y;
  cout << Y;
  std::cout << "Pressione ENTER para finalizar o programa";
  std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
  return 0;
}
