#include <cppunit/ui/text/TestRunner.h>
#include"Rabais_test.h"
int main()
{
    CppUnit::TextUi::TestRunner runner;

    
    runner.addTest(RabaisTest::suite());

    runner.run();

    return 0;
}
