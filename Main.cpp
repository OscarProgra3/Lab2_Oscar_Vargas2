#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int factorial(int);

int main()
{
	int opc=4;
	while(opc!=3)
	{

		cout<<endl<<"Bienvenido \n1.- Ejercicio1\n2.- Ejercicio2\n 3.- Salir\nElija su opcion: ";
		cin>>opc;
		cout<<endl;

		if (opc==1)//ejercicio1
		{
			double x;
			double n=13;
			cout<<"Ingrese el numero X para la formula de Euler: "<<endl;
			cin>>x;
	
			double total=0;

			for (int i = 1; i <=n; ++i)
			{
				double numerador=0;
				double denominador=0;

				numerador=pow(x,i);
				denominador=factorial(i);	
				double subtot=numerador/denominador;
				
				total+=subtot;
			}

			total+=1;
			cout<<"El numero de Euler de "<<x<<" es:\n"<<total<<endl;


		}//fin de ejercicio1
		//-----------------------------------------------------------------------

		if (opc==2)//ejercicio2
		{
			cout<<endl<<"EJERCICIO 2"<< endl;

			double x1,x2,x3,x4,y1,y2,y3,y4;

			bool validacion= true;
			while(validacion=!false)
			{

				cout<<endl<<endl<<endl;
				
				cout<<endl<<"ingrese x1: ";
				cin>>x1;
				cout<<endl<<"ingrese y1: ";
				cin>>y1;
				
				cout<<endl<<"ingrese x2: ";
				cin>>x2;
				cout<<endl<<"ingrese y2: ";
				cin>>y2;
				
				cout<<endl<<"ingrese x3: ";
				cin>>x3;
				cout<<endl<<"ingrese y3: ";
				cin>>y3;

				cout<<endl<<"ingrese x4: ";
				cin>>x4;
				cout<<endl<<"ingrese y4: ";
				cin>>y4;

			
				if (x1+y1==x2+y2 || x1+y1==x3+y3 || x1+y1==x4+y4 || x2+y2==x3+y3 || x2+y2==x4+y4 || x3+y3==x4+y4 )
				{
					validacion =false;
					cout<<endl<<"¡¡¡DATOS INGRESADOS ERRONEAMENTE O NO ES UN TRAPECIO!!!"<<endl;
				}
				validacion=true;

			}

			
						
			

		}//fin de ejercicio2
			
	}
	
	return 0;
}


int factorial(int i){
    if(i<0){
        return 0;
    }else if(i==0){
        return 1;
    }else{
        return i*factorial(i-1);
    }

}