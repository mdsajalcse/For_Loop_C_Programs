//Loop Variations

#include<stdio.h>
int main(){


    int i,j,k;
    printf("Enter The Initial Value of I,J,K=");
    scanf("%d %d %d",&i,&j,&k);
    for(;i<=10;i++){

        printf("i=%d, j=%d, k=%d\n",i,j,k);
        j--;
        k++;
    }




return 0;
}
