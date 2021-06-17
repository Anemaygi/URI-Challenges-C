/*
Troca em Vetor I | 1175
https://www.urionlinejudge.com.br/judge/pt/problems/view/1175
*/

#include <stdio.h>
int main() {
int N[20], i;
for (i=0;i<20;i++){
  scanf("%d",&N[i]);
}
for (i=0;i<20;i++){
  printf("N[%i] = %i\n",i,N[19-i]);
}

return 0;
}