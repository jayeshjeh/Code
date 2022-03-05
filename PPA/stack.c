#include<stdio.h>

int addition(int no1, int no2){
    auto int ans = 0;

    ans = no1 + no2;

    return ans;

}

int main(){

    auto int iValue1 =0, iValue2 =0;
    auto int iret = 0;
    
    printf("Enter first number\n");
    scanf("%d", &iValue1);

    printf("Enter second number\n");
    scanf("%d", &iValue2);

    iret = addition(iValue1, iValue2);
    printf("Addiition of two numbers is: %d", iret);

    return 0;
}
