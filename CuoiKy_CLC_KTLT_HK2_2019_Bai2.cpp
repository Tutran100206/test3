#include<iostream>
using namespace std;
struct PHANSO
{
	int tu, mau;
};
void nhap(PHANSO& a);
void nhapmangphanso(PHANSO k[], int& n);
double rutgonvachiaps(PHANSO a);
void sosanhpstrongmang(PHANSO k[], int n);
int main(){
	PHANSO a;
	PHANSO k[100];
	int n;
	nhapmangphanso(k, n);
	sosanhpstrongmang(k, n);
	return 0;
}
void nhap(PHANSO& a) {
	cin >> a.tu >> a.mau;
}
void nhapmangphanso(PHANSO k[], int &n) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		nhap(k[i]);
	}
}
double rutgonvachiaps(PHANSO a) {
	int x = max(a.tu, a.mau);
	int y = min(a.tu, a.mau);
	int w = 0;
	for (int i = 1; i <= x; i++) {
		if (y % i == 0 && x % i == 0) {
			w = i;
		}
	}
	a.tu /= w;
	a.mau /= w;
	double e = (1.0)*a.tu / a.mau;
	return e;
}
void sosanhpstrongmang(PHANSO k[], int n) {
	double b[100];
	int sizeB = 0;
	for (int i = 0; i < n; i++) {
		b[sizeB++] = rutgonvachiaps(k[i]);
	}
	if (sizeB > 0) {
		double max = b[0]; 
		int tam = 0;
		for (int i = 0; i < sizeB; i++) {
			if (b[i] > max) {
				max = b[i];
				tam = i;
			}
		}
		cout << tam;
	}
}
