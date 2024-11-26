#include <stdio.h>
double F(double x, double y) {
    // F(x,y) is only defined when x<0 and y<0 or x>=0 and y>=0
    if (x<0 && y<0) return 0;
    else if (x>=0 && x<=1) {
        if (y>=0 && y<=1) return x*y;
        else if (y>1) return x;
    }
    else if (x>1) {
        if (y>=0 && y<=1) return y;
        else if (y>1) return 1;
    }
}
int main(void) {
    printf("Input the values of x and y.\n");
    double X_input, Y_input;
    scanf("%lf %lf",&X_input,&Y_input);
    printf("F(x,y) = %lf\n", F(X_input,Y_input));
    return 0;
}