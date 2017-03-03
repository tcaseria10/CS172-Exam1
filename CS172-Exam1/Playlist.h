
#ifndef PLAYLIST_H_ 
#define PLAYLIST_H_

#include "Song.h"
#include <string>


class Playlist {
private:
	std::string myname;
	const int MAX_SONGS = 1000;
	int numSongs;
	Song songArray[];
public:
	Playlist(std::string name);
	bool hasGenre(std::string genre);
	void addSong(Song song);
	std::string playSong(int songNumber);
	int numberOfSongs();
}; 
#endif
#pragma once
