#pragma once
#include <windows.h>
namespace UART {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;


	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:

		Form1(void)
		{
			InitializeComponent();
			findPorts();

			// disable this text field

			this->textBox2->Enabled = false;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::IO::Ports::SerialPort^ _serialPort;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ button3;


	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;

	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^ shapeContainer1;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^ ovalShape1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void);
		

#pragma endregion

		// find available ports
	private: void findPorts(void);
	
		   // Send button
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
		
	
		   // Init button------------------------------------
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);

		   // Read button --------------------------------------
		   //this will start the asyn for backgroundwork
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);


	
		   // progress bar -------------------------------------------
	private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e);

		   // close port button
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
		


	
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e);
	


	};
}

