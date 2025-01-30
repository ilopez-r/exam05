#pragma once
# include <iostream>
# include "ASpell.hpp"

class ASpell;

class ATarget
{
	public:
		ATarget();
		ATarget(std::string type);
		ATarget(const ATarget &copy);
		ATarget& operator=(const ATarget &copy);
		virtual ~ATarget();
		const std::string &getType() const;
		virtual ATarget *clone() const = 0;
		void getHitBySpell(const ASpell &spell) const;
	private:
		std::string _type;
};

