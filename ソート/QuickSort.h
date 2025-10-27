#pragma once
#include "Sort.h"

// バブルソート
class QuickSort : public Sort
{
public:
	virtual void Exec(int* array, int size) override;

private:
	int small, big;
};
