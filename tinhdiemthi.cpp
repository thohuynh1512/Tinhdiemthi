﻿/*
Viết chương trình để nhập điểm kiểm tra, điểm thi giữa kỳ, điểm thi cuối kỳ,
sau đó tính tổng điểm và in kết quả ra màn hình*/

#include <iostream>
using namespace std;

int main()
{
	float KT1, KT2, KT3, GK, CK;	
	cout << "Nhap diem kiem tra lan 1: ";
	cin >> KT1;	
	cout << "Nhap diem kiem tra lan 2: ";
	cin >> KT2;
	cout << "Nhap diem kiem tra lan 3: ";
	cin >> KT3;
	cout << "Nhap diem kiem tra giua ki: ";
	cin >> GK;
	cout << "Nhap diem kiem tra cuoi ki: ";
	cin >> CK;
	cout << "==========Diem kiem tra==========" << endl;
	cout << " Nhap diem kiem tra " << KT1 << endl;
	cout << " Nhap diem kiem tra " << KT2 << endl;
	cout << " Nhap diem kiem tra " << KT3 << endl;
	cout << "\n";
	cout << "==========Diem thi giua ki===========" << endl;
	cout << " Nhap diem thi giua ki " << GK << endl;
	cout << "\n";
	cout << "==========Diem thi cuoi ki===========" << endl;
	cout << " Nhap diem thi cuoi ki " << CK << endl;
	cout << "\n";
	cout << "Tong diem kiem tra: " << KT1 + KT2 + KT3 << endl;
	cout << "Diem thi giua ki: " << GK << endl;
	cout << "Diem thi cuoi ki: " << CK << endl;
	cout << ".........................." << endl;
	cout << "Tong diem: " << KT1 + KT2 + KT3 + CK + GK << endl;
	return 0;

}

