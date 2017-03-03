
#ifndef SONG_H_ 
#define SONG_H_

#include <string>


class Song {
private:
	std::string mytitle;
	std::string myartist;
	std::string mygenre;
public:
	bool isOfGenre(std::string genre);
	Song(std::string title, std::string artist, std::string genre);
	}
	Song();
	std::string getTitle();
	std::string getArtist();
	std::string getGenre();

}; 
#endif
#pragma once
