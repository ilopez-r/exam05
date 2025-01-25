#pragma once
# include "ASpell.hpp"
# include <iostream>

class ASpell;

class ATarget
{
	public:
		ATarget();
		ATarget(std::string type);
		virtual ~ATarget();
		ATarget(const ATarget &copy);
		ATarget& operator=(const ATarget &other);
		const std::string &getType() const;
		virtual ATarget* clone() const = 0;
		void getHitBySpell(const ASpell &spell) const;
		
	protected:
		std::string _type;
};

