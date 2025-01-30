#pragma once
# include <iostream>
# include <map>
# include "ASpell.hpp"

class ASpell;

class SpellBook
{
	public:
		SpellBook();
		~SpellBook();
		void learnSpell(ASpell *spell);
		void forgetSpell(std::string const &spellname);
		ASpell* createSpell(std::string const &spellname);
	private:
		SpellBook(const SpellBook &copy);
		SpellBook& operator=(const SpellBook &copy);
		std::map <std::string, ASpell*> _spellbook;
};

