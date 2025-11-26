
#The file named "config.hpp.in" located in the configure folder will be used as template to generate the config.hpp
configure_file(
    "config.hpp.in" # the input file (template)
    "${CMAKE_BINARY_DIR}/cofigured_files/include/config.hpp" #${CMAKE_BINARY_DIR} is the placeholder for the build folder,the output file will be placed in the "configured_files/include" folder located in the build folder
    ESCAPE_QUOTES # this option makes sure that any quotes in the input file are properly escaped in the output file
)