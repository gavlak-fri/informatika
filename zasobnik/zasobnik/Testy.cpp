#include "Testy.h"
#include "Zasobnik.h"

bool run_test()
{
	Zasobnik z;

	init(z);

	unsigned cislo;

	cislo = pop(z);

	if (cislo != NEPLATNA_HODNOTA)
		return false;

	push(z, 1);
	push(z, 2);
	push(z, 3);

	if (peek(z) != 3)
		return false;

	cislo = pop(z);
	cislo = pop(z);

	if (cislo != 2)
		return false;

	return true;
}