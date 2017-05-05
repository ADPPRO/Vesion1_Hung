#include "stdafx.h"
#include "CppUnitTest.h"
#include "Date.h"
#include "address.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	Date a;
	address a1;
	TEST_CLASS(UnitTest1_Date)
	{
	public:
		
		TEST_METHOD(TestMethod_Date)
		{
			
			a.setDay(20);
			
			// TODO: Your test code here
			Assert::AreEqual(a.getDay(),20);
			a.setDay(30);
			Assert::AreEqual(a.getDay(), 30);
			a.setDay(32);
			Assert::AreEqual(a.getDay(),32 );
			Assert::AreNotEqual(a.getDay(), 20);
			
		}
		TEST_METHOD(TestMethod_Month) {
			a.setMonth(10);
			Assert::AreEqual(a.getMonth(), 10);
			a.setMonth(13);
			Assert::AreEqual(a.getMonth(), 13);
			a.setMonth(9);
			Assert::AreNotEqual(a.getMonth(), 1);
		
		}
		TEST_METHOD(TestMethod_Year) {
			a.setYear(2000);
			Assert::AreEqual(a.getYear(), 2000);
			a.setYear(2001);
			Assert::AreNotEqual(a.getYear(), 20000);
			a.setYear(200002);
			Assert::AreEqual(a.getYear(), 200002);
		
		}


		//////////////////////////////////
		TEST_METHOD(TestMethod_city)
		{
			// TODO: Your test code here
			a1.setCity("da nang");
			string city_test = "da nang";
			Assert::AreEqual(a1.getCity(), city_test);
			a1.setCity("da nang");
			string city_test2 = "da nan";
			Assert::AreNotEqual(a1.getCity(), city_test2);
		}
		 TEST_METHOD(TestMethod_quan)
		 {
		 // TODO: Your test code here
		 a1.setQuan("hoa son");
		 string quan_test = "hoa son";
		 Assert::AreEqual(a1.getQuan(), quan_test);
		 a1.setQuan("hoa soon");
		 string quan_test2 = "da nan";
		 Assert::AreNotEqual(a1.getQuan(), quan_test2);
		 }
		 TEST_METHOD(TestMethod_phuong)
		 {
		 // TODO: Your test code here
		 a1.setPhuong("hoa cuong");
		 string phuong_test = "hoa cuong";
		 Assert::AreEqual(a1.getPhuong(), phuong_test);
		 a1.setPhuong("hoa cuong");
		 string phuong_test2 = "da nan";
		 Assert::AreNotEqual(a1.getPhuong(), phuong_test2);
		 }


		 TEST_METHOD(TestMethod_sonha)
		 {
		 // TODO: Your test code here
		 
			 a1.setSoNha("147");
			 string test = "147";
			 Assert::AreEqual(a1.getSoNha(), test);

		 a1.setSoNha("152");
		 string sonha_test2 = "125";
		 Assert::AreNotEqual(a1.getSoNha(), sonha_test2);
		}

		 TEST_METHOD(TestMethod_to)
		 {
		 // TODO: Your test code here
		 a1.setTo(7);

		 Assert::AreEqual(a1.getTo(), 7);
		 a1.setTo(7);

		 Assert::AreNotEqual(a1.getTo(), 6);

		 }


	};
}