/*

1015 - Distância Entre Dois Pontos
https://www.urionlinejudge.com.br/judge/pt/problems/view/1015

*/

#include<stdio.h>
#include<math.h>

int main()
{
    float x1,y1,x2,y2,a1,a2,res;
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);
    a1=x2-x1;
    a2=y2-y1;
    res=sqrt((a1*a1)+(a2*a2));
    printf("%.4f\n",res);
    return 0;
}