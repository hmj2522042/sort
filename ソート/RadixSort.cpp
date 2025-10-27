#include "RadixSort.h"
#include <vector>
#include <cmath>

void RadixSort::Exec(int* array, int size)
{
	std::vector<std::vector<int>> digitsPool(10);
	int count = 0;

	// Å‘åŒ…”‚ğZo
	for (int i = 0; i < size; i++)
	{
		int num = array[i];
		int digits = 0;
		while (num > 0)
		{
			num /= 10;
			digits++;
		}
		if (digits > digitsMax) digitsMax = digits;
	}

	// ƒ\[ƒg
	for (int i = 0; i < digitsMax; i++)
	{
		// i+1Œ…–Ú‚ğ”äŠr
		for (int j = 0; j < size; j++)
		{
			int digit = (array[j] / static_cast<int>(std::pow(10, i))) % 10;
			digitsPool[digit].push_back(array[j]);
		}

		count = 0;

		// Œ³‚Ì”z—ñ‚ÉŠ„‚èU‚é
		for (int n = 0; n < 10; n++)
		{
			for (int j = 0; j < digitsPool[n].size(); j++)
			{
				array[count] = digitsPool[n][j];
				count++;
			}
		}

		// —v‘f‚ğíœ
		for (int j = 0; j < digitsPool.size(); j++) {
			digitsPool[j].clear();
		}
	}

}