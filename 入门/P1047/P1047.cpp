#include<iostream>
using namespace std;

int main()
{
	int n, arr[10000],a,arr1[100],arr2[100],count=0;
	cin >> n >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> arr1[i] >> arr2[i];
	}

	for (int i = 0; i <= n; i++)
	{
		arr[i] = 1;
	}

	for (int i = 0; i < a; i++)
	{
		for (int j = arr1[i]; j <= arr2[i]; j++)
		{
			arr[j] = 0;
		}
	}

	for (int i = 0; i <= n; i++)
	{
		if (arr[i] == 1)
		{
			count++;
		}
	}
	cout << count;

	return 0;
}