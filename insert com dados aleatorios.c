#include <stdio.h>
#include <time.h>


int main(){
    int quantidade = 1000;
    int numeros [quantidade];
    int contador = 0;
    
    for(int i=0;i<quantidade;i++){
        numeros[i] = rand()%5004;
    }
    clock_t timeInicial = clock();
    
    for (int i = 1; i < quantidade; i++) {
        int numeroEsperado = numeros[i];
        int j = i - 1;
        while (j >= 0 && numeros[j]> numeroEsperado) {
            numeros[j+1] = numeros[j];
            j--;
            contador++;
        }
        numeros[j+1] = numeroEsperado;
    }
    clock_t timeFinal = clock();
    float tempoDemorado = 1000.0 * (double)(timeFinal - timeInicial)/CLOCKS_PER_SEC;
    for(int i=0; i<quantidade;i++){
        printf("%d\n",numeros[i]);
    }
    printf("contador:%d\n",contador);
    printf("tempo demorado em ms: %f", tempoDemorado);
    return 0;
    
}
