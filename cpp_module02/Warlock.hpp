#pragma once
# include <iostream>
# include "ASpell.hpp"
# include "ATarget.hpp"
# include "SpellBook.hpp"

class ASpell;
class ATarget;

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
		void forgetSpell(std::string spell);
		void launchSpell(std::string spell, ATarget &target);
	private:
		Warlock();
		Warlock(const Warlock &copy);
		Warlock& operator=(const Warlock &other);
		std::string _name;
		std::string _title;
		SpellBook _spells;
};

