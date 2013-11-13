/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_SortTest_init = false;
#include "SortTest.h"

static SortTest suite_SortTest;

static CxxTest::List Tests_SortTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SortTest( "SortTest.h", 18, "SortTest", suite_SortTest, Tests_SortTest );

static class TestDescription_suite_SortTest_testIsSortedFALSE : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SortTest_testIsSortedFALSE() : CxxTest::RealTestDescription( Tests_SortTest, suiteDescription_SortTest, 21, "testIsSortedFALSE" ) {}
 void runTest() { suite_SortTest.testIsSortedFALSE(); }
} testDescription_suite_SortTest_testIsSortedFALSE;

static class TestDescription_suite_SortTest_testIsSortedTRUE : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SortTest_testIsSortedTRUE() : CxxTest::RealTestDescription( Tests_SortTest, suiteDescription_SortTest, 27, "testIsSortedTRUE" ) {}
 void runTest() { suite_SortTest.testIsSortedTRUE(); }
} testDescription_suite_SortTest_testIsSortedTRUE;

static class TestDescription_suite_SortTest_testSelectionSort : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SortTest_testSelectionSort() : CxxTest::RealTestDescription( Tests_SortTest, suiteDescription_SortTest, 34, "testSelectionSort" ) {}
 void runTest() { suite_SortTest.testSelectionSort(); }
} testDescription_suite_SortTest_testSelectionSort;

static class TestDescription_suite_SortTest_testSelectionSort2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SortTest_testSelectionSort2() : CxxTest::RealTestDescription( Tests_SortTest, suiteDescription_SortTest, 42, "testSelectionSort2" ) {}
 void runTest() { suite_SortTest.testSelectionSort2(); }
} testDescription_suite_SortTest_testSelectionSort2;

static class TestDescription_suite_SortTest_testCocktailSort : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SortTest_testCocktailSort() : CxxTest::RealTestDescription( Tests_SortTest, suiteDescription_SortTest, 50, "testCocktailSort" ) {}
 void runTest() { suite_SortTest.testCocktailSort(); }
} testDescription_suite_SortTest_testCocktailSort;

static class TestDescription_suite_SortTest_testCocktailSort2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SortTest_testCocktailSort2() : CxxTest::RealTestDescription( Tests_SortTest, suiteDescription_SortTest, 58, "testCocktailSort2" ) {}
 void runTest() { suite_SortTest.testCocktailSort2(); }
} testDescription_suite_SortTest_testCocktailSort2;

static class TestDescription_suite_SortTest_testGnomeSort : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SortTest_testGnomeSort() : CxxTest::RealTestDescription( Tests_SortTest, suiteDescription_SortTest, 66, "testGnomeSort" ) {}
 void runTest() { suite_SortTest.testGnomeSort(); }
} testDescription_suite_SortTest_testGnomeSort;

static class TestDescription_suite_SortTest_testGnomeSort2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SortTest_testGnomeSort2() : CxxTest::RealTestDescription( Tests_SortTest, suiteDescription_SortTest, 74, "testGnomeSort2" ) {}
 void runTest() { suite_SortTest.testGnomeSort2(); }
} testDescription_suite_SortTest_testGnomeSort2;

static class TestDescription_suite_SortTest_testShellSort : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SortTest_testShellSort() : CxxTest::RealTestDescription( Tests_SortTest, suiteDescription_SortTest, 82, "testShellSort" ) {}
 void runTest() { suite_SortTest.testShellSort(); }
} testDescription_suite_SortTest_testShellSort;

static class TestDescription_suite_SortTest_testShellSort2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SortTest_testShellSort2() : CxxTest::RealTestDescription( Tests_SortTest, suiteDescription_SortTest, 90, "testShellSort2" ) {}
 void runTest() { suite_SortTest.testShellSort2(); }
} testDescription_suite_SortTest_testShellSort2;

static class TestDescription_suite_SortTest_testBitonicSort : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SortTest_testBitonicSort() : CxxTest::RealTestDescription( Tests_SortTest, suiteDescription_SortTest, 98, "testBitonicSort" ) {}
 void runTest() { suite_SortTest.testBitonicSort(); }
} testDescription_suite_SortTest_testBitonicSort;

static class TestDescription_suite_SortTest_testBitonicSort2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SortTest_testBitonicSort2() : CxxTest::RealTestDescription( Tests_SortTest, suiteDescription_SortTest, 106, "testBitonicSort2" ) {}
 void runTest() { suite_SortTest.testBitonicSort2(); }
} testDescription_suite_SortTest_testBitonicSort2;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
