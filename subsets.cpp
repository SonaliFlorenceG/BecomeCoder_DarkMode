//#include<bits/stdc++.h>
//#include<math.h>
//using namespace std;
//int main()
//{
//	int arr[4]={1,2,3,4};
//	int length=4;
//	for (int i=0; i<pow(2,length); i++)
//	{
//		int n=length;
//		int index=0;
//		while(n)
//		{
//			n--;
//			if (i&(int)(pow(2,n)))
//			{
//				cout<<arr[index]<<" ";
//			}
//			index++;
//		}
//		cout<<endl;
//	}
//	return 0;
//}

//recursion

#include<bits/stdc++.h>
using namespace std;
void Subset(vector<int>v,int index,vector<int>ans,int size)
{
	if (index>=size)
	{
		for(int i=0;i<ans.size();i++)
		{ 
			cout<<ans[i]<<" ";
		}
		cout<<endl;
		return;
	}
	ans.push_back(v[index]);
	Subset(v,index+1,ans,size);
	ans.pop_back();
	Subset(v,index+1,ans,size);
}
int main()
{
	vector<int>v;
	v.push_back(9);
	v.push_back(7);
	v.push_back(6);
	Subset(v,0,{},v.size());  
}

















