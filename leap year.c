
#include<stdio.h>
#include<math.h>

int main(){
    int a;
    scanf("%d", &a);
    (a%4==0 && (a%400==0 || a%100!=0) ? printf("leap year"): printf(" not leap year"));
    return 0;
}

