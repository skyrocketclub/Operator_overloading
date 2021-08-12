#include "MyCollection.hpp"
#include "YouTubeChannel.hpp"
#include <iostream>


void MyCollection::operator += (YouTubeChannel& channel){
    myChannels.push_back(channel);
    cout<<channel.getname()<<" has been added to My Collection"<<endl;
}


void MyCollection::operator -= (YouTubeChannel& channel){
    size_t i{0};
    int count {0};
    i = myChannels.size();
//    cout<<i<<endl;
    for (size_t j{0}; j<i; j++){
        if ( myChannels.at(j) == channel) 
        {
            cout<<channel.getname()<<" has been removed! "<<endl;
            myChannels.erase(myChannels.begin()+ j);
            count++;
            break;
        }
    }
    if (count < 1){
        cout<<"YouTubeChannel not found!"<<endl;
    }
}

ostream & operator<<(ostream& COUT, MyCollection& myCollection){
    size_t i{0};
    i = (myCollection.myChannels).size();
    for (size_t j {0}; j<i; j++){
        COUT<<(myCollection.myChannels).at(j)<<endl;
    }
    return COUT;
}

MyCollection::MyCollection()
{
//    vector <YouTubeChannel> myChannels {};
}

MyCollection::~MyCollection()
{
}

