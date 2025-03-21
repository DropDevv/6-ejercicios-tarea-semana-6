#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int arreglo[] = { 1,5,8,2,3,9,4 }; //arreglo donde se buscara el numero
	int clave; //variable para numero a buscar
	bool encontrado = false; //variable para saber si se encontro
	int indice =-1; // variable para saber el indice del numero a buscar
	
	int tamano = sizeof(arreglo) / sizeof(arreglo[0]); //obtiene el tamaño del arreglo
	sort(arreglo, arreglo+tamano); // ordena el array {1,2,3,4,5,8,9}

	cout << "Array ordenado: "; // imprime un texto
	for (int n : arreglo) cout << n << " "; // ciclo foreach para imprimir los valores
	cout << endl;//salto de linea

	cout << "Ingresa un numero a buscar: ";// imprime un texto
	cin >> clave;// guarda lo que introduce el usuario

	//declaracion de variables para mover la busqueda
	int izquierda =0;
	int derecha = tamano - 1;

	while (izquierda<= derecha) // ciclo while, se detiene cuando izquierda sea menor o igual a derecha
	{
		int medio = izquierda + (derecha - izquierda) / 2;//calcula el medio

		if (arreglo[medio] == clave) //si el numero buscado esta en esa posicion 
		{
			encontrado = true; // cambia la variable encontrado a true 
			indice = medio; //guarda la posicion donde ese encontro
			break; // sale del ciclo
		}
		else if (arreglo[medio]< clave)// si el numero es menor al que se busca 
		{
			izquierda = medio + 1;// se suma el medio + 1 y se guarda en la variable izquierda, para buscar en la derecha 
		}
		else 
		{
			derecha = medio - 1; // sino se resta al medio -1 y se guarda en la variable de derecha, para buscar en la izquierda 
		}
	}

	if (encontrado) // si se encontro el numero
	{
		cout << "Numero encontrado en la posicion: " << indice << endl; // imprime un texto
	}
	else //sino se encontro el numero
	{
		cout << "Numero encontrado" << endl;// imprime un texto
	}

	return 0;
}