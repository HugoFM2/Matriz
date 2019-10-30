#include "Matriz.h"

#include <iostream>


Matriz::Matriz(){
this->linhas = 0;
this->colunas = 0;

}

Matriz::Matriz(int linhas, int colunas, const double &valor){
  this->linhas = linhas;
  this->colunas = colunas;
  matriz = new double* [linhas]; // definir array linhas
  for( int j = 0; j < linhas; j++ ){
    matriz[j]  = new double[j];
  }
  for (int i = 0; i < linhas; i++){
    // std::cout << "Contou Linha" << std::endl;
    for(int j = 0; j < colunas; j++){
      // std::cout << "Contou coluna " ;
      matriz[i][j] = 0;
    }
    // std::cout << std::endl;
  }
}
double** Matriz::getMatriz(){
  return matriz;
}
int Matriz::getRows(){
  return linhas;
}

int Matriz::getCols(){
  return colunas;
}

std::ostream& operator<<(std::ostream &out, const Matriz &m){
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

double& Matriz::operator()(int linha, int coluna) {
    if (linha > linhas || coluna > colunas) {
        throw std::out_of_range("Error");
    }
    return matriz[linha-1][coluna-1];
}

void Matriz::zeros(){
for (int i=0; i<linhas; i++){
    for(int j=0; j<colunas; j++)
            matriz[i][j]=0; 
  }

}

Matriz& Matriz::operator=(const Matriz &m) {
	if (this == &m)
		return *this;   
	for (int i = 0; i < linhas; i++)
		delete[] matriz[i];
	delete[] matriz;          
	linhas = m.linhas;
	colunas = m.colunas;
	matriz = new double*[linhas];   
	for (int i = 0; i < linhas; i++) {
		matriz[i] = new double[colunas];
		for (int j = 0; j < colunas; j++)
			matriz[i][j] = m.matriz[i][j];    
	}
	return *this; 
}



Matriz Matriz::operator+(const Matriz& m) const{
    if(m.linhas==linhas && m.colunas==colunas){
         Matriz aux(linhas,colunas);
         for (int i=0; i<linhas; i++){
            for(int j=0; j<colunas; j++){
                aux.matriz[i][j]=m.matriz[i][j]+matriz[i][j];
            }
         }
         return aux;
    }else{
        throw std::out_of_range("Erro!!! Matrizes com dimensoes diferentes.");
    }

}
Matriz& Matriz::operator+=(const Matriz &A){
    if ((A.colunas != this->colunas)||(A.linhas != this->linhas)){ 
        throw std::out_of_range("Erro!!! Matrizes com dimensoes diferentes.");
    }
    else{
        for(int i = 0; i < A.linhas; i++){
            for(int j = 0; j < A.colunas; j++){ 
                this->matriz[i][j] += A.matriz[i][j]; 
            }
        }
    }
    return *this;
}

Matriz& Matriz::operator-=(const Matriz& m){
    if(m.linhas==linhas && m.colunas==colunas){
         for (int i=0; i<linhas; i++){
            for(int j=0; j<colunas; j++){
                matriz[i][j]=matriz[i][j]-m.matriz[i][j];
            }
         }
         return *this;
    }else{
        throw std::out_of_range("Error");
    }
}

Matriz& Matriz::operator*=(const int&a) {
	for (int i = 0; i < linhas; i++) {
		for (int j = 0; j < colunas; j++) {
			matriz[i][j] = matriz[i][j] * a; 
		}
	}
	return *this; 
}

Matriz& Matriz::operator*=(const Matriz&x) {
	if (colunas != x.linhas){
    throw std::out_of_range("Error");
  }
	else {
		for (int i = 0; i < linhas; i++) {
			for (int j = 0; j <  x.colunas; j++) {
				for(int k = 0; k < colunas; k++)
				matriz[i][j] = matriz[i][j] + matriz[i][k] * x.matriz[k][j];
			}

		}
		return *this; 
	}
}

Matriz Matriz::operator*(const Matriz&x) {
	if (colunas != x.linhas) {
    throw std::out_of_range("Error");
  }
	else {
        Matriz C(linhas,x.colunas); 
		for (int i = 0; i < linhas; i++) {
			for (int j = 0; j < x.colunas; j++) {
				for(int k = 0; k < x.linhas; k++) 
			}
		}
		return C; 
	}
}