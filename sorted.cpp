#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n;
	cin>>m;
	cin>>n;
	int a[m];
	int b[n];
	for (int i=0; i<m; i++)
	{
		cin>>a[i];
	}
	for (int j=0; j<n; j++)
	{
		cin>>b[j];
	}
	int c[m+n];
	int i=0,j=0,v=0;
	while(i<m && j<n)
	{
		if (a[i]<b[j])
		{
			c[v]=a[i];
			i++;
			v++;
		}
		else if (a[i]==b[j])
		{
			c[v]=a[i];
			v++;
			c[v]=b[j];
			i++;
			j++;
			v++;
		}
		else 
		{
			c[v]=b[j];
			j++;
			v++;
		}
	}
	if (i<m-1)
	{
		for (int k=i; k<m; k++)
		{
			c[v]=a[k];
			v++;
		}
	}
	else if(j<n-1)
	{
		for(int k=j; k<n; k++)
		{
			c[v]=b[k];
			v++;
		}	
	}
	for (int i=0; i<(m+n); i++)
	{
		cout<<c[i]<<" ";	
	}
	return 0;
}
