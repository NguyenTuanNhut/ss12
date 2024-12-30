#include<stdio.h>
#define max 100
int maxtrix[max][max];
int initarray(int row,int col){
    printf("nhap mang\n");
    for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        scanf("%d",&maxtrix[i][j]);
    }
    }
}
void printarr(int row,int col){
    for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
       printf("%d ",maxtrix[i][j]);
    }
    }

}
int main(){
    int row=3,col=3;
    initarray(row,col);
    printarr(row,col);
    return 0;
}