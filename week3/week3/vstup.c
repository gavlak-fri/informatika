#include <string.h>

#include "vstup.h"
#include "data.h"

void initZreby()
{
	int i;
	int posledne_pismeno;

	for (i = 0; i < POCET_ZREBOV; i++) {
		zreby[i].cislo = i + 1;

		zreby[i].majitel[0] = 'A' + i;
		zreby[i].majitel[1] = 0;
	}
}