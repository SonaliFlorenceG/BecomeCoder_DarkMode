//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	stack<int>st;
//	st.push(4);
//	st.push(5);
//	st.pop();
//	st.push(10);
//	st.push(11);
//	st.pop();
//	st.pop();
//	st.push(-3);
//	st.push(13);
//	while(st.empty()==false) //while(st.size()!=0)
//	{
//		cout<<st.top();
//		st.pop();
//	}
//}

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	stack<int>st;
//	st.push(5);
//	st.pop();
//	st.push(3);
//	st.push(4);
//	st.push(2);
//	st.pop();
//	st.push(3);
//	st.pop();
//	st.push(1);
//	while(st.empty()==false) //while(st.size()!=0)
//	{
//		cout<<st.top();
//		st.pop();
//	}
//}

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	stack<int>st;
//	vector<int>v(8);
//	int data;
//	for (int i=0; i<8; i++)
//	{
//		cin>>data;
//		v.push_back(data);
//	}
//	for (int i=0; i<v.size(); i++)
//	{
//		if (st.size()==0)
//		{
//			st.push(v[i]);
//		}
//		else
//		{
//			if (st.top()!=v[i])
//			{
//				st.push(v[i]);
//			}
//			else 
//			{
//				st.pop();
//			}
//		}
//	}
//    while(!st.empty())
//    {
//    	cout<<st.top()<<" ";
//    	st.pop();
//    }
//	
//	
//}

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	stack<int>st;
//	vector<int>v(8);
//	int data;
//	for (int i=0; i<8; i++)
//	{
//		cin>>data;
//		v.push_back(data);
//	}
//	for (int i=0; i<v.size(); i++)
//	{
//		if (st.size()==0)
//		{
//			st.push(v[i]);
//		}
//		else
//		{
//			if (st.top()<v[i])
//			{
//				st.push(v[i]);
//			}
//			else if (st.top()<0 &&v[i]<0)
//			{
//				st.push(v[i]);
//			}
//			else if (st.top()>0 &&v[i]>0)
//			{
//				st.push(v[i]);
//			}
//			else if (st.top()+v[i]==0)
//			{
//				st.pop();
//			}
//		}
//	}
//    while(!st.empty())
//    {
//    	cout<<st.top()<<" ";
//    	st.pop();
//    } 
//} 

//#include<bits/stdc++.h>
//using namespace std;
//
//int prece(string s)
//{
//	if (s=="+" || s=="-")
//	{
//		return 3;
//	}
//	else if (s=="*" || s=="/")
//	{
//		return 2;
//	}
//	else if (s=="(" || s==")")
//	{
//		return 1;
//	}
//}
//int main()
//{
//	stack<string>stn;
//	stack<string>sto;
//	int n;
//	cin>>n;
//	vector<string>stk(n);
//	string data;
//	for (int i=0; i<n; i++)
//	{
//		cin>>data;
//		stk.push_back(data);
//	}
//	for (int i=0; i<stk.size(); i++)
//	{
//		if (stk[i]=="-" || stk[i]=="+" || stk[i]== "*" || stk[i]=="(" || stk[i]==")")
//		{
//			if (sto.empty())
//			{
//				sto.push(stk[i]);
//			}
//			else
//			{
//				if ((prece(sto.top()))<(prece(stk[i])))
//				{
//					sto.push(stk[i]);
//				}
//			}
//		}
//		else
//		{
//			stn.push(stk[i]);
//		}
//	}
//    while(!stn.empty())
//    {
//    	cout<<stn.top()<<" ";
//    	stn.pop();
//    } 
//    while(!sto.empty())
//    {
//    	cout<<sto.top()<<" ";
//    	sto.pop();
//    } 
//} 


//#include<bits/stdc++.h>
//using namespace std;
//int precedence(char c)
//{
//	if(c=='(' || c==')')
//	{
//		return 1;
//	}
//	else if(c=='*' || c=='/')
//	{
//		return 2;
//	}
//	else if(c=='+' || c=='-')
//	{
//		return 3;
//	}
//	
//}
//
//int main()
//{
//	string ip;
//	stack<char>num;
//	stack<char>op;
//	cin>>ip;
//	for(int i=0; i<ip.size(); i++)
//	{
//		if(ip[i]>='0' && ip[i]<='9')
//		{
//			num.push(ip[i]);
//		}
//		else
//		{
//			if (op.empty())
//			{
//				op.push(ip[i]);
//			}
//			else if ((precedence(op.top()))<(precedence(ip[i])))
//			{
//				op.push(ip[i]);
//			}
//			else
//			{
//				op.pop();
//				op.push(ip[i]);
//			}
//		}
//		
//	}
//	while(!num.empty())
//	{
//		cout<<num.top()<<endl;
//		num.pop();
//	}
//	while(!op.empty())
//	{
//		cout<<op.top()<<endl;
//		op.pop();
//	}
//}

#include<bits/stdc++.h>
using namespace std;
int priority(char op){
	if(op=='+'|| op=='-'){
	return 1;
} 
	else{  
		return 2;
	}
}
int evaluate(int n1,int n2,char op){
	if(op=='*') return n1*n2;
	if(op=='+') return n1+n2;
	if(op=='-') return n1-n2;
	if(op=='/') return int(n1/n2);
	return 0;
}
int main()
{
	string s;
	cin>>s;
	stack<int>Numbers;
	stack<char>Operators;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]<='9' && s[i]>='0'){
			int n=0;
			while(s[i]<='9' && s[i]>='0')
			{
				n=n*10+int(s[i]-'0');
				i=i+1;
			}
			i=i-1;
			Numbers.push(n);
		}
		else{
			if(Operators.empty())
			{
				Operators.push(s[i]);
			}
			else
			{
				if(priority(s[i])>priority(Operators.top())){
					Operators.push(s[i]);
			    }
			    else{
			    	while(priority(s[i])<=priority(Operators.top()))
			    	{
			    		int n1=Numbers.top();
			    		Numbers.pop();
			    		int n2=Numbers.top();
			    		Numbers.pop();
			    		int ans=evaluate(n2,n1,Operators.top());
			    		Operators.pop();
			    		Numbers.push(ans);
			    		if(Operators.empty()){
			    			break;
						}			    		
					}
					Operators.push(s[i]);
				}
			}
			while(!Operators.empty()){
				int n1=Numbers.top();
				Numbers.pop();
				int n2=Numbers.top();
				Numbers.pop();
				int ans=evaluate(n2,n1,Operators.top());
				Operators.pop();
				Numbers.pop();
			}
			
		}
		cout <<Numbers.top();
	}					
}
