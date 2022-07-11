
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    int a = 0, b = 0;
//    scanf("%d %d", &a, &b);
//    int c = a > b ? a : b;
//    printf("%d", c);
//    return 0;
//}

#include<stdio.h>

int main()
{
    int x = 0, y = 9;
    scanf("%d", &x);
    if (x < 0)
    {
        y = 1;
    }
    if (x = 0)
    {
        y = 0;
    }
    if (x > 0)
    {
        y = -1;
    }
    printf("%d\n", y);
    return 0;
}