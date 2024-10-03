#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("The value of argc is %d\n",argc);
    for(int i=1; i<=argc; i++){
        printf("The value at index %d is %s\n", i, argv[i]);
    }
    return 0;
}
