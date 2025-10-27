#pragma once
#include "Sort.h"

// バブルソート
class InsertionSort : public Sort
{
public:
	virtual void Exec(int* array, int size) override;

private:
	int small, big;
};
