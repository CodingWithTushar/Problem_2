#include <stdio.h>

int main() {
    int moneyRecevied,itemMoney,leftOver,coins25,coins10,coins5,coins1;
    
    printf("Money recevied\n");
    scanf("%d",&moneyRecevied);
    
    printf("Total Shopping\n");
    scanf("%d", &itemMoney);
    
    leftOver = moneyRecevied - itemMoney;
    
    if(moneyRecevied > itemMoney )
    {
        leftOver = moneyRecevied - itemMoney;
        printf("%d\n",leftOver);
        
        if(leftOver >= 25)
        {
            coins25 = leftOver/25;
            leftOver = leftOver%25;
            printf("Coins of 25 will be %d",coins25);
        } else if (leftOver <= 20 && leftOver <=10 ){
            coins10 = leftOver/10;
            leftOver = leftOver%10;
            printf("Coins of 10 will be %d",coins10);
        } else if(leftOver <= 5) {
            coins5 = leftOver/5;
            leftOver = leftOver%5;
            printf("Coins of 5 will be %d",coins5);
        } else {
            coins5 = leftOver/1;
            printf("Coins of 1 will be %d",coins1);
        }
        
    } else {
        printf("Please a valid amount!\n");
    }

    return 0;
}
