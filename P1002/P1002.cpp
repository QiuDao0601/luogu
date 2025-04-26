#include<iostream>
using namespace std;

int main()
{
	double sum=0;
	int n=1,k;
	cin >> k;
	while (sum <= k)
	{
		sum += 1.0 / n;
		n++;
	}
	cout << n-1;

	return 0;
}