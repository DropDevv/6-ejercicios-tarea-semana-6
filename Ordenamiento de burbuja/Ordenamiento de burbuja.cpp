#include <iostream>

using namespace std;

void bubbleShort(int arr[],int n) //funcion para que ordena
{
	for (int i = 0; i < n- 1; i++)// ciclo for se repite mientras que i sea menor a n - 1 
	{
		for (int j =0;j<n-i-1;j++ )// ciclo for se repite mientras que j sea menor a n - i - 1 
		{
			if (arr[j]>arr[j+1]) // si el numero en la posicion j es mayor al numero en la posicion j + 1
			{
				swap(arr[j],arr[j+1]); // cambia de lugar los numeros
			}
		}
	}
}

void printArray(int arr[],int n)// funcion para imprimir el arreglo
{
	for (int i = 0; i < n; i++) cout << arr[i] << " "; // ciclo for que recorre el arreglo e imprime los numeros
	cout << endl; // salto de linea
}

int main()
{
	int arr[] = {5,2,9,1,5,6}; // arreglo
	int n = sizeof(arr) / sizeof(arr[0]); //obtiene el tamaño del arreglo

	bubbleShort(arr, n);// ejcuta la funcion con los parametros arr y n
	printArray(arr, n);// ejcuta la funcion con los parametros arr y n

	return 0;
}
