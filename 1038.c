/*

1038 - Lanche
https://www.urionlinejudge.com.br/judge/pt/problems/view/1038

*/


#include <stdio.h>
int main() {
 int cod, qtd;
 double preco;
 scanf("%d %d", &cod, &qtd);

  if(cod == 1)
  {
    preco = 4.0;
  }

  if(cod == 2)
  {
    preco = 4.5;
  }

  if(cod == 3)
  {
    preco = 5.0;
  }

  if(cod == 4)
  {
    preco = 2.0;
  }

  if(cod == 5)
  {
    preco = 1.5;
  }

  preco = preco * qtd;
  printf("Total: R$ %.2lf\n",preco);
  return 0;
}
