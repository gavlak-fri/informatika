#pragma once

const unsigned NEPLATNA_HODNOTA = 0;

struct Zasobnik 
{
	struct Uzol
	{
		unsigned data;
		Uzol *dalsi;
	} *sp;

	unsigned pocet;
};

void init(Zasobnik &zasobnik);
void destroy(Zasobnik &zasobnik);

bool push(Zasobnik &zasobnik, unsigned cislo);
unsigned pop(Zasobnik &zasobnik);
unsigned peek(Zasobnik &zasobnik);

void nacitaj();
bool kopiruj(Zasobnik &ciel, Zasobnik &zdroj);