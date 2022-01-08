#include <stdio.h>

int main()
{
    int n, i, a=0, b=1;
    scanf("%d", &n);
    printf("%d %d ", a, b);
    
    int c= a+b;
    for(i=3; i<=n; i++){
        printf("%d ", c);
        a= b;
        b = c;
        c= a + b;
        
    }

    return 0;
}
