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
	_name = copy._name;
	_title = copy._name;
}

Warlock& Warlock::operator=(const Warlock &copy)
{
	if (this != &copy)
	{
		_name = copy._name;
		_title = copy._name;
	}
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
	_spellbook.learnSpell(spell);
}

void Warlock::forgetSpell(std::string spellname)
{
	_spellbook.forgetSpell(spellname);;
}

void Warlock::launchSpell(std::string spellname, ATarget &target)
{
	if (_spellbook.createSpell(spellname))
		_spellbook.createSpell(spellname)->launch(target);
}

