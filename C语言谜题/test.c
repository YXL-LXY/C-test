//#include <stdio.h>
//int main()
//{
//    int i = 43;
//    printf("%d\n", printf("%d", printf("%d", i)));
//    return 0;
//}

//结果为4321
//原因是printf的返回值是输出的字符个数。


//#include <stdio.h>
//int main()
//{
//    int a = 1;
//    switch (a)
//    {
//        int b = 20;
//    case 1:
//        printf("b is %d\n", b);
//        break;
//    default:
//        printf("b is %d\n", b);
//        break;
//    }
//    return 0;
//}

//编译错误	C4700	使用了未初始化的局部变量“b”	
//说明switch语句不会初始化b


//
//#include <stdio.h>
//int main()
//{
//    int i;
//    i = 10;
//    printf("i : %d\n", i);
//    printf("sizeof(i++) is: %d\n", sizeof(i++));
//    printf("i : %d\n", i);
//    return 0;
//}
//
//如果你觉得输出分别是，10，4，11，那么你就错了，错在了第三个，第一个是10没有什么问题，
//第二个是4，也没有什么问题，因为是32位机上一个int有4个字节。但是第三个为什么输出的不是11呢？
//居然还是10？原因是，sizeof不是一个函数，是一个操作符，其求i++的类型的size，这是一件可以在
//程序运行前（编译时）完全的事情，所以，sizeof(i++)直接就被4给取代了，在运行时也就不会有了i++这个表达式。