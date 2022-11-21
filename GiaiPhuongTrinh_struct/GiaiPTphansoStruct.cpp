#include"GiaiPTphanso(struct).h"

int GiaiPTphansoloai1(fraction a, fraction b, fraction &c)
{
	if (a.mau == 0 || b.mau == 0) return -1; // Khong ton tai nghiem
	else if (a.tu == 0 && b.tu == 0) return 1; // PT co vo so nghiem
	else if (a.tu == 0 && b.tu != 0) return -1; // Khong ton tai nghiem
	else
	{
		c.tu = (-(b.tu) * a.mau);
		c.mau = (b.mau * a.tu);
	}
}

int GiaiPTphansoloai2(fraction a, fraction b, fraction c, fraction d, fraction& e)
{
	if (a.mau == 0 || b.mau == 0 || c.mau == 0 || d.mau == 0) return -1; // Khong ton tai nghiem
	else if (a.tu == 0 && b.tu == 0 && c.tu == 0 && d.tu == 0) return 1; //PT co vo so nghiem
	else if ((a.tu * c.mau) - (a.mau * c.tu) == 0 && (b.mau * d.tu) - (b.tu * d.mau) == 0) return 1; // PT co vo so nghiem
	else if ((a.tu * c.mau) - (a.mau * c.tu) == 0 && (b.mau * d.tu) - (b.tu * d.mau) != 0) return -1; // Khong ton tai nghiem
	else
	{
		e.tu = ((b.mau * d.tu) - (b.tu * d.mau)) * a.mau * c.mau;
		e.mau = ((a.tu * c.mau) - (a.mau * c.tu)) * b.mau * d.mau;
	}
}

int gcd(int a, int b) // Dung de rut gon phan so toi gian
{
	if (a % b != 0) return gcd(b, a % b);
	else return b;
}


