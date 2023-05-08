#pragma once
// #include "Conexion.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Data;
using namespace Data::SqlClient;

ref class Conexion {
    SqlConnection^ cn; // Utilizar sentencias SQL
    SqlConnectionStringBuilder^ st; // Indicar la DB para la conexion

protected:
    void Conectar() {
        st = gcnew SqlConnectionStringBuilder(); // Recibir las sentencias para la conexion
        st->DataSource = "LAPTOP-C78Q6N2B\\SQLEXPRESS20"; // Nombre del dipositivo y gestor de DB
        // st->DataSource = "localhost\SQLEXPRESS22";        
        st->InitialCatalog = "flores"; // Nombre de la DB
        st->IntegratedSecurity = true; // Seguridad de datos "true"
        cn = gcnew SqlConnection(Convert::ToString(st)); // Parsear a String todo lo de "st"
    }

public:
    void insertar(int id, String^ desc1, int existencia, float precio) {
        Conectar();
        String^ sentencia = "Insert into PRODUCTO values(@id, @desc1, @existencia, @precio)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@id", id);
        ejecutar->Parameters->AddWithValue("@desc1", desc1);
        ejecutar->Parameters->AddWithValue("@existencia", existencia);
        ejecutar->Parameters->AddWithValue("@precio", precio);
        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }

    void actualizar(int id, String^ desc1, int existencia, float precio) {
        Conectar();
        String^ sentencia = "UPDATE PRODUCTO SET @desc1 = desc1, @existencia = existencia, @precio = precio WHERE id=@id";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@desc1", desc1);
        ejecutar->Parameters->AddWithValue("@existencia", existencia);
        ejecutar->Parameters->AddWithValue("@precio", precio);
        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }
};