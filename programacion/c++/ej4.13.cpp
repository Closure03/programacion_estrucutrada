
// Calcular los kilometros recorridos por litro y el promedio
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>

using std::setprecision;

// la función main comienza la ejecución del programa
int main()
{
	double distancia;     // declara distancia
	double litros;        // declara litros
	double resultado;     // declara resultado
	double totalkms = 0;  // declara kilometros totales
	double totLitros = 0; // inicializa total litros
	
	while ( litros != -1 ) {
		// indica la entrada y obtiene el valor a partir del usuario (litros)
		// -1 para terminar el ciclo while
		cout << "Introduzca los litros utilizados (-1 en adelante): ";
		cin >> litros;
		
		if ( litros == -1 ) // comprueba si la entrada es -1
		    break; // se salta el bloque "else" si la entrada fue -1
		   
		else { // si la entrada no fue -1 continua con este bloque
			// indica entrada y obtiene valor del usuario (kilometros recorridos)
		    cout << "Introduzca los kilometros recorridos: ";
		    cin >> distancia;
		
		    resultado = distancia / litros; // calcula los kilometros por litro
		    totLitros += litros;            // calcula el total de litros consumido
		    totalkms += distancia;          // calcula el total de distancia recorrida
		   
		    // despliega resultados por tanque
		    cout << fixed << setprecision ( 6 );
		    cout << "Los kilometros / litro para este tanque fueron " << resultado
		         << "\n" << endl;
		}
		
	} // fin de while
	
	// despliega el promedio a partir de las variables "totLitros" y "totalkms"
	cout << "\nEl promedio total de kilometros/litro fue de "
	     << totalkms / totLitros << endl;
	
	return 0; // indica terminación exitosa
	
} // fin de la función main
