#include <cppunit/TestCase.h>
#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include "/home/gigl/log1000_tp4/Code/src/rabais.h"


class RabaisTest : public CppUnit::TestFixture {

 CPPUNIT_TEST_SUITE(RabaisTest);
 CPPUNIT_TEST(test_branch1);
 CPPUNIT_TEST(test_branch2);
 CPPUNIT_TEST(test_branch3_1);
 CPPUNIT_TEST(test_branch3_2);
 CPPUNIT_TEST(test_branch3_3);
 CPPUNIT_TEST(test_branch4_1);
 CPPUNIT_TEST(test_branch4_2);
 CPPUNIT_TEST(test_branch5_1);
 CPPUNIT_TEST(test_branch5_2);
 CPPUNIT_TEST_SUITE_END();

private: 
Rabais* objet_a_tester ;

public:
   void setUp();
   void tearDown();
protected:
void test_branch1();
void test_branch2();
void test_branch3_1();
void test_branch3_2();
void test_branch3_3();
void test_branch4_1();
void test_branch4_2();
void test_branch5_1();
void test_branch5_2();
};


