# Answer For *Program Control*

> Name: Chen Xingyu
>
> ID: 2023190502016

## Ques 1.

> You will ask the user to input a number. Your program will judge if the number is even or odd and  the judgment will be shown to the user. 

Here's my program:

```cpp
#include <stdio.h>
int main(void) {
    printf("Please input a number: ");
    int input;
    scanf("%d",&input);
    if (input%2 == 0) printf("The number is an even number.\n");
    else printf("The number is an odd number.\n");
    return 0;
}
```

## Ques 2.

> There is a piecewise function: 
>
> <img src="./Program%20Control.assets/image-20231013002523297.png" alt="image-20231013002523297" style="zoom:33%;" />
>
> You will ask the user to input the values of x and y. Based on the inputs, the F(x,y) value will be  calculated and shown to the user. Please write a C program realizing this. You are encouraged to use  a flowchart and pseudocode. 

Here's my program:

```cpp
#include <stdio.h>
// The Definition of F(x,y)
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
// The main function
int main(void) {
    printf("Input the values of x and y.\n");
    double X_input, Y_input;
    scanf("%lf %lf",&X_input,&Y_input);
    printf("F(x,y) = %lf\n", F(X_input,Y_input));
    return 0;
}
```

And Here's my flowchart to solve the Question.

<img src="./Program%20Control.assets/fbffc44615852e736e720ed50afb2341.jpeg" alt="fbffc44615852e736e720ed50afb2341" style="zoom:33%;" />

## Ques 3.

> Explain the following program and predict the output. 
>
> ```cpp
> #include <stdio.h>
> int main(){ 
>     int i=2;
>     switch (i)
>     {
>         case 1: 
>             printf("Case1 "); 
>             break;
>         case 2: 
>             printf("Case2 ");
>             break;
>         case 3:
>             printf("Case3 ");
>             break;
>         case 4: 
>             printf("Case4 ");
>             break;
>         default:
>             printf("Default ");
>     }
>     return 0;
> }
> ```
>
> You may run the program in your C programming environment and check if your prediction is corrector not. 
>
> Remove some and all ‘break’ in the program. Predict and verify the output.  

My explanation for the program:

- Firstly, the variable `i` is defined and be valued with `2`;
- Then the switch statement judges the value of `i`, and finds its value is 2, matching the `case 2:`
- The program jumped to the line of `case 2:` and then it process down.
  - The program first reaches `printf("Case 4 ");` . So it prints the string `Case 4 ` on the screen
  - Then the program reaches `break;` . So it jumps out of the braces.
- Then the programs reaches `return 0;` , which means the end of the program.

So if we remove all the 'break' in the program. the program won't jump out of the braces in the right time and process the code in `default:` part. And its output should be :

```
Case4 Default 
```

