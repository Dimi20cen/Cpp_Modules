#include "iostream"

using namespace std;

int main(void)
{
	int a = 10;
	int &r = a;
	int *p = &a;

	a = 3;
	r = 6;
	*p = 7;
	cout << a;	
}