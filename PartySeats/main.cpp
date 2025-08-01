#include <bits/stdc++.h>
#include "PartySeats.hpp"
int main() {
    PartySeats partySeats;
    
    std::vector<std::string> attendees1 = {"BOB boy", "SAM girl", "DAVE boy", "JO girl"};
    std::vector<std::string> result1 = partySeats.seating(attendees1);
    for ( std::string& name : result1) {
        std::cout << name << " ";
    }
    std::cout << std::endl;

    std::vector<std::string> attendees2 = {"JOHN boy"};
    std::vector<std::string> result2 = partySeats.seating(attendees2);
    for ( std::string& name : result2) {
        std::cout << name << " ";
    }
    std::cout << std::endl;

    std::vector<std::string> attendees3 = {"JOHN boy", "CARLA girl"};
    std::vector<std::string> result3 = partySeats.seating(attendees3);
    for ( std::string& name : result3) {
        std::cout << name << " ";
    }
    std::cout << std::endl;

    std::vector<std::string> attendees4 = {"BOB boy", "SUZIE girl", "DAVE boy", "JO girl",
                                  "AL boy", "BOB boy", "CARLA girl", "DEBBIE girl"};
    std::vector<std::string> result4 = partySeats.seating(attendees4);
    for ( std::string& name : result4) {
        std::cout << name << " ";
    }
    std::cout << std::endl;

    return 0;
}