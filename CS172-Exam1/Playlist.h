
#ifndef PLAYLIST_H_ 
#define PLAYLIST_H_

#include "Song.h"
#include <string>


class Playlist {
private:
	std::string myname;
	const int MAX_SONGS = 999;
	int numSongs;
	Song songArray[1000];
public:
	Playlist(std::string name);
	bool hasGenre(std::string genre);
	void addSong(Song song);
	std::string playSong(int songNumber);
	int numberOfSongs();
	std::string getName();
}; 
#endif
#pragma once
