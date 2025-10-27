#pragma once
#include "Sort.h"

// �o�u���\�[�g
class QuickSort : public Sort
{
public:
	virtual void Exec(int* array, int size) override;


private:
	void Loop(int* array, int left, int right);

private:
	int rightSmall, leftBig, pivot,maxRange,minRange;
};
