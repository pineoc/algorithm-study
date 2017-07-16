/*
   Algospot problem, HELLOWORLD
   pineoc
 */

#include <iostream>
using namespace std;

int main()
{
	int testCase=0;
	cin>>testCase;
	for(int i=0;i<testCase;i++)
	{
		std::string name;
		cin>>name;
		cout<<"Hello, "<<name<<"!"<<endl;
	}
	return 0;
}
