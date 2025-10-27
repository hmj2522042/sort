#include <vector>
#include "QuickSort.h"

// ����i�ċA�����̎������v�����Ȃ����ߒf�O�j

//void QuickSort::Exec(int* array, int size)
//{
//	pivot = 0;
//	int j, k;
//	std::vector<bool> pivotFlag(size);	// �ǂ���pivot�����������L��
//
//	// �T�������S�ɏI������܂Ń��[�v
//	while(1)
//	{
//		for (int i = 0; i < size; i++)
//		{
//			if (pivotFlag[i] == true)
//			{
//				maxRange = i;
//			}
//		}
//
//		// ���[����pivot�ȏ��T��
//		for (j = 0; j < size; j++)
//		{
//			if (array[j] >= array[pivot])
//			{
//				leftBig = array[j];
//				break;
//			}
//		}
//
//		// �E�[����pivot�ȉ���T��
//		for (k = size - 1; k >= 0; k--)
//		{
//			if (array[k] <= array[pivot])
//			{
//				rightSmall = array[k];
//				break;
//			}
//		}
//
//		// ���[����̒T�����������Ă�����(�P�̒T���I��)
//		if (j == k)
//		{
//			pivotFlag[j] = true;
//			//Exec(array, size);
//		}
//
//		// ���l�̓���ւ�
//		array[j] = rightSmall;
//		array[k] = leftBig;
//
//		// pivot�ʒu�̍X�V
//		if (j == pivot)
//		{
//			pivot = k;
//		}
//		else if (k == pivot)
//		{
//			pivot = j;
//		}
//	}
//}

// ChatGpt��
void QuickSort::Exec(int* array, int size)
{
	if (size <= 1) return;
	Loop(array, 0, size - 1);
}
void QuickSort::Loop(int* array, int left, int right)
{
	if (left >= right) return; // �I������

	int pivot = array[right]; // �E�[�� pivot ��
	int i = left - 1;

	for (int j = left; j < right; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			std::swap(array[i], array[j]);
		}
	}
	std::swap(array[i + 1], array[right]);

	int pivotIndex = i + 1;

	// ���E�ɍċA
	Loop(array, left, pivotIndex - 1);
	Loop(array, pivotIndex + 1, right);
}