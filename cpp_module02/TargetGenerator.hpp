#pragma once
# include <iostream>
# include "ATarget.hpp"
# include <map>

class ASpell;

class TargetGenerator
{
	public:
		TargetGenerator();
		~TargetGenerator();
		void learnTargetType(ATarget* target);
		void forgetTargetType(std::string const &target);
		ATarget* createTarget(std::string const &target);
		
	private:
		TargetGenerator(const TargetGenerator &copy);
		TargetGenerator& operator=(const TargetGenerator &other);
		std::map<std::string, ATarget*> _targets;
};

