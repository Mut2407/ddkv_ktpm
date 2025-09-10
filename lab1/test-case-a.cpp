#include <iostream>
using namespace std;

int f1(int x) {
	if (x > 10)
		return 2 * x;
	else
		return -x;
}
int main()
{		
	int x;
	cout << "nhap x: "; cin >> x;
	//Nhập x từ bàn phím
	//x = qbc thì f1(x) = 0
	//x = 2 thì f1(x) = -2
	//x = 11 thì f1(x) = 22 
	cout << "- ket qua: " << f1(x) << endl;
	return 0;
}
