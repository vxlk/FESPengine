#pragma once

#include "hero.h"
#include "heroMetaStats.h" //win/loss -> season stats
#include <vector>

class player {

 protected:

	 //heros to be used in a game
	 std::vector<hero> heroPool;

	 //the season stats this player possesses on each hero
	 std::vector<heroMetaStats> metaStats;

	 //not deterministic, but a simple reference to points among the rest of the world
	 //a compilation of skills into 1 number
	 //same as overbuff's system
	 double valueOnCurrentHero;

	 std::string playerName;

	 std::string battleTag;

	 double percentOfMaxDPS;
	 double percentOfMaxHPS;

	 //determine the amount of deviation from the median with fatigue by # of games played
	 double fatigue;




 public:

	 void fillInHeroStats();


};
