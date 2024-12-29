#include<stdio.h>
void printarr(int arr[],int size){
    printf("cac phan tu trong mang la ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int n;
    printf("nhap so luong phan tu");
    scanf("%d",&n);
    int arr[n];
    printf("nhap mang");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printarr(arr,n);
}