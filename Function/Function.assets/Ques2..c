#include <stdio.h>
double square(double input) {
    return input*input;
}
int main(void) {
    printf("Input a number : ");
    int input;
    scanf("%d",&input);
    printf("The square of the number is %lf",square(input));
    return 0;
}