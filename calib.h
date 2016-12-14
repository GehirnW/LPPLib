#include <ql/quantlib.hpp>
#include <fstream>
#include <iostream>

using namespace QuantLib;


//! helper class handling data for calibration 
class LPPLHelper
{
public:
	LPPLHelper(std::string strFilePath, Integer iColTimeIndex = 0):
	  strFilePath_(strFilePath), iColTimeIndex_(iColTimeIndex)
	  {
		  QL_REQUIRE(iColTimeIndex >= 0, "LPPLHelper: Date time col index must be a non-negative integer");
	  }

	  void readDataFromTxt();
	  std::vector<Real> getDataVector(Integer iCol){return dataMatrix_[iCol];}
	  std::vector<std::string> getDataTimeVector(){return datetime_;}

private:
	std::string strFilePath_;
	std::vector<std::vector<Real> > dataMatrix_;//! txt data(in cols) => vector<vector> data( in rows)
	std::vector<std::string > datetime_;  
	Integer iColTimeIndex_; //! col index for date time
	Integer iNbDataVector_; //! nb of vectors stored in dataMatrix_
};