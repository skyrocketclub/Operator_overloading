#ifndef _YOUTUBECHANNEL_H_
#define _YOUTUBECHANNEL_H_
#include <string>
#include <iostream>

using namespace std;

class YouTubeChannel
{
    string Name;
    int SubscribersCount;
   
    
    
public:
    YouTubeChannel(string name, int subscriberscount);
    //the operator << should return a reference to the ostream
    friend ostream  &operator << (ostream &COUT, YouTubeChannel &ytChannel);
    bool operator == (const YouTubeChannel&) const;
    string getname ();
    ~YouTubeChannel();

};
//  void operator << (ostream &COUT, YouTubeChannel &ytChannel);
 #endif // _YOUTUBECHANNEL_H_
