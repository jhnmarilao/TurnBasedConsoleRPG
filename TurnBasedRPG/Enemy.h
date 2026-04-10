#pragma once
#include "Character.h"
#include "ActionResult.h"
#include <optional>
#include "Drop.h"


class Enemy : public Character
{
public:
    Enemy(std::string name, int maxHp, int maxToughness, std::optional<Drop> drop = std::nullopt);
    int  getToughness()    const;
    int  getMaxToughness() const;
    bool isBroken()        const;
    bool hasDrop() const;
    const std::optional<Drop>& getDrop() const;
    std::optional<Drop> dropLoot();
    void reduceToughness(int amount);
    void recoverFromBreak();
    virtual ActionResult performAttack();




private:
    int  m_toughness{};
    int  m_maxToughness{};
    bool m_isBroken{ false };
    std::optional<Drop> m_drop{};
};

