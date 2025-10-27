#pragma once
#include "Sort.h"

// バブルソート
class SelectionSort : public Sort
{
public:
	virtual void Exec(int* array, int size) override;

private:
	int minIndex;	// 現在の最小候補の要素番号
	int saveNum;	// 交換前の値を保持
};
