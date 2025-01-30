#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}

TargetGenerator::TargetGenerator(const TargetGenerator &copy)
{
	_targetbook = copy._targetbook;
}

TargetGenerator& TargetGenerator::operator=(const TargetGenerator &copy)
{
	if (this != &copy) 
		_targetbook = copy._targetbook;
	return (*this);
}

TargetGenerator::~TargetGenerator(){}

void TargetGenerator::learnTargetType(ATarget *target)
{
	if (target)
		_targetbook[target->getType()] = target;
}

void TargetGenerator::forgetTargetType(std::string const &target)
{
	if (_targetbook.find(target) != _targetbook.end())
		_targetbook.erase(_targetbook.find(target));
}

ATarget* TargetGenerator::createTarget(std::string const &target)
{
	return (_targetbook[target]);
}

