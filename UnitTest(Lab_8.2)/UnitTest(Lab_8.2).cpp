#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_8.2/Lab_8.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab82
{
	TEST_CLASS(UnitTestLab82)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			string lit_r = "      f WWE  WER R       E   E TE T";
			string probil = " ";

			int lichilnuk = kil_sliv(lit_r, probil);

			Assert::AreEqual(lichilnuk, 8);
		}
	};
}
