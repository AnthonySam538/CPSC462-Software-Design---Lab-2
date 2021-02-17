#include "Forklift.h"

Forklift::Forklift( const std::string & color ) : Automobile( color )
{
  _liftedObject = "Nothing";
}

std::string Forklift::liftObject( const std::string & object )
{
  return _liftedObject = object;
}

std::string Forklift::generateReport()
{
  return "\nLIFETIME LIFTING STATISTICS:\n\tObjects lifted: 267\n";
}

std::string Forklift::generateReport( const std::string & startDate )
{
  return "\nLIFTING STATISTICS SINCE " + startDate + ":\n\tObjects lifted: 26\n";
}

std::string Forklift::generateReport( const std::string & startDate, const std::string & endDate )
{
  return "\nLIFTING STATISTICS FROM " + startDate + " TO " + endDate + ":\n\tObjects lifted: 2\n";
}

Forklift::~Forklift()
{
}
