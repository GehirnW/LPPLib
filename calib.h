#include <ql/quantlib.hpp>
#include <fstream>
#include <iostream>

using namespace QuantLib;


//! helper class handling data for calibration 
class LPPLHelper
{
public:
	LPPLHelper(std::string strFilePath, Integer iColDataIndex, Integer iColTimeIndex = 0):
	  strFilePath_(strFilePath), iColTimeIndex_(iColTimeIndex), iColDataIndex_(iColDataIndex)
	  {
		  QL_REQUIRE(iColTimeIndex >= 0, "LPPLHelper: Date time col index must be a non-negative integer");
	  }

	  void loadData();
	  std::vector<Real> getDataVector(){return data_;}
	  std::vector<std::string> getDataTimeVector(){return datetime_;}

private:
	std::string strFilePath_;
	std::vector<Real> data_;
	std::vector<std::string > datetime_;  
	Integer iColTimeIndex_; //! col index(in txt file) for date time
	Integer iColDataIndex_; //! col index(in txt file) for data
};