#include <stdio.h>
#include <math.h>
double Newtom_Method(double X, double startPoint) {
    int r1 = startPoint, r2;
    while (1) {
        r2 = 0.5 * (r1 + X/r1);
        if (abs(r1-r2)<1e-15) break;
        r1 = r2;
    }
    return r2;
}
int main(void) {
    printf("Input the value of X and the start point.\n");
    int X_input, startPoint;
    scanf("%d %d",&X_input,&startPoint);
    printf("The root of X is %lf.\n",Newtom_Method(X_input,startPoint));
    return 0;
}