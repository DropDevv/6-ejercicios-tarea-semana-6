#include <iostream>

using namespace std;

int main()
{
	int arreglo[] = {1,5,8,2,3,9,4}; // arreglo 
	int clave; // variable para el numero a buscar
	bool encontrado=false; // variable para saber si se encontro el numero

	cout << "Ingresa un numero a buscar: ";// imprime un texto
	cin >> clave;// guarda lo que introduce el usuario

	int tamaño = sizeof(arreglo) / sizeof(arreglo[0]); //obtiene el tamaño del arreglo

	for (int i = 0; i < tamaño; i ++) // ciclo for que se repite mientras que i sea menor a tamaño
	{
		if (arreglo[i] == clave)// si el numero en la posicion i es igual al que se busca
		{
			cout << "Número encontrado en la posición" << i << endl;// imprime la posicion doned se encontro
			encontrado = true;  // cambia la variable encontrado a true 
		}
	}

	if (!encontrado) // condicion donde se cambia el valor de encontrado si es false sera true y se ejecuta
	{
		cout << "Número no encontrado en el array" << endl;// imprime un texto si no se encontro
	}

	return 0;
}
