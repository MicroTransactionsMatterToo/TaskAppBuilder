//
// Created by Ennis Massey on 27/02/16.
//

#include "default.h"

// Stores a list of valid app names that can be referenced
static std::map
static std::vector<string> includePaths;
int proccesApps(int phase) {
    switch(phase) {
        // Phase 0 collects app names and stores them
        case 0 :

    }
}

int storeApps(string name = "", string path = "") {
    if (name != "" && path != "") {
        appNames.push_back(name);
        appPaths.push_back(path);
        return 0;
    }
    if (name != "") {
        appNames.push_back(name);
        return 1;
    }
    if (path != "") {
        appPaths.push_back(path);
        return 2;
    }
    else {
        return -1;
    }
}

int findName() {
    // Vector to store entries in
    std::vector<string> applicationDir;
    DIR *opendir1 = opendir("/Applications");
    if(opendir1) {
        struct dirent *ent;
        std::regex pattern ("[ a-zA-Z0-9!@#$%^&*()_+\\-=;',{}|:\\\"<>?]*[.]?app");
        std::regex folderPattern("[ a-zA-Z0-9!@#$%^&*()_+\\-=;',{}|:\\\"<>?]+");
        std::vector<string> foundDirectories;
        while((ent = readdir(opendir1)) != NULL) {
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