#include<stdio.h>
int main(){

   int i,num;
   for(;;){
   printf("Enter any Number ::");
   scanf("%d",&num);
     if(num==0){
        printf("The program is Terminated::");
        break;
    }
   for(i=1;i<=10;i++){


    printf("%2d X %2d = %2d\n",i,num,num*i);


   }
   }


return 0;
}

