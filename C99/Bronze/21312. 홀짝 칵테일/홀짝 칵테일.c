#include <stdio.h>

int main(){
    int a1,a2,a3;
    int ans=1;
    scanf("%d %d %d",&a1,&a2,&a3);
    if(a1%2==1)
        ans*=a1;
    if(a2%2==1)
        ans*=a2;
    if(a3%2==1)
        ans*=a3;
    if(a1%2==0&&a2%2==0&&a3%2==0)
        ans = a1*a2*a3;
    printf("%d\n",ans);
    return 0;
}