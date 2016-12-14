#include <ql/quantlib.hpp>
#include <fstream>
#include <iostream>

using namespace QuantLib;

/*
// read matrix data from txt file
// return vector<vector>, each col in txt => row vector 
void readMatrixFromTxt(string strPath, int iColSize)
{
	ifstream dataFile;

	dataFile.open(strPath, ios::in);
	if(!dataFile.is_open())
	{
		QL_FAIL("readMatrixFromTxt: failed to open data txt file");
	}

}

*/