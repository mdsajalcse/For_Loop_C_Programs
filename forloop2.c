#include<stdio.h>
int main(){

   int i,total_iteration;
   printf("Enter Your Value How much times you iterate::");
   scanf("%d",&total_iteration);

   for(i=1;i<=total_iteration;i++){

    printf("%2d. Hello World.\n",i);
   }

return 0;
}
