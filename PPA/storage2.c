#include<stdio.h>

void demo()
{
    auto int a = 10;
    a++;
    printf("%d\n", a);
}

void hello()
{
    static int a = 10;
    a++;
    printf("%d\n", a);
}

int main()
{
    demo();

    demo();

    hello();
    hello();

    return 0;
}
