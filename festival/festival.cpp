#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

const double min(double a, double b)
{
	return (a>b)?b:a;
}

int main()
{
	ios::sync_with_stdio(false);
	int testCase=0;
	cin >> testCase;
	for(int t=0;t<testCase;t++)
	{
		//answer
		double answer=10000.0;
		int festivalDay;
		int fixedTeam;
		vector<int> dayCostVector;
		cin >> festivalDay >> fixedTeam;
		for(int i=0;i<festivalDay;i++)
		{
			int dayCost;
			cin >> dayCost;
			dayCostVector.push_back(dayCost);
		}
		//cout<<"check array: "<<dayCostVector[0]<<" "<<dayCostVector[1]<<endl;
		//check loop
		for(int i=fixedTeam;i<=festivalDay;i++)
		{
			int allTeam=i;
			for(int j=0;j<=festivalDay-allTeam;j++)
			{
				double sum=0;
				int limit = j+allTeam;
				for(int k=j;k<limit;k++)
					sum+=dayCostVector[k];
				sum=sum/(double)allTeam;
				//cout<<"check sum: "<<sum<<endl;
				answer=min(answer,sum);
			}
		}
		std::cout.precision(11);
		cout<<std::fixed;
		cout<<answer<<endl;
	}
	return 0;
}
