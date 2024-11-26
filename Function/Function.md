# Answer for *Function*

> Name: Chen Xingyu
>
> ID: 202310502016

## Ques 1.

> 1. What is the output of the following program? Please predict and then try.
>
> ```cpp
> int main()
> {        
>     int i = 0, j = 0;
>     for (i = 0;i < 7; i++)
>     {            
>         for (j = 0;j < 6; j++)
>         {               
>             printf("i=0 \n");
>             if (i > 1)      
>                 break;      
>         }     
>         printf("nested time \n");  
>     }  
>     return 0; 
> }
> ```

The output of the program is

```cpp
i=0 
i=0 
i=0 
i=0 
i=0 
i=0 
nested time 
i=0 
i=0 
i=0 
i=0 
i=0 
i=0 
nested time 
i=0 
nested time 
i=0
nested time
i=0
nested time
i=0
nested time
i=0
nested time
```

## Ques 2.

>2. Write a function to find the square of a number. The input is the number itself and the output is its square.

Here's my program.

```cpp
#include <stdio.h>
// The function to calculate the square of a number.
double square(double input) {
    return input*input;
}
// The main function.
int main(void) {
    printf("Input a number : ");
    int input;
    scanf("%d",&input);
    printf("The square of the number is %lf",square(input));
    return 0;
}
```

## Ques 3.

> 3. Write a main function to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5. A function should be defined calculating n!.

Here's my program.

```cpp
#include <stdio.h>
// The function designed for calculating N!
unsigned int factorial(unsigned int N) {
    int Answer = 1;
    for (int i=1; i<=N; i++)
        Answer *= i;
    return Answer;
}
// THe main function
int main(void) {
    int Answer=0;
    for (int i=1; i<=5; i++) {
        Answer += factorial(i)/i;
    }
    printf("1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5 = %d\n",Answer);
    return 0;
}
```

