//
// Created by Ennis Massey on 27/02/16.
//
#include "default.h"
#include "functions.h"
void greet() {
    auto uid = getlogin();
    cout << "Welcome to AppBundler " <<  uid << endl;
    cout << "Below please enter the names of the apps you wish to bundle (You do not need to add .app)" << endl;
    cout << "(Note)If you want to include an app that is not in the /Applications Folder, please supply full path name" << endl;
}
void storeApps() {
    std::vector<string> selectedAppNames;
    std::vector<string> selectedAppPaths;
}

void findName() {
    // Vector to store entries in
    std::vector<string> applicationDir;
    DIR *opendir1 = opendir("/Applications");
    if(opendir1) {
        struct dirent *ent;
        int count = 0;
        std::regex pattern ("[. a-zA-Z0-9]*");
        while((ent = readdir(opendir1)) != NULL) {
            cout << (ent->d_name) << endl;
            char* results = ent->d_name;
            if (std::regex_match(results, pattern)) {
                cout << results << endl;
            }
        }
    }
    else {
        cout << "Yo this shits broken" << endl;
    }
}