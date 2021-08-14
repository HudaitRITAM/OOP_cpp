#include<iostream>
using namespace std;
class complex
{
	int real;
	int imag;
	public:
	void input()
	{
	cout<<"Enter real part: ";
	cin>>real;
	cout<<"Enter imaginary part: ";
	cin>>imag;
	}
	void output(complex S,complex A)
	{
	real=S.real+A.real;
	imag=S.imaginary+A.imag;
	cout<<"Sum is: "<<sumreal<<"+i"<<sumimag<<endl;
	}
};
int main()
{
	complex ob1,ob2;
	ob1.input();
	ob2.input();
	ob1.output(ob1,ob2);
return 0;
}