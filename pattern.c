#include<stdio.h>
int main(){
    int row=5;
    int j;
    for(int i=0; i<row; i++){
        for( j=0; j<2*(row-i)-1; j++){
            printf(" ");
        }
        for(int k=0; k<=i; k++){
            // printf("* ");
            printf("%d ", j);
        }
        printf("\n");
    }
}