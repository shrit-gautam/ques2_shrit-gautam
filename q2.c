#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=0,b=i;
        while(b!=0){
            b=b/10;
            a++;
        }
        b=i;
        int sum=0;
        while(b!=0){
            sum+=pow(b%10,a);
            b=b/10;
        }
        if(sum==i){
            printf("%d\n",i);
        } 
    }
    return 0;
}