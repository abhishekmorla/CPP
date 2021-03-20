#include <iostream>

using namespace std;

int main()
{
	int n,j;
	cin>>n;
	int ar[n];
	for (int k = 0 ; k < n ; k++)
	{
		cin>>ar[k];
	}
	// sorting
	for (int i = 0; i < n-1; i++)
	{
		int min = i;
		for (j = i+1; i < n; j++)
		{
			if(ar[j] < ar[min])
			{
				min = j;
			}
		}
		int temp = ar[i];
		ar[i] = ar[min];
		ar[min] = temp;
	}
	for (int p = 0 ; p < n ; p++)
	{
		cout<<ar[p];
	}

}
