#include <iostream>

using namespace std;

void selectionSort(int arr[],int n) // funcion para ordenar el arreglo
{
	for (int i = 0; i < n-1; i++) //ciclo for que se repite mientras que i sea menor a n - 1 
	{
		int minIdx = i; // vairable int
		for (int j = i+1; j < n; j++) //ciclo for que se repite mientras que j sea menor a n 
		{
			if (arr[j] < arr[minIdx])// si el numero en la posicion j es menor a el numero en la posicion mindix
			{
				minIdx = j;// cambia el valor de minIdx por el valor en j
			}
		}
		swap(arr[i], arr[minIdx]); // cambia de lugar los numeros
	}
}

int main()
{
	int arr[] = {64,25,12,22,11};// arreglo
	int n = sizeof(arr) / sizeof(arr[0]); //obtiene el tamaño del arreglo

	selectionSort(arr, n);// ejecuta la funcion  con los parametros arr y n

	for (int i = 0; i < n; i++) cout << arr[i]<<" "; //ciclo para recorrer el arreglo e imprimer los numeros
	return 0;
}
