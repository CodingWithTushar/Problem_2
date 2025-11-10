#include <stdio.h>
#include <string.h>

int main(void) {
    int i1,j1;
    int sum1 ,sum2;
    char firstInput[100];
    char secondInput[100];

    int a,A = 1;
    int b,B = 3;
    int c,C = 3;
    int d,D = 2;
    int e,E = 1;
    int f,F = 4;
    int g,G = 2;
    int h,H = 4;
    int i,I = 1;
    int j,J = 8;
    int k,K = 5;
    int l,L = 1;
    int m,M = 3;
    int n,N = 1;
    int o,O = 1;
    int p,P = 3;
    int q,Q = 10;
    int r,R = 1;
    int s,S = 1;
    int t,T = 1;
    int u,U = 1;
    int v,V = 4;
    int w,W = 4;
    int x,X = 8;
    int y,Y = 4;
    int z,Z = 10;

    printf("1st Player Enter your Word :\n");
    scanf("%s",firstInput);

    printf("2nd Player Enter your Word :\n");
    scanf("%s",secondInput);

    for(i1=0;i1 < strlen(firstInput);i1++ ){
        sum1 += firstInput[i1];
    }

    for(j1=0;j1 < strlen(firstInput);j1++ ){
        sum2 += secondInput[j1];
    }

    if(sum1 > sum2){
        printf("Player 1 wins");
    } else if (sum1 < sum2) {
        printf("Player 2 wins");
    } else {
        printf("TIE!");
    }

    return 0;
}
