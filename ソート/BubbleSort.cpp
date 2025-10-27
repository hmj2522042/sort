#include "BubbleSort.h"

void BubbleSort::Exec(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (array[j] <= array[j + 1])
			{
				continue;
			}
			else
			{
				big = array[j];
				small = array[j + 1];

				array[j] = small;
				array[j + 1] = big;
			}
		}
	}
}