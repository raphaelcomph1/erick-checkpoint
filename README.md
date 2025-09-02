# Atividade Checkpoint — Medindo Performance de Ordenações (C)
Neste repositorio esta a implmentacao e instrucao de como usar o Bubble Sort, Insertion Sort e qsort para ordernação.

Neste readme coloquei apenas a base do codigo, no repositorio voce pode acessar os codigos completos.



## Bubble sort
Algoritmo simples que compara pares de elementos adjacentes e os troca se estiverem na ordem errada.
```
int main(){
    int quantidade = 1000;
    int numeros [quantidade];
    int contador = 0;
    int variTemp;
    
    for(int i=0;i<quantidade;i++){
        numeros[i] = rand()%5001;
    }
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
```

## Insert sort 
Insere elementos em uma parte já ordenada do vetor, um por vez.
```
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

``` 

## Qsort
Função pronta da linguagem C que implementa uma versão otimizada de QuickSort.
```
int main(){
    int quantidade = 1000;
    int numeros [quantidade];
    for(int i=0;i<quantidade;i++){
        numeros[i] = rand()%5005;
    }
    
    qsort(numeros, quantidade, sizeof(int), comparador);
    clock_t timeInicial = clock()
```

## Como usar
Caso queira fazer testes com mais numeros basta mudar a variavel 'quantidade' e o rand no modelos.
```
int quantidade = 1000;
numeros[i] = rand()%5005;
```

##  Grupo 
1CCPH 
563415 Fernando Caires Silva \
563567 Raphael Mischiatti de Souza \
563500 Guilherme Martins Rezende