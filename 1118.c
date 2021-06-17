/*

1118 - Várias Notas Com Validação
https://www.urionlinejudge.com.br/judge/pt/problems/view/1118

*/

#include <stdio.h>
 
int main() {
    double media, test1, test2, nota;
    int x, i = 1;
    for(x=1; x!=2; ){
        scanf("%lf",&nota);
        if (nota < 0 || nota > 10){
            printf("nota invalida\n");
            }
        else{
        if (i==1){
            test1 = nota;
            i = i+1;
        }
        else if (i==2){
            test2 = nota;
            media = (test1+test2)/2;
            printf("media = %.2lf\n",media);
            i = 1;
            do{
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d",&x);}while (x != 1 && x != 2);
        }
            
        }
    }
    return 0;
}