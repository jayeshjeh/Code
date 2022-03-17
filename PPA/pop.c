#include<stdio.h>

int Addition(int no1, int no2){
    auto int iAns = 0;

    iAns = no1 + no2;
    return iAns;
}

int sub(int no1, int no2){
    auto int iAns = 0;

    iAns = no1 - no2;
    return iAns;
}

int main(){

    int v1 = 0, v2 =0, iret =0;

    printf("Enter first number");
    scanf("%d", &v1);

    printf("Enter first number");
    scanf("%d", &v2);
    
    iret = Addition(v1, v2);
    printf("Adiition is : %d\n", iret);

    iret = sub(v1, v2);
    printf("Substraction is : %d\n", iret);

    return 0;
}
