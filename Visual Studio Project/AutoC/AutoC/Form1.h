#include <msclr\marshal_cppstd.h>
#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
#pragma once

namespace AutoC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  dns;

	private: System::Windows::Forms::TextBox^  gateway;

	private: System::Windows::Forms::TextBox^  subnet;

	private: System::Windows::Forms::TextBox^  ip;

	private: System::Windows::Forms::Button^  genFiles;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  enable_college;
	private: System::Windows::Forms::Button^  enable_hostel;


	private: System::Windows::Forms::Label^  status;
	private: System::Windows::Forms::Label^  gen_status;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;


	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->gen_status = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dns = (gcnew System::Windows::Forms::TextBox());
			this->gateway = (gcnew System::Windows::Forms::TextBox());
			this->subnet = (gcnew System::Windows::Forms::TextBox());
			this->ip = (gcnew System::Windows::Forms::TextBox());
			this->genFiles = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->status = (gcnew System::Windows::Forms::Label());
			this->enable_college = (gcnew System::Windows::Forms::Button());
			this->enable_hostel = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Poor Richard", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(275, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(197, 44);
			this->label1->TabIndex = 0;
			this->label1->Text = L"AutoConfig";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(126, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Created By: Raghav Dua";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->gen_status);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->dns);
			this->panel1->Controls->Add(this->gateway);
			this->panel1->Controls->Add(this->subnet);
			this->panel1->Controls->Add(this->ip);
			this->panel1->Controls->Add(this->genFiles);
			this->panel1->Location = System::Drawing::Point(403, 235);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(341, 244);
			this->panel1->TabIndex = 2;
			// 
			// gen_status
			// 
			this->gen_status->AutoSize = true;
			this->gen_status->ForeColor = System::Drawing::Color::Red;
			this->gen_status->Location = System::Drawing::Point(117, 185);
			this->gen_status->Name = L"gen_status";
			this->gen_status->Size = System::Drawing::Size(0, 13);
			this->gen_status->TabIndex = 9;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(22, 154);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(74, 13);
			this->label8->TabIndex = 8;
			this->label8->Text = L"DNS Address:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(21, 110);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(93, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Gateway Address:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(21, 68);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(73, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Subnet Mask:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(22, 20);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"IP Address:";
			// 
			// dns
			// 
			this->dns->Location = System::Drawing::Point(121, 150);
			this->dns->Name = L"dns";
			this->dns->Size = System::Drawing::Size(178, 20);
			this->dns->TabIndex = 4;
			// 
			// gateway
			// 
			this->gateway->Location = System::Drawing::Point(121, 106);
			this->gateway->Name = L"gateway";
			this->gateway->Size = System::Drawing::Size(178, 20);
			this->gateway->TabIndex = 3;
			// 
			// subnet
			// 
			this->subnet->Location = System::Drawing::Point(121, 62);
			this->subnet->Name = L"subnet";
			this->subnet->Size = System::Drawing::Size(178, 20);
			this->subnet->TabIndex = 2;
			// 
			// ip
			// 
			this->ip->Location = System::Drawing::Point(121, 17);
			this->ip->Name = L"ip";
			this->ip->Size = System::Drawing::Size(178, 20);
			this->ip->TabIndex = 1;
			// 
			// genFiles
			// 
			this->genFiles->Location = System::Drawing::Point(121, 204);
			this->genFiles->Name = L"genFiles";
			this->genFiles->Size = System::Drawing::Size(117, 23);
			this->genFiles->TabIndex = 0;
			this->genFiles->Text = L"Generate Files";
			this->genFiles->UseVisualStyleBackColor = true;
			this->genFiles->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::genFiles_MouseClick_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(122, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"duaraghav8@gmail.com";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(37, 130);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(707, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"This Application is Open Source. Feel free to use, modify and redistribute. In or" 
				L"der to obtain the Source Code, just drop an email at the given address.";
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->status);
			this->panel2->Controls->Add(this->enable_college);
			this->panel2->Controls->Add(this->enable_hostel);
			this->panel2->Location = System::Drawing::Point(176, 153);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(409, 66);
			this->panel2->TabIndex = 5;
			// 
			// status
			// 
			this->status->AutoSize = true;
			this->status->ForeColor = System::Drawing::Color::Red;
			this->status->Location = System::Drawing::Point(111, 44);
			this->status->Name = L"status";
			this->status->Size = System::Drawing::Size(0, 13);
			this->status->TabIndex = 2;
			// 
			// enable_college
			// 
			this->enable_college->Location = System::Drawing::Point(210, 15);
			this->enable_college->Name = L"enable_college";
			this->enable_college->Size = System::Drawing::Size(173, 23);
			this->enable_college->TabIndex = 1;
			this->enable_college->Text = L"Enable College Wi-fi";
			this->enable_college->UseVisualStyleBackColor = true;
			this->enable_college->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::button3_MouseClick);
			// 
			// enable_hostel
			// 
			this->enable_hostel->Location = System::Drawing::Point(22, 15);
			this->enable_hostel->Name = L"enable_hostel";
			this->enable_hostel->Size = System::Drawing::Size(162, 23);
			this->enable_hostel->TabIndex = 0;
			this->enable_hostel->Text = L"Enable Hostel Wi-Fi";
			this->enable_hostel->UseVisualStyleBackColor = true;
			this->enable_hostel->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::button2_MouseClick);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Location = System::Drawing::Point(16, 235);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(381, 244);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Instructions";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(7, 19);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(278, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"1. Fill in the Information to generate the configuration files.";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(18, 36);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(351, 13);
			this->label10->TabIndex = 1;
			this->label10->Text = L"These files are generated in the same Directory the application resides in.";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(10, 75);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(352, 13);
			this->label11->TabIndex = 2;
			this->label11->Text = L"2. To run, Right click on the application AutoC.exe and click";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(21, 92);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(145, 13);
			this->label12->TabIndex = 3;
			this->label12->Text = L" \"Run As Administrator\".";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(10, 129);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(356, 13);
			this->label13->TabIndex = 4;
			this->label13->Text = L"3. Click on the appropriate Button for applying the configuration and you\'re";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(21, 144);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(34, 13);
			this->label14->TabIndex = 5;
			this->label14->Text = L"done!";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(776, 513);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"AutoConfig - Configure Adapter Settings";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 ifstream infile ("remove_config.bat");
			 if (infile.good ()) {
				int result = system ("remove_config.bat");
				this->status->Text = L"Desired changes have been applied.";
			 }
			 else {
				 this->status->Text = L"Configuration File does not exist.";
			 }
			 //system ("pause");
		 }
private: System::Void button2_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 ifstream infile ("apply_config.bat");
			 if (infile.good ()) {
				int result = system ("apply_config.bat");
				this->status->Text = L"Desired changes have been applied.";
			 }
			 else {
				 this->status->Text = L"Configuration File does not exist.";
			 }
		 }
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void genFiles_MouseClick_1(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 String ^ ip_str = Convert::ToString (this->ip->Text);
			 String ^ subnet_str = Convert::ToString (this->subnet->Text);
			 String ^ gateway_str = Convert::ToString (this->gateway->Text);
			 String ^ dns_str = Convert::ToString (this->dns->Text);
			 string buffer;
			 //string normal_u = msclr::interop::marshal_as< std::string >(normal);

			 string apply_config = "netsh interface ip set address \"Wi-Fi\" static ";
			 string remove_config = "netsh interface ip set address \"Wi-fi\" dhcp\nnetsh interface ip set dns \"Wi-Fi\" dhcp";

			 ofstream f_remove_config, f_apply_config;

			 f_apply_config.open ("apply_config.bat", ios::out);
			 f_remove_config.open ("remove_config.bat", ios::out);

			 if ( !(f_apply_config.is_open () && f_remove_config.is_open ()) ) {
				 this->gen_status->Text = L"Error: File could not be created";
			 }
			 else {
				 buffer = msclr::interop::marshal_as< std::string > (ip_str);
				 buffer += " ";
				 apply_config += buffer;
				 buffer = msclr::interop::marshal_as< std::string > (subnet_str);
				 buffer += " ";
				 apply_config += buffer;
				 buffer = msclr::interop::marshal_as< std::string > (gateway_str);
				 buffer += " \n";
				 apply_config += buffer;
				 apply_config += "netsh interface ip set dns \"Wi-Fi\" static ";
				 buffer = msclr::interop::marshal_as< std::string > (dns_str);
				 apply_config += buffer;

				 f_remove_config << remove_config;
				 f_apply_config << apply_config;
				 this->gen_status->Text = L"Files created successfully";
			 }

		 }
};
}

