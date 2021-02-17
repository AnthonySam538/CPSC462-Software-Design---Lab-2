#include "Automobile.h"

Automobile::Automobile( const std::string & color ) : 
  _color( color )
{
  _locked = false;
  _fuel   = 0;
}

int Automobile::pushPedal( const std::string & pedal, const int & depth )
{
  if( pedal == "gas" )
    return depth;
  else
    return -depth;
}

bool Automobile::toggleLock()
{
  return !_locked;
}

int Automobile::pumpGas( const int & gallons )
{
  return _fuel += gallons;
}

std::string Automobile::getColor()
{
  return _color;
}

std::string Automobile::generateReport()
{
  return "\nLIFETIME USAGE STATISTICS:\n\tAverage mileage: 90 miles per gallon\n\tDistance traveled: 500 miles\n";
}

std::string Automobile::generateReport( const std::string & startDate )
{
  return "\nUSAGE STATISTICS SINCE " + startDate + ":\n\tAverage mileage: 98 miles per gallon\n\tDistance traveled: 300 miles\n";
}

std::string Automobile::generateReport( const std::string & startDate, const std::string & endDate )
{
  return "\nUSAGE STATISTICS FROM " + startDate + " TO " + endDate + ":\n\tAverage mileage: 91 miles per gallon\n\tDistance traveled: 100 miles\n";
}

Automobile::~Automobile()
{
}
