#pragma once
#include "Sort.h"

// バブルソート
class RadixSort : public Sort
{
public:
	virtual void Exec(int* array, int size) override;

private:
	int small, big, digitsMax;
};
