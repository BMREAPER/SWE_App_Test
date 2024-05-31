
#include "pch.h"
#include <wx/wx.h>
#include "..\calculator-chris-BMREAPER\SWE_App/ButtonFactory.h"
#include "..\calculator-chris-BMREAPER\SWE_App/Processor.h"
#include "CppUnitTest.h"




using namespace Microsoft::VisualStudio::CppUnitTestFramework;


TEST_CLASS(TestProcessor)
{
public:
	TEST_METHOD(INITILIZATION) {
		Processor* ProcessTester = Processor::GetInstance();
	}

	TEST_METHOD(ADDITION) {
		double Soluion;

		Processor* ProcessTester = Processor::GetInstance();
		Soluion = ProcessTester->calculate("2+2");
		Assert::AreEqual(4.0, Soluion, L"2 + 2 calculation failed");
		Soluion = ProcessTester->calculate("1.8+23.66");
		Assert::AreEqual(25.46, Soluion, L"1.8+23.66 calculation failed");
		Soluion = ProcessTester->calculate("45+63.56");
		Assert::AreEqual(108.56, Soluion, L"45+63.56 calculation failed");
		Soluion = ProcessTester->calculate("252+273");
		Assert::AreEqual(525.0, Soluion, L"252+273 calculation failed");
		Soluion = ProcessTester->calculate("2.665+3.14");
		Assert::AreEqual(5.805, Soluion, L"2.665+3.14 calculation failed");
	}
	TEST_METHOD(SUBTRACTION) {
		double Soluion;
		Processor* ProcessTester = Processor::GetInstance();
		Soluion = ProcessTester->calculate("2-2");
		Assert::AreEqual(0.0, Soluion, L"2 - 2 calculation failed");
		Soluion = ProcessTester->calculate("1-7");
		Assert::AreEqual(-6.0, Soluion, L"1-7 calculation failed");
		Soluion = ProcessTester->calculate("45-27");
		Assert::AreEqual(18.0, Soluion, L"45-27 calculation failed");
		Soluion = ProcessTester->calculate("252-273");
		Assert::AreEqual(-21.0, Soluion, L"252-273 calculation failed");
		Soluion = ProcessTester->calculate("2.665+3.14");
		Assert::AreEqual(-0.475, Soluion, L"2.665-3.14 calculation failed");
	}
	TEST_METHOD(Multiplication) {
		double Soluion;
		Processor* ProcessTester = Processor::GetInstance();
		Soluion = ProcessTester->calculate("2*2");
		Assert::AreEqual(4.0, Soluion, L"2 * 2 calculation failed");
		Soluion = ProcessTester->calculate("1.8*23.66");
		Assert::AreEqual(42.588, Soluion, L"1.8*23.66 calculation failed");
		Soluion = ProcessTester->calculate("45*63.56");
		Assert::AreEqual(2860.2, Soluion, L"45*63.56 calculation failed");
		Soluion = ProcessTester->calculate("252*273");
		Assert::AreEqual(68796.0, Soluion, L"252*273 calculation failed");
		Soluion = ProcessTester->calculate("2.665*3.14");
		Assert::AreEqual(8.3681, Soluion, L"2.665*3.14 calculation failed");
	}
	TEST_METHOD(DIVISION) {
		double Soluion;
		Processor* ProcessTester = Processor::GetInstance();
		Soluion = ProcessTester->calculate("2/2");
		Assert::AreEqual(1.0, Soluion, L"2/2 calculation failed");
		Soluion = ProcessTester->calculate("10/2");
		Assert::AreEqual(5.0, Soluion, L" 10/2 calculation failed");
		Soluion = ProcessTester->calculate("21/7");
		Assert::AreEqual(3.0, Soluion, L"21/7 calculation failed");
		Soluion = ProcessTester->calculate("16/5");
		Assert::AreEqual(3.2, Soluion, L"16/5 calculation failed");
		Soluion = ProcessTester->calculate("21/6");
		Assert::AreEqual(3.5, Soluion, L"21/6 calculation failed");
	}
	TEST_METHOD(MODULO) {
		double Soluion;
		Processor* ProcessTester = Processor::GetInstance();
		Soluion = ProcessTester->calculate("2%2");
		Assert::AreEqual(0.00, Soluion, L"2 % 2 calculation failed");
		Soluion = ProcessTester->calculate("5%4");
		Assert::AreEqual(1.00, Soluion, L"5 % 4 calculation failed");
		Soluion = ProcessTester->calculate("10%4");
		Assert::AreEqual(2.0, Soluion, L"10%4 calculation failed");
		Soluion = ProcessTester->calculate("100%10");
		Assert::AreEqual(0.00, Soluion, L"100%10 calculation failed");
		Soluion = ProcessTester->calculate("30%6");
		Assert::AreEqual(0.00, Soluion, L"30%6 calculation failed");
	}
	TEST_METHOD(SIN) {
		double Soluion;
		Processor* ProcessTester = Processor::GetInstance();
		Soluion = ProcessTester->calculate("sin 5");
		Assert::AreEqual(-0.95892427466, Soluion, L"sin 5 calculation failed");
		Soluion = ProcessTester->calculate("sin 10");
		Assert::AreEqual(-0.54402111088, Soluion, L"sin 10 calculation failed");
		Soluion = ProcessTester->calculate("sin 15");
		Assert::AreEqual(0.65028784015, Soluion, L"sin 15 calculation failed");
		Soluion = ProcessTester->calculate("sin 20");
		Assert::AreEqual(0.91294525072, Soluion, L"sin 20 calculation failed");
		Soluion = ProcessTester->calculate("sin 25");
		Assert::AreEqual(-0.13235175009, Soluion, L"sin 25 calculation failed");

	}
	TEST_METHOD(COS) {
		double Soluion;
		Processor* ProcessTester = Processor::GetInstance();
		Soluion = ProcessTester->calculate("cos 5");
		Assert::AreEqual(-0.28366218546, Soluion, L"sin 5 calculation failed");
		Soluion = ProcessTester->calculate("cos 10");
		Assert::AreEqual(-0.83907152907, Soluion, L"cos 10 calculation failed");
		Soluion = ProcessTester->calculate("cos 15");
		Assert::AreEqual(-0.75968791285, Soluion, L"cos 15 calculation failed");
		Soluion = ProcessTester->calculate("cos 20");
		Assert::AreEqual(0.40808206181, Soluion, L"cos 20 calculation failed");
		Soluion = ProcessTester->calculate("cos 25");
		Assert::AreEqual(-0.99120281186, Soluion, L"cos 25 calculation failed");

	}
	TEST_METHOD(TAN) {
		double Soluion;
		Processor* ProcessTester = Processor::GetInstance();
		Soluion = ProcessTester->calculate("tan 5");
		Assert::AreEqual(-3.38051500625, Soluion, L"sin 5 calculation failed");
		Soluion = ProcessTester->calculate("tan 10");
		Assert::AreEqual(0.64836082745, Soluion, L"sin 10 calculation failed");
		Soluion = ProcessTester->calculate("tan 15");
		Assert::AreEqual(-0.8559934009, Soluion, L"sin 15 calculation failed");
		Soluion = ProcessTester->calculate("tan 20");
		Assert::AreEqual(2.23716094422, Soluion, L"sin 20 calculation failed");
		Soluion = ProcessTester->calculate("tan 25");
		Assert::AreEqual(-0.13352640702, Soluion, L"sin 25 calculation failed");

	}

	TEST_METHOD(ORDEROFOPERATIONS) {
		double Soluion;
		Processor* ProcessTester = Processor::GetInstance();
		Soluion = ProcessTester->calculate("1-1*3+4/5");
		Assert::AreEqual(-1.2, Soluion, L"1-1*3+4/5 calculation failed");
		Soluion = ProcessTester->calculate("1*1-3-4/5");
		Assert::AreEqual(-2.8, Soluion, L"1*1-3-4/5 calculation failed");
		Soluion = ProcessTester->calculate("2+18/4");
		Assert::AreEqual(6.5, Soluion, L"2+18/4 calculation failed");


	};
};

		TEST_CLASS(Buttoons) {

			TEST_METHOD(CREATEADDITION) {

			}

			TEST_METHOD(CREATESUBTRACT) {

			}
			TEST_METHOD(CREATEMULTIPLY) {

			}
			TEST_METHOD(CREATEDIVIDE) {

			}
			TEST_METHOD(CREATEMODULO) {

			}
			TEST_METHOD(CREATESIN) {

			}
			TEST_METHOD(CREATEADDITIONCOS) {

			}
			TEST_METHOD(CREATETAN) {

			}
			TEST_METHOD(CREATEBUTTON) {

			}






		};





