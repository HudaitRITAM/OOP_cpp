#include<iostream>
using namespace std;
void pattern(char c,int n=20)
{
    for(int i=0;i<n;i++)
    {
        cout<<c<<"\t";
    }
    cout<<endl;
}
int main()
{
    int n;char c;
    cout<<"Enter the character and no. of times\n";
    cin>>c>>n;
    pattern(c,n);
    pattern(c);
}