#pragma once
#include "getMetaHeroStats.h"

/*
A template structure containing all specific player's stats on a given hero
each structure represents 1 set of stats on a hero, for a given player

player contains a set of heroes that contain a set of heroMetaStats -> that are used to calculate 
heroStats for a certain game

player { { hero1, hero2, hero3 - > { heroMetaStats1, heroMetaStats2, heroMetaStats3 } } } 
*/

#define NUM_OW_HEROES 21


template <class T>
class heroMetaStats {
 private:
	T* heroRosterStats;
 public:
	 heroMetaStats() { heroRosterStats = new heroMetaStats; }
};