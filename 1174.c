/*

1174 - Seleçao em Vetor I
https://www.urionlinejudge.com.br/judge/pt/problems/view/1174

*/

#include <stdio.h>
 
int main() {
    double A[100], x;
    int i;
    for (i=0; i<100; i++){
        scanf("%lf",&A[i]);
    }
    for (i=0; i<100; i++){
        if(A[i]<=10){
            printf("A[%d] = %.1lf\n",i,A[i]);
        }
    }
 
    return 0;
}