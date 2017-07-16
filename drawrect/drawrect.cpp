#include <iostream>
using namespace std;

class Vec2
{
public:
	int x, y;
	Vec2(int _x, int _y)
	{
		x = _x;
		y = _y;
	}
};
Vec2 getAnotherP(Vec2 p1, Vec2 p2, Vec2 p3)
{
	Vec2 retP = Vec2(0, 0); //init ret
	if(p1.x==p2.x)
		retP.x = p3.x;
	if(p2.x==p3.x)
		retP.x = p1.x;
	if(p1.x==p3.x)
		retP.x = p2.x;
	if(p1.y==p2.y)
		retP.y = p3.y;
	if(p2.y==p3.y)
		retP.y = p1.y;
	if(p1.y==p3.y)
		retP.y = p2.y;
	return retP;
}
Vec2 getSimpleAnotherP(Vec2 p1, Vec2 p2, Vec2 p3)
{
	return Vec2(p1.x^p2.x^p3.x, p1.y^p2.y^p3.y);
}

int main()
{
	ios::sync_with_stdio(false);
	int probN;
	cin >> probN;
	for(int i=0;i<probN;i++)
	{
		int x1, x2, x3, y1, y2, y3;
		cin >> x1 >> y1;
		cin >> x2 >> y2;
		cin >> x3 >> y3;
		Vec2 p1 = Vec2(x1, y1);
		Vec2 p2 = Vec2(x2, y2);
		Vec2 p3 = Vec2(x3, y3);
		Vec2 p4 = getSimpleAnotherP(p1, p2, p3);
		cout<<p4.x<<" "<<p4.y<<endl;
	}
	return 0;
}
