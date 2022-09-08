#include "calcTest.h"
#include "calc.h"
#include "common_cppunit_header.h"

class CalcTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE(CalcTest);
	CPPUNIT_TEST(add_emptyString_returns0);
	CPPUNIT_TEST(add_oneNumberString_returns1);
	CPPUNIT_TEST(add_twoNumberString_returns2);
	CPPUNIT_TEST(add_threeNumberString_returns3);
	CPPUNIT_TEST(add_fiveNumberString_returns5);
	CPPUNIT_TEST(add_newLineDelimTwoNumberString_return2);
	CPPUNIT_TEST_SUITE_END{};
public:
	void add_emptyString_returns0(){
		int result = add("");
		CPPUNIT_ASSERT_EQUAL(0,result);
	}
	void add_oneNumberString_returns1(){
		int result = add("1");
		CPPUNIT_ASSERT_EQUAL(1,result);
	}
	void add_twoNumberString_returns1(){
		int result = add("1,1");
		CPPUNIT_ASSERT_EQUAL(2,result);
	}
	void add_threeNumberString_returns3(){
		int result = add("1,1,1");
		CPPUNIT_ASSERT_EQUAL(3,result);
	}
	
	void add_fiveNumbersString_returns5(){
		int result = add("1,1,1,1,1");
		CPPUNIT_ASSERT_EQUAL(5,result);
	}
	void add_newLineDelimTwoNumberString_returns2(){
		int result = add("1\n1");
		CPPUNIT_ASSERT_EQUAL(2,result);
	}
};
CPPUNIT_TEST_SUITE_REGISTRATION(CalcTest);
