#include "GreetingsTests.h"

CPPUNIT_TEST_SUITE_REGISTRATION( GreetingsTests );

void GreetingsTests::greetTheWorldReturnsHelloWorld()
{
    char const *expected = "Hello, World!";
    CPPUNIT_ASSERT_EQUAL(expected, Greetings::greetTheWorld());
}
