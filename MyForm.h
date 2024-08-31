#pragma once

namespace MIPsSImulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(976, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(976, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 15);
			this->label2->TabIndex = 0;
			this->label2->Text = L"label1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(976, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 15);
			this->label3->TabIndex = 0;
			this->label3->Text = L"label1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(976, 76);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 15);
			this->label4->TabIndex = 0;
			this->label4->Text = L"label1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Location = System::Drawing::Point(976, 89);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 15);
			this->label5->TabIndex = 0;
			this->label5->Text = L"label1";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Location = System::Drawing::Point(976, 102);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(37, 15);
			this->label6->TabIndex = 0;
			this->label6->Text = L"label1";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Location = System::Drawing::Point(976, 115);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 15);
			this->label7->TabIndex = 0;
			this->label7->Text = L"label1";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->Location = System::Drawing::Point(976, 128);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(37, 15);
			this->label8->TabIndex = 0;
			this->label8->Text = L"label1";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->Location = System::Drawing::Point(976, 141);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(37, 15);
			this->label9->TabIndex = 0;
			this->label9->Text = L"label1";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label10->Location = System::Drawing::Point(976, 167);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(37, 15);
			this->label10->TabIndex = 0;
			this->label10->Text = L"label1";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label11->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label11->Location = System::Drawing::Point(976, 154);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(37, 15);
			this->label11->TabIndex = 0;
			this->label11->Text = L"label1";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label12->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label12->Location = System::Drawing::Point(976, 193);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(37, 15);
			this->label12->TabIndex = 0;
			this->label12->Text = L"label1";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label13->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label13->Location = System::Drawing::Point(976, 180);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(37, 15);
			this->label13->TabIndex = 0;
			this->label13->Text = L"label1";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label14->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label14->Location = System::Drawing::Point(976, 206);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(37, 15);
			this->label14->TabIndex = 0;
			this->label14->Text = L"label1";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label15->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label15->Location = System::Drawing::Point(976, 219);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(37, 15);
			this->label15->TabIndex = 0;
			this->label15->Text = L"label1";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label16->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label16->Location = System::Drawing::Point(976, 232);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(37, 15);
			this->label16->TabIndex = 0;
			this->label16->Text = L"label1";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label17->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label17->Location = System::Drawing::Point(976, 245);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(37, 15);
			this->label17->TabIndex = 0;
			this->label17->Text = L"label1";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label18->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label18->Location = System::Drawing::Point(976, 258);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(37, 15);
			this->label18->TabIndex = 0;
			this->label18->Text = L"label1";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label19->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label19->Location = System::Drawing::Point(976, 271);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(37, 15);
			this->label19->TabIndex = 0;
			this->label19->Text = L"label1";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label20->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label20->Location = System::Drawing::Point(976, 284);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(37, 15);
			this->label20->TabIndex = 0;
			this->label20->Text = L"label1";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label21->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label21->Location = System::Drawing::Point(976, 297);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(37, 15);
			this->label21->TabIndex = 0;
			this->label21->Text = L"label1";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label22->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label22->Location = System::Drawing::Point(976, 310);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(37, 15);
			this->label22->TabIndex = 0;
			this->label22->Text = L"label1";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label23->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label23->Location = System::Drawing::Point(976, 323);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(37, 15);
			this->label23->TabIndex = 0;
			this->label23->Text = L"label1";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label24->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label24->Location = System::Drawing::Point(976, 336);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(37, 15);
			this->label24->TabIndex = 0;
			this->label24->Text = L"label1";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label25->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label25->Location = System::Drawing::Point(976, 349);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(37, 15);
			this->label25->TabIndex = 0;
			this->label25->Text = L"label1";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label26->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label26->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label26->Location = System::Drawing::Point(976, 362);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(37, 15);
			this->label26->TabIndex = 0;
			this->label26->Text = L"label1";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label27->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label27->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label27->Location = System::Drawing::Point(976, 375);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(37, 15);
			this->label27->TabIndex = 0;
			this->label27->Text = L"label1";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label28->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label28->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label28->Location = System::Drawing::Point(976, 388);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(37, 15);
			this->label28->TabIndex = 0;
			this->label28->Text = L"label1";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label29->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label29->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label29->Location = System::Drawing::Point(976, 401);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(37, 15);
			this->label29->TabIndex = 0;
			this->label29->Text = L"label1";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label30->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label30->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label30->Location = System::Drawing::Point(976, 414);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(37, 15);
			this->label30->TabIndex = 0;
			this->label30->Text = L"label1";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label31->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label31->Location = System::Drawing::Point(976, 427);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(37, 15);
			this->label31->TabIndex = 0;
			this->label31->Text = L"label1";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label32->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label32->Location = System::Drawing::Point(976, 440);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(37, 15);
			this->label32->TabIndex = 0;
			this->label32->Text = L"label1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1155, 805);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
