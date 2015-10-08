//#define START_TEST
#ifdef START_TEST
	#include "testy.h"
#endif

#include <stdlib.h>
#include "tipos.h"

int main(int argc, char *argv[])
{
	int ok = 1;

#ifdef START_TEST
	ok = testuj();
#endif

	if (ok == 1)
	{
		MINT pocetmiest = 50;

		if (argc > 1) {
			pocetmiest = atoi(argv[1]);
		}

		tah(pocetmiest);
	}
	else
		printf("CHYBA. TEST ZLYHAL\n");

	return 0;
}