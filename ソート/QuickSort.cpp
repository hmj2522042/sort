#include <vector>
#include "QuickSort.h"

// 自作（再帰処理の実装が思いつかないため断念）

//void QuickSort::Exec(int* array, int size)
//{
//	pivot = 0;
//	int j, k;
//	std::vector<bool> pivotFlag(size);	// どこがpivotだったかを記憶
//
//	// 探索が完全に終了するまでループ
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
//		// 左端からpivot以上を探す
//		for (j = 0; j < size; j++)
//		{
//			if (array[j] >= array[pivot])
//			{
//				leftBig = array[j];
//				break;
//			}
//		}
//
//		// 右端からpivot以下を探す
//		for (k = size - 1; k >= 0; k--)
//		{
//			if (array[k] <= array[pivot])
//			{
//				rightSmall = array[k];
//				break;
//			}
//		}
//
//		// 両端からの探索が交叉していたら(１つの探索終了)
//		if (j == k)
//		{
//			pivotFlag[j] = true;
//			//Exec(array, size);
//		}
//
//		// 数値の入れ替え
//		array[j] = rightSmall;
//		array[k] = leftBig;
//
//		// pivot位置の更新
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

// ChatGpt作
void QuickSort::Exec(int* array, int size)
{
	if (size <= 1) return;
	Loop(array, 0, size - 1);
}
void QuickSort::Loop(int* array, int left, int right)
{
	if (left >= right) return; // 終了条件

	int pivot = array[right]; // 右端を pivot に
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

	// 左右に再帰
	Loop(array, left, pivotIndex - 1);
	Loop(array, pivotIndex + 1, right);
}