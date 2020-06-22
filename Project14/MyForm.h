#pragma once

#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

/*char 
bykv[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
int cif[26] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25 };
int rotor1[26] = { 4,10,12,5,11,6,3,16,21,25,13,19,14,22,24,7,23,20,18,15,0,8,1,17,2,9 };
int rotor2[26] = { 0,9,3,10,18,8,17,20,23,1,11,7,22,19,12,2,16,6,25,13,15,24,5,21,14,4 };
int rotor3[26] = { 1,3,5,7,9,11,2,15,17,19,23,21,25,13,24,4,8,22,6,0,10,12,20,18,16,14 };
int refl[26] = { 24,17,20,7,16,18,11,3,15,23,13,6,14,10,12,8,4,1,5,25,2,22,21,9,0,19 };
//char key[] = {'@','@','@'};
int convtext[200]; int shif[200]; int r1, r2, r3; int spin1 = 0; int spin2 = 0; int spin3 = 0; char shifr[200]; int temp, temp1, temp2; int ans; char ennd[200];
char ttem;
char text[200]="\0";
char kodd(int sim, int r1, int r2, int r3) {
	int simr1, simr2, simr3, simref, symb;
	simr1 = r1 + sim;
	if (simr1 > 26)simr1 = simr1 - 26;
	for (int i = 0; i != 26; i++)
	{
		if (simr1 == cif[i])temp = rotor1[i];
	}
	simr1 = temp;
	temp = r2 - r1; if (temp < 0)temp = temp * (-1) - 1;
	simr2 = simr1 + temp;
	if (simr2 > 26)simr2 = simr2 - 26;
	for (int i = 0; i != 30; i++)
	{
		if (simr2 == cif[i])temp = rotor2[i];
	}
	simr2 = temp;
	temp = r3 - r2; if (temp < 0)temp = temp * (-1) - 1;
	simr3 = simr2 + temp;
	if (simr3 > 26)simr3 = simr3 - 26;
	for (int i = 0; i != 30; i++)
	{
		if (simr3 == cif[i])temp = rotor3[i];
	}
	simr3 = temp;
	simref = simr3 - r3;
	if (simref < 0)simref = simref * (-1) - 1;
	{if (simref == 0)temp2 = 24;
	if (simref == 1)temp2 = 17;
	if (simref == 2)temp2 = 20;
	if (simref == 3)temp2 = 7;
	if (simref == 4)temp2 = 16;
	if (simref == 5)temp2 = 18;
	if (simref == 6)temp2 = 11;
	if (simref == 7)temp2 = 3;
	if (simref == 8)temp2 = 15;
	if (simref == 9)temp2 = 23;
	if (simref == 10)temp2 = 13;
	if (simref == 11)temp2 = 6;
	if (simref == 12)temp2 = 14;
	if (simref == 13)temp2 = 10;
	if (simref == 14)temp2 = 12;
	if (simref == 15)temp2 = 8;
	if (simref == 16)temp2 = 4;
	if (simref == 17)temp2 = 1;
	if (simref == 18)temp2 = 5;
	if (simref == 19)temp2 = 25;
	if (simref == 20)temp2 = 2;
	if (simref == 21)temp2 = 22;
	if (simref == 22)temp2 = 21;
	if (simref == 23)temp2 = 9;
	if (simref == 24)temp2 = 0;
	if (simref == 25)temp2 = 19;
	}
	simref = temp2;
	simr3 = simref + r3; if (simr3 > 26)simr3 = simr3 - 26;
	for (int i = 0; i != 26; i++) {
		if (simr3 = rotor3[i])temp = cif[i];
	}
	simr3 = temp;
	temp = r3 - r2; if (temp < 0)temp = temp * (-1) - 1;
	simr2 = simr3 - temp;
	for (int i = 0; i != 26; i++) {
		if (simr2 = rotor2[i])temp = cif[i];
	}
	simr2 = temp;
	temp = r2 - r1; if (temp < 0)temp = temp * (-1) - 1;
	simr1 = simr2 - temp;
	for (int i = 0; i != 26; i++) {
		if (simr1 = rotor1[i])temp = cif[i];
	}
	simr1 = temp;
	symb = simr1 - r1; if (symb < 0)symb = symb * (-1) - 1;
	return symb;
}
*/
namespace Project14 {

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
		{InitializeComponent();}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;


	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 71);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(110, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 127);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(503, 20);
			this->textBox2->TabIndex = 0;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(12, 242);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(110, 20);
			this->textBox3->TabIndex = 0;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(12, 306);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(624, 20);
			this->textBox4->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(9, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(464, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Введите ключ ,либо поставьте 000 и программа его сгенерирует.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(14, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(618, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Введите ваш текст,(Прим. в данный момент поддерживается,только английский язык)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(14, 221);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 18);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Ключ:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(14, 285);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(168, 18);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Зашифрованный текст";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 168);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(317, 50);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Зашифровать(нажать)";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(648, 376);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Enigma";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		/*public: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
		{
			

			for (int i = 0; i != 3; i++) {
				key[i] - System::Convert::ToChar(textBox1->Text);
			}
			//запись ключа


		
			int prov = 1;
			while (prov = 1) 
			{
				for (int i = 0; i != 3; i++) 
				{
					if (key[i] != '@') 
					{
						prov = 0;
					}
					else
					{
						MessageBox::Show("Неправильно введен ключ", "Ошибка");
					}
				}
			}
			//проверка ключа на символы




			if (key[0] == 0 && key[1] == 0 && key[2] == 0) 
			{
				for (int i = 0; i != 3; i++) {
					key[i] = i;
				}
			}
			//проверка ключа на 0





			for (int i = 0; i != 199; i++) {
				int ttem;
				ttem = System::Convert::ToChar(textBox2->Text);
				while (ttem != 0)
				{
					text[i] = ttem;
				}
				if (ttem == 0)break;
			}  
			// запись текста в массив





			for (int i = 1; i != 199; i++) {
				if (text[i] == 'a')convtext[i] = 0;
				if (text[i] == 'b')convtext[i] = 1;
				if (text[i] == 'c')convtext[i] = 2;
				if (text[i] == 'd')convtext[i] = 3;
				if (text[i] == 'e')convtext[i] = 4;
				if (text[i] == 'f')convtext[i] = 5;
				if (text[i] == 'g')convtext[i] = 6;
				if (text[i] == 'h')convtext[i] = 7;
				if (text[i] == 'i')convtext[i] = 8;
				if (text[i] == 'j')convtext[i] = 9;
				if (text[i] == 'k')convtext[i] = 10;
				if (text[i] == 'l')convtext[i] = 11;
				if (text[i] == 'm')convtext[i] = 12;
				if (text[i] == 'n')convtext[i] = 13;
				if (text[i] == 'o')convtext[i] = 14;
				if (text[i] == 'p')convtext[i] = 15;
				if (text[i] == 'q')convtext[i] = 16;
				if (text[i] == 'r')convtext[i] = 17;
				if (text[i] == 's')convtext[i] = 18;
				if (text[i] == 't')convtext[i] = 19;
				if (text[i] == 'u')convtext[i] = 20;
				if (text[i] == 'v')convtext[i] = 21;
				if (text[i] == 'w')convtext[i] = 22;
				if (text[i] == 'x')convtext[i] = 23;
				if (text[i] == 'y')convtext[i] = 24;
				if (text[i] == 'z')convtext[i] = 25;
				if (text[i] == '\0')break;
			}
			//перевод текста в цифры
		



			r3 = key[0]; r2 = key[1]; r1 = key[2];
			for (int i = 0; ; i++) {
				{
					r1++;
					if (text[i] == ' ')continue;
					if (r1 == 26) { r1 = 0; spin1 = 1; }
					if (spin1 == 1 && r1 == key[0]) { r2++; spin1 = 0; }
					if (r2 == 26) { r2 = 0; spin2 = 1; }
					if (spin2 == 1 && r2 == key[1]) { r3++; spin2 = 0; }
					if (r3 == 26) r3 = 0; 
				}
				//прокрутка ротора
				if (text[i] == '\0')break;
				shifr[i] = kodd(convtext[i],r1,r2,r3);
			}
			//обработка текста


			for (int i = 0; text[i] != '\0'; i++) {
				textBox4->Text += Convert::ToString(shifr[i]);
			}
			//вывод текста


			for (int i = 0; i != 3; i++) {
				textBox3->Text += Convert::ToString(key[i]);
			}
			//вывод ключа в ячейку
		}*/
#pragma endregion
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	char bykv[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	int cif[26] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25 };
	int rotor1[26] = { 4,10,12,5,11,6,3,16,21,25,13,19,14,22,24,7,23,20,18,15,0,8,1,17,2,9 };
	int rotor2[26] = { 0,9,3,10,18,8,17,20,23,1,11,7,22,19,12,2,16,6,25,13,15,24,5,21,14,4 };
	int rotor3[26] = { 1,3,5,7,9,11,2,15,17,19,23,21,25,13,24,4,8,22,6,0,10,12,20,18,16,14 };
	int refl[26] = { 24,17,20,7,16,18,11,3,15,23,13,6,14,10,12,8,4,1,5,25,2,22,21,9,0,19 };
	//char key[] = {'@','@','@'};
	int convtext[200]; int shif[200]; int r1, r2, r3; int spin1 = 0; int spin2 = 0; int spin3 = 0; char shifr[200]; int temp, temp1, temp2; int ans; char ennd[200];
	char ttem;
	char text[200] = "\0";
	int dddd = 5;
	textBox3->Text = Convert::ToString(dddd);
	int key[3];

	for (int i = 0; i != 3; i++) {
		key[i] = System::Convert::ToChar(textBox1->Text);
	}
	//запись ключа



	int prov = 1;
	while (prov = 1)
	{
		for (int i = 0; i != 3; i++)
		{
			if (key[i] != '@')
			{
				prov = 0;
			}
			else
			{
				MessageBox::Show("Неправильно введен ключ", "Ошибка");
			}
		}
	}
	//проверка ключа на символы




	if (key[0] == 0 && key[1] == 0 && key[2] == 0)
	{
		for (int i = 0; i != 3; i++) {
			key[i] = i;
		}
	}
	//проверка ключа на 0





	for (int i = 0; i != 199; i++) {
		int ttem;
		ttem = System::Convert::ToChar(textBox2->Text);
		while (ttem != 0)
		{
			text[i] = ttem;
		}
		if (ttem == 0)break;
	}
	// запись текста в массив





	for (int i = 1; i != 199; i++) {
		if (text[i] == 'a')convtext[i] = 0;
		if (text[i] == 'b')convtext[i] = 1;
		if (text[i] == 'c')convtext[i] = 2;
		if (text[i] == 'd')convtext[i] = 3;
		if (text[i] == 'e')convtext[i] = 4;
		if (text[i] == 'f')convtext[i] = 5;
		if (text[i] == 'g')convtext[i] = 6;
		if (text[i] == 'h')convtext[i] = 7;
		if (text[i] == 'i')convtext[i] = 8;
		if (text[i] == 'j')convtext[i] = 9;
		if (text[i] == 'k')convtext[i] = 10;
		if (text[i] == 'l')convtext[i] = 11;
		if (text[i] == 'm')convtext[i] = 12;
		if (text[i] == 'n')convtext[i] = 13;
		if (text[i] == 'o')convtext[i] = 14;
		if (text[i] == 'p')convtext[i] = 15;
		if (text[i] == 'q')convtext[i] = 16;
		if (text[i] == 'r')convtext[i] = 17;
		if (text[i] == 's')convtext[i] = 18;
		if (text[i] == 't')convtext[i] = 19;
		if (text[i] == 'u')convtext[i] = 20;
		if (text[i] == 'v')convtext[i] = 21;
		if (text[i] == 'w')convtext[i] = 22;
		if (text[i] == 'x')convtext[i] = 23;
		if (text[i] == 'y')convtext[i] = 24;
		if (text[i] == 'z')convtext[i] = 25;
		if (text[i] == '\0')break;
	}
	//перевод текста в цифры




	r3 = key[0]; r2 = key[1]; r1 = key[2];
	for (int i = 0; ; i++) {
		{
			r1++;
			if (text[i] == ' ')continue;
			if (r1 == 26) { r1 = 0; spin1 = 1; }
			if (spin1 == 1 && r1 == key[0]) { r2++; spin1 = 0; }
			if (r2 == 26) { r2 = 0; spin2 = 1; }
			if (spin2 == 1 && r2 == key[1]) { r3++; spin2 = 0; }
			if (r3 == 26) r3 = 0;
		}
		//прокрутка ротора
		if (text[i] == '\0')break;



		{int sim = convtext[i];
		int simr1, simr2, simr3, simref, symb;
		simr1 = r1 + sim;
		if (simr1 > 26)simr1 = simr1 - 26;
		for (int i = 0; i != 26; i++)
		{
			if (simr1 == cif[i])temp = rotor1[i];
		}
		simr1 = temp;
		temp = r2 - r1; if (temp < 0)temp = temp * (-1) - 1;
		simr2 = simr1 + temp;
		if (simr2 > 26)simr2 = simr2 - 26;
		for (int i = 0; i != 30; i++)
		{
			if (simr2 == cif[i])temp = rotor2[i];
		}
		simr2 = temp;
		temp = r3 - r2; if (temp < 0)temp = temp * (-1) - 1;
		simr3 = simr2 + temp;
		if (simr3 > 26)simr3 = simr3 - 26;
		for (int i = 0; i != 30; i++)
		{
			if (simr3 == cif[i])temp = rotor3[i];
		}
		simr3 = temp;
		simref = simr3 - r3;
		if (simref < 0)simref = simref * (-1) - 1;
		{if (simref == 0)temp2 = 24;
		if (simref == 1)temp2 = 17;
		if (simref == 2)temp2 = 20;
		if (simref == 3)temp2 = 7;
		if (simref == 4)temp2 = 16;
		if (simref == 5)temp2 = 18;
		if (simref == 6)temp2 = 11;
		if (simref == 7)temp2 = 3;
		if (simref == 8)temp2 = 15;
		if (simref == 9)temp2 = 23;
		if (simref == 10)temp2 = 13;
		if (simref == 11)temp2 = 6;
		if (simref == 12)temp2 = 14;
		if (simref == 13)temp2 = 10;
		if (simref == 14)temp2 = 12;
		if (simref == 15)temp2 = 8;
		if (simref == 16)temp2 = 4;
		if (simref == 17)temp2 = 1;
		if (simref == 18)temp2 = 5;
		if (simref == 19)temp2 = 25;
		if (simref == 20)temp2 = 2;
		if (simref == 21)temp2 = 22;
		if (simref == 22)temp2 = 21;
		if (simref == 23)temp2 = 9;
		if (simref == 24)temp2 = 0;
		if (simref == 25)temp2 = 19;
		}
		simref = temp2;
		simr3 = simref + r3; if (simr3 > 26)simr3 = simr3 - 26;
		for (int i = 0; i != 26; i++) {
			if (simr3 = rotor3[i])temp = cif[i];
		}
		simr3 = temp;
		temp = r3 - r2; if (temp < 0)temp = temp * (-1) - 1;
		simr2 = simr3 - temp;
		for (int i = 0; i != 26; i++) {
			if (simr2 = rotor2[i])temp = cif[i];
		}
		simr2 = temp;
		temp = r2 - r1; if (temp < 0)temp = temp * (-1) - 1;
		simr1 = simr2 - temp;
		for (int i = 0; i != 26; i++) {
			if (simr1 = rotor1[i])temp = cif[i];
		}
		simr1 = temp;
		symb = simr1 - r1; if (symb < 0)symb = symb * (-1) - 1;
		shifr[i] = symb;
		}
	}
	//обработка текста


	for (int i = 0; text[i] != '\0'; i++) {
		textBox4->Text = Convert::ToString(shifr[i]);
	}
	//вывод текста

	for (int i = 0; i != 3; i++) {
		textBox3->Text = Convert::ToString(key[i]);
	}

	//вывод ключа в ячейку
}

	};

}