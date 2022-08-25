#include<iostream>
using namespace std;

int main(){
	int n;
	unsigned long long num;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> num;
		do{
			cout << num % 10 << ' ';
			num = num / 10;
		} while (num != 0);
		cout << endl;
	}

	return 0;
}
