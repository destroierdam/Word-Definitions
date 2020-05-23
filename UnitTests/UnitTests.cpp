#include "pch.h"
#include "CppUnitTest.h"
#include "../WordDefinitions/Dictionary.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(TestDictionary)
	{
	public:
		
		TEST_METHOD(TestAddEntry)
		{
			Dictionary dict;
			Entry traicho("traicho", "genius");

			dict.addEntry(traicho);

			Assert::IsTrue(dict.size() == 1);
		}
	};

	TEST_CLASS(TestEntry) {
	public:
		TEST_METHOD(TestEntryConstructor) {
			Entry testEntry("Gun", "deadly weapon");

			Assert::AreEqual("Gun", testEntry.getWord().c_str());
			Assert::AreEqual("deadly weapon", testEntry.getDefinition().c_str());
		}
	};
}
