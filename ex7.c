#include <stdio.h>

int main() {
   int n , inver = 0 , i ;
   printf(entrer une nomber :);
   scanf(%d,&n);
   do{
     inver = (inver * 10)  + (n % 10);
     n = n / 10 ;
   }while(n != 0);
   printf( %d ,inver );
   return 0 ;
}
