#include <stdio.h>

int main(){
    for (int j = 0; j <60; ++j) {
        printf("-");
    }
    printf("\n");
    for (int i = 1; i < 11; ++i) {
        for (int j = 1; j < 11; ++j) {
            printf("|%d|  ",i*j);
            if(i*j<=9){
                printf(" ");
            }
        }
        printf("\n");
        for (int j = 0; j <60; ++j) {
            printf("-");
        }
        printf("\n");
    }
    return 0;
}