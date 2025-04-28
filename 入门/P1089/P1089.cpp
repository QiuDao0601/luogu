//P1089 [NOIP 2004 提高组] 津津的储蓄计划
#include<iostream>
using namespace std;

int main()
{
	double  current = 0, save = 0;
	int left = 0,i,arr[12];
	bool check = false;

	for (int i = 0; i < 12; i++)
	{
		cin >> arr[i];
	}

	for (i = 0; i < 12; i++)
	{
		current = left + 300;
		left = current - arr[i];
		if (left < 0)
		{
			check = true;
			break;
		}
		save += 100 * (left / 100);
		left = left % 100;
		current = left;
	}

	if (check)
	{
		cout <<  (-1) * i - 1;
	}
	else
	{
		cout << save * 1.2 + left;
	}

	return 0;
}