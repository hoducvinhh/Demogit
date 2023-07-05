#include<iostream>

using namespace std;

int main()
{
	 int a,b;
	 cin >> a >> b; 
	 int tong = a+b;
	 int tich = a*b;
	 int hieu = a-b;
	 float thuong = (float)a/b;
	 int layDu = a%b;
	 cout << tong <<" " << hieu << " " << tich << " " << thuong << " " << layDu << endl;
	 // cac ham thong dung
		//	 ham abs(x) : ham gia trij tuyet doi
		//	 ham pow(a,b) : tinh a^b tra ve so double
	 // ham sqrt(a) : ham tinh can
	 //ham round(a) : ham lam so
	 return 0;
}
