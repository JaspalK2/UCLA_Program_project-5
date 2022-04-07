#include <iostream>
#include <string>
#include <cassert>

    #include "BaseballTeam.h"
    #include "League.h"
int main(){
    // sample test code
              BaseballTeam team( "Your Team" );
              assert( team.getName( ) == "Your Team" );
              assert( team.overallRecord( ) == "000-000" );
              assert( team.hasWinningRecord( ) );
              assert( team.hasWinningRoadRecord( ) );
              assert( team.hasWinningHomeRecord( ) );

              team.wonHomeGame( );
              team.lostAwayGame( );

              assert( team.overallRecord( ) == "001-001" );
              assert( team.hasWinningRecord( ) );
              assert( ! team.hasWinningRoadRecord( ) );
              assert( team.hasWinningHomeRecord( ) );

              team.clear( );
              assert( team.overallRecord( ) == "000-000" );

              League league( "Your League" );
              assert( league.getName() == "Your League" );
              league.season( team, 15, 10, 10, 15 );
              assert( team.overallRecord( ) == "025-025" );
              assert( team.hasWinningRecord( ) );
              assert( !team.hasWinningRoadRecord( ) );
              assert( team.hasWinningHomeRecord( ) );
              
    
    League season("2020 season league");
    assert(season.getName() == "2020 season league");
    season.season(team, 15, 10, 2, 5);
    assert(team.overallRecord() == "017-015");
        
    
    
    
              cout << "all tests passed!" << endl;

              return 0;
}
