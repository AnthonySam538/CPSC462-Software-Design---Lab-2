#include "Forklift.h"
#include "LuxuryCar.h"

int main()
{
  // Create a Forklift object and a LuxuryCar object
  Forklift   myForklift( "yellow & white" );
  LuxuryCar  myLuxuryCar( "black, white, and green" );

  // Examine the Forklift object
  std::cout << "The forklift is currently accelerating at " << myForklift.pushPedal( "gas", 1 ) << " mph per second.\n";
  std::cout << "Current status: " << myForklift.toggleLock() << " (0 indicates the forklift is not locked, 1 indicates the forklift is locked)\n";
  std::cout << "The forklift currently has " << myForklift.pumpGas( 60 ) << " gallons of gas.\n";
  std::cout << "This forklift is " << myForklift.getColor() << ".\n";
  std::cout << "A " << myForklift.liftObject( "barrel" ) << " is being lifted.\n";
  std::cout << myForklift.generateReport() << std::endl;
  std::cout << myForklift.generateReport( "07/27/19" ) << std::endl;
  std::cout << myForklift.generateReport( "08/31/19", "06/09/20" ) << std::endl;

  std::cout << "--------------------\n\n";

  // Examine the LuxuryCar object
  std::cout << "The luxury car is currently accelerating at " << myLuxuryCar.pushPedal( "gas", 60 ) << " mph per second.\n";
  std::cout << "Current status: " << myLuxuryCar.toggleLock() << " (0 indicates the luxury car is not locked, 1 indicates the luxury car is locked)\n";
  std::cout << "The luxury car currently has " << myLuxuryCar.pumpGas( 50 ) << " gallons of gas.\n";
  std::cout << "This luxury car is " << myLuxuryCar.getColor() << ".\n";
  std::cout << "Now Playing: " << myLuxuryCar.playMedia( "The Music Man" ) << std::endl;
  std::cout << myLuxuryCar.generateReport() << std::endl;
  std::cout << myLuxuryCar.generateReport( "07/05/20" ) << std::endl;
  std::cout << myLuxuryCar.generateReport( "09/07/20", "10/09/20" ) << std::endl;

  system( "PAUSE" );

  return 0;
}