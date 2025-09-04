#include <stdio.h>

int main() {
   int n , index= 0 , i ;
   printf(entrer une nomber :);
   scanf(%d,&n);
   do{
     n = n / 10 ;
     index++ ;
   }while(n != 0);
   printf( %d ,index );
   return 0 ;
}
