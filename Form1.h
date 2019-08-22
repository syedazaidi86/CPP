#pragma once
	#include <iostream> 
    #include <string> // for string class '
    #include <cstdlib>
  #include <stdlib.h>
    #include <fstream>
    #include <io.h>
    #include <stdio.h>
    #include <vector>
#include <sstream> 
//#include <msclr\marshal.h>
#include <msclr\marshal_cppstd.h>

 
namespace MYGPSAPP {
	
	
	 using namespace System;
	
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::IO;
	using namespace System::IO::Ports;
	using namespace System::Drawing;
	using namespace std;
	using namespace msclr::interop;
	
	


	/// <summary>
	/// Summary for Form1
	/// </summary>EARTHLib { class ApplicationGE; }
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
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
	private: System::Windows::Forms::Panel^  panel3;
	protected: 









































	private: System::Windows::Forms::ToolStripStatusLabel^  errorMessage;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::IO::Ports::SerialPort^  mySerial;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  Browse;
	private: System::Windows::Forms::Button^  STOP;
	private: System::Windows::Forms::Button^  PLAY;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txtLatoff;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtLongoff;
	private: System::Windows::Forms::TextBox^  txtTime;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txtAltoff;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog2;

	private: System::ComponentModel::IContainer^  components;

	protected: 










































	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->Browse = (gcnew System::Windows::Forms::Button());
			this->STOP = (gcnew System::Windows::Forms::Button());
			this->PLAY = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtLatoff = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtLongoff = (gcnew System::Windows::Forms::TextBox());
			this->txtTime = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtAltoff = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->errorMessage = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->mySerial = (gcnew System::IO::Ports::SerialPort(this->components));
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panel3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Black;
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Controls->Add(this->groupBox2);
			this->panel3->Controls->Add(this->groupBox1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(3, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(828, 234);
			this->panel3->TabIndex = 1;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->Browse);
			this->groupBox2->Controls->Add(this->STOP);
			this->groupBox2->Controls->Add(this->PLAY);
			this->groupBox2->Location = System::Drawing::Point(25, 11);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(214, 207);
			this->groupBox2->TabIndex = 22;
			this->groupBox2->TabStop = false;
			// 
			// Browse
			// 
			this->Browse->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Browse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Browse->ForeColor = System::Drawing::Color::Black;
			this->Browse->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->Browse->Location = System::Drawing::Point(34, 38);
			this->Browse->Name = L"Browse";
			this->Browse->Size = System::Drawing::Size(133, 37);
			this->Browse->TabIndex = 2;
			this->Browse->Text = L"Browse";
			this->Browse->UseVisualStyleBackColor = true;
			this->Browse->Click += gcnew System::EventHandler(this, &Form1::Browse_Click);
			// 
			// STOP
			// 
			this->STOP->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->STOP->Enabled = false;
			this->STOP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->STOP->ForeColor = System::Drawing::Color::Black;
			this->STOP->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->STOP->Location = System::Drawing::Point(34, 143);
			this->STOP->Name = L"STOP";
			this->STOP->Size = System::Drawing::Size(133, 37);
			this->STOP->TabIndex = 0;
			this->STOP->Text = L"Stop";
			this->STOP->UseVisualStyleBackColor = true;
			this->STOP->Click += gcnew System::EventHandler(this, &Form1::STOP_Click);
			// 
			// PLAY
			// 
			this->PLAY->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->PLAY->Enabled = false;
			this->PLAY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->PLAY->ForeColor = System::Drawing::Color::Black;
			this->PLAY->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->PLAY->Location = System::Drawing::Point(34, 90);
			this->PLAY->Name = L"PLAY";
			this->PLAY->Size = System::Drawing::Size(133, 37);
			this->PLAY->TabIndex = 1;
			this->PLAY->Text = L"Play";
			this->PLAY->UseVisualStyleBackColor = true;
			this->PLAY->Click += gcnew System::EventHandler(this, &Form1::PLAY_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->txtLatoff);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->txtLongoff);
			this->groupBox1->Controls->Add(this->txtTime);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->txtAltoff);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::White;
			this->groupBox1->Location = System::Drawing::Point(439, 20);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(300, 198);
			this->groupBox1->TabIndex = 21;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Position Data";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(10, 162);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 13);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Time";
			// 
			// txtLatoff
			// 
			this->txtLatoff->Location = System::Drawing::Point(78, 38);
			this->txtLatoff->Name = L"txtLatoff";
			this->txtLatoff->ReadOnly = true;
			this->txtLatoff->Size = System::Drawing::Size(201, 20);
			this->txtLatoff->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(10, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Latitude";
			// 
			// txtLongoff
			// 
			this->txtLongoff->Location = System::Drawing::Point(78, 77);
			this->txtLongoff->Name = L"txtLongoff";
			this->txtLongoff->ReadOnly = true;
			this->txtLongoff->Size = System::Drawing::Size(201, 20);
			this->txtLongoff->TabIndex = 3;
			// 
			// txtTime
			// 
			this->txtTime->Location = System::Drawing::Point(78, 159);
			this->txtTime->Name = L"txtTime";
			this->txtTime->ReadOnly = true;
			this->txtTime->Size = System::Drawing::Size(201, 20);
			this->txtTime->TabIndex = 14;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(10, 81);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Longitude";
			// 
			// txtAltoff
			// 
			this->txtAltoff->Location = System::Drawing::Point(78, 118);
			this->txtAltoff->Name = L"txtAltoff";
			this->txtAltoff->ReadOnly = true;
			this->txtAltoff->Size = System::Drawing::Size(201, 20);
			this->txtAltoff->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(10, 121);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Altitude";
			// 
			// errorMessage
			// 
			this->errorMessage->Name = L"errorMessage";
			this->errorMessage->Size = System::Drawing::Size(12, 16);
			this->errorMessage->Text = L"*";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// mySerial
			// 
			this->mySerial->BaudRate = 115200;
			this->mySerial->DtrEnable = true;
			this->mySerial->Handshake = System::IO::Ports::Handshake::XOnXOff;
			this->mySerial->RtsEnable = true;
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(42, 16);
			this->toolStripStatusLabel1->Text = L"Status:";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->tableLayoutPanel1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(834, 661);
			this->panel1->TabIndex = 5;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				100)));
			this->tableLayoutPanel1->Controls->Add(this->panel3, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->statusStrip1, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->richTextBox1, 0, 1);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 37.58865F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 62.41135F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(834, 661);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// statusStrip1
			// 
			this->statusStrip1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->toolStripStatusLabel1, 
				this->errorMessage});
			this->statusStrip1->Location = System::Drawing::Point(0, 640);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(834, 21);
			this->statusStrip1->TabIndex = 2;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::Black;
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->ForeColor = System::Drawing::Color::White;
			this->richTextBox1->Location = System::Drawing::Point(3, 243);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(828, 394);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->TabStop = false;
			this->richTextBox1->Text = L"";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog2";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(834, 661);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"GPS DATA PARSER";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel3->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) 
		 {
	   
     
			
			
	 }
private: System::Void btn_start_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
		 String ^GPSFILE,^logData;
		  StreamReader ^strread;
		  
private: System::Void Browse_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			try
			{
				openFileDialog1->FileName = L"";
				openFileDialog1->DefaultExt = L".txt";
				openFileDialog1->Filter = L"Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
				openFileDialog1->FilterIndex = 1;
					 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::Cancel)
					{
						return;
					}
				 GPSFILE = openFileDialog1->FileName;
				 strread = gcnew StreamReader(GPSFILE);
					if (strread->BaseStream->Length == 0)
					{
						MessageBox::Show(L"File is Empty");
					}
				PLAY->Enabled = true;
			}
			  catch (exception& e)
			 {
				 errorMessage->Text= marshal_as<String^>(e.what());
			 }
		 }
		vector<string> split(string str, char delimiter) 
		{
				  vector<string> internal;
				  stringstream ss(str); // Turn the string into a stream.
				  string tok;
 
				  while(getline(ss, tok, delimiter)) {
					internal.push_back(tok);
				  }
 
				  return internal;
		}

		void ProcessGPGGA(vector<string> &values)
	{
			try
			{
				txtTime->Text = marshal_as<String^>(values[1]);
				txtLongoff->Text = marshal_as<String^>(values[2]);
				txtLatoff->Text = marshal_as<String^>(values[4]);
				txtAltoff->Text =marshal_as<String^>(values[9]);
			}
			  catch (exception& e)
			 {
				 errorMessage->Text= marshal_as<String^>(e.what());
			 }
		
		}
		private: System::Void PARSE()
        {	
			try
			{
				msclr::interop::marshal_context context;
				std::string str = context.marshal_as<std::string>(logData);
				vector<string> values = split(str, ',');
				if (values[0] == "$GPGGA")
				   {
						   ProcessGPGGA(values);
				   }
				   else if (values[0] == "$GNGGA")
				   {
						   ProcessGPGGA(values);

				   }
			   }
			 catch (exception& e)
			 {
				 errorMessage->Text= marshal_as<String^>(e.what());
			 }

		}
		private: System::Void DisplayText()
        {
			try
			{
				richTextBox1->AppendText(logData + "\n");
				PARSE();
				richTextBox1->SelectionStart = richTextBox1->Text->Length;
                richTextBox1->ScrollToCaret();
                if (richTextBox1->Text->Length >= 10000)
                    richTextBox1->Text = "";
			}
			  catch (exception& e)
			 {
				 errorMessage->Text= marshal_as<String^>(e.what());
			 }
		 }
         private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
		 {
			 try
			 {
                if (!strread->EndOfStream)
                {
                    logData = strread->ReadLine();
                    DisplayText();
                }
				}
			  catch (exception& e)
			 {
				 errorMessage->Text= marshal_as<String^>(e.what());
			 }
            

		 }
		private: System::Void PLAY_Click(System::Object^  sender, System::EventArgs^  e) 
				 {
					 try
					{
						 timer1->Enabled=true;
						 STOP->Enabled=true;
					 }
					  catch (exception& e)
					 {
						 errorMessage->Text= marshal_as<String^>(e.what());
					 }
				 }

		private: System::Void STOP_Click(System::Object^  sender, System::EventArgs^  e) 
				 {
					 timer1->Enabled=false;
				 }
};
}

