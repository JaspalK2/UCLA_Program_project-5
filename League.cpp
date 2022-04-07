#include <iostream>
#include <string>
#include "League.h"
#include "BaseballTeam.h"

using namespace std;

League::League(){
    
}
// contrcutor
League::League(string name){
    this-> team_name = name;
}
// constrcutor
string League::getName(){
    return team_name;
}
// set name
void League::setName(string name){
    team_name = name;
}
// creates a mini game in which a team will win or lose depending on their score.
void League::play(BaseballTeam& away, BaseballTeam& home, int awayScore, int homeScore){
    if(awayScore > homeScore){
        away.wonAwayGame();
        home.lostHomeGame();
    }
    if(awayScore<homeScore){
    home.wonHomeGame();
    away.lostAwayGame();
    }
}
 // adds the stats for a singular team that uses the League class it will acount for all the thinsh such as the homeiwns awaywins homelosses and awaylosses, this will then be implemented to change things such as the voerall record.
void League::season(BaseballTeam& team, int homewins, int homelosses, int roadwins, int roadlosses){
    team.setHomeWins(homewins);
    team.setHomeLosses(homelosses);
    team.setAwayWins(roadwins);
    team.setAwayLosses(roadlosses);
}
// checks all 5 teamsand then checks for which team had the best overall record based on the win to lose ratio.
BaseballTeam League::pennantWinner(BaseballTeam& team1, BaseballTeam& team2, BaseballTeam& team3, BaseballTeam& team4, BaseballTeam& team5){
    string size1 = team1.overallRecord();
    string size2 = team2.overallRecord();
    string size3 = team3.overallRecord();
    string size4 = team4.overallRecord();
    string size5 = team5.overallRecord();

    double digit_size1 = ((double)size1[2]-48);
    double digit1_size1 = 10*((double)size1[1]-48);
    double digit2_size1 = 100*((double)size1[0]-48);
    double total_size1_wins = digit_size1 + digit1_size1+digit2_size1;
    double ndigit_size1 = ((double)size1[6]-48);
    double ndigit1_size1 = 10*((double)size1[5]-48);
    double ndigit2_size1 = 100*((double)size1[4]-48);
    double total_size1_losses = ndigit_size1 + ndigit1_size1+ndigit2_size1;
    
    double digit_size2 = ((double)size2[2]-48);
    double digit1_size2 = 10*((double)size2[1]-48);
    double digit2_size2 = 100*((double)size2[0]-48);
    double total_size2_wins = digit_size2 + digit1_size2+digit2_size2;
    double ndigit_size2 = ((double)size2[6]-48);
    double ndigit1_size2 = 10*((double)size2[5]-48);
    double ndigit2_size2 = 100*((double)size2[4]-48);
    double total_size2_losses = ndigit_size2 + ndigit1_size2+ndigit2_size2;
    
    double digit_size3 = ((double)size3[2]-48);
    double digit1_size3 = 10*((double)size3[1]-48);
    double digit2_size3 = 100*((double)size3[0]-48);
    double total_size3_wins = digit_size3 + digit1_size3+digit2_size3;
    double ndigit_size3 = ((double)size3[6]-48);
    double ndigit1_size3 = 10*((double)size3[5]-48);
    double ndigit2_size3 = 100*((double)size3[4]-48);
    double total_size3_losses = ndigit_size3 + ndigit1_size3+ndigit2_size3;
    
    double digit_size4 = ((double)size4[2]-48);
    double digit1_size4 = 10*((double)size4[1]-48);
    double digit2_size4 = 100*((double)size4[0]-48);
    double total_size4_wins = digit_size4 + digit1_size4+digit2_size4;
    double ndigit_size4 = ((double)size4[6]-48);
    double ndigit1_size4 = 10*((double)size4[5]-48);
    double ndigit2_size4 = 100*((double)size4[4]-48);
    double total_size4_losses = ndigit_size4 + ndigit1_size4+ndigit2_size4;
    
    double digit_size5 = ((double)size5[2]-48);
    double digit1_size5 = 10*((double)size5[1]-48);
    double digit2_size5 = 100*((double)size5[0]-48);
    double total_size5_wins = digit_size5 + digit1_size5+digit2_size5;
    double ndigit_size5 = ((double)size5[6]-48);
    double ndigit1_size5 = 10*((double)size5[5]-48);
    double ndigit2_size5 = 100*((double)size5[4]-48);
    double total_size5_losses = ndigit_size5 + ndigit1_size5+ndigit2_size5;

    double win_percentage_size1 = total_size1_wins / total_size1_losses;
    double win_percentage_size2 = total_size2_wins / total_size2_losses;
    double win_percentage_size3 = total_size3_wins / total_size3_losses;
    double win_percentage_size4 = total_size4_wins / total_size4_losses;
    double win_percentage_size5 = total_size5_wins / total_size5_losses;
    double array[5] = {win_percentage_size1, win_percentage_size2, win_percentage_size3, win_percentage_size4, win_percentage_size5};
    double largest_value;
    for(int i = 0; i <= 4; i++){
        if(array[0] < array[i])
                   array[0] = array[i];
        
        
    }
   largest_value = array[0];
  
    if(largest_value == win_percentage_size1){
        return team1;
    }
    else if(largest_value == win_percentage_size2){
        return team2;
    }
    else if(largest_value == win_percentage_size3){
        return team3;
    }
    else if(largest_value == win_percentage_size4){
        return team4;
    }
    else if(largest_value == win_percentage_size5){
        return team5;
    }
    return team1;
}

