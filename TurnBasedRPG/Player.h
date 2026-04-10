#pragma once
#include "Character.h"
#include "ActionResult.h"

class Player : public Character
{
public:
    static constexpr int kMaxSp{ 5 };
    static constexpr int kMaxEnergy{ 100 };

    explicit Player(std::string name);

    int  getSp()         const;
    int  getEnergy()     const;
    bool ultimateReady() const;

    
    ActionResult basicAttack();  
    virtual ActionResult useSkill();     
    ActionResult useUltimate(); 

protected:
    Player(std::string name, int maxHp);

private:
    int m_sp{ 3 };
    int m_energy{ 0 };

    void gainSp(int amount);
    void gainEnergy(int amount);

};


