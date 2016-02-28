//
// Created by Ennis Massey on 28/02/16.
//

// Includes

#ifndef APP_ADD_HEADER_H
#define APP_ADD_HEADER_H

#pragma once
#include "default.h"
#include "appAdd.cpp"

#endif
// Class for easy referencing across files
class appAdd {
public:
    static std::map<char *, char *> appInfo;
    static std::vector<char *> includePaths;
    int processApps(int phase, int argc = NULL, char* argv = NULL) {
        switch(phase) {
            case 0:
                storeApps("/Yo hoho?");
        }
    }
private:
    void storeApps(const char* name = "",const char* path = "") {
        if (name != "" && path != "" ) {
            appInfo.insert(std::pair<const char *, const char *>(name, path));
        }
        if (name != "") {
            appInfo.insert(std::pair<const char *, const char *>("Folder", path));
        }
        if (path != "") {
            if (name == "") {
                appInfo.insert(std::pair<const char *,const char *>(name, "/Applications"));
            }
        }
        else {
            throw -3;
        }
    }
    void findNames(const char* dir) {
        // Open directory and scan it
        DIR *scanDir = opendir(dir);
        if(scanDir) {
            struct dirent *ent;
            std::regex pattern ("[ a-zA-Z0-9!@#$%^&&()_+\\-=;',{}|:\\\"<>?]*[.]?app");
            std::regex folderPattern("[ a-zA-Z0-9!@#$%^&*()_+\\-=;',{}|:\\\"<>?]+");
            std::vector<char *, char *> foundDirectories;
            while ((ent = readdir(scanDir)) != NULL) {
                clog <<
            }
        }

    }
};
