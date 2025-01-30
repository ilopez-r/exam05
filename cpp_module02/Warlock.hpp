#pragma once
# include <iostream>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"
# include "SpellBook.hpp"

class ASpell;

class ATarget;

class SpellBook;

class Warlock
{
	public:
		Warlock(std::string name, std::string title);
		~Warlock();
		const std::string &getName() const;
		const std::string &getTitle() const;
		void setTitle(const std::string &title);
		void introduce() const;
		void learnSpell(ASpell *spell);
		void forgetSpell(std::string spellname);
		void launchSpell(std::string spellname, ATarget &target);
	private:
		Warlock();
		Warlock(const Warlock &copy);
		Warlock& operator=(const Warlock &copy);
		std::string _name;
		std::string _title;
		SpellBook _spellbook;
};

