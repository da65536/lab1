#include<iostream>
using namespace std;

int main()
{
	int num,i;

	cin >> num;
	cout << num << "  ";
	while(num!=1)
	{
		if(num % 2 == 1)
			num = 3*num + 1;
		else
			num = num / 2;
		cout << num << "  ";
	}

	return 0;
}
