#include<stdio.h>
void main(){
    int arr[10];
    int rev[10];
    int f;
    int x = 0;
    int i;
    int j;
    for(i=0;i<10;i++){
        printf("\nNumber %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    for(f=9;f>=0;f--){
        rev[x] = arr[f];
        x++;
    }
    printf("Resulf:");
    for(j=0; j<10;j++){
        printf(" %d", rev[j]);
    }
}