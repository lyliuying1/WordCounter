#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1/wc.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(words)
		{
			string file = "D://english2.txt";
			string order = "-w";
			WordCount wc(order, file);
			wc.Count();
			Assert::AreEqual(25, wc.words + wc.rows - wc.blankline - wc.zhushiline);
		}
		TEST_METHOD(sentence)
		{
			string file = "D://english2.txt";
			string order = "-s";
			WordCount wc(order, file);
			wc.Count();
			Assert::AreEqual(1, wc.sentence);
		}
		TEST_METHOD(length)
		{
			string file = "D://english2.txt";
			string order = "-c";
			WordCount wc(order, file);
			wc.Count();
			Assert::AreEqual(134, wc.length);
		}
		TEST_METHOD(zhushiline)
		{
			string file = "D://english2.txt";
			string order = "-cl";
			WordCount wc(order, file);
			wc.Count();
			Assert::AreEqual(2, wc.zhushiline);
		}
		TEST_METHOD(blankline)
		{
			string file = "D://english2.txt";
			string order = "-bl";
			WordCount wc(order, file);
			wc.Count();
			Assert::AreEqual(3, wc.blankline);
		}
		TEST_METHOD(rows)
		{
			string file = "D://english2.txt";
			string order = "-tl";
			WordCount wc(order, file);
			wc.Count();
			Assert::AreEqual(8, wc.rows);
		}
	};
}
