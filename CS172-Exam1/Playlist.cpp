#include "Song.h"
#include "Playlist.h"
#include <string>


// constructor for the playlist
Playlist::Playlist(std::string name) {
	myname = name;
}
	;

// get the name of the Playlist
std::string getName();

// returns true when at least one song of 
// this genre is present.
bool Playlist::hasGenre(std::string genre) {
	if (Playlist)
};

// Add a new song
void Playlist::addSong(Song song) {
	if (numSongs < MAX_SONGS) {
		songArray[numberOfSongs];
		numSongs++;
	}


};

// How many songs in this playlist?
int Playlist::numberOfSongs() {

};

// Play a song.  return an empty string if there is no such song.
std::string Playlist::playSong(int songNumber) {
};
