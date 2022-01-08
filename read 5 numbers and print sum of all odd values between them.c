#include<stdio.h>
#include<math.h>

int main()
    {
        int arr[5], sum=0;
        for(int i=0; i<=4; i++){
            scanf("%d", &arr[i]);

            if(arr[i]%2!=0){
                sum= sum + arr[i];
            }
        }
        printf("%d", sum);
        return 0;    
    }
