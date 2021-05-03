#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Student\ Tkachenko.Marharyta.IK11\Lab5.1.D\Lab5.1.D\Complex.cpp"
#include "C:\Student\ Tkachenko.Marharyta.IK11\Lab5.1.D\Lab5.1.D\Pair.cpp"
#include "C:\Student\ Tkachenko.Marharyta.IK11\Lab5.1.D\Lab5.1.D\MyException.cpp"
#include "C:\Student\ Tkachenko.Marharyta.IK11\Lab5.1.D\Lab5.1.D\MyDerivedException.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Complex A1(4, -1), B1(6, -9);
			Complex C = A1 + B1;
			int S = C.GetRe();
			Assert::AreEqual(S, 10);
		}
	};
}
