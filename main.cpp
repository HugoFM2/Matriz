#include <iostream>
#include "Matriz.cpp"
using namespace std;




int main(){
  Matriz Y;
  Matriz X(3,2);
  X(2,2)=4;
  //Y=X;
  Y+=Y;
  cout << Y << endl;
  cout << X << endl;
  return 0;
}
