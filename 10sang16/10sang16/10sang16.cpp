//voi moi so ta chia % (lay du) roi cap nhat bang /
//neu du < 10 --> du + '0', nguoc lai du + 'A' - 10
//luu vao chuoi, dao nguoc chuoi va xuat

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void nhap(int& a);
void doi10sang16(int a);

int main() {
	int a;
	nhap(a);
	doi10sang16(a);
	return 0;
}

void nhap(int& a) {
	cout << "nhap he 10: ";
	cin >> a;
}

void doi10sang16(int a) {
	string s;
	while (a > 0) {
		int x = a % 16;
		a /= 16;
		if (x < 10) {
			s += x + '0';
		}
		else {
			s += (x + 'A' - 10);
		}
	}
	reverse(s.begin(), s.end());
	cout << "he 16: " << s;
}