#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}


TargetGenerator::TargetGenerator(const TargetGenerator &copy)
{
	*this = copy;
}

TargetGenerator& TargetGenerator::operator=(const TargetGenerator &other)
{
	_targets = other._targets;
	return (*this);
}

TargetGenerator::~TargetGenerator(){}

void TargetGenerator::learnTargetType(ATarget* target)
{
	if (target)
		_targets[target->getType()] = target;
}

void TargetGenerator::forgetTargetType(std::string const &target)
{
	if (_targets.find(target) != _targets.end())
		_targets.erase(_targets.find(target));
}

ATarget* TargetGenerator::createTarget(std::string const &target)
{
	ATarget* tmp = NULL;
	if (_targets.find(target) != _targets.end())
		tmp = _targets[target];
	return (tmp);
}

