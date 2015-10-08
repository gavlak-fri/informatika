#pragma once

#define POCET_ZREBOV 20
#define DLZKA_MENA 11

#ifdef WIN32
typedef int MINT;
typedef unsigned int MUINT;
#else
typedef short int MINT;
typedef unsigned short int MUINT;
#endif

struct Zreb
{
	MINT cislo;
	char majitel[DLZKA_MENA];
};

extern struct Zreb zreby[POCET_ZREBOV];