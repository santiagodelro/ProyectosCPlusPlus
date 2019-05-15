#include <iostream>
using namespace std;
#define RANGO(A) (A<1000?cout<<"<1000":(A>=1000 && A<=2000?cout<<"1000 - 2000":(A>2000 && A<3000?cout<<"2001-3000":(A>3000?cout<<">3000":cout<<"No existe"))))
#define NOTA(N) (N<60?cout<<"E":(N<70?cout<<"D":(N<80?cout<<"C":(N<90?cout<<"B":cout<<"A"))))

int main()
{
	// EJERCICIO 6
	int n, promedio,c;
	c = 4;
	promedio = 0;
	while (c!=0)
	{
		cout << "\nIngrese "<< c <<" notas: "; cin >> n;
		c--;
		promedio += n;
	}
	promedio /= 4;
	cout << "El promedio es: " << promedio<<"\t";
	NOTA(promedio);

	/* EJERCICIO 5
	int a, b,suma;
	suma = 0;
	b = 0;
	do
	{
		a = 1;
		cout << "Ingrese un Numero: "; cin >> b;
		suma += b;
		cout << "-1 FIN: "; cin >> a;

	} while (a!=-1);
	cout << "La suma es: " << suma << endl;
	RANGO(suma);
	
	*/
	
}

