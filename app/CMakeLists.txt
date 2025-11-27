# create an executable named MyOwnExecutable from the main.cpp file
 #setup the executable
 #here is the placeholder for the executable name set in global cmake file  
 # means the the executable can be used by other tagets
 # used source file for building the executable
add_executable(${EXECUTABLE_NAME} "main.cc")   

# link the executable to the library created in the src folder so that the executable can use the library functions
target_link_libraries(${EXECUTABLE_NAME} PUBLIC ${LIBRARY_NAME}) 