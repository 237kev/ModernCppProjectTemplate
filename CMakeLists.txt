    cmake_minimum_required(VERSION 3.22)    #set the minimun cmake version required
    project(
        ModernProjectTemplate               # set the project name
        VERSION 1.0.0                       # the version and 
        LANGUAGES C CXX)                    # the supported languages
    set(PROJECT_DESCRIPTION 
    "A modern C++ project template using CMake") # set the project description

    set(PROJECT_AUTHOR Kevin Kamdem)        # set the project author name
    set(PROJECT_LICENSE MIT)                # set the project license
    set(CMAKE_STANDART          17)         # set the c++ standart to c++ 17
    set(CMAKE_STANDART_REQUIRED ON)         # C++ 17 is required for this project while ON otherwise is OFF
    set(CMAKE_CXX_EXTENTIONS    OFF)        # unwanted compiler extentions are not allowed therefore set to OFF


    set(LIBRARY_NAME MyOwnLibrary)          # set the library name to MyOwnLibrary
    set(EXECUTABLE_NAME MyOwnExecutable)    # set the executable name to MyOwnExecutable

    add_subdirectory(configure)             # let cmake know that the configuration files and the belonging cmake files are in the configure folder     
    add_subdirectory(src)                   # let cmake know that the source file and the belonging cmake files are in the src folder
    add_subdirectory(app)                   # the app folder contains the main executable and its cmake files
