#pragma once
# include <iostream>
# include "ASpell.hpp"

class ASpell;

class ATarget
{
	protected:
		std::string _type;
	public:
		ATarget();
		ATarget(std::string type);
		ATarget(const ATarget& copy);
		ATarget& operator=(const ATarget& other);
		virtual ~ATarget();
		std::string getType() const;
		virtual *ATarget clone() const = 0;
		void getHitBySpell (ASpell const & spell) const;
};
