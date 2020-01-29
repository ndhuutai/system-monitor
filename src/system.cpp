#include <unistd.h>
#include <iostream> // had to include iostream here to get cout function
#include <cstddef>
#include <set>
#include <string>
#include <vector>


#include "process.h"
#include "processor.h"
#include "system.h"
#include "linux_parser.h"

using std::set;
using std::size_t;
using std::string;
using std::vector;

// TODO: Return the system's CPU
Processor& System::Cpu() { return cpu_; }

// TODO: Return a container composed of the system's processes
vector<Process>& System::Processes() { return processes_; }

// TODO: Return the system's kernel identifier (string)
std::string System::Kernel() { return string(); }

// TODO: Return the system's memory utilization
float System::MemoryUtilization() { 
    float result;

    result = LinuxParser::MemoryUtilization();

    std::cout<< result;

    return result;
}

// TODO: Return the operating system name
std::string System::OperatingSystem() { 
    string result;

    result = LinuxParser::OperatingSystem();

    return result;
 }

// TODO: Return the number of processes actively running on the system
int System::RunningProcesses() { return 0; }

// TODO: Return the total number of processes on the system
int System::TotalProcesses() { return 0; }

// TODO: Return the number of seconds since the system started running
long int System::UpTime() { return 0; }