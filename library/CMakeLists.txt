project(SekaiStandardLibrary VERSION 0.0.0)

set(SEKAI_STANDARD_LIBRARY_SOURCES
    ./src/SekaiStandardLibrary.c
    ./src/arraylist.c
)

add_library(SekaiStandardLibrary ${SEKAI_STANDARD_LIBRARY_SOURCES})

set_property(TARGET SekaiStandardLibrary PROPERTY C_STANDARD 90)

target_include_directories(SekaiStandardLibrary
    PUBLIC
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include/external>
)
