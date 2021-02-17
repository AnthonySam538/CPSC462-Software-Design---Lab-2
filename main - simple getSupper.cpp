#include <iostream>
#include <string>



/*******************************************************************************
**  Interface  (Generalization)
*******************************************************************************/
/* INFORMATION: Interfaces are classes that only contain pure virtual functions. The "virtual" keyword denotes that the function is virtual and therefore can be overriden, and the "= 0" denotes that the function is pure. Because of the existence of a pure virtual function, an object/instance of this class can't be created, even if the pure virtual function is defined for the class (which you totally should not do); classes that derive from this class must override and define these pure virtual functions if they do not wish to suffer the same fate. Also, the "const" keyword is used here to ensure that the function is not granted permission to change the attributes of its class. */
class Person
{
  public:
    virtual std::string getSupper() const = 0;

    virtual std::string transport() const = 0;
    virtual std::string pay()       const = 0;
    virtual std::string food()      const = 0;

    virtual ~Person() = 0;
};
inline Person::~Person() = default;


/*******************************************************************************
**  Concrete Class  (Specialization)
*******************************************************************************/
class Wife : public Person
{
  public:
    /* INFORMATION: This is a default constructor; all parameters in this constructor have default values, should no values be provided by the programmer. The "const" keyword is also used here, this time to denote that this variable's value is not allowed to change during the function. We can also see that the "&" character is being used here, for optimization. This means that, should the programmer provide a value, that value will be passed by reference. In other words, the constructor will receive the value, rather than a copy of the value. So since we're not manipulating a copy of the value, any changes to the value in the function will persist even after the function finishes. Finally, note that an initialization list is being used here after the ":" character instead of assignment, again. It's good practice. */
    Wife( const std::string & name = "Mom" )
      : _name( name )
    {}


    std::string getSupper() const override
    { return _name + transport() + pay() + food(); }


    std::string transport() const override
    { return " will drive the car, "; }


    std::string pay() const override
    { return "pay by card, "; }


    std::string food() const override
    { return "and buy Chicken Cordon Bleu with Chardonnay."; }


    ~Wife() override = default;


  private:
    std::string _name;
};


/*******************************************************************************
**  Concrete Class  (Specialization)
*******************************************************************************/
class TeenagedSon : public Person
{
  public:
    TeenagedSon( const std::string & name = "Bobby" )
      : _nickName( name )
    {}


    std::string getSupper() const override
    { return _nickName + transport() + food() + pay(); }


    std::string transport() const override
    { return " will ride a bicycle, "; }


    std::string pay() const override
    { return "and pay by cash."; }


    std::string food() const override
    { return "buy pizza, "; }


    ~TeenagedSon() override = default;


  private:
    std::string _nickName;
};


/*******************************************************************************
**  Concrete Class  (Specialization)
*******************************************************************************/
class CollegeStudent : public Person
{
  public:
    CollegeStudent( const std::string & name = "Anthony Sam" )
      : _name( name )
    {}


    std::string getSupper() const override
    { return _name + transport() + pay() + food(); }


    std::string transport() const override
    { return " will have food delivered, "; }


    std::string pay() const override
    { return "pay using ApplePay, "; }


    std::string food() const override
    { return "and buy ramen noodles."; }


    ~CollegeStudent() override = default;


  private:
    std::string _name;
};


/*******************************************************************************
**  Concrete Class  (Specialization)
*******************************************************************************/
class ConstructionWorker : public Person
{
  public:
    ConstructionWorker( const std::string & name = "John Smith" )
      : _name( name )
    {}


    std::string getSupper() const override
    { return _name + transport() + pay() + food(); }


    std::string transport() const override
    { return " will drive the forklift, "; }


    std::string pay() const override
    { return "pay with their credit card, "; }


    std::string food() const override
    { return "and buy a hamburger."; }


    ~ConstructionWorker() override = default;


  private:
    std::string _name;
};


/*******************************************************************************
**  Concrete Class  (Specialization)
*******************************************************************************/
class XenobladeChronicles2Character : public Person
{
  public:
    XenobladeChronicles2Character( const std::string & name = "Rex" )
      : _name( name )
    {}


    std::string getSupper() const override
    { return _name + transport() + pay() + food(); }


    std::string transport() const override
    { return " will Skip Travel to Argentum, "; }


    std::string pay() const override
    { return "pay in G, "; }


    std::string food() const override
    { return "and buy 2 dozen Narcipear Jelly."; }


    ~XenobladeChronicles2Character() override = default;


  private:
    std::string _name;
};


/*******************************************************************************
**  Code to the Interface
*******************************************************************************/
// Passing by reference (vice value) is imperative!!  Pass by reference either by reference (&) or by pointer (*)
std::string doSomething( const Person & person )
{ return person.getSupper(); }




/*******************************************************************************
**  Create concrete objects and process those object polymorphically
*******************************************************************************/
int main()
{
  Wife                          mom;
  TeenagedSon                   son;
  CollegeStudent                collegeStudent;
  ConstructionWorker            constructionWorker;
  XenobladeChronicles2Character nia("Nia");

  std::cout << doSomething(son) << '\n';
  std::cout << doSomething(mom) << '\n';
  std::cout << doSomething(collegeStudent) << '\n';
  std::cout << doSomething(constructionWorker) << '\n';
  std::cout << doSomething(nia) << '\n';

  system("PAUSE");

  return 0;
}
