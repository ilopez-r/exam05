#include "ATarget.hpp"

ATarget::ATarget(){}

ATarget::ATarget(std::string type)
{
	_type = type;
}

ATarget::ATarget(const ATarget &copy)
{
	_type = copy._type;
}

ATarget& ATarget::operator=(const ATarget &copy)
{
	if (this != &copy)
		_type = copy._type;
	return (*this);
}

ATarget::~ATarget(){}

const std::string & ATarget::getType() const
{
	return (_type);
}

void ATarget::getHitBySpell(const ASpell &spell) const
{
	std::cout << _type << " has been " << spell.getEffects() << "!\n";
}

