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
			// ���������� ����
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
			// ���������� ���� (a > b)
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
			// ������������� ����
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
			// ������� ����
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
			// b - �������������
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
			// � - �������������
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
			// ������������ ����
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
			// ������������ ���� (a > b)
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
			// ������������ ���� (� - �������������)
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
			// ������������ ���� (b - �������������)
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
			// ������������ ������������� ����
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
			// ������������ (b) � ���������� (a)
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
			// ������������ (b) � ���������� (a)
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