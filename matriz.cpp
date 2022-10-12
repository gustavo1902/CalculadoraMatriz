#include <iostream>
using namespace std;
int a =0,b =0,c=0,d=0;
int main(int argc, char** argv) {
    int m1 [3] [4];      //valores inseridos pelo usuario
    int m2 [4] [5];
    printf("Digite a dimensão da matriz A: \n");
    scanf("%d %d", &a, &b);
    printf("\n");
    printf("Digite os valores da matriz A: \n");
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            scanf("%d", &m1[i][j]);
        }
    }
   
    printf("\n");
    printf("Digite a dimensão da matriz B \n");
    scanf("%d %d", &c, &d);
    if (b != c){
        printf("Não é possível multiplicar as matrizes \n");
    }
    else{
    printf("\n");
    printf("Digite os valores da matriz B: \n");
    for(int i=0; i<c; i++){
        for(int j=0; j<d; j++){
            scanf("%d", &m2[i][j]);
        }
    }
        int m3 [a] [d];
        for(int i = 0; i < a; i++){
            for(int j = 0; j < d; j++){
                m3[i][j] = 0;
                for(int k = 0; k < b; k++){
                    m3[i][j] += m1[i][k] * m2[k][j];
                }
            }
        }
        printf("\n");
        printf("Matriz resultante: \n");
        for(int i = 0; i < a; i++){
            for(int j = 0; j < d; j++){
                printf("%d ", m3[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}