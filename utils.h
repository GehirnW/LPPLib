#include <ql/quantlib.hpp>
#include <string>
#include <fstream>
#include <iostream>

using namespace QuantLib;


//! helper class handling data for calibration 
class LPPLHelper
{
public:
	LPPLHelper(string strFilePath, Integer iColTimeIndex = 0):
	  strFilePath_(strFilePath), iColTimeIndex_(iColTimeIndex)
	{
		QL_REQUIRE(iColTimeIndex >= 0, "LPPLHelper: Date time col index must be a non-negative integer");
	}
private:
	string strFilePath_;
	std::vector<std::vector<Real> > dataMatrix_;
	std::vector<std::string > datetime_;  
	Integer iColTimeIndex_; // col index for date time
};






/********************************************
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