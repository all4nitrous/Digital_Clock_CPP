#include <iostream>
#include <ctime>
#include <thread> // used for the sleep function
#include <chrono> // Required for the sleep_for function

using namespace std;
using namespace this_thread; //Enables sleep_for
using namespace chrono; // Enables use of seconds

int main() {
    time_t t = time(NULL);
    tm *timePtr = localtime(&t); // Stores the local time of the computer

    int seconds = (timePtr -> tm_sec);
    int minutes = (timePtr -> tm_min);
    int hrs = (timePtr -> tm_hour);

while(true) {
        system("clear");

        cout << "    |" << hrs << " : " << minutes << " : " << seconds << "| " << endl;

        seconds++; //Increases the seconds
        if(seconds >= 60)
        {
            seconds = 0;
            minutes++;
        }

        if(minutes >= 60)
        {
            minutes = 0;
            hrs++;
        }

        if (hrs >= 24)
        {
            hrs = 0;
    
        }

        std::this_thread::sleep_for(std::chrono::seconds(1)); // causes 1 second delay
    }
    return 0;
}







