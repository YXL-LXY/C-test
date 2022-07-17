#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//
// 等差数列求和 a1 = 2, d = 3
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int num = 2 * n + (3 * n * (n - 1)) / 2;
//	printf("%d",num);
//	return 0;
//}

//记负均正
//int main()
//{
//    int num;
//    int a[1000];
//    while (scanf("%d", &num) != EOF)
//    {
//        int count = 0;
//        int countint = 0;
//        float sum = 0;
//        for (int i = 0; i < num; i++)
//        {
//            scanf("%d", &a[i]);
//            if (a[i] < 0)
//            {
//                count++;
//            }
//            if (a[i] > 0)
//            {
//                countint++;
//                sum += a[i];
//            }
//        }
//        if (countint > 0)
//        {
//            printf("%d %0.1f\n", count, sum / countint);
//        }
//        else
//        {
//            printf("%d 0.0", count);
//        }
//    }
//}


//旋转数组的最小数字
//int minNumberInRotateArray(int* rotateArray, int rotateArrayLen) {
//    // write code here
//    int left = 0;
//    int right = rotateArrayLen - 1;
//    while (left < right)
//    {
//        int mid = (left + right) / 2;
//        if (rotateArray[mid] < rotateArray[right])
//        {
//            right = mid;
//        }
//        else if (rotateArray[mid] > rotateArray[right])
//        {
//            left = mid + 1;
//        }
//        else
//            right--;
//    }
//    return rotateArray[left];
//}