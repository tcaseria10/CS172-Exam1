#include "Song.h"
#include <string>




// allow the caller to set up the song.  
// valid genres are "ModernPop", "Grunge", "Classical" and "Americana".
Song::Song(std::string title, std::string artist, std::string genre) {
	mytitle = title;
	myartist = artist;
	mygenre = genre;
};

// default song
Song::Song() {
	mytitle = "notitle";
};

std::string Song::getTitle()  const {
	return mytitle;
};  // return the song title
std::string Song::getArtist() const {
	return myartist;
}; // return the artist who performed the song
std::string Song::getGenre() const {
	return mygenre;
};  // return the genre of the song

						  // return true if the song is of the genre.
bool Song::isOfGenre(std::string genre) {
	if (mygenre == genre)
		return true;
	else
		return false;
};
