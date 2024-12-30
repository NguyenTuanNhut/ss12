#include<stdio.h>
int gcd(int x,int y){
    while(y!=0){
        int r=x%y;
        x=y;
        y=r;
    }
    return x;
}
int main(){
    int a,b;
    printf("nhap so can kiem tra ");
    scanf("%d%d",&a,&b);
    printf("uoc chung lon nhat la %d",gcd(a,b));
    return 0;
}
