#include "Automobile.h"

int main()
{
  // Create the Automobile object
  Automobile myAutomobile("blue");

  // Examine the Automobile object
  std::cout << "The automobile is currently accelerating at " << myAutomobile.pushPedal( "brake", 5 ) << " mph per second.\n";
  std::cout << "Current status: " << myAutomobile.toggleLock() << " (0 indicates the automobile is not locked, 1 indicates the automobile is locked)\n";
  std::cout << "The automobile currently has " << myAutomobile.pumpGas( 20 ) << " gallons of gas.\n";
  std::cout << "This automobile is " << myAutomobile.getColor() << ".\n";
  std::cout << myAutomobile.generateReport() << std::endl;
  std::cout << myAutomobile.generateReport("08/10/20") << std::endl;
  std::cout << myAutomobile.generateReport( "04/30/20", "12/31/20" ) << std::endl;

  system( "PAUSE" );

  return 0;
}