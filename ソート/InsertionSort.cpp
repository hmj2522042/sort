#include "InsertionSort.h"

void InsertionSort::Exec(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i; j > 0; j--)
		{
			if (j == 0) return;
			if (array[j] < array[j - 1])
			{
				small = array[j];
				big = array[j - 1];

				array[j - 1] = small;
				array[j] = big;
			}
		}
	}
}