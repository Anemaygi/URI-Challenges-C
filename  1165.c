/*

1165 - Número Primo
https://www.urionlinejudge.com.br/judge/pt/problems/view/1165

*/

#include <stdio.h>

int main(void) {
  int i, qtd, cont, pr, num[100];
  scanf("%d",&qtd);
  while (i<qtd){
    scanf("%d",&num[i]);
    i = i+1;

  }

  i = 0;
  while (i < qtd){
    pr = 0;
    for(cont = 2; cont < num[i]-1 ; cont++){
      if (num[i] % cont == 0){
        pr = pr + 1;
      } 
    }

    if (pr == 0){
      printf("%d eh primo\n",num[i]);
    }
    else{
      printf("%d nao eh primo\n",num[i]);
    }
    
  
    i = i + 1;

  }
  return 0;
}