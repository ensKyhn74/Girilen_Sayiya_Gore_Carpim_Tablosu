#include <stdio.h>
// klavyeden girilen sayının 0'dan 9'a kadar çarpım tablosunu oluştur.

int main() 

{
 
  int i,j;
  
  printf("sayi girin: ");
  scanf("%d",&i);
  
  for(j = 0 ; j <= 9 ; j++)
  {
    printf("%d x %d = %d\n",i,j,i*j);
  }
  
  return 0;

}