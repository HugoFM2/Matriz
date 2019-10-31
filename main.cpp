#include <iostream>
#include "Matriz.cpp"
using namespace std;




int main(){
  Matriz Y(1,1,5);
  Matriz X(3,2);
  X(2,2)=4;
<<<<<<< HEAD
  Y(1,1)=20;
=======
  //Y=X;
  Y+=Y;
  cout << Y << endl;
>>>>>>> 7a91e387aa4648891f9c5d2ccb3f62c594a1e890
  cout << X << endl;
  cout << Y << endl;
  return 0;
}
