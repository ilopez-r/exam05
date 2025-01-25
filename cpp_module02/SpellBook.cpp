#include "SpellBook.hpp"

SpellBook::SpellBook(){}


SpellBook::SpellBook(const SpellBook &copy)
{
	*this = copy;
}

SpellBook& SpellBook::operator=(const SpellBook &other)
{
	_spells = other._spells;
	return (*this);
}

SpellBook::~SpellBook(){}

void SpellBook::learnSpell(ASpell *spell)
{
	if (spell)
		_spells[spell->getName()] = spell;
}

void SpellBook::forgetSpell(std::string const &spell)
{
	if (_spells.find(spell) != _spells.end())
		_spells.erase(_spells.find(spell));
}

ASpell* SpellBook::createSpell(std::string const &spell)
{
	ASpell* tmp = NULL;
	if (_spells.find(spell) != _spells.end())
		tmp = _spells[spell];
	return (tmp);
}

