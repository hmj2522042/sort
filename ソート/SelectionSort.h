#pragma once
#include "Sort.h"

// �o�u���\�[�g
class SelectionSort : public Sort
{
public:
	virtual void Exec(int* array, int size) override;

private:
	int minIndex;	// ���݂̍ŏ����̗v�f�ԍ�
	int saveNum;	// �����O�̒l��ێ�
};
