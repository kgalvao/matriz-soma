#include <stdio.h>

// Fun��o para preencher a matriz com os valores fornecidos pelo usu�rio
void preencherMatriz(int matriz[][100], int N, int M) {
    printf("Digite os elementos da matriz %d x %d:\n", N, M);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

// Fun��o para calcular a soma de cada coluna e retornar o vetor
void somaDasColunas(int matriz[][100], int vetor[], int N, int M) {
    for (int j = 0; j < M; j++) {
        vetor[j] = 0;  // Inicializa a soma da coluna
        for (int i = 0; i < N; i++) {
            vetor[j] += matriz[i][j];  // Soma os elementos da coluna
        }
    }
}

// Fun��o principal
int main() {
    int N, M;

    // Leitura das dimens�es da matriz
    printf("Digite o n�mero de linhas (N): ");
    scanf("%d", &N);
    printf("Digite o n�mero de colunas (M): ");
    scanf("%d", &M);

    // Definindo a matriz e o vetor para armazenar as somas das colunas
    int matriz[100][100];  // Supondo que N, M <= 100
    int somaColunas[100];

    // Preenchendo a matriz
    preencherMatriz(matriz, N, M);

    // Calculando a soma das colunas
    somaDasColunas(matriz, somaColunas, N, M);

    // Exibindo o vetor com as somas das colunas
    printf("Soma dos elementos de cada coluna:\n");
    for (int j = 0; j < M; j++) {
        printf("%d ", somaColunas[j]);
    }
    printf("\n");

    return 0;
}
