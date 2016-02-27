//
// Created by Ennis Massey on 27/02/16.
//
//TODO: This file is unnecessary for the program, delete it
#include "default.h"
//TODO: The fuck is this
#include "functions.h"
void greet() {
    auto uid = getlogin();
    cout << "Welcome to AppBundler " <<  uid << endl;
    cout << "Below please enter the names of the apps you wish to bundle (You do not need to add .app)" << endl;
    cout << "(Note)If you want to include an app that is not in the /Applications Folder, please supply full path name" << endl;
}
