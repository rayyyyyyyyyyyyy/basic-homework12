#include <stdio.h> 

#include <stdlib.h> 

int main(void)

{

    int a, b, c, d, t ; 

    printf("��J�ȡG ");

    scanf("%d", &t); 

    d = t; 

    for(c=1; c<=d; c++){ 

    for(b=t; b<d; b++) 

    printf(" ");

    for(a=1; a<=t; a++)  

    printf("*");

    printf("\n"); 

    t--;

                       }
    
    system("pause"); 

    return 0; 

}
