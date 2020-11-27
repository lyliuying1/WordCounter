#include "pch.h"
#include "CppUnitTest.h"
#include"../Project1/wc.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(words)
		{
			string file = "D://english1.txt";
			string order = "-w";
			WordCount wc(order, file);
			wc.Count();
			Assert::AreEqual(12, wc.words + wc.rows );
		}
		TEST_METHOD(sentence)
		{
			string file = "D://english1.txt";
			string order = "-s";
			WordCount wc(order, file);
			wc.Count();
			Assert::AreEqual(2, wc.sentence);
		}
		TEST_METHOD(length)
		{
			string file = "D://english1.txt";
			string order = "-c";
			WordCount wc(order, file);
			wc.Count();
			Assert::AreEqual(49, wc.length);
		}
	};
}
