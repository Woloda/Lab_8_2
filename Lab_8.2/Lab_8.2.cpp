#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int kil_sliv(string lit_r, string probil);

int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string lit_r = "      f WWE  WER R       E   E TE T";
	cout << "Сфомований літерний рядок: " << endl << endl << lit_r << endl << endl;
	string probil = " ";

	int lichilnuk = kil_sliv(lit_r, probil);

	cout << "В цьому реченні слів: " << lichilnuk << endl;

	return 0;
}

int kil_sliv(string lit_r, string probil)
{
	int pos = 0;
	size_t p = 0;
	p = lit_r.find(probil, pos);
	int elements = lit_r.length();

	int lichilnuk = 0;
	int l = 0;
	while (p < elements - 1)
	{
		p = lit_r.find(probil, ++l);
		if (p > pos + 1)
			lichilnuk++;
		pos = p;
	}
	return lichilnuk;
}