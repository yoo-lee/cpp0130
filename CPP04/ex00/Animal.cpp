	#include "Animal.h"

	Animal::Animal() : type("") 
	{
		std::cout << "Default constructor for Animal\n";
	}

	Animal::Animal(const Animal &obj) : type("") 
	{
		std::cout << "copy constructor for Animal\n";
		*this = obj;
	}

	Animal::~Animal()
	{
		std::cout << "Deconstructor for Animal\n"; 
	}

	Animal& Animal::operator = (const Animal &obj)
	{
		std::cout << "Assigment constructor for Animal\n";
		this->type = obj.getType();
		return *this; 
	}
	
	void Animal::makeSound() const
	{
		std::cout << "Paooon bowmyao\n"; 
	}

	const std::string &Animal::getType() const
	{
		return (this->type);
	}	

	std:: ostream	&operator<<(std::ostream &ostream, const Animal &instance)
	{
		ostream << instance.getType();
		return ostream;
	}


// For every exercise, you have to provide the most complete tests you can.
// Constructors and destructors of each class must display specific messages. Don’t use the
// same message for all classes.
// Start by implementing a simple base class called Animal. It has one protected
// attribute:
// • std::string type;
// Implement a Dog class that inherits from Animal.
// Implement a Cat class that inherits from Animal.
// These two derived classes must set their type field depending on their name. Then,
// the Dog’s type will be initialized to "Dog", and the Cat’s type will be initialized to "Cat".
// The type of the Animal class can be left empty or set to the value of your choice.
// Every animal must be able to use the member function:
// makeSound()
// It will print an appropriate sound (cats don’t bark).
