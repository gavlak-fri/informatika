#include "tipos.h"
#include "losovanie.h"
#include "vstup.h"
#include "vystup.h"

void tah(MUINT pocetmiest)
{
	initZreby();
	zrebuj(pocetmiest);
	vypis(pocetmiest);
}