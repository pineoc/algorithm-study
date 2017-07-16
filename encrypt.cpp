/*
	algospot problem, ENCRYPT
	https://algospot.com/judge/problem/read/ENCRYPT
	pineoc
 */
#include <iostream>
using namespace std;
std::string encrypt(std::string targetStr)
{
	int strLen = targetStr.length();
	std::string encStr; 
	for(int i=0;i<strLen;i+=2)
	{
		encStr.push_back(targetStr[i]);
	}
	for(int j=1;j<strLen;j+=2)
	{
		encStr.push_back(targetStr[j]);
	}
	return encStr;
}
int main()
{
	int testCase=0;
	cin>>testCase;
	for(int i=0;i<testCase;i++)
	{
		std::string originalStr;
		cin>>originalStr;
		std::string encStr=encrypt(originalStr);
		cout<<encStr<<endl;
	}
	return 0;
}
