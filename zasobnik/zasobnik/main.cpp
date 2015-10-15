#define TEST

#ifdef TEST
#include "testy.h"
#endif

#include "iostream"
using namespace std;

int main() {
	bool ok { true };

#ifdef TEST
	ok = run_test();
#endif

	if (ok)
		;
	else {
		cout << "CHYBA! TESTY ZLYHALI!" << endl;
		return 1;
	}

	return 0;
}