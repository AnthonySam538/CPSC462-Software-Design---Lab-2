#include <iostream>
#include <string>


/*******************************************************************************
**  AVOID THIS TYPE OF DESIGN
*******************************************************************************/

/*******************************************************************************
**  Kind of person as an attribute
*******************************************************************************/
class Person
{
  public:
    enum class Kind { Unkown,
                      Wife,
                      Son,
                      CollegeStudent,
                      ConstructionWorker } _kind;


    Person( const std::string & name = "Mom", Kind kind = Kind::Unkown )
      : _kind( kind ), _name( name )
    {}


    std::string getSupper() const
    {
      return _name + transport() + pay() + food();
    }


    std::string transport() const
    {
      if     ( _kind == Kind::Wife ) return " will drive the car, ";
      else if( _kind == Kind::Son  ) return " will ride a bicycle, ";
      else if( _kind == Kind::CollegeStudent ) return " will have food delivered, ";
      else if( _kind == Kind::ConstructionWorker ) return " will drive the forklift, ";
      return "Oops, an unknown kind of person was trying to get to the store";
    }


    std::string pay() const
    {
      if     ( _kind == Kind::Wife ) return "pay by card, ";
      else if( _kind == Kind::Son  ) return "and pay by cash.";
      else if( _kind == Kind::CollegeStudent ) return "pay with ApplePay, ";
      else if( _kind == Kind::ConstructionWorker ) return "pay by credit card, ";
      return "Oops, an unknown kind of person was trying to pay my bill";
    }


    std::string food() const
    {
      if     ( _kind == Kind::Wife ) return "and buy Chicken Cordon Bleu with Chardonnay.";
      else if( _kind == Kind::Son  ) return "buy pizza, ";
      else if( _kind == Kind::CollegeStudent ) return "and buy ramen noodles.";
      else if( _kind == Kind::ConstructionWorker ) return "and buy a hamburger.";
      return "Oops, an unknown kind of person was trying to buy food!";
    }


    ~Person() = default;


  private:
    std::string _name;
};




/*******************************************************************************
**  Code to the Interface
*******************************************************************************/
std::string doSomething( const Person & person )
{
  return person.getSupper();
}




/*******************************************************************************
**  Create concrete objects and process those objects
*******************************************************************************/
int main()
{
  Person mom( "mom", Person::Kind::Wife  );
  Person son( "Bobby", Person::Kind::Son );
  Person collegeStudent( "Anthony Sam", Person::Kind::CollegeStudent);
  Person constructionWorker( "John Smith", Person::Kind::ConstructionWorker);

  std::cout << doSomething( son ) << '\n';
  std::cout << doSomething( mom ) << '\n';
  std::cout << doSomething( collegeStudent ) << '\n';
  std::cout << doSomething( constructionWorker ) << '\n';
}
