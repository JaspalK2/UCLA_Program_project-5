
#ifndef BaseballTeam_h
#define BaseballTeam_h
#include <iostream>
#include <iomanip>
#include <string>
#include<sstream>
using namespace std;
 
class BaseballTeam{
public:
   
    BaseballTeam();
    BaseballTeam(string name);
    void setName(string name);
    string getName(void);
    void setAwayWins(int win);
    int getAwayWins(void);
    void setAwayLosses(int lose);
    int getAwayLosses(void);
    void setHomeWins(int win);
    int getHomeWins(void);
    void setHomeLosses(int lose);
    int getHomeLosses(void);
    void wonHomeGame();
    void lostHomeGame();
    void wonAwayGame();
    void lostAwayGame();
    void clear();
    bool hasWinningRecord();
    bool hasWinningRoadRecord();
    bool hasWinningHomeRecord();
    string overallRecord();
private:
    string mName;
    int mRoadWins = 0;
    int mRoadLosses = 0;
    int mHomeWins = 0;
    int mHomeLosses = 0;
};



#endif /* BaseballTeam_h */
