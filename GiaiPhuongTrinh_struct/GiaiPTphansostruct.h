#pragma once

#include<iostream>
#include<cmath>

using namespace std;

struct fraction
{
	int tu, mau;
	char t;
};

int GiaiPTphansoloai1(fraction a, fraction b, fraction& c);
int GiaiPTphansoloai2(fraction a, fraction b, fraction c, fraction d, fraction& e);
int gcd(int a, int b);
