#include <iostream>
#include <string>
#include "YouTubeChannel.hpp"
#include "MyCollection.hpp"
using namespace std;

int main() {
    YouTubeChannel yt1 = YouTubeChannel("CodeBeauty", 75000);
//   cout<<yt1<<endl;
   YouTubeChannel yt2 ("My Second Channel", 80000);
   YouTubeChannel yt3("My third Channel ", 90000);
    MyCollection myCollection;
    myCollection+=yt1;
    myCollection+= yt2;
    myCollection+=yt3;
    cout<<myCollection;
    myCollection -=yt2;
    cout<<myCollection;
    return 0;
}