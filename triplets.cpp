#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for (int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	if (n<3)
	{
		cout<<"Array is too small";
	}
	else if (n==3)
	{
		if ((arr[0]+arr[1])==arr[2] || (arr[1]+arr[2])==arr[0] || (arr[0]+arr[2])==arr[1])
		{
			cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
		}
	}
	else if (n>3)
	{
		for (int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		for (int i=0; i<n-2; i++)
		{
			for(int j=i+1; j<n-1; j++)
			{
				for (int k=j+1; k<n; k++)
				{
					if ((arr[i]+arr[j])==arr[k])
					{
						cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
						cout<<i<<" "<<j<<" "<<k;
					}
				}
			}
		}
	}

}
