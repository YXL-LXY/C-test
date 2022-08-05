#define _CRT_SECURE_NO_WARNINGS 1
#include"Queue.h"

void QueueTest1()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);

	printf("%d ", QueueFront(&q));
	QueuePop(&q);
	printf("%d ", QueueFront(&q));
	QueuePop(&q);

	QueuePush(&q, 4);
	QueuePush(&q, 4);
	QueuePush(&q, 4);

	while (!QueueEmpty(&q))
	{
		printf("%d ", QueueFront(&q));
		QueuePop(&q);
	}
	printf("\n");

	QueueDestroy(&q);
}

int main()
{
	QueueTest1();
	return 0;
}