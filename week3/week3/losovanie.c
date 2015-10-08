#include "data.h"
#include "losovanie.h"

#include "stdlib.h"
#include "time.h"

void vymen(int a, int b);

void zrebuj(MUINT pocetzrebov) 
{
	srand(time(NULL));

	for (MUINT i = 0; i < pocetzrebov && i < POCET_ZREBOV; i++)
	{
		int index = rand() % (POCET_ZREBOV - i) + i;
		vymen(index, i);
	}
}

void vymen(int a, int b) {
	struct Zreb c;

	memmove(&c, &zreby[a], sizeof(c));
	memmove(&zreby[a], &zreby[b], sizeof(c));
	memmove(&zreby[b], &c, sizeof(c));

	/*c.cislo = zreby[a].cislo;
	strcpy(c.majitel, zreby[a].majitel);

	zreby[a].cislo = zreby[b].cislo;
	strcpy(zreby[a].majitel, zreby[b].majitel);

	zreby[b] = c.cislo;
	strcpy(zreby[b].majitel, c.majitel);*/
}