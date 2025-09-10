#include <iostream>
#include <cmath>
using namespace std;

int f3(int x)
{
	if (log(x * x * cos(x)) < 3 * x)
		return 2 * x;
	else
		return 2 * x;
}
int main()
{
	int x;
	cout << "nhap x: ";
	cin >> x;
	cout << "- ket qua: " << f3(x) << endl;
	return 0;
}