#pragma once
#include "Enemy.h"
class VampireBat : public Enemy
{
public:
	VampireBat(std::string name, int maxhp, int maxtoughness);
	ActionResult performAttack() override;
private:
	int m_turnCount{ 0 };

};