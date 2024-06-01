
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
		Soluion = ProcessTester->calculate("2.665-3.14");
		Assert::AreEqual(-0.47500000000000009, Soluion, L"2.665-3.14 calculation failed");
	}
	TEST_METHOD(Multiplication) {
		double Soluion;
		Processor* ProcessTester = Processor::GetInstance();
		Soluion = ProcessTester->calculate("2.0x2.0");
		Assert::AreEqual(4.0, Soluion, L"2 x 2 calculation failed");
		Soluion = ProcessTester->calculate("1.8x23.66");
		Assert::AreEqual(42.588000000000001, Soluion, L"1.8x23.66 calculation failed");
		Soluion = ProcessTester->calculate("45x63.56");
		Assert::AreEqual(2860.2000000000003, Soluion, L"45x63.56 calculation failed");
		Soluion = ProcessTester->calculate("252x273");
		Assert::AreEqual(68796.0, Soluion, L"252x273 calculation failed");
		Soluion = ProcessTester->calculate("2.665x3.14");
		Assert::AreEqual(8.3681000000000001, Soluion, L"2.665x3.14 calculation failed");
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
		Soluion = ProcessTester->calculate("s 5");
		Assert::AreEqual(-0.95892427466313845, Soluion, L"sin 5 calculation failed");
		Soluion = ProcessTester->calculate("s 10");
		Assert::AreEqual(-0.54402111088936977, Soluion, L"sin 10 calculation failed");
		Soluion = ProcessTester->calculate("s 15");
		Assert::AreEqual(0.65028784015711683, Soluion, L"sin 15 calculation failed");
		Soluion = ProcessTester->calculate("s 20");
		Assert::AreEqual(0.91294525072762767, Soluion, L"sin 20 calculation failed");
		Soluion = ProcessTester->calculate("s 25");
		Assert::AreEqual(-0.13235175009777303, Soluion, L"sin 25 calculation failed");

	}
	TEST_METHOD(COS) {
		double Soluion;
		Processor* ProcessTester = Processor::GetInstance();
		Soluion = ProcessTester->calculate("c5");
		Assert::AreEqual(0.28366218546322625, Soluion, L"cos 5 calculation failed");
		Soluion = ProcessTester->calculate("c10");
		Assert::AreEqual(-0.83907152907645244, Soluion, L"cos 10 calculation failed");
		Soluion = ProcessTester->calculate("c15");
		Assert::AreEqual(-0.75968791285882131, Soluion, L"cos 15 calculation failed");
		Soluion = ProcessTester->calculate("c20");
		Assert::AreEqual(0.40808206181339196, Soluion, L"cos 20 calculation failed");
		Soluion = ProcessTester->calculate("c25");
		Assert::AreEqual(0.99120281186347359, Soluion, L"cos 25 calculation failed");

	}
	TEST_METHOD(TAN) {
		double Soluion;
		Processor* ProcessTester = Processor::GetInstance();
		Soluion = ProcessTester->calculate("t 5");
		Assert::AreEqual(-3.3805150062465859, Soluion, L"sin 5 calculation failed");
		Soluion = ProcessTester->calculate("t 10");
		Assert::AreEqual(0.64836082745908663, Soluion, L"sin 10 calculation failed");
		Soluion = ProcessTester->calculate("t 15");
		Assert::AreEqual(-0.85599340090851883, Soluion, L"sin 15 calculation failed");
		Soluion = ProcessTester->calculate("t 20");
		Assert::AreEqual(2.2371609442247422, Soluion, L"sin 20 calculation failed");
		Soluion = ProcessTester->calculate("t 25");
		Assert::AreEqual(-0.13352640702153587, Soluion, L"sin 25 calculation failed");

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
				ButtonFactory Tester;
				wxFrame* parent = new wxFrame(NULL, wxID_ANY, "Test Frame");
				wxPanel* panel = new wxPanel(parent, wxID_ANY);
				wxButton* btn = Tester.CreateAddition(panel, 1);
				const char Operators = btn->GetLabel()[0];
				Assert::AreEqual('+', Operators, L"Create Addition has failed");
				delete panel;
				delete parent;

			}

			TEST_METHOD(CREATESUBTRACT) {
				ButtonFactory Tester;
				wxFrame* parent = new wxFrame(NULL, wxID_ANY, "Test Frame");
				wxPanel* panel = new wxPanel(parent, wxID_ANY);
				wxButton* btn = Tester.CreateSubtracion(panel, 1);
				const char Operators = btn->GetLabel().ToStdString()[0];
				Assert::AreEqual('-', Operators, L"Create Subtract has failed");
				delete panel;
				delete parent;
			}
			TEST_METHOD(CREATEMULTIPLY) {
				ButtonFactory Tester;
				wxFrame* parent = new wxFrame(NULL, wxID_ANY, "Test Frame");
				wxPanel* panel = new wxPanel(parent, wxID_ANY);
				wxButton* btn = Tester.CreateMultiplication(panel, 1);
				const char Operators = btn->GetLabel().ToStdString()[0];
				Assert::AreEqual('x', Operators, L"Create Multiply has failed");
				delete panel;
				delete parent;
			}
			TEST_METHOD(CREATEDIVIDE) {
				ButtonFactory Tester;
				wxFrame* parent = new wxFrame(NULL, wxID_ANY, "Test Frame");
				wxPanel* panel = new wxPanel(parent, wxID_ANY);
				wxButton* btn = Tester.CreateDivision(panel, 1);
				const char Operators = btn->GetLabel().ToStdString()[0];
				Assert::AreEqual('/', Operators, L"Create Divide has failed");
				delete panel;
				delete parent;
			}
			TEST_METHOD(CREATEMODULO) {
				ButtonFactory Tester;
				wxFrame* parent = new wxFrame(NULL, wxID_ANY, "Test Frame");
				wxPanel* panel = new wxPanel(parent, wxID_ANY);
				wxButton* btn = Tester.CreateModulo(panel, 1);
				const char Operators = btn->GetLabel().ToStdString()[0];
				Assert::AreEqual('%', Operators, L"Create Modulo has failed");
				delete panel;
				delete parent;

			}
			TEST_METHOD(CREATESIN) {
				ButtonFactory Tester;
				wxFrame* parent = new wxFrame(NULL, wxID_ANY, "Test Frame");
				wxPanel* panel = new wxPanel(parent, wxID_ANY);
				wxButton* btn = Tester.CreateSin(panel, 1);
				const char Operators = btn->GetLabel().ToStdString()[0];
				Assert::AreEqual('s', Operators, L"Create sin has failed");
				delete panel;
				delete parent;
			}
			TEST_METHOD(CREATeCOS) {
				ButtonFactory Tester;
				wxFrame* parent = new wxFrame(NULL, wxID_ANY, "Test Frame");
				wxPanel* panel = new wxPanel(parent, wxID_ANY);
				wxButton* btn = Tester.CreateCos(panel, 1);
				const char Operators = btn->GetLabel().ToStdString()[0];
				Assert::AreEqual('c', Operators, L"Create cos has failed");
				delete panel;
				delete parent;
			}
			TEST_METHOD(CREATETAN) {
				ButtonFactory Tester;
				wxFrame* parent = new wxFrame(NULL, wxID_ANY, "Test Frame");
				wxPanel* panel = new wxPanel(parent, wxID_ANY);
				wxButton* btn = Tester.CreateTan(panel, 1);
				const char Operators = btn->GetLabel().ToStdString()[0];
				Assert::AreEqual('t', Operators, L"Create tan has failed");
				delete panel;
				delete parent;
			}
			TEST_METHOD(CREATEBUTTON) {
				ButtonFactory Tester;
				wxFrame* parent = new wxFrame(NULL, wxID_ANY, "Test Frame");
				wxPanel* panel = new wxPanel(parent, wxID_ANY);
				wxButton* btn = Tester.CreateButtons("e" , panel, 1);
				const char Operators = btn->GetLabel().ToStdString()[0];
				Assert::AreEqual('e', Operators, L"Create Button has failed");
				delete panel;
				delete parent;
			}

			TEST_METHOD(CLEAR) {



			}




		};





