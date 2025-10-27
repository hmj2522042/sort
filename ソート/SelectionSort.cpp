#include "SelectionSort.h"

void SelectionSort::Exec(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		minIndex = i;	// �ŏ��̍ŏ���⌈��

		for (int j = i + 1; j < size; j++)
		{
			if (array[j] < array[minIndex])
			{
				minIndex = j;
			}
		}
		saveNum = array[i];	// �����O�̒l���L��
		array[i] = array[minIndex];
		array[minIndex] = saveNum;
	}
}