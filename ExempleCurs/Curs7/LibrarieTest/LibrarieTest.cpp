#include "CppUnitTest.h"
#include "LibHeader.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LibrarieTest
{
	bool testObjectCreation();


	TEST_CLASS(LibrarieTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::IsTrue(testObjectCreation(), L"Test was not run successfully!", LINE_INFO());
		}
	};

	bool testObjectCreation()
	{
		Automobil* myAuto = new Automobil("CT23AUG", "Dacia", 600, "Logan", VehicleColors::ROSU);
		Assert::IsTrue(myAuto != nullptr, L"Could not create object!", LINE_INFO());

		delete myAuto;
		myAuto = nullptr;

		Assert::IsTrue(myAuto == nullptr, L"pointer is not null");
		
		return true;
	}

}
