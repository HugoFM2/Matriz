#include <iostream>
#include "Matriz.h"
using namespace std;




int main(){
  Matriz Y(1,1,5);
  Matriz X(3,2);
  X(2,2)=4;
  Y(1,1)=20;
  cout << X << endl;
  cout << Y << endl;
  return 0;
}
