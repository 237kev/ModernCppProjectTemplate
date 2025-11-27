# create a static library named MyOwnLibrary from the math_engine.cc file located in the MathEingine folder
add_library(
    ${LIBRARY_NAME}  #here is the placeholder for the library name det in global cmale file CMakeLists.txt
    STATIC     # the library type is static. It means that the library code will be embedded into the executable at compile time
    "MathEngine/math_engine.cc" # is the source file for this library
)                     

# Déclare les dossiers où se trouvent les headers accessibles
target_include_directories(${LIBRARY_NAME}
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}         # permet d'inclure "math_engine.h"
        ${CMAKE_BINARY_DIR}/configured_files/include  # pour inclure config.hpp
)