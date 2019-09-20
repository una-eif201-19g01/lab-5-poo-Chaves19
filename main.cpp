#include "Secretaria.h"
#include "Gerente.h" 
#include "Vendedor.h"
#include "Trabajador.h"
#include<iostream>
using std::cout;

int main() {
Trabajador* vector[3];
Secretaria sec1("001",60,1436.50,5);
Vendedor vend1("002",62,1248.32,2,0.15,12);
Gerente ger1("003",48,1892.68,4,25000);
vector[0]= &sec1;
vector[1]= &vend1;
vector[2]= &ger1;
for(int cont=0;cont<3;cont++){
vector[cont]->toString();
}
	
	

};

