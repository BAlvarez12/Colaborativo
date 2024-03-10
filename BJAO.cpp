#include <iostream>
using namespace std;
class BJAO{

	protected: string nombres,apellidos,direccion;
	int telefono;
	
	protected :
		BJAO (){
		}
		BJAO(string nom, string ape, string dir, int tel){
			nombres = nom;
			apellidos = ape;
			dir = direccion;
		}
			
void mostrar (){
			cout<<"Presione cualquier tecla para continuar"<<endl;
		}
 
};
