#include<stdio.h>
#include<math.h>
int main(){
int i, num;
printf("Enter number of terms: ");
scanf("%d", &num);
for(i=1; i<=num; i++){
    int cube=i*i*i;
    // int cube=i^3;
    printf("Number is %d and cube of the %d is : %d\n", i, i, cube);
}
    return 0;
}