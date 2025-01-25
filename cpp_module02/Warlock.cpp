#include "Warlock.hpp"

Warlock::Warlock(){}

Warlock::Warlock(std::string name, std::string title)
{
	_name = name;
	_title = title;
	std::cout << _name << ": This looks like another boring day.\n";
}

Warlock::Warlock(const Warlock &copy)
{
	*this = copy;
}

Warlock& Warlock::operator=(const Warlock &other)
{
	_name = other._name;
	_title = other._title;
	return (*this);
}

Warlock::~Warlock()
{
	std::cout << _name << ": My job here is done!\n";
}

const std::string & Warlock::getName() const
{
	return (_name);
}

const std::string & Warlock::getTitle() const
{
	return (_title);
}

void Warlock::setTitle(const std::string &title)
{
	_title = title;
}

void Warlock::introduce() const
{
	std::cout << _name << ": I am " << _name << ", " << _title << "!\n";
}

void Warlock::learnSpell(ASpell *spell)
{
	_spells.learnSpell(spell);
}

void Warlock::forgetSpell(std::string spell)
{
	_spells.forgetSpell(spell);
}

void Warlock::launchSpell(std::string spell, ATarget &target)
{
	if (_spells.createSpell(spell))
		_spells.createSpell(spell)->launch(target);
}

