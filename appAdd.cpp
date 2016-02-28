//
// Created by Ennis Massey on 27/02/16.
//

#include "appAdd.h"

// Stores a list of valid app names that can be referenced
std::map<const char *, string> appInfo;
std::vector<string> includePaths;
static int appAdd::processApps(int phase, int argc = NULL, char* argv = NULL) {
    switch(phase) {
        //TODO: Finish up this switch
        // Phase 0 collects app names and stores them
        case 0 :
            findNames();
    }
}


//TODO: Make this non-reliant on named paths and whatnot
int appAdd::storeApps(string name = "", string path = "") {
    if (name != "" && path != "") {
        appInfo.insert(std::pair<string,string>(name, path));
        return 0;
    }
    if (name != "") {
        appInfo.insert(std::pair<string, string>("Folder", path));
        return 1;
    }
    if (path != "") {
        if (name == "") {
            appInfo.insert(std::pair<string, string>(name, "/Applications"));
            return 2;
        }
    }
    else {
        throw -3;
    }
}
//TODO: Set this up to search directories included using -i or --include-dir
int findNames(char* directory) {
    // Open the directory for checking
    DIR *checkDir= opendir(directory);
    if(checkDir) {
        struct dirent *ent;
        std::regex pattern ("[ a-zA-Z0-9!@#$%^&*()_+\\-=;',{}|:\\\"<>?]*[.]?app");
        std::regex folderPattern("[ a-zA-Z0-9!@#$%^&*()_+\\-=;',{}|:\\\"<>?]+");
        std::vector<string> foundDirectories;
        while((ent = readdir(checkDir)) != NULL) {
            cout << (ent->d_name) << endl;
            char* results = ent->d_name;
            if (std::regex_match(results, pattern)) {
                cout << results << endl;
            }
            else if (std::regex_match(results, folderPattern)) {
                cout << "Folder: " << results << endl;
                storeApps();

            }
        }
        return 0;
    }
    else {
        cout << "Yo this shits broken" << endl;
        return -1;
    }
}
