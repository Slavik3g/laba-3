#include "libraries.h"

int main()
{
	setlocale(0, "");
	srand(time(NULL));
	Array Nums = (5);
	fillinarray(Nums);
	int choose;
	while (1)
	{
		chooseinstr();
		choose = getintValue();
		performance(Nums, choose);
	}
	return 0;
}