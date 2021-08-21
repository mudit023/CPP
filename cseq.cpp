/* Define a class Song with attributes – songtrack, songname and runningtime. Define constructors and members functions. 
Also, compare and check whether two songs are have same values or not for all components. 
 */
#include<iostream>
#include<string.h>
using namespace std;

class Song
{
  char songName[30];
  float songLength;
  char artist[20];
  public:
  Song();
  void getName();
  void getArtist();
  void getLength();
  void display();
  int compare(Song S);
};

int main()
{
  Song song1,song2;
  song1.getName();
  song1.getArtist();
  // song1.getLength();
  song2.getName();
  song2.getArtist();
  // song2.getLength();
  song1.compare(song2);
  song1.display();
  song2.display();
}
Song::Song()
{
  strcpy(songName," "); strcpy(artist," "); songLength=0.0;
}
void Song::display()
{
  cout<<"Song name is: "<<songName<<", Artist is: "<<artist<<" & Song length: "<<songLength<<endl;
}
void Song::getName()
{
  cout<<"Enter the song name: "<<endl;
  cin>>songName;
}
void Song::getArtist()
{
  cout<<"Enter the song artist name: "<<endl;
  cin>>artist;
}
void Song::getLength()
{
  cout<<"Enter the song length: "<<endl;
  cin>>songLength;
}
// *************** This is case sensitive comparision ********************

int Song::compare(Song S)
{
  if (strcmp(songName, S.songName)==0 && strcmp(artist, S.artist)==0)
  {
    cout << "Both songs are same.\n";
    return 0;
  }
  else
  {
    cout << "Songs are different.\n";
    return 1;
  }
}