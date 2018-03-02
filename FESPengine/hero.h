#pragma once

#include <cstdlib>
#include "heroStats.h"
#include "ability.h"
#include "ultimate.h"
#include <string>

#define MAX_NUM_MEDALS 5

struct medal {
	/*
	Each hero in a game always owns a medal,
	even if it is none
	*/
	enum Medal {
		None,
		Bronze,
		Silver,
		Gold
	};

 private:
	Medal currentMedal = None; //no medal

 public:
	Medal returnThisMedal() { return this->currentMedal; }
	void updateMedal(Medal newMedal) { currentMedal = newMedal; }
};

class hero {

	/*
	
	*/

 private:

	 enum Role {
		 Defense,
		 Offense,
		 Support,
		 Tank
	 };

 protected:

	 //every hero conatins (at least) 2 abilites
	 ability ability1;
	 ability ability2;
	 //every hero contains an ult
	 ultimate ult;

	 //movement speed
	 double speed = 1.0;

	 /*
	 Every specific player who owns a hero, inherits a % of the max damage per second possible by that hero
	 had they had 100% accuracy and played perfectly 
	 */
	 double maxDPS;
	 double maxHPS;

	 int health;

	 Role thisHeroRole;

	 medal thisHeroMedals[MAX_NUM_MEDALS];

	 //the player[s] using this hero during a match
	 std::string playerWhoOwnsOnTeam1 = "";
	 std::string playerWhoOwnsOnTeam2 = "";

	 heroStats currentStats;

 public:
	 
};