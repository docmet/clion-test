#ifndef __GreetingsTests_H_
#define __GreetingsTests_H_

#include "../src/Greetings.h"
#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>

class GreetingsTests : public CppUnit::TestFixture
{
public:
    CPPUNIT_TEST_SUITE(GreetingsTests);
    CPPUNIT_TEST(greetTheWorldReturnsHelloWorld);
    CPPUNIT_TEST_SUITE_END();

public:
    void greetTheWorldReturnsHelloWorld();
};

#endif