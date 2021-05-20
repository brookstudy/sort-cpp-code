#include <cstdio>
#include <ctime>
#include <algorithm>
#define N 15
using namespace std;
int a[20];
void selectsort()
{
	//begin sorting
	for (int i = 1;i <= N;i++)
	{
		for (int j = i + 1;j <= N;j++)
		{
			if (a[j] > a[i]) swap(a[j], a[i]);
		}
		printf("The %d sort: ", i);
		for (int j = 1;j <= N;j++)
		{
			printf("%d ", a[j]);
		}
		printf("\n\n");
	}
}
int main()
{
	srand(time(0));
	printf("The oringinal list: \n");
    for (int i = 1; i <= N; i++) 
	{
		a[i] = rand() % 150; // random number
		printf("%d ", a[i]);
	}
	printf("\n\n");
	selectsort();
	printf("finish successful!!!\n\n");//finish
	system("pause");
	return 0;
}
