#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int contador = 0;
int comparador(const void *a, const void *b) {
    int A = *(const int*)a;
    int B = *(const int*)b;
    if (A != B) {
        contador++; 
    }
    return (A > B) - (A < B); 
}

int main(){
    int quantidade = 1000;
    int numeros [quantidade];
    for(int i=0;i<quantidade;i++){
        numeros[i] = rand()%5005;
        qsort(numeros, i+1, sizeof(int), comparador);
    }
    contador = 0;
    clock_t timeInicial = clock();
    qsort(numeros, quantidade, sizeof(int), comparador);

    clock_t timeFinal = clock();
    float tempoDemorado = 1000.0 * (double)(timeFinal - timeInicial)/CLOCKS_PER_SEC;
    // for(int i=0; i<quantidade;i++){
    //     printf("%d - %d\n",numeros[i],i+1);
    // }
    printf("contador:%d\n",contador);
    printf("tempo demorado em ms: %f", tempoDemorado);
    return 0;
   
 }
