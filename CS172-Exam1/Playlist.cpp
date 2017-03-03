#include "Song.h"
#include "Playlist.h"
#include <string>


// constructor for the playlist
Playlist::Playlist(std::string name) {
	myname = name;
};

// get the name of the Playlist
std::string Playlist::getName() {
	return Playlist::myname;
};

// returns true when at least one song of 
// this genre is present.
bool Playlist::hasGenre(std::string genre) {
	int itdoeshavegenre=0;
	for (int counter = 1; counter <= Playlist::numSongs; counter++) {
		if (songArray[counter].Song::mygenre == genre)
			itdoeshavegenre++;
			return true;
	}
		return false;
};

// Add a new song
void Playlist::addSong(Song song) {
	int songcount = 0;
	int counter = 0;
	if (numSongs < MAX_SONGS) {
		Playlist::songArray[counter] = song;
		songcount++;
		counter++;
		numSongs = songcount;
	}
};

// How many songs in this playlist?
int Playlist::numberOfSongs() {
	return Playlist::numSongs;
};

// Play a song.  return an empty string if there is no such song.
std::string Playlist::playSong(int songNumber) {
	if (songArray[songNumber].mygenre!="")
		return "PLAYING!";
	else
		return "";
};
