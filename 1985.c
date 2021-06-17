/*
McPronalts | 1985
https://www.urionlinejudge.com.br/judge/pt/problems/view/1985
*/
#include <stdio.h>
int main() {
  int p, q, tipo, i;
  double resul = 0;
  scanf("%i",&p);
  for (i=0;i<p;i++){
  scanf("%i %i",&tipo,&q);
   switch (tipo)
  {
   case 1001:
     resul = resul + (1.5*q);
   break;

   case 1002:
     resul = resul + (2.5*q);
   break;

   case 1003:
     resul = resul + (3.5*q);
   break;

   case 1004:
     resul = resul + (4.5*q);
   break;

    case 1005:
     resul = resul + (5.5*q);
   break;
  }

  }
  printf("%.2lf\n",resul);

  return 0;
}