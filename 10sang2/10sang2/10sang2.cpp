//chia lay du luu vao chuoi
//dao nguoc chuoi roi xuat

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void nhap(int& a);
void doi10sang2(int a);

int main() {
	int a;
	nhap(a);
	doi10sang2(a);
	return 0;
}

void nhap(int& a) {
	cout << "nhap he 10: ";
	cin >> a;
}

void doi10sang2(int a) {
	string s;
	while (a > 0) {
		double x = a % 2;
		double k = a /= 2;
		if (k == 1) {
			break;
		}
		else {
			s += (x + '0');
		}
	}
	reverse(s.begin(), s.end());
	cout << s;
}