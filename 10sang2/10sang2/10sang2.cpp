//su dung thu vien bitset va ham bitset<32>binary(a);

#include<iostream>
#include<bitset>
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
	bitset<32>binary(a);
	cout<<binary;
}
