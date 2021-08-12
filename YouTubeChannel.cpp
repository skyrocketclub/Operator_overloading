#include "YouTubeChannel.hpp"
#include <string>
#include <iostream>

using namespace std;

YouTubeChannel::YouTubeChannel(string name, int subscriberscount)
{
    Name = name;
    SubscribersCount = subscriberscount;
}

//The  '&' sign means that a copy will not be made but the main objects will be passed by referenced
ostream & operator<<(ostream &COUT,YouTubeChannel &ytChannel){
    COUT<<"Name:   "<<ytChannel.Name<<endl;
    COUT<<"Subscribers:  "<<ytChannel.SubscribersCount<<endl;
    return COUT;
}

bool YouTubeChannel::operator == (const YouTubeChannel& channel1) const{
    bool status {false};
    if (this->Name == channel1.Name){
        status = true;
    }
    return status;
}

string YouTubeChannel::getname(){
    return Name;
}
YouTubeChannel::~YouTubeChannel()
{
}

