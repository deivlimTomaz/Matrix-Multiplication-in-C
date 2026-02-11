#include <stdio.h>
#include <stdlib.h>

int main(){
    int mA[2][3], mB[3][4], mR[2][4];
    int i, j;
    
    printf("Enter values for matrix A:\n");

    for(i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            scanf("%d", &mA[i][j]);
        }
    }

    system("clear");

    printf("Enter values for matrix B:\n");

    for (i = 0; i < 3; i++){
        for (j = 0; j < 4; j++){
            scanf("%d", &mB[i][j]);
        }
    }

    system("clear");

    for (i = 0; i < 2; i++){
        for (j = 0; j < 4; j++){
            mR[i][j] = 0;

            for(int k = 0; k < 3; k++){
                mR[i][j] = mR[i][j] + mA[i][k] * mB[k][j];
            }
        }
    }

    printf("\nFirst matrix is: \n");

    for ( i = 0; i < 2; i++){
        for ( j = 0; j < 3; j++){
            printf("%d\t", mA[i][j]);
        }
        printf("\n");
    }

    printf("\nSecond matrix is: \n");

    for (i = 0; i < 3; i++){
        for (j = 0; j < 4; j++){
            printf("%d\t", mB[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix multiplication is:\n");

    for(i = 0; i < 2; i++){
        for (j = 0; j < 4; j++){
            printf("%d\t", mR[i][j]);
        }
        printf("\n");
    }

    return 0;
}