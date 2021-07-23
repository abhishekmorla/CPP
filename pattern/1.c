#include <stdio.h>


int main(){
    printf("Hello world!\n");
    int n;
    scanf("%d",&n);
    for (int i = 1 ; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
             if (j == 1 || i == n || i == 1 || j == n)
             {
                 printf("*");
             }
             else{
                 printf(" ");
             }
        }
        printf("\n");  
    }
    return 0;
}