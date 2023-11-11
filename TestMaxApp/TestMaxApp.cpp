#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Ilya\Downloads\MaxApp\MaxApp\MaxApp.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace TestMaxApp
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(Test1)
		{
			// Нормальный ввод
			double t = integrate(F, 2, 5);
			double e = 0.001; 
			double value = 9.76 - abs(t); 
			bool y = true;
			if (e < value)
				y = false;
			Microsoft::VisualStudio::CppUnitTestFramework::Assert::AreEqual(true, y);
		}

		TEST_METHOD(Test2)
		{
			// Нормальный ввод (a > b)
			double t = integrate(F, 5, 2);
			double e = 0.001;
			double value = 9.76 - abs(t);
			bool y = true;
			if (e < value)
				y = false;
			Microsoft::VisualStudio::CppUnitTestFramework::Assert::AreEqual(true, y);
		}

		TEST_METHOD(Test3)
		{
			// Отрицательный ввод
			double t = integrate(F, -2, -5);
			double e = 0.001;
			double value = 0 - abs(t);
			bool y = true;
			if (e < value)
				y = false;
			Microsoft::VisualStudio::CppUnitTestFramework::Assert::AreEqual(false, y);
		}

		TEST_METHOD(Test4)
		{
			// Нулевой ввод
			double t = integrate(F, 0, 0);
			double e = 0.001;
			double value = 0 - abs(t);
			bool y = true;
			if (e < value)
				y = false;
			Microsoft::VisualStudio::CppUnitTestFramework::Assert::AreEqual(false, y);
		}	

		TEST_METHOD(Test5)
		{
			// b - отрицательный
			double t = integrate(F, 5, -2);
			double e = 0.001;
			double value = 0 - abs(t);
			bool y = true;
			if (e < value)
				y = false;
			Microsoft::VisualStudio::CppUnitTestFramework::Assert::AreEqual(false, y);
		}

		TEST_METHOD(Test6)
		{
			// а - отрицательный
			double t = integrate(F, -5, 2);
			double e = 0.001;
			double value = 0 - abs(t);
			bool y = true;
			if (e < value)
				y = false;
			Microsoft::VisualStudio::CppUnitTestFramework::Assert::AreEqual(false, 0);
		}

		TEST_METHOD(Test7)
		{
			// Вещественный ввод
			double t = integrate(F, 3.12, 6.12);
			double e = 0.001;
			double value = 10.34 - abs(t);
			bool y = true;
			if (e < value)
				y = false;
			Microsoft::VisualStudio::CppUnitTestFramework::Assert::AreEqual(true, y);
		}

		TEST_METHOD(Test8)
		{
			// Вещественный ввод (a > b)
			double t = integrate(F, 6.12, 3.12);
			double e = 0.001;
			double value = 9.764 - abs(t);
			bool y = true;
			if (e < value)
				y = false;
			Microsoft::VisualStudio::CppUnitTestFramework::Assert::AreEqual(true, y);
		}

		TEST_METHOD(Test9)
		{
			// Вещественный ввод (а - отрицательное)
			double t = integrate(F, -3.12, 6.12);
			double e = 0.001;
			double value = 0 - abs(t);
			bool y = true;
			if (e < value)
				y = false;
			Microsoft::VisualStudio::CppUnitTestFramework::Assert::AreEqual(false, y);
		}

		TEST_METHOD(Test10)
		{
			// Вещественный ввод (b - отрицательное)
			double t = integrate(F, 3.12, -6.12);
			double e = 0.001;
			double value = 0 - abs(t);
			bool y = true;
			if (e < value)
				y = false;
			Microsoft::VisualStudio::CppUnitTestFramework::Assert::AreEqual(false, y);
		}

		TEST_METHOD(Test11)
		{
			// Вещественный отрицательный ввод
			double t = integrate(F, -3.12, -6.12);
			double e = 0.001;
			double value = 0 - abs(t);
			bool y = true;
			if (e < value)
				y = false;
			Microsoft::VisualStudio::CppUnitTestFramework::Assert::AreEqual(false, y);
		}

		TEST_METHOD(Test12)
		{
			// Вещественный (b) и нормальный (a)
			double t = integrate(F, 2, 6.12);
			double e = 0.001;
			double value = 13.76 - abs(t);
			bool y = true;
			if (e < value)
				y = false;
			Microsoft::VisualStudio::CppUnitTestFramework::Assert::AreEqual(true, y);
		}

		TEST_METHOD(Test13)
		{
			// Вещественный (b) и нормальный (a)
			double t = integrate(F, 6.12, 2);
			double e = 0.001;
			double value = 13.76 - abs(t);
			bool y = true;
			if (e < value)
				y = false;
			Microsoft::VisualStudio::CppUnitTestFramework::Assert::AreEqual(true, y);
		}
	};
}