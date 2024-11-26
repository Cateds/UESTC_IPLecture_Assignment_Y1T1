#include <stdio.h>
int main()
{        
    int i = 0, j = 0;
    for (i = 0;i < 7; i++)
    {            
        for (j = 0;j < 6; j++)
        {               
            printf("i=0 \n");
            if (i > 1)      
                break;      
        }     
        printf("nested time \n");  
    }  
    return 0; 
}