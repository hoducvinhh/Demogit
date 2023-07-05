/*
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	
	// cau truc re nhanh if else
	if(2>1)
	{
		cout << "xin chao\n";
	}
	// cau truc re nhanh switch case
	int x=1;
	switch(x)
	{
		case 1:
			cout << "monday";
			break;
		default 
		{
			cout << "Du lieu khong hop le";
		}
	}
	
	
	int a,b;
	cout <<"Nhap vao 2 so: ";
	cin >> a >>b;
	int tong = a +b;
	int hieu = a-b;
	long long tich = (long long)a*b;
	float thuong = (float)a/b;
	
	cout <<"Tong cua 2 so vua nhap la: " <<tong;
	cout <<"\n";
	cout <<"Hieu 2 so vua nhap la: " <<hieu << endl;
	
	cout <<"Tich 2 so vua nhap la: " <<tich << endl;
	
	cout <<"Thuong 2 so vua nhap la: " << fixed << setprecision(2) << thuong << endl;
	
	return 0;
	
}
*/	
 /*
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int banKinh;
	cout << "Nhap vao ban kinh: ";
	cin >> banKinh;
	float chuVi = (float)banKinh*2*3.14;
	float dienTich = (float)banKinh*banKinh*3.14;
	
	cout << "Chu vi cua hinh tron la: " << fixed << setprecision(2) << chuVi << endl;
	cout << "Dien tich cua hinh tron la: " << fixed << setprecision(2) << dienTich <<endl;
	return 0;
}
*/
 
 /*
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
	int x1,x2,y1,y2;
	cout<<"Nhap vao toa do diem thu nhat: ";
	cin >> x1 >>x2;
	cout <<"Nhap vao toa do diem thu hai: ";
	cin >> y1 >>y2;
	float k = sqrt(pow(x1-y1,2)+pow(x2-y2,2));
	cout << "Khoang cach giua 2 diem la: " << fixed << setprecision(2) << k <<endl;
	return 0;
}
*/

/*
#include<iostream>

using namespace std;

int main()
{
	int n;
	cout<< "Nhap so ngay: ";
	cin >> n;
	int soNam = n/365;
	int du = n % 365;
	
	int soTuan= du /7;
	int ngay = du%7;
	
	cout << soNam << " " << soTuan <<" " << ngay <<endl;
 } 

*/

/*
#include<iostream>
#include<iomanip>
#include<math.h> 

using namespace std;

int main()
{
	int a,b,c;
	cout << "Nhap vao 3 so: ";
	cin >> a >>b >>c;

	if(a==0)
	{
		if(b==0 && c==0)
		{
			cout << "Vo so nghiem" << endl;
		}
		else if(b==0 && c!=0 )
		{
			cout<< "Vo nghiem"<< endl;
		}
		else if(b!=0)
		{
			cout << fixed << setprecision(2) << (float)-c/b<< endl;
		}
	}
	else
	{
		float del = b*b - 4*a*c;
		if(del <0)
		{
			cout << "Phuong trinh vo nghiem"<< endl;
		}
		else if(del ==0)
		{
			cout <<"Phuong trinh co hai nghiem kep la:  ";
			cout << fixed << setprecision(2) << (float)-b/2*a<< endl;
		}
		else
		{
			cout << "Phuong trinh co 2 nghiem phan biet: "<< endl;
			cout << fixed << setprecision(2) << (-b + sqrt(del))/2*a<< endl;
			cout << fixed << setprecision(2) << (-b - sqrt(del))/2*a<< endl;
		}
	}
	return 0;
}
*/



























