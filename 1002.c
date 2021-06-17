/*

1002 - Área do Círculo
https://www.urionlinejudge.com.br/judge/pt/problems/view/1002

*/

#include <stdio.h>

int main()
{

 double raio,area;
 scanf("%lf",&raio);
 area=(3.14159*raio*raio);
 printf("A=%.4lf\n",area);
 return 0;

}