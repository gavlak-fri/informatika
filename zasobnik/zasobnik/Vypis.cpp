#include <iostream>
#include <stdlib.h>

#include "Vystup.h"

using namespace std;

#ifdef _DEBUG
void vypis(unsigned cislo)
{
	cout << cislo << endl;
}
#else
void vypis(unsigned cislo)
{
}
#endif