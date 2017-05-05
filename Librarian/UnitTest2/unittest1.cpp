#include "stdafx.h"
#include "CppUnitTest.h"
#include "address.h"
//#include "Date.h"
using namespace std;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	address a1;
	TEST_CLASS(UnitTest2)
	{
	
	public:

		TEST_METHOD(TestMethod_city)
		{
			// TODO: Your test code here
			a1.setCity("da nang");
			string city_test = "da nang";
			Assert::AreEqual(a1.getCity(), city_test);
			a1.setCity("da nang");
			string city_test2 = "da nan";
			Assert::AreNotEqual(a1.getCity(), city_test2);
		}/*
		TEST_METHOD(TestMethod_quan)
		{
			// TODO: Your test code here
			a1.setQuan("hoa son");
			string quan_test = "da nang";
			Assert::AreEqual(a1.getQuan(), quan_test);
			a1.setQuan("hoa soon");
			string quan_test2 = "da nan";
			Assert::AreNotEqual(a1.getQuan(), quan_test2);
		}/*
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
			a1.setSoNha("125");
			string sonha_test = "125";
			Assert::AreEqual(a1.getSoNha(), sonha_test);
			a1.setSoNha("125");
			string sonha_test2 = "152";
			Assert::AreNotEqual(a1.getSoNha(), sonha_test2);
		}
		TEST_METHOD(TestMethod_to)
		{
			// TODO: Your test code here
			a1.setTo(7);

			Assert::AreEqual(a1.getTo(), 7);
			a1.setTo(7);

			Assert::AreNotEqual(a1.getTo(), 6);

		}*/
			};
}