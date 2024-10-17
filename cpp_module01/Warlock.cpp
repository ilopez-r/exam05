#include "Warlock.hpp"

Warlock::Warlock()
{
	_name = "Default name";
	_title = "Default title";
}

Warlock::Warlock(std::string name, std::string title)
{
	_name = name;
	_title = title;
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(const Warlock& copy)
{
	*this = copy;
}

Warlock& Warlock::operator=(const Warlock& other)
{
	_name = other._name;
	_title = other._title;
	return *this;
}

Warlock::~Warlock()
{
	std::cout << _name << ": My job here is done!" << std::endl;
}

std::string const & Warlock::getName() const
{
	return (_name);
}

std::string const & Warlock::getTitle() const
{
	return (_title);
}

void Warlock::setTitle(std::string const & str)
{
	_title = str;
}

void Warlock::introduce() const
{
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}
