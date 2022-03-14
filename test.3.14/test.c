#include<stdio.h>
void sort(int* arr, int n)
{
    int i = 0;
    int j = 0;
    int t = 0;
    for (i = 1; i < n; i++)
    {
        int flag = 1;
        for (j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
                flag = 0;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }

}


int main()
{
    int x = 0;
    scanf("%d", &x);
    int* p = (int*)calloc(x, sizeof(int));
    for (int i = 0; i < x; i++)
    {
        scanf("%d", p + i);
    }
    sort(p, x);
    for (int i = 0; i < x; i++)
    {
        printf("%d ", p[i]);
    }
    return 0;
}