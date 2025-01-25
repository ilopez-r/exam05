#include "ASpell.hpp"

ASpell::ASpell(){}

ASpell::ASpell(std::string name, std::string effects)
{
	_name = name;
	_effects = effects;
}

ASpell::ASpell(const ASpell &copy)
{
	*this = copy;
}

ASpell& ASpell::operator=(const ASpell &other)
{
	_name = other._name;
	_effects = other._effects;
	return (*this);
}

ASpell::~ASpell(){}

std::string ASpell::getName() const
{
	return (_name);
}

std::string ASpell::getEffects() const
{
	return (_effects);
}

void ASpell::launch(const ATarget &target) const
{
	target.getHitBySpell(*this);
}
