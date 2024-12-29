#include<stdio.h>
int factorial(int x){
      int sum=1;
      for(int i=1;i<=x;i++){
        sum*=i;
      }
      return sum;
}
int main(){
    int n;
    printf("nhap n");
    scanf("%d",&n);
    printf("ket qua la %d",factorial(n));
    return 0;
}