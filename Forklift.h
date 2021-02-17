#pragma once
#include "Automobile.h"

class Forklift : public Automobile
{
private:
  std::string _liftedObject;

public:
  Forklift( const std::string & color );
  std::string liftObject( const std::string & object );
  std::string generateReport() override;
  std::string generateReport( const std::string & startDate ) override;
  std::string generateReport( const std::string & startDate, const std::string & endDate ) override;
  ~Forklift();
};