project(SekaiStandardLibraryTest)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/6910c9d9165801d8827d628cb72eb7ea9dd538c5.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(SekaiStandardLibraryTest
    ./src/primitive-types.cpp
    ./src/arraylist.cpp
)

target_link_libraries(SekaiStandardLibraryTest PRIVATE 
    SekaiStandardLibrary
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(SekaiStandardLibraryTest)
