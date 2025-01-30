#pragma once
# include <iostream>
# include "ATarget.hpp"

class ATarget;

class ASpell
{
	public:
		ASpell();
		ASpell(std::string name, std::string effects);
		ASpell(const ASpell &copy);
		ASpell& operator=(const ASpell &copy);
		virtual ~ASpell();
		const std::string &getName() const;
		const std::string &getEffects() const;
		virtual ASpell *clone() const = 0;
		void launch(const ATarget &target) const;
	private:
		std::string _name;
		std::string _effects;
};

