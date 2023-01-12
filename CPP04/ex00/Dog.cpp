#include "Animal.h"

	Dog::Dog() : Animal()
	{
		this -> type = "Dog";
		std::cout << "Default constructor for Dog \n";
	}

	Dog::~Dog()
	{
	std::cout << "Deconstructor for Dog \n";
	}

	Dog::Dog( Dog const &obj) : Animal()
	{
	std::cout << "Copy constructor for Dog \n";
	*this = obj;	
	}
	
	void	Dog::makeSound() const
	{
	std::cout << "Bowwow \n";
	}

	Dog& Dog::operator = (const Dog &obj)
	{
		// std::cout << "Assigment constructor for Cat\n";
		type = obj.getType();
		return *this; 
	}