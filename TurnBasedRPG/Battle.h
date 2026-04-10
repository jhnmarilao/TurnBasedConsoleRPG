#pragma once
class Player;   
class Enemy;


class Battle
{
public:
    Battle(Player& player, Enemy& enemy);
    void run();

private:
    Player& m_player;
    Enemy& m_enemy;

    static constexpr int kBasicToughDmg{ 10 };
    static constexpr int kSkillToughDmg{ 25 };
    static constexpr int kUltToughDmg{ 30 };

    void printStatus()  const;
    void printBar(int current, int maximum, int width) const;
    void playerTurn();
    void enemyTurn();
};

