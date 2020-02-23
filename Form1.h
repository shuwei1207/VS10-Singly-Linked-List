#pragma once
#include <stdlib.h>
#include <iostream>

struct node
{	int data ;
	struct node * next;
};
struct node *first, *last ;//全域變數
struct node *top ;//堆疊
struct node *front, *rear ;//佇列

namespace My0413418_HW6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 的摘要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此加入建構函式程式碼
			//
			first = NewNode(0);//注意:製造開頭的空白節點
			first-> next = first;//環狀串列
			last = first;

			top = NewNode(0) ;//堆疊
			top -> next = top ;//環狀

			front = NewNode(0) ;//佇列
			front -> next = front ;//環狀
			front = rear ;
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	protected: 
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabControl^  tabControl2;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::TabPage^  tabPage6;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button13;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器
		/// 修改這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->tabControl1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->tabControl2);
			this->splitContainer1->Size = System::Drawing::Size(815, 489);
			this->splitContainer1->SplitterDistance = 206;
			this->splitContainer1->TabIndex = 0;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(815, 206);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::tabControl1_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button13);
			this->tabPage1->Controls->Add(this->button8);
			this->tabPage1->Controls->Add(this->groupBox3);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(807, 180);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Singly Linked List";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"新細明體", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button13->Location = System::Drawing::Point(622, 120);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(144, 32);
			this->button13->TabIndex = 19;
			this->button13->Text = L"Invert";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Silver;
			this->button8->Font = (gcnew System::Drawing::Font(L"新細明體-ExtB", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button8->Location = System::Drawing::Point(657, 20);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(58, 86);
			this->button8->TabIndex = 18;
			this->button8->Text = L"Clear";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button7);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->textBox4);
			this->groupBox3->Controls->Add(this->textBox3);
			this->groupBox3->Location = System::Drawing::Point(434, 20);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(172, 135);
			this->groupBox3->TabIndex = 17;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"random";
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"新細明體", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button7->Location = System::Drawing::Point(8, 84);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(144, 32);
			this->button7->TabIndex = 16;
			this->button7->Text = L"Insert n random numbers";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"新細明體-ExtB", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label4->ForeColor = System::Drawing::Color::Green;
			this->label4->Location = System::Drawing::Point(6, 59);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 12);
			this->label4->TabIndex = 15;
			this->label4->Text = L"range:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"新細明體-ExtB", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label3->ForeColor = System::Drawing::Color::Green;
			this->label3->Location = System::Drawing::Point(26, 38);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 12);
			this->label3->TabIndex = 14;
			this->label3->Text = L"n:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(46, 56);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(88, 22);
			this->textBox4->TabIndex = 13;
			this->textBox4->Text = L"1000";
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox4_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(46, 28);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(88, 22);
			this->textBox3->TabIndex = 12;
			this->textBox3->Text = L"10";
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox3_KeyPress);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Location = System::Drawing::Point(167, 11);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(247, 144);
			this->groupBox2->TabIndex = 11;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"search";
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"新細明體", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button6->Location = System::Drawing::Point(166, 41);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(60, 96);
			this->button6->TabIndex = 9;
			this->button6->Text = L"Search\r\nDelete";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"新細明體", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button5->Location = System::Drawing::Point(14, 109);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(133, 28);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Search_Insert_Before";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"新細明體", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button4->Location = System::Drawing::Point(14, 75);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(133, 28);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Search_Insert_After";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"細明體-ExtB", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label2->ForeColor = System::Drawing::Color::Blue;
			this->label2->Location = System::Drawing::Point(7, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 12);
			this->label2->TabIndex = 6;
			this->label2->Text = L"target:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(67, 16);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(80, 22);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"10";
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox2_KeyPress);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"新細明體", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button3->Location = System::Drawing::Point(14, 41);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(133, 28);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Search Target";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(10, 10);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(141, 138);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"insert";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"新細明體", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button2->Location = System::Drawing::Point(21, 96);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 28);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Insert Last";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"新細明體-ExtB", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(-2, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 12);
			this->label1->TabIndex = 2;
			this->label1->Text = L"element:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(55, 34);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(80, 22);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"10";
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"新細明體", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(21, 62);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 28);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Insert First";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->button10);
			this->tabPage2->Controls->Add(this->button9);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(807, 180);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Linked Stack";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label6->Location = System::Drawing::Point(40, 120);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(84, 16);
			this->label6->TabIndex = 4;
			this->label6->Text = L"pop 結果 :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"新細明體-ExtB", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(22, 49);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 15);
			this->label5->TabIndex = 3;
			this->label5->Text = L"element:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(91, 49);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(76, 22);
			this->textBox5->TabIndex = 2;
			this->textBox5->Text = L"10";
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox5_KeyPress);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"新細明體-ExtB", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(186, 99);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(138, 37);
			this->button10->TabIndex = 1;
			this->button10->Text = L"pop";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"新細明體-ExtB", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(186, 38);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(138, 37);
			this->button9->TabIndex = 0;
			this->button9->Text = L"push";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label8);
			this->tabPage3->Controls->Add(this->button12);
			this->tabPage3->Controls->Add(this->button11);
			this->tabPage3->Controls->Add(this->label7);
			this->tabPage3->Controls->Add(this->textBox6);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(807, 180);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Linked Queue";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label8->Location = System::Drawing::Point(26, 117);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(95, 16);
			this->label8->TabIndex = 5;
			this->label8->Text = L"delete結果 :";
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"新細明體-ExtB", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button12->ForeColor = System::Drawing::Color::Black;
			this->button12->Location = System::Drawing::Point(189, 106);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(138, 37);
			this->button12->TabIndex = 3;
			this->button12->Text = L"DeleteQ";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"新細明體-ExtB", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button11->ForeColor = System::Drawing::Color::Black;
			this->button11->Location = System::Drawing::Point(189, 41);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(138, 37);
			this->button11->TabIndex = 2;
			this->button11->Text = L"InsertQ";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"新細明體-ExtB", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(26, 42);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(63, 15);
			this->label7->TabIndex = 1;
			this->label7->Text = L"element:";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(95, 41);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(64, 22);
			this->textBox6->TabIndex = 0;
			this->textBox6->Text = L"10";
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox6_KeyPress);
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Controls->Add(this->tabPage6);
			this->tabControl2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl2->Location = System::Drawing::Point(0, 0);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(815, 279);
			this->tabControl2->TabIndex = 0;
			this->tabControl2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::tabControl2_SelectedIndexChanged);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->listBox1);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(807, 253);
			this->tabPage4->TabIndex = 0;
			this->tabPage4->Text = L"Linked List Output";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 12;
			this->listBox1->Location = System::Drawing::Point(3, 3);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(801, 247);
			this->listBox1->TabIndex = 0;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->listBox2);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(807, 253);
			this->tabPage5->TabIndex = 1;
			this->tabPage5->Text = L"Linked Stack Output";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// listBox2
			// 
			this->listBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 12;
			this->listBox2->Location = System::Drawing::Point(3, 3);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(801, 247);
			this->listBox2->TabIndex = 0;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->listBox3);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(807, 253);
			this->tabPage6->TabIndex = 2;
			this->tabPage6->Text = L"Linked Queue Output";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// listBox3
			// 
			this->listBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 12;
			this->listBox3->Location = System::Drawing::Point(3, 3);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(801, 247);
			this->listBox3->TabIndex = 0;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(815, 489);
			this->Controls->Add(this->splitContainer1);
			this->Name = L"Form1";
			this->Text = L"Singly linked link and application  by Jack 2016/12/14 Ver 1.0";
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabControl2->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		struct node * NewNode(int element)//新節點
		{
			struct node * p;
			p = (struct node *) malloc (sizeof(struct node));
			p->data = element;
			p->next = NULL;
			return p;
		}

		void insertFirst(int element)//插入前節點
		{
			struct node * p = NewNode(element);
			p->next = first->next;
			first->next = p;
			if(last == first) last = p;//有last所做的調整
		}

		void insertLast(int element)//插入後節點
		{
			struct node * p = NewNode(element);
			p->next = last->next;
			last->next = p;
			last = p;
		}

		void printList(struct node * first)//印出
		{
			struct node * p;
			String ^ list ="";//字串宣告 空字串
			for( p = first->next ; p!=first ; p=p->next)
				list += p->data+"==>"; 
			listBox1->Items->Add(list+"<");//接地
		}

		struct node * searchTarget(int target)//搜尋
		{
			struct node * p;
			for(p = first->next; (p!=first && p->data !=target) ; p=p->next);
			if( p == first) return NULL;
			return p ;//同else
		}

		struct node * searchTargetBefore(int target)//搜尋前節點
		{
			struct node * p , * q ;
			for(q = first , p = first->next; (p!=first && p->data !=target) ; q = p , p=p->next);
			if( p == first) return NULL;
			return q ;//同else
		}

		void insertAfter(int element ,struct node * x)//搜尋後插入
		{
			struct node * p = NewNode(element);
			p->next = x->next ;
			x->next = p ;
			if(last == first) last = p;//有last所做的調整
		}

		void  DeleteAfter(struct node * x)//搜尋後刪除
		{
			struct node * p = x->next;
			x->next = p->next;
			if( p == last) last = x;//防止last消失
			free(p);
		}

		void clearList(struct node * first)//清空
		{
			struct node * p ;
			for( p = first->next ; p!=first ; p=first->next)
			{
				first->next = p->next;
				free(p);
			}
			last = first ;//防止last消失
		}
		void Invert()
		{
			struct node *r, *s, *t ; 
			r = first; 
			s = NULL; 
			while (r != NULL)
				{
					t = s; 
					s = r; 
					r = r->next; 
					s->next = t; 
				}
			first = s; 
		}

		void push (int element)
		{
			struct node * p = NewNode(element);
			p->next = top->next ;
			top->next = p ;
		}

		int pop()
		{
			struct node * p = top->next;
			if( p == top) return -1 ;
			int result = p->data;
			top->next = p->next ;
			free(p);
			return result;//注意順序
		}

		void printStack(struct node * top)
		{
			struct node * p;
			String ^ list ="";//字串宣告 空字串
			for( p = top->next ; p!=top ; p=p->next)
				list += p->data+"==>"; 
			listBox2->Items->Add(list+"<");//接地
		}

		void InsertQ(int element)
		{
			struct node * p ;
			p = NewNode(element); 
			if (rear == NULL) 
				front = p; 
			else
				rear->next = p; 
			rear = p; 
		}

		int DeleteQ()
			{
				struct node * p; 
				int element; 
				if (front == NULL)
				{
					rear = front;
					return -1 ; 
				}
				else
				{
					p = front; 
					front = front->next;
					element = p->data; 
					return element; 
				}
			}


		void printQueue(struct node * front)
		{
			struct node * p;
			String ^ list ="";//字串宣告 空字串
			for( p = front ; p!=NULL ; p=p->next)
				list += p->data+"==>"; 
			listBox3->Items->Add(list+"<");//接地
		}

	private: System::Void tabControl1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
			{
				 tabControl2-> SelectedIndex = tabControl1-> SelectedIndex;//上同步
			}
	private: System::Void tabControl2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
			{
				 tabControl1-> SelectedIndex = tabControl2-> SelectedIndex;//下同步
			}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			{
				 int element = int::Parse(textBox1->Text);
				 insertFirst(element);
				 printList(first);
				 textBox1->Text = System::Convert::ToString(int::Parse(textBox1->Text)+10);
			}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
			{
				int element = int::Parse(textBox1->Text);
				 insertLast(element);
				 printList(first);
				 textBox1->Text = System::Convert::ToString(int::Parse(textBox1->Text)+10);
			}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
			{
				int target = int::Parse(textBox2->Text);
				struct node * x;
				x = searchTarget(target);
				if (x) listBox1->Items->Add(x->data+" 找到了!");
				else listBox1->Items->Add(target+" 找不到QQ");
			}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
			{
				int element = int::Parse(textBox1->Text);
				int target = int::Parse(textBox2->Text);
				struct node * x;
				x = searchTarget(target);
				if (x) insertAfter(element , x);
				else listBox1->Items->Add(target+" 找不到QQ");
				printList(first);
				textBox1->Text = System::Convert::ToString(int::Parse(textBox1->Text)+10);
			}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
			{
				int element = int::Parse(textBox1->Text);
				int target = int::Parse(textBox2->Text);
				struct node * x;
				x = searchTargetBefore(target);
				if (x) insertAfter(element , x);
				else listBox1->Items->Add(target+" 找不到QQ");
				printList(first);
				textBox1->Text = System::Convert::ToString(int::Parse(textBox1->Text)+10);
			}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e)
			{
				int target = int::Parse(textBox2->Text);
				struct node * x;
				x = searchTargetBefore(target);
				if (x) DeleteAfter(x);
				else listBox1->Items->Add(target+" 找不到QQ");
				printList(first);
			}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e)
			{
				int n = int::Parse(textBox3->Text);
				int range = int::Parse(textBox4->Text);
				int * data = new int[n];
				String^line = "";
				for( int i=0 ; i<n ; i++)
				{
					data[i] = rand() % range +1 ;
					line += data[i]+"_";
					insertLast (data[i]);
				}
				listBox1->Items->Add(n+"隨機數字:"+line);
				printList(first);
			}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) 
			{
				clearList(first);
				printList(first);//印出空節點
			}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) 
			{
				int element = int::Parse(textBox5->Text);
				push(element);
				printStack(top);
				textBox5->Text = System::Convert::ToString(int::Parse(textBox5->Text)+10);
			}
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) 
			{
				int result = pop();
				if(result != -1) printStack(top);//-1代表空的
				else listBox2->Items->Add("空堆疊");
				label6->Text = "pop結果= "+result;
			}
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) 
			{
				int element = int::Parse(textBox6->Text);
				InsertQ(element);
				printQueue(front);
				textBox6->Text = System::Convert::ToString(int::Parse(textBox6->Text)+10);
			}
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) 
			{
				int result = DeleteQ();
				if(result != -1)
				{
					printQueue(front);//-1代表空的
					rear = front;
				}
				else listBox3->Items->Add("空佇列");
				label8->Text ="delete結果="+result;
			}
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) 
			{
				Invert();
				printList(first);
			}

private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
		 {//防呆
			 if (isdigit(e->KeyChar) || iscntrl(e->KeyChar))
				{
					e->Handled = false;
				}
			else
				{
					e->Handled = true;
				}
		 }
private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
		 {//防呆
			 if (isdigit(e->KeyChar) || iscntrl(e->KeyChar))
				{
					e->Handled = false;
				}
			else
				{
					e->Handled = true;
				}
		 }
private: System::Void textBox3_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
		 {//防呆
			 if (isdigit(e->KeyChar) || iscntrl(e->KeyChar))
				{
					e->Handled = false;
				}
			else
				{
					e->Handled = true;
				}
		 }
private: System::Void textBox4_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
		 {//防呆
			 if (isdigit(e->KeyChar) || iscntrl(e->KeyChar))
				{
					e->Handled = false;
				}
			else
				{
					e->Handled = true;
				}
		 }
private: System::Void textBox5_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
		 {//防呆
			 if (isdigit(e->KeyChar) || iscntrl(e->KeyChar))
				{
					e->Handled = false;
				}
			else
				{
					e->Handled = true;
				}
		 }
	
private: System::Void textBox6_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
		 {//防呆
			 if (isdigit(e->KeyChar) || iscntrl(e->KeyChar))
				{
					e->Handled = false;
				}
			else
				{
					e->Handled = true;
				}
		 }
};
}

