#include "pch.h"
#include "CppUnitTest.h"

extern "C"
{
	void setLength(int input, int* length);
	void setWidth(int input, int* width);
	int getPerimeter(int* length, int* width);
	int getArea(int* length, int* width);
	void printWelcomeMenu();
	void printOptions();
	int getIntInput(char message[]); 
}


using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace BCSRecTests
{
	TEST_CLASS(BCSRecOperationTests)
	
	{
	public:
		
		TEST_METHOD(Test_GetPerimeter_WithValidInputs_ReturnsCorrectPerimeter)
		{
			int length = 4;
			int width = 6;
			int result = getPerimeter(&length, &width);
			Assert::AreEqual(20, result);
		}
		TEST_METHOD(Test_GetArea_WithValidInputs_ReturnsCorrectArea)
		{
			int length = 4;
			int width = 75;
			int result = getArea(&length, &width);
			Assert::AreEqual(300, result);
		}
		TEST_METHOD(Test_SetLength_WithValidInput_ReturnsValidLength)
		{
			int length;
			setLength(20, &length);
			Assert::AreEqual(20, length);
		
		}
		TEST_METHOD(Test_SetLength_WithInvalidMaxInput_DoesNotReturnsInvalidMaximumLength)
		{
			int length=10;
			setLength(100, &length);
			Assert::AreEqual(10, length);

		}
		TEST_METHOD(Test_SetLength_WithInvalidMinInput_DoesNotReturnsInvalidMinimumLength)
		{
			int length=5;
			setLength(0, &length);
			Assert::AreEqual(5, length);

		}
		TEST_METHOD(Test_SetWidth_WithValidInput_ReturnsValidLength)
		{
			int width;
			setLength(10, &width);
			Assert::AreEqual(10, width);

		}
		TEST_METHOD(Test_SetWidth_WithInvalidMaxInput_DoesNotReturnsInvalidMaximumWidth)
		{
			int width=5;
			setLength(100, &width);
			Assert::AreEqual(5, width);

		}
		TEST_METHOD(Test_SetWidth_WithInvalidMinInput_DoesNotReturnsInvalidMinimumWidth)
		{
			int width=10;
			setLength(0, &width);
			Assert::AreEqual(10, width);

		}
	};
}
