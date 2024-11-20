#include<iostream>
using namespace std;


int passbyvalue(int sub) {
    sub = sub-5; 
    cout << "Inside function (pass by value): " << sub << endl;
    return sub; 
}
int passedvalue(int sum)
{
	sum=sum+5;
	cout <<  "Inside function (passed value):" << sum << endl;
    return sum; 
}
int passingvalue(int multiply)
{
	multiply = multiply*5;
	cout <<  "Inside function (passing value):" << multiply << endl;
    return multiply; 
}
int main() {
	int num =10;
	
    int sum =10;
    

    passedvalue(sum);

    
    int sub=10;
   

     passbyvalue(sub);

    
    
     int multiply=10;
    

     passingvalue(multiply);

    cout << "After function call (original number): "  <<num<< endl; //multiply
    cout << "Before function call: "<<num << endl;
    return 0;
}

