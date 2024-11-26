#include <stdio.h>
unsigned int factorial(unsigned int N) {
    int Answer = 1;
    for (int i=1; i<=N; i++)
        Answer *= i;
    return Answer;
}
int main(void) {
    int Answer=0;
    for (int i=1; i<=5; i++) {
        Answer += factorial(i)/i;
    }
    printf("1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5 = %d\n",Answer);
    return 0;
}