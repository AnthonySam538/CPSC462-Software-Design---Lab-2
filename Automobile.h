#pragma once
#include <iostream>

class Automobile
{
private:
  bool        _locked;
  std::string _color;
  int         _fuel;

public:
  Automobile( const std::string & color );
  virtual int         pushPedal( const std::string & pedal, const int & depth );
  virtual bool        toggleLock();
  virtual int         pumpGas( const int & gallons );
  virtual std::string getColor();
  virtual std::string generateReport();
  virtual std::string generateReport( const std::string & startDate );
  virtual std::string generateReport( const std::string & startDate, const std::string & endDate );
  virtual ~Automobile();
};