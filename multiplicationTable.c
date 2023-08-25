#include<stdio.h>
int main(){

   int i,num;
   printf("Enter any Number ::");
   scanf("%d",&num);
   for(;;)
    {
   for(i=1;i<=10;i++){

    printf("%2d X %2d = %2d\n",i,num,num*i);
    break;
   }
   }

return 0;
}
