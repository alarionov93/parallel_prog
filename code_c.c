
#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <stdio.h>
#include "time.h"

using namespace std;

double f(double x) {
	return x * x;
}

int main(){
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double a;
	double b;
	cout << "ввод а и b через пробел:";
	cin >> a >> b;
	cout << "ввод N:";
	int n=0;
	cin >> n;
	double h = (b-a) / n;
	double s = 0;
	double start = ((double)clock()) / CLOCKS_PER_SEC;
	for (int i = 0; i<n; i++){
		s += f(a + i*h)*h;
	}

	cout << "Результат:" << s << endl;
	cout << "Быстродействие:" << ((double)clock()) / CLOCKS_PER_SEC  - start << endl;
	system("pause");
}
