
/*
  This is inteded to be a testbed for the debugger using Qt ROS Plugin
  tested with Qt Creator 4.5.1 on Ubuntu 16.04 LTS

  created by Ahn, Jeeho
  2018.04.08
*/

#include <ros/ros.h>

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

int variable = 99;

int main(int argc, char** argv)
{
    ros::init(argc, argv, "debugging_test");

    cout << ">>>>>>>>>>>> Starting ROS Package Debugging Trial <<<<<<<<<<<<<<<" << endl;

    string string_in;
    double float_test = 0;

    cout << "initialized values" << endl;
    cout << "string_in: " << string_in << ", float_test: " << float_test << endl;

    cout << "type a number with a decimal point: ";
    cin >> string_in; cout << endl;

    float_test = atof(string_in.c_str());

    cout << "string to floating number conversion executed" << endl << "check debugger monitor";
    cout << endl;
    ////// pin a debugging point here and check the initialized values

    return 0;
}
