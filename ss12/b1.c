#include<stdio.h>
int sum(int x,int z){
    int sum1=x+z;
    return sum1;
}
int main(){
    int a,b;
    printf("nhap 2 so ");
    scanf("%d %d",&a,&b);
    printf("tong cua 2 so la %d ",sum(a,b));
    return 0;
  
}