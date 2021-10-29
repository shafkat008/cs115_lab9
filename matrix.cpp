// Name:
// Student Number:
// Date:

#include "matrix.h"
#include <iostream>
using namespace std;

Matrix::Matrix()
{
  rows = MAXROWS;
  cols = MAXCOLS;
  for (int i = 0; i < rows; i++)
  {
    for(int j = 0; j < cols; j++)
    {
	    doubleArray[i][j] = '\0';
    }
  }
}   


void Matrix::printMatrix()
{
  for (int i = 0; i < rows; i++)
  {
    for(int j = 0; j < cols; j++)
    {
	    cout << doubleArray[i][j] << "   ";
    }
    cout << endl;
  }
}


void Matrix::setMatrix(int otherArray[][MAXCOLS])
{
  for (int rowNum = 0; rowNum < rows; rowNum++)
  {
    for(int colNum = 0; colNum < cols; colNum++)
    {
	    doubleArray[rowNum][colNum] = otherArray[rowNum][colNum];
    }
  }
}


void Matrix::addMatrix(int otherArray[][MAXCOLS])
{
  for (int i = 0; i < rows; i++)
  {
    for(int j = 0; j < cols; j++)
    {
	    doubleArray[i][j] += otherArray[i][j];
    }
  }
}


void Matrix::addMatrix(Matrix otherMatrix)
{
  addMatrix(otherMatrix.doubleArray);
}
