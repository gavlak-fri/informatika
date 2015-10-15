#include "Zasobnik.h"	

#include "cstdlib"

void init(Zasobnik &zasobnik)
{
	zasobnik.pocet = 0;
	zasobnik.sp = NULL;
}

void destroy(Zasobnik &zasobnik)
{
	while (zasobnik.pocet)
		pop(zasobnik);
}

bool push(Zasobnik &zasobnik, unsigned cislo)
{
	if (cislo > NEPLATNA_HODNOTA)
	{
		Zasobnik::Uzol *novy = new Zasobnik::Uzol;
		if (novy != NULL) 
		{
			novy->data = cislo;
			novy->dalsi = zasobnik.sp;

			zasobnik.sp = novy;
			zasobnik.pocet++;

			return true;
		}
	}
	
	return false;
}

unsigned pop(Zasobnik &zasobnik)
{
	if (zasobnik.pocet > 0)
	{
		unsigned cislo = zasobnik.sp->data;
		Zasobnik::Uzol *dalsi = zasobnik.sp->dalsi;

		delete zasobnik.sp;

		zasobnik.sp = dalsi;
		zasobnik.pocet--;

		return cislo;
	}

	return NEPLATNA_HODNOTA;
}

unsigned peek(Zasobnik &zasobnik)
{
	if (zasobnik.pocet > 0)
		return zasobnik.sp->data;
	return NEPLATNA_HODNOTA;
}

void nacitaj()
{
}

bool kopiruj(Zasobnik &ciel, Zasobnik &zdroj)
{
	

	if (ciel.pocet > 0)
		destroy(ciel);

	if (zdroj.pocet > 0)
	{

	}
	return false;
}