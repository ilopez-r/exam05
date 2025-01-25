#pragma once
# include <iostream>
# include "ASpell.hpp"
# include <map>

class ASpell;

class SpellBook
{
	public:
		SpellBook();
		~SpellBook();
		void learnSpell(ASpell *spell);
		void forgetSpell(std::string const &spell);
		ASpell* createSpell(std::string const &spell);
	private:
		SpellBook(const SpellBook &copy);
		SpellBook& operator=(const SpellBook &other);
		std::map<std::string, ASpell*> _spells;
};

