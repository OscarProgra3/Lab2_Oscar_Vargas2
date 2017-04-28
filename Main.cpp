#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h>

using namespace std;

int factorial(int);
double distancia(int,int,int,int);

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

			/*bool validacion= true;
			while(validacion=!false)
			{*/

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

			/*	if (x1+y1==x2+y2 || x1+y1==x3+y3 || x1+y1==x4+y4 || x2+y2==x3+y3 || x2+y2==x4+y4 || x3+y3==x4+y4 )
				{
					validacion =false;
					cout<<endl<<"¡¡¡DATOS INGRESADOS ERRONEAMENTE O NO ES UN TRAPECIO!!!"<<endl;
				}
			
				validacion=false;

			}*/

			cout<<endl<<"Los puntos son:"<<endl;
			cout<<"("<<x1<<","<<y1<<")"<<endl;
			cout<<"("<<x2<<","<<y2<<")"<<endl;
			cout<<"("<<x3<<","<<y3<<")"<<endl;
			cout<<"("<<x4<<","<<y4<<")"<<endl;



		/*	double lado1=sqrt((pow(x2-x1,2))+(pow(y2-y1,2)));
            double lado2=sqrt((pow(x3-x1,2))+(pow(y3-y1,2)));
            double lado3=sqrt((pow(x4-x3,2))+(pow(y4-y3,2)));
            double lado4=sqrt((pow(x2-x4,2))+(pow(y2-y4,2)));
*/
			

			double lado1=sqrt((pow(x2-x1,2))+(pow(y2-y1,2)));
            double lado2=sqrt((pow(x3-x2,2))+(pow(y3-y2,2)));
			double lado3=sqrt((pow(x4-x3,2))+(pow(y4-y3,2)));
            double lado4=sqrt((pow(x1-x4,2))+(pow(y1-y4,2)));
                        

			cout<<endl<<"Los lados del trapezoide miden: "<<endl;
			
			cout<<"Lado 1: "<<lado1<<endl;
			cout<<"Lado 2: "<<lado2<<endl;
			cout<<"Lado 3: "<<lado3<<endl;
			cout<<"Lado 4: "<<lado4<<endl;




			cout<<endl<<"Los lados del triangulo 1  miden: "<<endl;
			
			double ladot1=sqrt((pow(x2-x1,2))+(pow(y2-y1,2)));
            double ladot2=sqrt((pow(x4-x3,2))+(pow(y4-y3,2)));
            double ladot5=sqrt((pow(x1-x3,2))+(pow(y1-y3,2)));
            
            cout<<"Lado 1: "<<ladot1<<endl;
			cout<<"Lado 2: "<<ladot2<<endl;
			cout<<"Lado 3: "<<ladot5<<endl;
			

			cout<<endl<<"Los lados del triangulo 2  miden: "<<endl;
			
			cout<<"Lado 1: "<<lado4<<endl;
			cout<<"Lado 2: "<<lado3<<endl;
			cout<<"Lado 3: "<<ladot5<<endl;
			
			double s1=(ladot1+ladot2+ladot5)/2;
			double s2=(lado4+lado3+ladot5)/2;

			cout<<endl<<"Semiperimetro del triangulo 1: "<<s1<<endl;				
			cout<<endl<<"Semiperimetro del triangulo 2: "<<s2<<endl;				
		
			double pert1=lado1+lado3+ladot5;
			cout<<endl<<"Perimetro del triangulo 1: "<<pert1<<endl;				
			
			double pert2=lado1+lado2+ladot5;
			cout<<endl<<"Perimetro del triangulo 2: "<<pert2<<endl;				
			

			double pertra=								

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