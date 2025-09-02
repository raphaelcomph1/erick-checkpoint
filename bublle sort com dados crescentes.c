#include <stdio.h>
#include <time.h>


int main(){
    int quantidade = 1000;
    int numeros [quantidade];
    int contador = 0;
    int variTemp;
    
    for(int i=0;i<quantidade;i++){
        numeros[i] = rand()%5001;
        for(int k = 0; k<i; k++){
            for (int j = 0; j<i-k;j++){
                if(numeros[j]>numeros[j+1]){
                    variTemp = numeros[j];
                    numeros[j]=numeros[j+1];
                    numeros[j+1]=variTemp;
                }
            }
        }
    }
    /*Bubble Sort*/
    clock_t timeInicial = clock();
    
    for(int i = 0; i<quantidade; i++){
        for (int j = 0; j<quantidade-i-1;j++){
            if(numeros[j]>numeros[j+1]){
                variTemp = numeros[j];
                numeros[j]=numeros[j+1];
                numeros[j+1]=variTemp;
                contador++;
            }
        }
    }
    
    clock_t timeFinal = clock();
    float tempoDemorado = 1000.0 * (double)(timeFinal - timeInicial)/CLOCKS_PER_SEC;
    for(int i=0; i<quantidade;i++){
        printf("%d\n",numeros[i]);
    }
    printf("contador:%d\n",contador);
    printf("tempo demorado em ms: %.2f", tempoDemorado);
    return 0;
    
}
