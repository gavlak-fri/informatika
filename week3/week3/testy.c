#include "testy.h"
#include "data.h"
#include "vstup.h"
#include "vystup.h"

int testuj() 
{
	int ret = 1;

	initZreby();

	for (int i = 0; i < POCET_ZREBOV; i++)
	{
		if (zreby[i].cislo != i + 1)
			return 0;

		if (zreby[i].majitel[0] != ('A' + i))
			return 0;
	}

	MUINT pocet = vypis(POCET_ZREBOV);

	if (pocet > POCET_ZREBOV)
		return 0;

	return 1;
}