/*

1080 - Maior e Posição
https://www.urionlinejudge.com.br/judge/pt/runs/code/23020479

*/

#include <stdio.h>

int main(void) {
  int i=0;
  int num=0;
  int maior, maiorpos;
  while (i < 100){
    scanf("%d",&num);
    if (num > maior){
    maior = num;
    maiorpos = i+1;
    }
    i = i+1;
  }
  printf("%d\n",maior);
  printf("%d\n",maiorpos);
  return 0;
}