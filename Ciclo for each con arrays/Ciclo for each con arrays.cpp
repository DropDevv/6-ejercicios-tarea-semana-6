#include <iostream>
#include <vector>

using namespace std;
int main()
{
	vector<int> numeros = {1,2,3,4,5}; // declara vector con valores

	cout << "Elementos del vector: ";// imprime texto
	for (const auto& num :numeros )// ciclo for each que recorre el vector
	{
		cout << num<<" "; // imprime los valores
	}
	cout << endl; // salto de linea

	for (auto& num : numeros) // ciclo for each para modificar los valores
	{
		num += 1; //suma +1 a los valores
	}

	cout << "Elementos modificados: "; //imprime texto
	for (const auto& num: numeros)//ciclo foreach para recorrer el vector
	{
		cout << num << " ";//imprime los valores
	}
	cout << endl; //salto de linea

	return 0;
}