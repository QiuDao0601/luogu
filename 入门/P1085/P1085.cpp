//P1085 [NOIP 2004 普及组] 不高兴的津津
#include<iostream>
using namespace std;

int main()
{
	int arr[2][7], sum=0, i, day = -1;
	for (int i=0;i<7;i++)
	{
		cin >> arr[0][i] >> arr[1][i];
	}

	for (i = 0; i < 7; i++)
	{
		if (arr[0][i] + arr[1][i] > 8 && arr[0][i] + arr[1][i] > sum)
		{
			day = i;
			sum = arr[0][i] + arr[1][i];
		}
	}

	cout << day + 1;

	return 0;
}