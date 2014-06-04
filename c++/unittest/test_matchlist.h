/*
  Copyright (c)  2014  Mikael Leetmaa

  This file is part of the KMCLib project distributed under the terms of the
  GNU General Public License version 3, see <http://www.gnu.org/licenses/>.
*/


#ifndef __TEST_MATCHLIST__
#define __TEST_MATCHLIST__

#include <iostream>
#include <string>

#include <cppunit/TestCase.h>
#include <cppunit/TestSuite.h>
#include <cppunit/TestCaller.h>
#include <cppunit/TestRunner.h>

#include <cppunit/extensions/HelperMacros.h>

class Test_MatchList : public CppUnit::TestCase {

public:

    CPPUNIT_TEST_SUITE( Test_MatchList );
    CPPUNIT_TEST( testCall );
    CPPUNIT_TEST( testIsMatchMatchList );
    CPPUNIT_TEST( testIsMatchWildcard );
    CPPUNIT_TEST( testIsMatchIndexListMinimal );
    CPPUNIT_TEST( testIsMatchIndexListMinimalPeriodic );
    CPPUNIT_TEST( testIsMatchIndexListComplicatedPeriodic );
    CPPUNIT_TEST_SUITE_END();

    void testCall();
    void testIsMatchMatchList();
    void testIsMatchWildcard();
    void testIsMatchIndexListMinimal();
    void testIsMatchIndexListMinimalPeriodic();
    void testIsMatchIndexListComplicatedPeriodic();

};

#endif

