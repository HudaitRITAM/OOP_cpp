#include<iostream>
using namespace std;
class number
{
	static int n;
	public:
	void getdata()
	{
	cin>>n;
	}
	void display()
	{
	for (int i=1;i<=n;i++)
	{
	cout<<i<<” ”;
	}
	}
};
int number::n;
int main()
{
	number c;
	c.getdata();
	c.display();
return 0;
}