#include "default.h"
int addIncludeDir(int atLoc, auto argArray) {
    if (std::fopen(argArray[atLoc], "r") == NULL) {
        throw (-2);
    }
    else {
        includePaths
    }
}




catch (int) {

}


//TODO: Set this up to take arguments and then process them properly
int main( int argc, char *argv) {
    try {
        // Greet User
        //TODO: Integrate greet() into the main.cpp file
        for (int i = 0; i == argc; i++) {
            if (argv[i] == '-i' || argv[i] == '--include-dirs') {
                for (int j = 1; j < argc; ++i) {
                    if (j + 1 < argc) {
                        addIncludeDir(i, argv);
                    }
                }
            }
        }
    }catch(generic_exception){
        std::cerr << "Generic exception occured, someone done fucked up" << endl;
        throw;
        exit(-1);
    }catch(int e){
        // TODO: Create all return types in here with corresponding errors
        if (e == -2){
            std::cerr << "Please enter a valid directory, files are not supported" << endl;
            exit(0);
        }
        else if (e == -3) {
            std::cerr << "Please enter at least one app name" << endl;
            exit(0);
        }
    }catch(...){
        std::cerr << "Holy shit, Jesus Christ is currently on a Tricycle" << endl;
        throw;
        exit(-1);
    }
}

//TODO: Write the main program loop for main to run here
