#pragma once

class Logic
{
public:
	Logic();
	~Logic();
	void CreateMatrix();
	double* getMatrix();
	double getElem(int i, int j);
	int getSize();
	void setSize(int size);
	void setAccurancy(double accurancy);
	void ResultCalculation();
private:
	double* matrix; // Matrix of the grid nodes
	int size; // Matrix size
	double accurancy; // Required accuracy
	int Iterations; // Iteration number
	double duration;
	void DummyDataInitialization();
};