#include <cmath>

#include "summm.h"
#include "varrr.h"
#include "doddd.h"

using namespace nsVarr;
using namespace nsDodd;

void nsSum::sum()
{
	n = 0;
	a = 1.0 / x;
	S = a;
	do
	{
		n++;
		dodd();
		S += a;
	} while (abs(a) >= eps);
}