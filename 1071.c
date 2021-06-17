/*

1071 - Soma de Impares Consecutivos I
https://www.urionlinejudge.com.br/judge/pt/problems/view/1071

*/

#include <stdio.h>

void somaimpar(int a, int b){
  int i, soma, maior, menor;
  soma = 0;
  if(a>b){
    maior = a;
    menor = b;
  }
  else{
    maior = b;
    menor = a;
  }

  for(i = menor+1; i <= maior-1; i++)
  {
    if(i%2 != 0){
      soma = soma + i;
    } 
  }
  printf("%d\n", soma);
}

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  somaimpar(a, b);
  return 0;
}