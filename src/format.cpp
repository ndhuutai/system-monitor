#include <string>
#
#include "format.h"

using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds[[maybe_unused]]) {
    int hours = seconds / 3600; 
    int minutes = (seconds % 3600) / 60;
    int second = seconds % 60;

    char buffer [50];
    sprintf(buffer, "%02d:%02d:%02d", hours, minutes, second);

    return buffer;
}