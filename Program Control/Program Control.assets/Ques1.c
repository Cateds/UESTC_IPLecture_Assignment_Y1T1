#include <stdio.h>
int main(void) {
    printf("Please input a number: ");
    int input;
    scanf("%d",&input);
    if (input%2==0) printf("The number is an even number.\n");
    else printf("The number is an odd number.\n");
    return 0;
}