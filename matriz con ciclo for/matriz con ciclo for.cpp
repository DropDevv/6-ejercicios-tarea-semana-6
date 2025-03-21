#include <vector>
#include <iostream>

using namespace std;

int main()
{
	int filas = 3, columnas = 4; //declara las variables para las filas y las columnas

	vector<vector<int>> matriz(filas, vector<int>(columnas)); // creo una matriz con vector de vectores 
	for (int i = 0; i < filas; i++) // inicia ciclo for que recorre las filas
	{
		for (int j = 0; j < columnas; j++)//ciclo for que recorre las columnas
		{
			matriz[i][j] = (i + 1) * (j + 1); //asigna un valor en las posiciones, segun el calculo = (fila +1) * (columna +1)
		}
	}

	for(const auto& fila: matriz) // ciclo for each y accede por referencia
	{
		for (int valor:fila) //ciclo for each para recorrer los valores de cada fila
		{
			cout << valor << "\t"; // imprime el valor junto a una tabulacion para espacios
		}
		cout << endl;// salto de linea al terminar de recorrer una fila
	}

	return 0;
}