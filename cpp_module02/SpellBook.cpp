#include "SpellBook.hpp"

SpellBook::SpellBook(){}

SpellBook::SpellBook(const SpellBook &copy)
{
	_spellbook = copy._spellbook;
}

SpellBook& SpellBook::operator=(const SpellBook &copy)
{
	if (this != &copy) 
		_spellbook = copy._spellbook;
	return (*this);
}

SpellBook::~SpellBook(){}

void SpellBook::learnSpell(ASpell *spell)
{
	if (spell)
		_spellbook[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(std::string const &spellname)
{
	if (_spellbook.find(spellname) != _spellbook.end())
		_spellbook.erase(_spellbook.find(spellname));
}

ASpell* SpellBook::createSpell(std::string const &spellname)
{
	ASpell* tmp = NULL;
	if (_spellbook.find(spellname) != _spellbook.end())
		tmp = _spellbook[spellname];
	return (tmp);
}
