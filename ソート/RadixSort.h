#pragma once
#include "Sort.h"

// �o�u���\�[�g
class RadixSort : public Sort
{
public:
	virtual void Exec(int* array, int size) override;

private:
	int small, big, digitsMax;
};
