/*

1067 - Números Ímpares
https://www.urionlinejudge.com.br/judge/pt/problems/view/1067

*/

#include <stdio.h>

void impar(int num){
  int i;
  for(i = 1; i <= num; i++)
  {
    if(i%2 == 1){
      printf("%d\n", i);
    }
  }

}

int main(void) {
  int num;
  scanf("%d", &num);
  impar(num);
  
  return 0;
}