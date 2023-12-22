#include "Logic.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <math.h>

Logic::Logic()
{
	this->accurancy = 0.5;
	this->matrix = nullptr;
	this->size = 1;
}

void Logic::CreateMatrix() {
	// Memory allocation
	this->matrix = new double[size * size];
	// Setting the grid node values
	DummyDataInitialization();
	return;
}
void Logic::setAccurancy(double accurancy) {
	this->accurancy = accurancy;
}

void Logic::setSize(int size)
{
	this->size = size;
}

int Logic::getSize()
{
	return this->size;
}

double* Logic::getMatrix() {
	return this->matrix;
}

double Logic::getElem(int i, int j)
{
	return this->matrix[i * size + j];
}

void Logic::DummyDataInitialization() {
	int i, j; 
	for (i = 0; i < this->size; i++) {
		for (j = 0; j < this->size; j++) {
			if ((i == 0) || (i == size - 1) || (j == 0) || (j == size - 1))
				this->matrix[i * size + j] = (100);
			else
				this->matrix[i * size + j] = 0;
		}
	}
}

//Function for the Gauss - Seidel algoritm
void Logic::ResultCalculation() {
	int i, j; // Loop variables
	double dm, dmax, temp;
	this->Iterations = 0;
	do {
		dmax = 0;
		for (i = 1; i < this->size - 1; i++)
			for (j = 1; j < this->size - 1; j++) {
				temp = this->matrix[this->size * i + j];
				this->matrix[this->size * i + j] = 0.25 * (this->matrix[this->size * i + j + 1] +
					this->matrix[this->size * i + j - 1] +
					this->matrix[this->size * (i + 1) + j] +
					this->matrix[this->size * (i - 1) + j]);
				dm = fabs(this->matrix[this->size * i + j] - temp);
				if (dmax < dm) dmax = dm;
			}
		this->Iterations++;
	} while (dmax > this->accurancy);
}

Logic::~Logic()
{
	delete[] matrix;
	//delete matrix;
}