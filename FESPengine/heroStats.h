#pragma once
#include <vector>
/*nifty c++ trick to turn a var name into a string*/
#define STRINGIFY(name) stringify(#name), (name))

/*
This file contains the template that holds stats earned by a player for each hero

	HeroStats -> stats all heroes have
		|
		^
	Σ (all heroes) heroSpecificStats - a child struct with additional niche stats for each hero

Each player contains a list of all possible heroes (regardless of time played)
	and the stats for each specific hero are logged according to that player's recorded stats
*/

/* abstract */ class heroStats {

	//contains this hero's stats shared by all heroes
 protected:
	 //accessory
	std::vector<std::pair<std::string, int> > stringifiedStats;
	 //match
	int medalBronze;
	int medalSilver;
	int medalGold;
	int noMedal;
	int cards;
	 //game
	int timePlayed;
	int gamesWon;
	 //combat
	int heroDamageDone;
	int barrierDamageDone;
	int deaths;
	int objectiveTime;
	int objectiveKills;
	int eliminations;
	int timeOnFire;
	bool isDamageDealer;
	bool isHealer;
	bool isTank;

public:

	void stringify(char* name, int value) {
		this->stringifiedStats.push_back(std::make_pair(name, value));
	}

	/*
	3 fields that specify the type of character, used to generalize stats, and reduce the memory
	footprint each hero has to hold.  Each hero should only contain stats relevant to it

	In general : each hero should only be one category, healer - tank - dps
	The heroStats should then be casted to a specific hero to obtain the stats specific to that hero
	*/

	heroStats(bool thatIsHealer = false, bool thatIsDamageDealer = false, bool thatIsTank = false)
				: noMedal(0),
				  bronze(0),
				  silver(0),
				  gold(0),
				  cards(0),
				  timePlayed(0),
				  gamesWon(0),
				  objectiveTime(0),
				  objectiveKills(0),
				  heroDamageDone(0),
				  barrierDamageDone(0),
				  deaths(0),
				  timeOnFire(0),
				  isDamageDealer(thatIsHealer),
				  isTank(thatIsDamageDealer),
				  isHealer(thatIsTank)
	{
		int index = 0;
		/*Stats held by every Hero*/
		//this shouldnt be done in the constructor but after everything has been called...
		stringify(noMedal);
		stringify(medalBronze);
			silver(0),
			gold(0),
			cards(0),
			timePlayed(0),
			gamesWon(0),
			objectiveTime(0),
			objectiveKills(0),
			heroDamageDone(0),
			barrierDamageDone(0),
			deaths(0),
			timeOnFire(0),
		if (isDamageDealer) {
			int soloKills;
			int finalBlows;
			int multiKills;
			int criticalHits;
			int critAcc;
			int WeaponAcc;
			//zarya is damagedealer
		}

		if (isHealer) {
			int offensiveAssists = 0;
			int	offensiveAssistsMostInGame = 0;
			int defensiveAssists = 0;
			int	defensiveAssistsMostInGame = 0;
			int healingDone = 0;
			int healingDoneMostInGame = 0;
		}

		if (isTank) {

		}
	} //end constructor

	void stringify(int name);
	void updateStats(heroStats old);
	heroStats returnStats();
	virtual void calculateAvgs() {}
};

class widowStats : protected heroStats {
	
	heroStats baseStats;

	/*Damage Dealer*/
	int soloKills;
	int finalBlows;
	int multiKills;
	int criticalHits;
	int critAcc;
	int WeaponAcc;
	
	/*Hero Specific*/
	int venomMineKills;
	int	scopedCriticalHits;
	int	scopedCriticalHitsMostInGame;
	int	VenomMineKillsMostInGame;
	int	scopedAccuracyBestInGame;
	int	scopedAccuracy;
	int reconAssists;

	/*Averages*/
	int	venomMineKillsAvg;
	int	scopedCriticalHitsAvg;
};