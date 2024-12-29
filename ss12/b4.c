#include<stdio.h>
int check(int arr[],int size){
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int temp;
    for(int i=0;i<size-1;i++){
        if(arr[i]< arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=arr[i];
        }
    }
    return arr[size-1];
}
int main(){
    int n;
    printf("nhap so luong phan tu ");
    scanf("%d",&n);
    int arr[n];
    
    printf("phan tu lon nhat la %d ",check(arr,n));

    return 0;
}