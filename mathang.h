#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <fstream>
#include <ctime>

using namespace std;
class mathang
{
private:
	int mahang;
	float gia;
	string tenhang;
	string nhommh;
public:
	mathang();
	~mathang();
	int getMahang();
	void setMahang(int MAHANG);
	string getTenhang();
	string getNhomMH();
	float getGia();
	void setInfo(int MAHANG, string TENHANG,string NHOMMH, float GIA);
	void nhap();
	void xuat();
	void ghiMH(ofstream& fileout);
	void taoHD();
};
