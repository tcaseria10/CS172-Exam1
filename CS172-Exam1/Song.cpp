#include "Song.h"
#include <string>


// default song
Song::Song() {
	mytitle = "notitle"
};
// allow the caller to set up the song.  
// valid genres are "ModernPop", "Grunge", "Classical" and "Americana".
Song::Song(std::string title, std::string artist, std::string genre) {
	mytitle = title;
	myartist = artist;
	mygenre = genre;
};

std::string getTitle() const {

};  // return the song title
std::string getArtist() const {

}; // return the artist who performed the song
std::string getGenre() const {

};  // return the genre of the song

						  // return true if the song is of the genre.
bool Song::isOfGenre(std::string genre) {
	if (Song.genre == genre)
		return true;
	else
		return false;
};
