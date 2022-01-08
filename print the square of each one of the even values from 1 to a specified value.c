/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<math.h>

int main()
    {
        int a;
        scanf("%d", &a);
        for(int i=1; i<=a; i++){
            if(i%2==0){
                printf("%d^2=%d",i,i*i );
            }
        }
        
        return 0;
    }
