#include <iomanip>
#include <iostream>
#include <cmath>

#include "doddd.h"
#include "summm.h"
#include "varrr.h"

using namespace std;

using namespace nsDodd;
using namespace nsSum;
using namespace nsVarr;

int main()
{
	cout << "xp="; cin >> xp;
	cout << "xk="; cin >> xk;
	cout << "dx="; cin >> dx;
	cout << "eps="; cin >> eps;

	x = xp;
	while (x <= xk && abs(x) > 1)
	{
		sum();

		cout << x << "   "
			<< S << "   "
			<< atanh(1.0 / x) << "   "
			<< n << endl;

		x += dx;
	}
	cin.get();

	return 0;
}
