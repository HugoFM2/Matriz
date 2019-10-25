#include <iostream>
#include "Matriz.h"
using namespace std;




int main(){
  Matriz Y;
  Matriz X(3,2);
  X(2,2)=4;
  cout << X << endl;
  return 0;
}
