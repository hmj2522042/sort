#include "SelectionSort.h"

void SelectionSort::Exec(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		minIndex = i;	// Å‰‚ÌÅ¬Œó•âŒˆ’è

		for (int j = i + 1; j < size; j++)
		{
			if (array[j] < array[minIndex])
			{
				minIndex = j;
			}
		}
		saveNum = array[i];	// ŒðŠ·‘O‚Ì’l‚ð‹L‰¯
		array[i] = array[minIndex];
		array[minIndex] = saveNum;
	}
}