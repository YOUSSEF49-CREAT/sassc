#include <stdio.h>

int main() {
   int i , nomber_1 , nomber_2 , power = 1;
    printf(entrer un nomber de nombre 1 :);
    scanf(%d, &nomber_1);
     printf(entrer un nomber de nomber 2:);
    scanf(%d, &nomber_2);
    for(i=0;i<nomber_2;i++){
       power = power * nomber_1 ; 
    }
    printf(la puissance est %d ,power);
   return 0 ;
}
