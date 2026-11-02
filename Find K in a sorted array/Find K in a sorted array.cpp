#include <stdio.h>

int main()
{
	int a[100], n, i, K, positon, ok = 0, left = 0, mid;

	printf("The number of elements is ");
	scanf_s("%d", &n);

	int right = n - 1;

	printf("The wanted number is ");
	scanf_s("%d", &K);

	printf("The elements are: ");
	for (i = 0; i < n; i++)
		scanf_s("%d", &a[i]);
	
	while ((left <= right) && (ok == 0))
	{
		mid = (left + right) / 2;
		if (a[mid] == K)
		{
			positon = mid;
			ok = 1;
		}
		else 
			if (a[mid] < K)
				left = mid + 1;
		else
			right = mid - 1;
	}

	if (ok == 1)
	{
		printf("The number exists inside the array ");
		printf("on this position: %d", positon+1);
	}
	else
		printf("The number does not exist inside the array.");

	return 0;
}