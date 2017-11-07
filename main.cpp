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