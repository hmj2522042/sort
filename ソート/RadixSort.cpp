#include "RadixSort.h"
#include <vector>
#include <cmath>

void RadixSort::Exec(int* array, int size)
{
	std::vector<std::vector<int>> digitsPool(10);
	int count = 0;

	// �ő包�����Z�o
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

	// �\�[�g
	for (int i = 0; i < digitsMax; i++)
	{
		// i+1���ڂ��r
		for (int j = 0; j < size; j++)
		{
			int digit = (array[j] / static_cast<int>(std::pow(10, i))) % 10;
			digitsPool[digit].push_back(array[j]);
		}

		count = 0;

		// ���̔z��Ɋ���U��
		for (int n = 0; n < 10; n++)
		{
			for (int j = 0; j < digitsPool[n].size(); j++)
			{
				array[count] = digitsPool[n][j];
				count++;
			}
		}

		// �v�f���폜
		for (int j = 0; j < digitsPool.size(); j++) {
			digitsPool[j].clear();
		}
	}

}