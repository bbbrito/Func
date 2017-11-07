#include <stdlib.h>
#include <iostream>
using std::cout;
using std::cin;

int cuboPorValor( int );
void cuboPorReferencia (int &); /* parâmetros serão passados por referência */

int main()
{
    int a = 10;
    cout << "O valor original de a eh: " << a;
    cout << '\n';
    a = cuboPorValor( a );
    cout << "O cubo do numero eh: " << a;
    cout << '\n';

	cout << "O valor original de a eh: " << a;
	cout << '\n';
	cuboPorReferencia(a);
	cout << "O cubo do numero eh: " << a;

/* Atividade função rand */
    int i;
    int number;
    int contPar = 0;
    int contImpar = 0;
    int somaPar = 0;
    int somaImpar = 0;
    for (i = 1; i <= 10; i++)
    {
        number = 1 + (rand() % 10);
        cout << "Número: " << number << '\n';
        if (number % 2 == 0)
        {
            contPar++;
            somaPar += number;
        }
        else
        {
        contImpar++;
        somaImpar += number;
        }

    }
    cout << "Número de pares: " << contPar << '\n';
    cout << "Número de ímpares: " << contImpar << '\n';
    cout << "Média pares: " << somaPar / contPar << '\n';
    cout << "Média ímpares: " << somaImpar / contImpar << '\n';
    
    system ("pause");  
    return 0;
}

int cuboPorValor( int x )
{
    return x*x*x; /* eleva ao cubo a variável local a */
}

void cuboPorReferencia(int &y)
{
    int a = y;
    y = a * a * a; /* eleva ao cubo a variável local a */
}