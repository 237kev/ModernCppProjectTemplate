    cmake_minimum_required(VERSION 3.22) #set the minimun cmake version required
    project(ModernProjectTemplate VERSION 1.0.0 LANGUGES C CXX) #set the project name, the version and the supported languages

    set(CMAKE_STANDART          17) # set the c++ standart to c++ 17
    set(CMAKE_STANDART_REQUIRED ON) # C++ 17 is required for this project while ON otherwise is OFF
    set(CMAKE_CXX_EXTENTIONS    OFF) # unwanted compiler extentions are not allowed therefore set to OFF

    set(LIBRARY_NAME MyOwnLibrary)# set the library name to MyOwnLibrary
    set(EXECUTABLE_NAME MyOwnExecutable)# set the executable name to MyOwnExecutable

    add_subdirectory(src) # let cmake know that the source file and the belonging cmake files are in the src folder
    add_subdirectory(configure) # let cmake know that the configuration files and the belonging cmake files are in the configure folder     
    add_subdirectory(app) #the app folder contains the main executable and its cmake files
    