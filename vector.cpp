//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	vector<int>my_first_vector;
//	cout<<my_first_vector.size();
//	my_first_vector.push_back(2);
//	my_first_vector.pop_back();
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	vector<int>my_first_vector(100);
//	cout<<my_first_vector.size();
//	cout<<my_first_vector[23];
//}

//#include <iostream>
//#include<vector>
//using namespace std;
//int main() {
//    vector<int>Thub(100,1);
//    for (auto i=Thub.begin(); i!=Thub.end(); i++)
//    {
//        cout<<*i<<" ";
//    }
//
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	vector<int>Thub(100,1);
//	Thub.insert(Thub.begin()+20,12000);
//	cout<<Thub[20]<<" "<<Thub.size()<<endl;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	vector<int>Thub(100,1);
//	Thub.erase(Thub.begin()+20);
//	cout<<Thub[20]<<" "<<Thub.size()<<endl;
//}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>my_first_vector;
	my_first_vector.push_back(2);
	my_first_vector.push_back(10);
	my_first_vector.push_back(19);
	my_first_vector.push_back(7);
	my_first_vector.push_back(15);
	sort(my_first_vector.begin(),my_first_vector.end());
	for(int i=0; i<my_first_vector.size(); i++)
	{
		cout<<my_first_vector[i]<<" ";
	}
}


