//
// Created by Ennis Massey on 27/02/16.
//
//TODO: Finish up this header's tidiness
#pragma once
// Includes (System Libraries)
#include <iostream>
#include <unistd.h>
#include <fstream>
#include <map>
#include <vector>
#include <dirent.h>
#include <sys/types.h>
#include <regex>
#include <string>
// Includes functions
#include "functions.h"
// Includes appAdd header
//TODO: Put some classes here if need-be
// Class Includes
// Empty for now
// Saving me from std::
//TODO: Add more std:: shortcuts USING REFACTOR!!
using std::string; // Fucking bad practices
using std::cout;
using std::cin;
using std::endl;
using std::clog;
// Typedefs
typedef signed int generic_exception; // Used for error handling e.g. try {..}catch(generic_exception) { // Do Stuff };


