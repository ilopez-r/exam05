#pragma once
# include "ATarget.hpp"
# include <iostream>

class ATarget;

class ASpell
{
	public:
		ASpell();
		ASpell(std::string name, std::string effects);
		virtual ~ASpell();
		ASpell(const ASpell &copy);
		ASpell& operator=(const ASpell &other);
		std::string getName() const;
		std::string getEffects() const;
		virtual ASpell* clone() const = 0;
		void launch(const ATarget &target) const;
		
	protected:
		std::string _name;
		std::string _effects;
};

