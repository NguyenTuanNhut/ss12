#include<stdio.h>
void check(int n){
    int flag=1;
    for(int i=2;i*i<n;i++){
        if(n % i ==0){
            flag=0;
            break;
        }
    }
    if(flag){
        printf("%d la so nguyen to\n",n);
    }
}
int main(){
int a,b;
printf("nhap vao 2 so can kiem tra");
scanf("%d%d",&a,&b);
check(a);
check(b);
return 0;
}