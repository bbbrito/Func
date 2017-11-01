#include <stdlib.h>

int cubo( int );
int main()
{
    int a = 10;
    int resultado;
    resultado = cubo( a );

    return 0;
}
int cubo( int x )
{
    return x*x*x;
}