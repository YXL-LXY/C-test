//#include <stdio.h>
//int main()
//{
//    int i = 43;
//    printf("%d\n", printf("%d", printf("%d", i)));
//    return 0;
//}

//���Ϊ4321
//ԭ����printf�ķ���ֵ��������ַ�������


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

//�������	C4700	ʹ����δ��ʼ���ľֲ�������b��	
//˵��switch��䲻���ʼ��b


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
//������������ֱ��ǣ�10��4��11����ô��ʹ��ˣ������˵���������һ����10û��ʲô���⣬
//�ڶ�����4��Ҳû��ʲô���⣬��Ϊ��32λ����һ��int��4���ֽڡ����ǵ�����Ϊʲô����Ĳ���11�أ�
//��Ȼ����10��ԭ���ǣ�sizeof����һ����������һ��������������i++�����͵�size������һ��������
//��������ǰ������ʱ����ȫ�����飬���ԣ�sizeof(i++)ֱ�Ӿͱ�4��ȡ���ˣ�������ʱҲ�Ͳ�������i++������ʽ��