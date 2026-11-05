#pragma once

class DynamicArray {
private: 
	int size;
	int* ptr;
public :
	DynamicArray(int size);
	virtual ~DynamicArray();
	int getSize() const;
	int getValue(int idx) const;
	void setValue(int idx, int value);

};