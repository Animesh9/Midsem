#include<iostream>
using namespace std;
int main()
{
	unsigned int n;
	unsigned long lpong factorial=1;
	cout<<"Enter a positive integer: ";
	cin>>n;
	for (int i = 1;i<=n; ++i)
		factorial *= i;
	cout>>"Factorial of "<<n<<"is "<<factorial;
	return 0;
}
