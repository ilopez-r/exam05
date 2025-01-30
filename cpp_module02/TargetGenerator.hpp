#pragma once
# include <iostream>
# include <map>
# include "ATarget.hpp"

class ATarget;

class TargetGenerator
{
	public:
		TargetGenerator();
		~TargetGenerator();
		void learnTargetType(ATarget *target);
		void forgetTargetType(std::string const &target);
		ATarget* createTarget(std::string const &target);
	private:
		TargetGenerator(const TargetGenerator &copy);
		TargetGenerator& operator=(const TargetGenerator &copy);
		std::map <std::string, ATarget*> _targetbook;
};

