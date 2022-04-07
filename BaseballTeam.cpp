#include <iostream>
#include <string>
#include "BaseballTeam.h"// name of team

BaseballTeam::BaseballTeam(){
    this->clear();
}
// this is the call for the class otherwise knwon as the class conctructer
BaseballTeam::BaseballTeam(string name){
    this->clear();
    this->mName = name;
}
    // also a class contructer
string BaseballTeam::getName(){
    return mName;
}
    // ethod will set the private object mName to name
void BaseballTeam::setName(string name){
    mName = name;
}
// road wins
int BaseballTeam::getAwayWins(void){
    return mRoadWins;
}
void BaseballTeam::setAwayWins(int win){
    mRoadWins = win;
}
 // road loses
int BaseballTeam::getAwayLosses(void){
    return mRoadLosses;
}
void BaseballTeam::setAwayLosses(int lose){
    mRoadLosses = lose;
}
// home wins
int BaseballTeam::getHomeWins(void){
    return mHomeWins;
}
void BaseballTeam::setHomeWins(int win){
    mHomeWins = win;
}
 
// home loses
int BaseballTeam::getHomeLosses(void){
    return mHomeLosses;
}
void BaseballTeam::setHomeLosses(int lose){
    mHomeLosses = lose;
}
    // addds one point to total home wins
void BaseballTeam::wonHomeGame(){
    mHomeWins+=1;
}
// substracts one point to total home wins
void BaseballTeam::lostHomeGame(){
   mHomeLosses+=1;
}
// addds one point to total road wins
void BaseballTeam::wonAwayGame(){
    mRoadWins+=1;
}
// substarcts one point to total home wins
void BaseballTeam::lostAwayGame(){
   mRoadLosses+=1;
}
// sets eveyr private object in class Baseballteam to 0 for ex, mHomeWins, mRoadWins etc.
void BaseballTeam::clear(){

  this->mHomeLosses = 0;
  this->mHomeWins = 0;
  this->mRoadLosses = 0;
  this->mRoadWins = 0;
  
}

bool BaseballTeam::hasWinningRecord(){
   // checks if the total wins is greater than the total losses, by default this will be true even if total wins is the same as total losses.
    int total_wins = 0;
   total_wins += mHomeWins;
   total_wins += mRoadWins;
   int total_lose = 0;
   total_lose += mHomeLosses;
   total_lose += mRoadLosses;
    bool result;
    if (total_wins == 0 && total_lose == 0){
        result = true;
        return result;
    }
    if(total_wins >= total_lose){
       result = true;
       return result;
   }
   else{
        result = false;
       return result;
   }
}
bool BaseballTeam::hasWinningRoadRecord(){
    // checks for how many road wins and road losses, if the wins are greater than the losses than this will return true, else false.
   int total_wins = 0;
   total_wins += mRoadWins;
   int total_lose = 0;
   total_lose += mRoadLosses;
    if (total_wins == 0 && total_lose == 0){
        bool result = true;
        return result;
    }
   if(total_wins >= total_lose){
       bool result = true;
       return result;
   }
   else{
       bool result = false;
       return result;
   }
}
bool BaseballTeam::hasWinningHomeRecord(){
    // same thing as the road winning record as this one only checks for road wins and retursn a boolean expression based on the results just like the previous method.
   int total_wins = 0;
   total_wins += mHomeWins;
   int total_lose = 0;
    total_lose += mHomeLosses;
    if (total_wins == 0 && total_lose == 0){
        bool result = true;
        return result;
    }
   if(total_wins >= total_lose){
       bool result = true;
       return result;
   }
   else{
       bool result = false;
       return result;
   }
}
string BaseballTeam::overallRecord(){
    // this one is probbly mich easier than I made it look like, but basically depedning on the total wins and toal losses, the 3 digits on the left will diplay the wins and the 3 digits on the right with display the losses.
    string roster = "000-000";
   
    int total_wins = mHomeWins + mRoadWins;
   string win;
   win = to_string(total_wins);
  
   int total_lose = mHomeLosses + mRoadLosses;
   string lose;
   lose = to_string(total_lose);
   
   for(int i = 0; i <=2; i++){
       if(total_wins <= 999){
           roster[0] = win[0];
           roster[1] = win[1];
           roster[2] = win[2];
       if(total_wins <= 99){
           roster[0] = '0';
           roster[1] = win[0];
           roster[2] = win[1];
           if(total_wins <= 9){
               roster[0] = '0';
               roster[1] = '0';
               roster[2] = win[0];
           
           }
       }
   }
       if(total_lose <= 999){
           roster[4] = lose[0];
           roster[5] = lose[1];
           roster[6] = lose[2];
       if(total_lose <= 99){
           roster[4] = '0';
           roster[5] = lose[0];
           roster[6] = lose[1];
           if(total_lose <= 9){
               roster[4] = '0';
               roster[5] = '0';
               roster[6] = lose[0];
           
           }
       }
   }
       break;
   }
   return (roster);
}










