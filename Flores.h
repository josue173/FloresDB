#pragma once
#include "ConexionDB.h"

namespace FloresDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Flores
	/// </summary>
	public ref class Flores : public System::Windows::Forms::Form
	{
	public:
		Flores(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Flores()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lbID;
	private: System::Windows::Forms::Label^ lbDescripcion;
	private: System::Windows::Forms::Label^ lbExistencia;
	private: System::Windows::Forms::Label^ lbPrecio;
	private: System::Windows::Forms::TextBox^ tbID;
	private: System::Windows::Forms::TextBox^ tbDescripcion;
	private: System::Windows::Forms::TextBox^ tbExistencia;
	private: System::Windows::Forms::TextBox^ tbPrecio;
	private: System::Windows::Forms::Button^ btnGuardar;
	private: System::Windows::Forms::Button^ btnActualizar;
	private: System::Windows::Forms::Button^ btnConsultar;
	private: System::Windows::Forms::ListView^ lvProducto;






	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbID = (gcnew System::Windows::Forms::Label());
			this->lbDescripcion = (gcnew System::Windows::Forms::Label());
			this->lbExistencia = (gcnew System::Windows::Forms::Label());
			this->lbPrecio = (gcnew System::Windows::Forms::Label());
			this->tbID = (gcnew System::Windows::Forms::TextBox());
			this->tbDescripcion = (gcnew System::Windows::Forms::TextBox());
			this->tbExistencia = (gcnew System::Windows::Forms::TextBox());
			this->tbPrecio = (gcnew System::Windows::Forms::TextBox());
			this->btnGuardar = (gcnew System::Windows::Forms::Button());
			this->btnActualizar = (gcnew System::Windows::Forms::Button());
			this->btnConsultar = (gcnew System::Windows::Forms::Button());
			this->lvProducto = (gcnew System::Windows::Forms::ListView());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(205, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Producto";
			this->label1->Click += gcnew System::EventHandler(this, &Flores::label1_Click);
			// 
			// lbID
			// 
			this->lbID->AutoSize = true;
			this->lbID->ForeColor = System::Drawing::SystemColors::Control;
			this->lbID->Location = System::Drawing::Point(50, 83);
			this->lbID->Name = L"lbID";
			this->lbID->Size = System::Drawing::Size(20, 16);
			this->lbID->TabIndex = 1;
			this->lbID->Text = L"ID";
			// 
			// lbDescripcion
			// 
			this->lbDescripcion->AutoSize = true;
			this->lbDescripcion->ForeColor = System::Drawing::SystemColors::Control;
			this->lbDescripcion->Location = System::Drawing::Point(50, 119);
			this->lbDescripcion->Name = L"lbDescripcion";
			this->lbDescripcion->Size = System::Drawing::Size(79, 16);
			this->lbDescripcion->TabIndex = 2;
			this->lbDescripcion->Text = L"Descripcion";
			// 
			// lbExistencia
			// 
			this->lbExistencia->AutoSize = true;
			this->lbExistencia->ForeColor = System::Drawing::SystemColors::Control;
			this->lbExistencia->Location = System::Drawing::Point(50, 166);
			this->lbExistencia->Name = L"lbExistencia";
			this->lbExistencia->Size = System::Drawing::Size(68, 16);
			this->lbExistencia->TabIndex = 3;
			this->lbExistencia->Text = L"Existencia";
			// 
			// lbPrecio
			// 
			this->lbPrecio->AutoSize = true;
			this->lbPrecio->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lbPrecio->Location = System::Drawing::Point(50, 205);
			this->lbPrecio->Name = L"lbPrecio";
			this->lbPrecio->Size = System::Drawing::Size(46, 16);
			this->lbPrecio->TabIndex = 4;
			this->lbPrecio->Text = L"Precio";
			this->lbPrecio->Click += gcnew System::EventHandler(this, &Flores::label2_Click);
			// 
			// tbID
			// 
			this->tbID->Location = System::Drawing::Point(229, 80);
			this->tbID->Name = L"tbID";
			this->tbID->Size = System::Drawing::Size(115, 22);
			this->tbID->TabIndex = 5;
			// 
			// tbDescripcion
			// 
			this->tbDescripcion->Location = System::Drawing::Point(229, 119);
			this->tbDescripcion->Name = L"tbDescripcion";
			this->tbDescripcion->Size = System::Drawing::Size(115, 22);
			this->tbDescripcion->TabIndex = 6;
			// 
			// tbExistencia
			// 
			this->tbExistencia->Location = System::Drawing::Point(229, 158);
			this->tbExistencia->Name = L"tbExistencia";
			this->tbExistencia->Size = System::Drawing::Size(115, 22);
			this->tbExistencia->TabIndex = 7;
			// 
			// tbPrecio
			// 
			this->tbPrecio->Location = System::Drawing::Point(229, 199);
			this->tbPrecio->Name = L"tbPrecio";
			this->tbPrecio->Size = System::Drawing::Size(115, 22);
			this->tbPrecio->TabIndex = 8;
			// 
			// btnGuardar
			// 
			this->btnGuardar->Location = System::Drawing::Point(53, 261);
			this->btnGuardar->Name = L"btnGuardar";
			this->btnGuardar->Size = System::Drawing::Size(103, 45);
			this->btnGuardar->TabIndex = 9;
			this->btnGuardar->Text = L"Guardar";
			this->btnGuardar->UseVisualStyleBackColor = true;
			this->btnGuardar->Click += gcnew System::EventHandler(this, &Flores::btnGuardar_Click);
			// 
			// btnActualizar
			// 
			this->btnActualizar->Location = System::Drawing::Point(176, 261);
			this->btnActualizar->Name = L"btnActualizar";
			this->btnActualizar->Size = System::Drawing::Size(103, 45);
			this->btnActualizar->TabIndex = 10;
			this->btnActualizar->Text = L"Actualizar";
			this->btnActualizar->UseVisualStyleBackColor = true;
			this->btnActualizar->Click += gcnew System::EventHandler(this, &Flores::btnActualizar_Click);
			// 
			// btnConsultar
			// 
			this->btnConsultar->Location = System::Drawing::Point(305, 261);
			this->btnConsultar->Name = L"btnConsultar";
			this->btnConsultar->Size = System::Drawing::Size(103, 45);
			this->btnConsultar->TabIndex = 11;
			this->btnConsultar->Text = L"Consultar";
			this->btnConsultar->UseVisualStyleBackColor = true;
			this->btnConsultar->Click += gcnew System::EventHandler(this, &Flores::btnConsultar_Click);
			// 
			// lvProducto
			// 
			this->lvProducto->HideSelection = false;
			this->lvProducto->Location = System::Drawing::Point(454, 70);
			this->lvProducto->Name = L"lvProducto";
			this->lvProducto->Size = System::Drawing::Size(363, 236);
			this->lvProducto->TabIndex = 12;
			this->lvProducto->UseCompatibleStateImageBehavior = false;
			this->lvProducto->SelectedIndexChanged += gcnew System::EventHandler(this, &Flores::lvProducto_SelectedIndexChanged);
			// 
			// Flores
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightCoral;
			this->ClientSize = System::Drawing::Size(898, 362);
			this->Controls->Add(this->lvProducto);
			this->Controls->Add(this->btnConsultar);
			this->Controls->Add(this->btnActualizar);
			this->Controls->Add(this->btnGuardar);
			this->Controls->Add(this->tbPrecio);
			this->Controls->Add(this->tbExistencia);
			this->Controls->Add(this->tbDescripcion);
			this->Controls->Add(this->tbID);
			this->Controls->Add(this->lbPrecio);
			this->Controls->Add(this->lbExistencia);
			this->Controls->Add(this->lbDescripcion);
			this->Controls->Add(this->lbID);
			this->Controls->Add(this->label1);
			this->Name = L"Flores";
			this->Text = L"Flores";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnGuardar_Click(System::Object^ sender, System::EventArgs^ e) {
		Conexion cldatos;
		cldatos.insertar(
			Convert::ToInt64(tbID->Text),
			tbDescripcion->Text,
			Convert::ToInt64(tbExistencia->Text),
			Convert::ToInt64(tbPrecio->Text)
		);
		MessageBox::Show("Registro guardado exitosamente");
		tbID->Text = "";
		tbDescripcion->Text = "";
		tbExistencia->Text = "";
		tbPrecio->Text = "";
	}
	private: System::Void btnActualizar_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void btnConsultar_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlConnection^ cn;
		SqlConnectionStringBuilder^ st;
		String^ id;
		String^ desc1; 
		String^ existencia; 
		String^ precio;
		st = gcnew SqlConnectionStringBuilder();
		st->DataSource = "LAPTOP-C78Q6N2B\\SQLEXPRESS20";    
		st->InitialCatalog = "flores";
		st->IntegratedSecurity = true;
		cn = gcnew SqlConnection(Convert::ToString(st));
		ListView^ Bio = gcnew ListView();
		String^ sentencia = "SELECT * FROM PRODUCTO";
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		cn->Open();
		SqlDataReader^ reader = ejecutar->ExecuteReader();
		this->lvProducto->Refresh();
		while (reader->Read()) {
			id = (reader["id"]->ToString());
			desc1 = (reader["desc1"]->ToString());
			existencia = (reader["existencia"]->ToString());
			String^ srtNew1 = gcnew String(id);
			String^ srtNew2 = gcnew String(desc1);
			String^ srtNew3 = gcnew String(existencia);
			String^ srtNew4 = gcnew String(precio);
			ListViewItem^ listView1 = gcnew Windows::Forms::ListViewItem(srtNew1);

		}
	}
private: System::Void lvProducto_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
