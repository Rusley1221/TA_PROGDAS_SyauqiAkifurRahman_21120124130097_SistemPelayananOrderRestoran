#pragma once

namespace ToDoListQueueApp {

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
            //
            // Inisialisasi array dan variabel tambahan
            //
            tasks = gcnew array<String^>(10);
            taskCount = 0;
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
        // Deklarasi komponen GUI
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::TextBox^ textBox1;
        System::Windows::Forms::Button^ button1;
        System::Windows::Forms::Button^ button2;
        System::Windows::Forms::ListBox^ listBox1;

        // Deklarasi array dan counter
        array<String^>^ tasks; // Array untuk menyimpan tugas
        int taskCount;         // Counter untuk jumlah tugas dalam array

        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->listBox1 = (gcnew System::Windows::Forms::ListBox());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label1->Location = System::Drawing::Point(52, 9);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(273, 60);
            this->label1->TabIndex = 0;
            this->label1->Text = L"To-Do List";
            // 
            // textBox1
            // 
            this->textBox1->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
            this->textBox1->ForeColor = System::Drawing::SystemColors::Info;
            this->textBox1->Location = System::Drawing::Point(62, 90);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(406, 20);
            this->textBox1->TabIndex = 1;
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(485, 87);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(75, 23);
            this->button1->TabIndex = 2;
            this->button1->Text = L"Masukkan";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(352, 452);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(116, 23);
            this->button2->TabIndex = 3;
            this->button2->Text = L"Hapus Tugas";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // listBox1
            // 
            this->listBox1->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
            this->listBox1->ForeColor = System::Drawing::SystemColors::Info;
            this->listBox1->FormattingEnabled = true;
            this->listBox1->Location = System::Drawing::Point(62, 143);
            this->listBox1->Name = L"listBox1";
            this->listBox1->Size = System::Drawing::Size(406, 303);
            this->listBox1->TabIndex = 4;
            // 
            // MyForm
            // 
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->ClientSize = System::Drawing::Size(732, 534);
            this->Controls->Add(this->listBox1);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->label1);
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private:
        // Event untuk button "Masukkan"
        System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
            if (taskCount < 10 && !String::IsNullOrWhiteSpace(textBox1->Text)) {
                tasks[taskCount++] = textBox1->Text;
                listBox1->Items->Add(textBox1->Text);
                textBox1->Clear();
            }
            else {
                MessageBox::Show(L"Daftar penuh atau teks kosong!", L"Kesalahan", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }

        // Event untuk button "Hapus Tugas"
        System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
            if (taskCount > 0) {
                listBox1->Items->RemoveAt(--taskCount);
                tasks[taskCount] = nullptr;
            }
            else {
                MessageBox::Show(L"Tidak ada tugas untuk dihapus!", L"Kesalahan", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
    };
}



