#include "EjerciciosComienzo.h"

int suma(int a, int b) {
 	// IMPLEMENTAR SOLUCION
	int c = a + b;
    return c;
}

string IntToString(int intValor) {
	char* myBuff;
	string strRetVal;

	// Crea nuevo array de caracteres
	myBuff = new char[100];

	// Pone a myBuff a 0
	memset(myBuff, '\0', 100);

	// Convierte a string
	itoa(intValor, myBuff, 10);

	// Copia myBuff dentro de strRetVal
	strRetVal = myBuff;

	// Borra myBuff
	delete[] myBuff;

	//retorna la cadena
	return(strRetVal);
}
void tablaDel(unsigned int tablaDel, unsigned int desde, unsigned int hasta) {
 	// IMPLEMENTAR SOLUCION
	string resultado = to_string(desde) + "*" + to_string(tablaDel) + "=" + to_string(desde * tablaDel); // concatenar

	for (int i=desde+1; i <= hasta; i++) {
		resultado = resultado +";"+ to_string(i)+"*"+ to_string(tablaDel)+"="+ to_string(i*tablaDel);
	}

	cout << resultado;

}

int gcd(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
void simplificar(int numerator, int denominator) {
	int commonDivisor = gcd(numerator, denominator);
	numerator /= commonDivisor;
	denominator /= commonDivisor;

	cout << to_string(numerator)+"/"+ to_string(denominator) ;
}



int ocurrencias123Repetidos(int* arr, int n) {
	int count = 0;
	int subsecuencia[] = { 1, 2, 3 }; // Array auxiliar para almacenar la subsecuencia [1,2,3]
	int subsecuenciaIndex = 0; // Índice actual en la subsecuencia

	// Iterar sobre el vector buscando ocurrencias de la subsecuencia [1,2,3]
	for (int i = 0; i < n; ++i) {
		if (arr[i] == subsecuencia[subsecuenciaIndex]) { // Si el elemento actual coincide con el elemento de la subsecuencia
			++subsecuenciaIndex; // Avanzar en la subsecuencia
			if (subsecuenciaIndex == 3) { // Si se llega al final de la subsecuencia
				++count; // Incrementar el contador de ocurrencias
				subsecuenciaIndex = 0; // Reiniciar el índice de la subsecuencia
			}
		}
		else if (subsecuenciaIndex == 2 && arr[i] != 2) {
			subsecuenciaIndex = 0;
		}
	}
	return count;
}
int maximoNumero(unsigned int n) {
	int mayor = INT_MIN; // Inicializamos el mayor con el valor mínimo de un entero
	int numero;

	// Pedir ingreso de n números y encontrar el mayor
	for (int i = 0; i < n; ++i) {
		std::cout << "Ingrese el numero " << i + 1 << ": ";
		std::cin >> numero;
		if (numero > mayor) {
			mayor = numero;
		}
	}

	return mayor;
}

void ordenarVecInt(int *arr, int n) {
	for (int i = 0; i < n - 1; ++i) {
		for (int j = 0; j < n - i - 1; ++j) {
			if (arr[j] > arr[j + 1]) {
				// Intercambiar los elementos si están en el orden incorrecto
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

// Función para invertir el case de un carácter
char invertirCase(char c) {
	if (c >= 'a' && c <= 'z') {
		return c - 32; // Convertir minúscula a mayúscula
	}
	else if (c >= 'A' && c <= 'Z') {
		return c + 32; // Convertir mayúscula a minúscula
	}
	else {
		return c; // No hacer nada si no es una letra
	}
}

char* invertirCase(char* str)
{
	char* result = new char[strlen(str) + 1]; // Crear un nuevo array de caracteres para almacenar el string resultante
	int i = 0;
	// Iterar sobre el string original
	while (str[i] != '\0') {
		// Invertir el case de cada carácter y asignarlo al nuevo string
		result[i] = invertirCase(str[i]);
		++i;
	}
	result[i] = '\0'; // Agregar el carácter nulo al final del nuevo string
	return result;
}

int islas(char** mapa, int col, int fil){
	// IMPLEMENTAR SOLUCION
    return 0;
}

unsigned int ocurrenciasSubstring(char **vecStr, int largoVecStr, char *substr)
{
	// IMPLEMENTAR SOLUCION
    return 0;
}

// Función auxiliar para comparar dos strings según la tabla ASCII 1<2
bool compararStrings(const std::string& str1, const std::string& str2) {
	int i = 0;
	// Comparar caracteres de los strings hasta encontrar una diferencia
	while (str1[i] != '\0' && str2[i] != '\0') {
		if (str1[i] < str2[i]) {
			return true;
		}
		else if (str1[i] > str2[i]) {
			return false;
		}
		++i;
	}
	// Si los strings tienen la misma longitud y los mismos caracteres, no hay diferencia
	return str1[i] == '\0' && str2[i] != '\0';
}

// Función para copiar un arreglo de punteros a caracteres (char **) en uno nuevo
char** copiarArregloChar(char** vecStr, int largo) {
	char** nuevoVecStr = new char* [largo]; // Asignar memoria para el nuevo arreglo de punteros

	// Copiar cada string del arreglo original al nuevo arreglo
	for (int i = 0; i < largo; ++i) {
		int longitud = strlen(vecStr[i]); // Calcular la longitud del string
		nuevoVecStr[i] = new char[longitud + 1]; // Asignar memoria para el nuevo string
		strcpy(nuevoVecStr[i], vecStr[i]); // Copiar el contenido del string original al nuevo string
	}

	return nuevoVecStr;
}

char **ordenarVecStrings(char **vecStr, int largoVecStr)
{
	char **resultado= copiarArregloChar(vecStr,largoVecStr); // Crear una copia del vector original

	// Implementar un algoritmo de ordenamiento (por ejemplo, ordenamiento de burbuja)
	for (int i = 0; i < largoVecStr - 1; ++i) {
		for (int j = 0; j < largoVecStr - i - 1; ++j) {
			if (compararStrings(resultado[j + 1], resultado[j])) {
				std::swap(resultado[j], resultado[j + 1]);
			}
		}
	}

	return resultado;
}

int* intercalarVector(int* v1, int* v2, int l1, int l2){

	int* resultado = new int[l1 + l2]; // Vector para almacenar el resultado combinado

	// Índices para recorrer los vectores v1 y v2, y el vector resultado
	int i = 0, j = 0, k = 0;

	// Fusionar los elementos de v1 y v2 en el vector resultado
	while (i < l1 && j < l2) {
		if (v1[i] < v2[j]) {
			resultado[k] = v1[i];
			++i;
		}
		else if (v2[j] < v1[i]) {
			resultado[k] = v2[j];
			++j;
		}
		else { // Si los elementos son iguales, agregar ambos
			resultado[k] = v1[i];
			++k;
			resultado[k] = v2[i];
			++i;
			++j;
		}
		++k;
	}

	// Agregar los elementos restantes de v1, si los hay
	while (i < l1) {
		resultado[k] = v1[i];
		++i;
		++k;
	}

	// Agregar los elementos restantes de v2, si los hay
	while (j < l2) {
		resultado[k] = v2[j];
		++j;
		++k;
	}

	return resultado;
}

bool subconjuntoVector(int* v1, int* v2, int l1, int l2)
{
	// IMPLEMENTAR SOLUCION
	return false;
}

char** splitStr(char* str, char separador, int &largoRet)
{
	// IMPLEMENTAR SOLUCION
	return NULL;
}

void ordenarVecIntMergeSort(int* vector, int largo) 
{
	// IMPLEMENTAR SOLUCION
}
