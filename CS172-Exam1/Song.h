
#ifndef SONG_H_ 
#define SONG_H_

#include <string>


class Song {
protected:
	std::string mytitle;
	std::string myartist;
	

public:
	std::string mygenre;

	bool isOfGenre(std::string genre);
	Song(std::string title, std::string artist, std::string genre);
	
	Song();
	std::string getTitle () const;
	std::string getArtist() const;
	std::string getGenre() const;
	
}; 
#endif
#pragma once
