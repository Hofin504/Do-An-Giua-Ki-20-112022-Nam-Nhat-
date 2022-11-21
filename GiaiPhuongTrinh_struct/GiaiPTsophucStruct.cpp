#include"GiaiPTsophuc(struct).h"

int GiaiPTsophucloai1(complexnum a, complexnum b, complexnum &c)
{
	if (a.real == 0 || a.img == 0 || b.real == 0 || b.img == 0) return -1; // PT co vo so nghiem
	else if (a.real == 0 || a.img == 0 && (b.real != 0 || b.img != 0)) return 0;// PT vo nghiem
	else if (a.real == 0 && b.real == 0) return 0; // PT vo nghiem
	else 
	{
		c.real = ((a.real * (-b.real)) + (a.img * (-b.img))) / (pow(a.real, 2) + pow(a.img, 2));
		c.img = ((a.real * (-b.img)) - (a.img * (-b.real))) / (pow(a.real, 2) + pow(a.img, 2));
		
	}
}

int GiaiPTsophucloai2(complexnum a, complexnum b, complexnum c, complexnum d, complexnum A , complexnum B , complexnum &C)
{
	if ((a.real - c.real) == 0 && (a.img - c.img) == 0) return 0; // PT vo nghiem
	else if (a.real == c.real && a.img == b.img && b.real == d.real && b.img == d.img) return -1; // PT co vo so nghiem
	else if (a.real == c.real && a.img == b.img && (b.real != d.real || b.img != d.img)) return 0; // PT vo nghiem
	else
	{
		A.real = a.real - c.real;
		A.img = a.img - c.img;
		B.real = d.real - b.real;
		B.img = d.img - b.img;
		GiaiPTsophucloai1(A, B, C);
	}
}

int main()
{
	complexnum a, b, c, d, A, B, C;
	A.real = 0;
	A.img = 0;
	B.real = 0;
	B.img = 0;
	cout << "Ax+B=Cx+D" << endl;
	cout << "Nhap A: ";
	cin >> a.real >> a.img >> a.i;
	cout << "Nhap B: ";
	cin >> b.real >> b.img >> b.i;
	cout << "Nhap C: ";
	cin >> c.real >> c.img >> c.i;
	cout << "Nhap D: ";
	cin >> d.real >> d.img >> d.i;
	GiaiPTsophucloai2(a, b, c, d,A,B,C);
	if (C.img >= 0) cout << C.real << " + " << C.img << "i";
	else cout << C.real << C.img << "i";
	return 0;
}