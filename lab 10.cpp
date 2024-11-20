#include<iostream>
using namespace std;
void passbyvalue(int num)
{
	num=num+10;
	cout<<"Inside function(pass bty value)"<<num<<endl;
}
int main()
{
int number=5;
cout<<"Before function cell:"<<number<<endl;
	passbyvalue(number);
	cout<<"After function cell:"<<number<<endl;
	return 0;
}
