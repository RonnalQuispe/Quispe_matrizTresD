#include <stdio.h>

int main()
{
    int x, y, z;
    printf("Ingrese las dimensiones del arreglo tridimensional:\n"); // pedimos al usuario dimesiones de la matriz
    printf("Primera dimension:");
    scanf("%d", &x);
    printf("Segunda dimension:");
    scanf("%d", &y);
    printf("Tercera dimension:");
    scanf("%d", &z);
    int arreglo[x][y][z];

   
    return 0;
}
