#include <stdio.h> 
int main(){
    int m, n;
    //printf("Input matrix size: ");
    scanf("%d %d", &m, &n );
    int a[100][100], b[100][100], c[100][100];

    for(int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
        scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &b[i][j]);
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}