#include "Secretaria.h"
#include "Gerente.h" 
#include "Vendedor.h"
#include "Trabajador.h"
#include<iostream>
using std::cout;

int main() {
Trabajador* arreglo[3];
Secretaria sec1("001",60,1436.50,5);
Vendedor vend1("002",62,1248.32,2,0.15,12);
Gerente ger1("003",48,1892.68,4,25000);
arreglo[0]= &sec1;
arreglo[1]= &vend1;
arreglo[2]= &ger1;
for(int cont=0;cont<3;cont++){
arreglo[cont]->reporte();
}
	
	

};

