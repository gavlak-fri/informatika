#include <stdio.h>

#include "vystup.h"
#include "data.h"

MUINT vypis(MUINT pocetzrebov)
{
	MUINT reader = 0;

	printf("\n VYSLEDOK LOSOVANIA \n+------------------+\n");

	for (MUINT i = 0; i < pocetzrebov && i < POCET_ZREBOV; i++) 
	{
		printf("%4d.miesto: %4d\t%s\n", i + 1, zreby[i].cislo, zreby[i].majitel);
		reader++;
	}
		
	return reader;
}