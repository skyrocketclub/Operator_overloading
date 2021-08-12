#ifndef MYCOLLECTION_H_
#define MYCOLLECTION_H_
#include <vector>
#include "YouTubeChannel.hpp"
#include <iostream>
using namespace std;

class MyCollection
{
private:
     vector <YouTubeChannel> myChannels {};
     
public:
void operator += (YouTubeChannel& );
void operator -= (YouTubeChannel& );
friend ostream & operator<<(ostream& COUT, MyCollection& myCollection);
    MyCollection();
    ~MyCollection();

};

#endif // MYCOLLECTION_H_
