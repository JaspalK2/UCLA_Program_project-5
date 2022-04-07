
#ifndef League_h
#define League_h
#include <iostream>
#include "BaseballTeam.h"
using namespace std;
class League{
public:
    League();
    League(string name);
    string getName(void);
    void setName(string name);
    void play(BaseballTeam& away, BaseballTeam& home, int awayScore, int homeScore);
    void season(BaseballTeam& team, int homewins, int homelosses, int roadwins, int roadlosses);
    BaseballTeam pennantWinner(BaseballTeam& team1, BaseballTeam& team2, BaseballTeam& team3, BaseballTeam& team4, BaseballTeam& team5);
private:
    string team_name;
};

#endif /* League_h */
