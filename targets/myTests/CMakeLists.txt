set(SOURCE_FILES ../../testSrc/main.cpp ../../testSrc/GreetingsTests.cpp ../../src/Greetings.cpp)

add_executable(myAppTests ${SOURCE_FILES})
target_link_libraries(myAppTests cppunit)