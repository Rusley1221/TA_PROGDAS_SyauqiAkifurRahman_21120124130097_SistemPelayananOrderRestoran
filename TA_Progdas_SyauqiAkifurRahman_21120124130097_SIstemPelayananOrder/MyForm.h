#pragma once
#include "MyForm1.h"
namespace TAProgdasSyauqiAkifurRahman21120124130097SIstemPelayananOrder {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			kebabAmount = 0;
			burgerAmount = 0;
			tacosAmount = 0;
			kebabNotes = "";
			burgerNotes = "";
			tacoNotes = "";
			cartIndex = 0;
			totalPrice = 0.0;
		}

		double GetTotalPrice() {
			return totalPrice;
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		int kebabAmount;
		int burgerAmount;
		int tacosAmount;
		String^ kebabNotes;
		String^ burgerNotes;
		String^ tacoNotes;
		array<String^>^ cart = gcnew array<String^>(10);
		int cartIndex;
		double totalPrice;  // Variabel untuk menyimpan total harga

		// Harga untuk setiap menu
		const double KebabPrice = 10000.0;
		const double BurgerPrice = 15000.0;
		const double TacosPrice = 15000.0;
		// Form controls
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ buttonAddKebab;
	private: System::Windows::Forms::ListBox^ listCart;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ buttonRemove;
	private: System::Windows::Forms::Button^ buttonOrder;
	private: System::Windows::Forms::TextBox^ textKebabNotes;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBurgerNotes;
	private: System::Windows::Forms::TextBox^ textTacosNotes;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ buttonAddBurger;
	private: System::Windows::Forms::Button^ buttonAddTacos;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::NumericUpDown^ numericKebabAmount;
	private: System::Windows::Forms::NumericUpDown^ numericBurgerAmount;
	private: System::Windows::Forms::NumericUpDown^ numericTacosAmount;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->buttonAddKebab = (gcnew System::Windows::Forms::Button());
			this->listCart = (gcnew System::Windows::Forms::ListBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->buttonRemove = (gcnew System::Windows::Forms::Button());
			this->buttonOrder = (gcnew System::Windows::Forms::Button());
			this->textKebabNotes = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBurgerNotes = (gcnew System::Windows::Forms::TextBox());
			this->textTacosNotes = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonAddBurger = (gcnew System::Windows::Forms::Button());
			this->buttonAddTacos = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->numericKebabAmount = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericBurgerAmount = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericTacosAmount = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericKebabAmount))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericBurgerAmount))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericTacosAmount))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Red;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Yellow;
			this->label1->Location = System::Drawing::Point(24, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(255, 64);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Menu List";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"MV Boli", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(219, 109);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(161, 34);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Kebab Sosis";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(228, 143);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Rp. 10.000";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(250, 417);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Location = System::Drawing::Point(225, 169);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Amount:";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"MV Boli", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label6->Location = System::Drawing::Point(219, 249);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 34);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Burger";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(228, 283);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(87, 20);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Rp. 15.000";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"MV Boli", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label10->Location = System::Drawing::Point(219, 396);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(81, 34);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Tacos";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(228, 430);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(87, 20);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Rp. 15.000";
			// 
			// buttonAddKebab
			// 
			this->buttonAddKebab->BackColor = System::Drawing::Color::LawnGreen;
			this->buttonAddKebab->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAddKebab->Location = System::Drawing::Point(225, 220);
			this->buttonAddKebab->Name = L"buttonAddKebab";
			this->buttonAddKebab->Size = System::Drawing::Size(90, 26);
			this->buttonAddKebab->TabIndex = 21;
			this->buttonAddKebab->Text = L"Add to Cart\r\n\r\n\r\n";
			this->buttonAddKebab->UseVisualStyleBackColor = false;
			this->buttonAddKebab->Click += gcnew System::EventHandler(this, &MyForm::buttonAddKebab_Click);
			// 
			// listCart
			// 
			this->listCart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listCart->FormattingEnabled = true;
			this->listCart->ItemHeight = 15;
			this->listCart->Location = System::Drawing::Point(596, 101);
			this->listCart->Name = L"listCart";
			this->listCart->Size = System::Drawing::Size(430, 334);
			this->listCart->TabIndex = 22;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Red;
			this->label12->Location = System::Drawing::Point(654, 45);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(95, 50);
			this->label12->TabIndex = 23;
			this->label12->Text = L"Cart";
			// 
			// buttonRemove
			// 
			this->buttonRemove->BackColor = System::Drawing::Color::Yellow;
			this->buttonRemove->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonRemove->Location = System::Drawing::Point(596, 436);
			this->buttonRemove->Name = L"buttonRemove";
			this->buttonRemove->Size = System::Drawing::Size(136, 31);
			this->buttonRemove->TabIndex = 25;
			this->buttonRemove->Text = L"Remove from Cart";
			this->buttonRemove->UseVisualStyleBackColor = false;
			this->buttonRemove->Click += gcnew System::EventHandler(this, &MyForm::buttonRemove_Click);
			// 
			// buttonOrder
			// 
			this->buttonOrder->BackColor = System::Drawing::Color::LawnGreen;
			this->buttonOrder->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonOrder->Location = System::Drawing::Point(951, 436);
			this->buttonOrder->Name = L"buttonOrder";
			this->buttonOrder->Size = System::Drawing::Size(75, 31);
			this->buttonOrder->TabIndex = 26;
			this->buttonOrder->Text = L"Order";
			this->buttonOrder->UseVisualStyleBackColor = false;
			this->buttonOrder->Click += gcnew System::EventHandler(this, &MyForm::buttonOrder_Click);
			// 
			// textKebabNotes
			// 
			this->textKebabNotes->Location = System::Drawing::Point(225, 194);
			this->textKebabNotes->Name = L"textKebabNotes";
			this->textKebabNotes->Size = System::Drawing::Size(269, 20);
			this->textKebabNotes->TabIndex = 34;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Location = System::Drawing::Point(500, 197);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(34, 13);
			this->label13->TabIndex = 35;
			this->label13->Text = L"Note*";
			// 
			// textBurgerNotes
			// 
			this->textBurgerNotes->Location = System::Drawing::Point(225, 335);
			this->textBurgerNotes->Name = L"textBurgerNotes";
			this->textBurgerNotes->Size = System::Drawing::Size(269, 20);
			this->textBurgerNotes->TabIndex = 36;
			// 
			// textTacosNotes
			// 
			this->textTacosNotes->Location = System::Drawing::Point(225, 485);
			this->textTacosNotes->Name = L"textTacosNotes";
			this->textTacosNotes->Size = System::Drawing::Size(269, 20);
			this->textTacosNotes->TabIndex = 37;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Location = System::Drawing::Point(500, 338);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(34, 13);
			this->label14->TabIndex = 38;
			this->label14->Text = L"Note*";
			this->label14->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Location = System::Drawing::Point(500, 492);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(34, 13);
			this->label15->TabIndex = 39;
			this->label15->Text = L"Note*";
			this->label15->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(43, 111);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(159, 106);
			this->pictureBox1->TabIndex = 41;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(43, 249);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(159, 107);
			this->pictureBox2->TabIndex = 42;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(43, 396);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(159, 110);
			this->pictureBox3->TabIndex = 43;
			this->pictureBox3->TabStop = false;
			// 
			// buttonAddBurger
			// 
			this->buttonAddBurger->BackColor = System::Drawing::Color::LawnGreen;
			this->buttonAddBurger->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAddBurger->Location = System::Drawing::Point(225, 361);
			this->buttonAddBurger->Name = L"buttonAddBurger";
			this->buttonAddBurger->Size = System::Drawing::Size(90, 26);
			this->buttonAddBurger->TabIndex = 44;
			this->buttonAddBurger->Text = L"Add to Cart\r\n\r\n\r\n";
			this->buttonAddBurger->UseVisualStyleBackColor = false;
			this->buttonAddBurger->Click += gcnew System::EventHandler(this, &MyForm::buttonAddBurger_Click);
			// 
			// buttonAddTacos
			// 
			this->buttonAddTacos->BackColor = System::Drawing::Color::LawnGreen;
			this->buttonAddTacos->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAddTacos->Location = System::Drawing::Point(225, 511);
			this->buttonAddTacos->Name = L"buttonAddTacos";
			this->buttonAddTacos->Size = System::Drawing::Size(90, 26);
			this->buttonAddTacos->TabIndex = 45;
			this->buttonAddTacos->Text = L"Add to Cart\r\n\r\n\r\n";
			this->buttonAddTacos->UseVisualStyleBackColor = false;
			this->buttonAddTacos->Click += gcnew System::EventHandler(this, &MyForm::buttonAddTacos_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(596, 45);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(52, 50);
			this->pictureBox4->TabIndex = 46;
			this->pictureBox4->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->Location = System::Drawing::Point(228, 457);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(69, 20);
			this->label8->TabIndex = 47;
			this->label8->Text = L"Amount:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->Location = System::Drawing::Point(225, 307);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(69, 20);
			this->label9->TabIndex = 48;
			this->label9->Text = L"Amount:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Location = System::Drawing::Point(426, 174);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(45, 13);
			this->label17->TabIndex = 52;
			this->label17->Text = L"10 max*";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Location = System::Drawing::Point(426, 312);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(45, 13);
			this->label18->TabIndex = 53;
			this->label18->Text = L"10 max*";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Location = System::Drawing::Point(426, 464);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(45, 13);
			this->label19->TabIndex = 54;
			this->label19->Text = L"10 max*";
			// 
			// numericKebabAmount
			// 
			this->numericKebabAmount->Location = System::Drawing::Point(300, 169);
			this->numericKebabAmount->Name = L"numericKebabAmount";
			this->numericKebabAmount->Size = System::Drawing::Size(120, 20);
			this->numericKebabAmount->TabIndex = 55;
			this->numericKebabAmount->Maximum = 10;
			// 
			// numericBurgerAmount
			// 
			this->numericBurgerAmount->Location = System::Drawing::Point(300, 310);
			this->numericBurgerAmount->Name = L"numericBurgerAmount";
			this->numericBurgerAmount->Size = System::Drawing::Size(120, 20);
			this->numericBurgerAmount->TabIndex = 56;
			this->numericBurgerAmount->Maximum = 10;
			// 
			// numericTacosAmount
			// 
			this->numericTacosAmount->Location = System::Drawing::Point(300, 457);
			this->numericTacosAmount->Name = L"numericTacosAmount";
			this->numericTacosAmount->Size = System::Drawing::Size(120, 20);
			this->numericTacosAmount->TabIndex = 57;
			this->numericTacosAmount->Maximum = 10;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SandyBrown;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1075, 610);
			this->Controls->Add(this->numericTacosAmount);
			this->Controls->Add(this->numericBurgerAmount);
			this->Controls->Add(this->numericKebabAmount);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->buttonAddTacos);
			this->Controls->Add(this->buttonAddBurger);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textTacosNotes);
			this->Controls->Add(this->textBurgerNotes);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textKebabNotes);
			this->Controls->Add(this->buttonOrder);
			this->Controls->Add(this->buttonRemove);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->listCart);
			this->Controls->Add(this->buttonAddKebab);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericKebabAmount))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericBurgerAmount))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericTacosAmount))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {}


		   void buttonAddKebab_Click(Object^ sender, EventArgs^ e)
		   {
			   // Cek apakah jumlah yang dimasukkan lebih besar dari 0
			   if (numericKebabAmount->Value > 0)
			   {
				   if (cartIndex < cart->Length)
				   {
					   kebabAmount = (int)numericKebabAmount->Value;
					   kebabNotes = textKebabNotes->Text;
					   double kebabTotalPrice = kebabAmount * KebabPrice;

					   cart[cartIndex++] = "Kebab Sosis " + kebabAmount + "x, " + kebabNotes + " - Rp " + kebabTotalPrice.ToString();
					   totalPrice += kebabTotalPrice;
					   UpdateCart();

					   // Reset fields
					   numericKebabAmount->Value = 0;
					   textKebabNotes->Text = "";
				   }
				   else
				   {
					   MessageBox::Show("Keranjang nya penuh, mohon hapus beberapa pesanan terlebih dahulu.", "Keranjang Penuh", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				   }
			   }
			   else
			   {
				   // Menampilkan pesan jika jumlah adalah 0
				   MessageBox::Show("Masukkan angka lebih dari 0.", "Invalid Quantity", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   }
		   }

		   void buttonAddBurger_Click(Object^ sender, EventArgs^ e)
		   {
			   // Cek apakah jumlah yang dimasukkan lebih besar dari 0
			   if (numericBurgerAmount->Value > 0)
			   {
				   if (cartIndex < cart->Length)
				   {
					   burgerAmount = (int)numericBurgerAmount->Value;
					   burgerNotes = textBurgerNotes->Text;
					   double burgerTotalPrice = burgerAmount * BurgerPrice;

					   cart[cartIndex++] = "Burger " + burgerAmount + "x, " + burgerNotes + " - Rp " + burgerTotalPrice.ToString();
					   totalPrice += burgerTotalPrice;
					   UpdateCart();

					   // Reset fields
					   numericBurgerAmount->Value = 0;
					   textBurgerNotes->Text = "";
				   }
				   else
				   {
					   MessageBox::Show("Keranjang nya penuh, mohon hapus beberapa pesanan terlebih dahulu.", "Keranjang Penuh", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				   }
			   }
			   else
			   {
				   // Menampilkan pesan jika jumlah adalah 0
				   MessageBox::Show("Masukkan angka lebih dari 0.", "Invalid Quantity", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   }
		   }


		   void buttonAddTacos_Click(Object^ sender, EventArgs^ e)
		   {
			   // Cek apakah jumlah yang dimasukkan lebih besar dari 0
			   if (numericTacosAmount->Value > 0)
			   {
				   if (cartIndex < cart->Length)
				   {
					   tacosAmount = (int)numericTacosAmount->Value;
					   tacoNotes = textTacosNotes->Text;
					   double tacosTotalPrice = tacosAmount * TacosPrice;

					   cart[cartIndex++] = "Tacos " + tacosAmount + "x, " + tacoNotes + " - Rp " + tacosTotalPrice.ToString();
					   totalPrice += tacosTotalPrice;
					   UpdateCart();

					   // Reset fields
					   numericTacosAmount->Value = 0;
					   textTacosNotes->Text = "";
				   }
				   else
				   {
					   MessageBox::Show("Keranjang nya penuh, mohon hapus beberapa pesanan terlebih dahulu.", "Keranjang Penuh", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				   }
			   }
			   else
			   {
				   // Menampilkan pesan jika jumlah adalah 0
				   MessageBox::Show("Masukkan angka lebih dari 0.", "Invalid Quantity", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   }
		   }

		   void buttonRemove_Click(Object^ sender, EventArgs^ e)
		   {
			   if (cartIndex > 0)
			   {
				   // Ambil item yang akan dihapus
				   String^ removedItem = cart[--cartIndex];

				   // Hapus item dari array
				   cart[cartIndex] = nullptr;

				   // Perbarui total harga dengan menghitung ulang
				   totalPrice = 0;
				   for (int i = 0; i < cartIndex; i++)
				   {
					   totalPrice += ExtractPriceFromItem(cart[i]);
				   }

				   // Perbarui tampilan listCart
				   UpdateCart();
			   }
			   else
			   {
				   MessageBox::Show("Keranjang kosong. Tidak ada yang bisa dihapus.", "Keranjang Kosong", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			   }
		   }

		void buttonOrder_Click(System::Object^ sender, System::EventArgs^ e) {
			// Cek apakah keranjang tidak kosong
			if (cartIndex > 0) {
				// Membuka MyForm1 dan mengirim data
				MyForm1^ myForm1 = gcnew MyForm1(cart, cartIndex, totalPrice);
				this->Hide(); // Menutup form saat ini
				myForm1->ShowDialog();
				Application::Exit(); // Menutup aplikasi setelah dialog selesai
			}
			else {
				MessageBox::Show("Keranjang Kosong, silahkan tambahkan pesanan anda.", "Keranjang Kosong", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}


		   void UpdateCart()
		   {
			   listCart->Items->Clear();  // Membersihkan daftar keranjang
			   for (int i = 0; i < cartIndex; i++)
			   {
				   listCart->Items->Add(cart[i]);  // Menambahkan item ke dalam listCart
			   }

			   // Menambahkan total harga di bawah daftar
			   listCart->Items->Add("Total Harga: Rp " + totalPrice.ToString());
		   }


		   double ExtractPriceFromItem(String^ item)
		   {
			   int pricePos = item->LastIndexOf("Rp ") + 3;
			   if (pricePos < 3) return 0; // Jika format salah, kembalikan 0
			   return Convert::ToDouble(item->Substring(pricePos));
		   }
	};
}


	   


