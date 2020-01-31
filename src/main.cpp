#include <iostream>

#include "ncurses_display.h"
#include "system.h"


//include linux parser header file here to check output format

#include "linux_parser.h"

int main() {
  System system;
  // system.MemoryUtilization();
  // system.UpTime();

  std::cout << LinuxParser::Jiffies() <<std::endl;
  // NCursesDisplay::Display(system);
}