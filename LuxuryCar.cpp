#include "LuxuryCar.h"

LuxuryCar::LuxuryCar( const std::string & color ) : Automobile( color )
{
}

std::string LuxuryCar::playMedia( const std::string & video )
{
  return video;
}

std::string LuxuryCar::generateReport()
{
  return "\nLIFETIME USAGE STATISTICS:\n\tAverage mileage: 136 miles per gallon\n\tDistance traveled: 1307 miles\n\tBandwidth consumption: 50 Mbps\n";
}

std::string LuxuryCar::generateReport( const std::string & startDate )
{
  return "\nUSAGE STATISTICS SINCE " + startDate + ":\n\tAverage mileage: 137 miles per gallon\n\tDistance traveled: 85 miles\n\tBandwidth consumption: 48 Mbps\n";
}

std::string LuxuryCar::generateReport( const std::string & startDate, const std::string & endDate )
{
  return "\nUSAGE STATISTICS FROM " + startDate + " TO " + endDate + ":\n\tAverage mileage: 134 miles per gallon\n\tDistance traveled: 63 miles\n\tBandwidth consumption: 44 Mbps\n";
}
