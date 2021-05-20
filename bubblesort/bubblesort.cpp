#include <cstdio>
#include <algorithm>
#include <ctime>
#define N 15 // max length
using namespace std;
int a[20];
void bubblesort()
{
	//begin sorting
	for (int i = 1; i <= N; i++) { 
		for (int j = 1; j <= N - i; j++)
		{
			if (a[j]>a[j + 1]) { 
				swap(a[j], a[j + 1]);
			}
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
    bubblesort();
    printf("finish successful!!!\n\n");//finish
    system("pause");
	return 0; 
}
