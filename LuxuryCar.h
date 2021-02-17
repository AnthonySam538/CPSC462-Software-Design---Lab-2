#pragma once
#include "Automobile.h"

class LuxuryCar : public Automobile
{
public:
  LuxuryCar( const std::string & color );
  std::string playMedia( const std::string & video );
  std::string generateReport() override;
  std::string generateReport( const std::string & startDate ) override;
  std::string generateReport( const std::string & startDate, const std::string & endDate ) override;
};