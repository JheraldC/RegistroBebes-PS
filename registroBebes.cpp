#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

// Estructura para representar la información del bebe
struct Bebe
{
  string fechaNacimiento;
  string lugarOcurrenciaDep;
  string lugarOcurrenciaProv;
  string lugarOcurrenciaDist;
  string sexo;
  string nombreBebe;
  string primerApellidoBebe;
  string segundoApellidoBebe;
  string nombrePadre;
  string primerApellidoPadre;
  string segundoApellidoPadre;
  string tipoDocumentoPadre;
  string numeroDocumentoPadre;
  string nacionalidadPadre;
  string nombreMadre;
  string primerApellidoMadre;
  string segundoApellidoMadre;
  string tipoDocumentoMadre;
  string numeroDocumentoMadre;
  string nacionalidadMadre;
  string fechaRegistro;
  string oficinaRegistralDep;
  string oficinaRegistralProv;
  string oficinaRegistralDist;
};

// Función para agregar un nuevo registro de bebé
void agregarRegistroBebe()
{
  Bebe bebe;

  cout << "Fecha de Nacimiento (DD/MM/AAAA): ";
  cin >> bebe.fechaNacimiento;

  cout << "Lugar de Ocurrencia" << endl;
  cout << "Departamento: ";
  cin >> bebe.lugarOcurrenciaDep;
  cout << "Provincia: ";
  cin >> bebe.lugarOcurrenciaProv;
  cout << "Distrito: ";
  cin >> bebe.lugarOcurrenciaDist;

  cout << "Sexo (Masculino/Femenino): ";
  cin >> bebe.sexo;

  cout << "Nombre del Bebé: ";
  cin >> bebe.nombreBebe;

  cout << "Primer Apellido del Bebé: ";
  cin >> bebe.primerApellidoBebe;

  cout << "Segundo Apellido del Bebé: ";
  cin >> bebe.segundoApellidoBebe;

  cout << "Nombre del Padre: ";
  cin >> bebe.nombrePadre;

  cout << "Primer Apellido del Padre: ";
  cin >> bebe.primerApellidoPadre;

  cout << "Segundo Apellido del Padre: ";
  cin >> bebe.segundoApellidoPadre;

  cout << "Tipo de Documento del Padre (DNI/CE/OTROS): ";
  cin >> bebe.tipoDocumentoPadre;

  cout << "Número de Documento del Padre: ";
  cin >> bebe.numeroDocumentoPadre;

  cout << "Nacionalidad del Padre (Peruana/Extranjero): ";
  cin >> bebe.nacionalidadPadre;

  cout << "Nombre de la Madre: ";
  cin >> bebe.nombreMadre;

  cout << "Primer Apellido de la Madre: ";
  cin >> bebe.primerApellidoMadre;

  cout << "Segundo Apellido de la Madre: ";
  cin >> bebe.segundoApellidoMadre;

  cout << "Tipo de Documento de la Madre (DNI/CE/OTROS): ";
  cin >> bebe.tipoDocumentoMadre;

  cout << "Número de Documento de la Madre: ";
  cin >> bebe.numeroDocumentoMadre;

  cout << "Nacionalidad de la Madre (Peruana/Extranjero): ";
  cin >> bebe.nacionalidadMadre;

  cout << "Fecha de Registro (DD/MM/AAAA): ";
  cin >> bebe.fechaRegistro;

  cout << "Oficina Registral" << endl;
  cout << "Departamento: ";
  cin >> bebe.oficinaRegistralDep;
  cout << "Provincia: ";
  cin >> bebe.oficinaRegistralProv;
  cout << "Distrito: ";
  cin >> bebe.oficinaRegistralDist;

  // Abrir el archivo en modo "app" (adjuntar) para agregar el nuevo bebe al final del archivo
  ofstream archivo("registros_bebes.txt", ios::app);

  // Verificar si el archivo se abrió correctamente
  if (archivo.is_open())
  {
    // Escribir los datos del bebe en el archivo
    archivo << bebe.fechaNacimiento << "," << bebe.lugarOcurrenciaDep << "," << bebe.lugarOcurrenciaProv << "," << bebe.lugarOcurrenciaDist <<
            "," << bebe.sexo << "," << bebe.nombreBebe << "," << bebe.primerApellidoBebe << "," << bebe.segundoApellidoBebe <<
            "," << bebe.nombrePadre << "," << bebe.primerApellidoPadre << "," << bebe.segundoApellidoPadre << "," << bebe.tipoDocumentoPadre <<
            "," << bebe.numeroDocumentoPadre << "," << bebe.nacionalidadPadre << "," << bebe.nombreMadre << "," << bebe.primerApellidoMadre <<
            "," << bebe.segundoApellidoMadre << "," << bebe.tipoDocumentoMadre << "," << bebe.numeroDocumentoMadre << "," << bebe.nacionalidadMadre <<
            "," << bebe.fechaRegistro << "," << bebe.oficinaRegistralDep << "," << bebe.oficinaRegistralProv << "," << bebe.oficinaRegistralDist << "\n";

    // Cerrar el archivo
    archivo.close();

    cout << "!El registro del bebe se ha agregado correctamente y se ha guardado en el archivo!" << endl;
  }
  else
  {
    // Mostrar un mensaje de error si no se pudo abrir el archivo
    cout << "Error al abrir el archivo para guardar el registro del bebe." << endl;
  }
}

// Función para mostrar los detalles de un registro de bebe
void mostrarRegistroBebe(const Bebe & bebe)
{
  cout << "Fecha de Nacimiento: " << bebe.fechaNacimiento << endl;
  cout << "Lugar de Ocurrencia: " << bebe.lugarOcurrenciaDep << ", " <<
       bebe.lugarOcurrenciaProv << ", " << bebe.lugarOcurrenciaDist << endl;
  cout << "Sexo: " << bebe.sexo << endl;
  cout << "Nombre del Bebé: " << bebe.nombreBebe << endl;
  cout << "Primer Apellido del Bebé: " << bebe.primerApellidoBebe << endl;
  cout << "Segundo Apellido del Bebé: " << bebe.segundoApellidoBebe << endl;
  cout << "Nombre del Padre: " << bebe.nombrePadre << endl;
  cout << "Primer Apellido del Padre: " << bebe.primerApellidoPadre << endl;
  cout << "Segundo Apellido del Padre: " << bebe.segundoApellidoPadre << endl;
  cout << "Tipo de Documento del Padre: " << bebe.tipoDocumentoPadre << endl;
  cout << "Número de Documento del Padre: " << bebe.numeroDocumentoPadre << endl;
  cout << "Nacionalidad del Padre: " << bebe.nacionalidadPadre << endl;
  cout << "Nombre de la Madre: " << bebe.nombreMadre << endl;
  cout << "Primer Apellido de la Madre: " << bebe.primerApellidoMadre << endl;
  cout << "Segundo Apellido de la Madre: " << bebe.segundoApellidoMadre << endl;
  cout << "Tipo de Documento de la Madre: " << bebe.tipoDocumentoMadre << endl;
  cout << "Número de Documento de la Madre: " << bebe.numeroDocumentoMadre << endl;
  cout << "Nacionalidad de la Madre: " << bebe.nacionalidadMadre << endl;
  cout << "Fecha de Registro: " << bebe.fechaRegistro << endl;
  cout << "Oficina Registral: " << bebe.oficinaRegistralDep << ", " <<
       bebe.oficinaRegistralProv << ", " << bebe.oficinaRegistralDist << endl;
}

// Función para buscar un registro de bebe por número de documento del padre
void buscarRegistroBebePorDocumento()
{
  string numeroDocumentoPadre2;
  cout << "Ingrese el número de documento del padre para buscar el registro: ";
  cin.ignore();
  getline(cin, numeroDocumentoPadre2);

  ifstream archivo("registros_bebes.txt");
  if (archivo.is_open())
  {
    string linea;
    bool encontrado = false;

    while (getline(archivo, linea))
    {
      istringstream iss(linea);

      // Extraer los valores de los campos del registro
      string nombreBebe, primerApellidoBebe, segundoApellidoBebe;
      string nombrePadre, primerApellidoPadre, segundoApellidoPadre;
      string nombreMadre, primerApellidoMadre, segundoApellidoMadre;
      string tipoDocumentoPadre, numeroDocumentoPadre, nacionalidadPadre;
      string tipoDocumentoMadre, numeroDocumentoMadre, nacionalidadMadre;
      string fechaNacimiento, lugarOcurrenciaDep, lugarOcurrenciaProv, lugarOcurrenciaDist;
      string sexo, fechaRegistro, oficinaRegistralDep, oficinaRegistralProv, oficinaRegistralDist;

      getline(iss, fechaNacimiento, ',');
      getline(iss, lugarOcurrenciaDep, ',');
      getline(iss, lugarOcurrenciaProv, ',');
      getline(iss, lugarOcurrenciaDist, ',');
      getline(iss, sexo, ',');
      getline(iss, nombreBebe, ',');
      getline(iss, primerApellidoBebe, ',');
      getline(iss, segundoApellidoBebe, ',');
      getline(iss, nombrePadre, ',');
      getline(iss, primerApellidoPadre, ',');
      getline(iss, segundoApellidoPadre, ',');
      getline(iss, tipoDocumentoPadre, ',');
      getline(iss, numeroDocumentoPadre, ',');
      getline(iss, nacionalidadPadre, ',');
      getline(iss, nombreMadre, ',');
      getline(iss, primerApellidoMadre, ',');
      getline(iss, segundoApellidoMadre, ',');
      getline(iss, tipoDocumentoMadre, ',');
      getline(iss, numeroDocumentoMadre, ',');
      getline(iss, nacionalidadMadre, ',');
      getline(iss, fechaRegistro, ',');
      getline(iss, oficinaRegistralDep, ',');
      getline(iss, oficinaRegistralProv, ',');
      getline(iss, oficinaRegistralDist, ',');

      // Comprobar si el número de documento del padre coincide
      if (numeroDocumentoPadre2 == numeroDocumentoPadre)
      {
        cout << "Registro encontrado:\n";
        cout << "Nombre del bebe: " << nombreBebe << " " << primerApellidoBebe << " " << segundoApellidoBebe << endl;
        cout << "Nombre del padre: " << nombrePadre << " " << primerApellidoPadre << " " << segundoApellidoPadre << endl;
        cout << "Nombre de la madre: " << nombreMadre << " " << primerApellidoMadre << " " << segundoApellidoMadre << endl;
        encontrado = true;
        break;
      }
    }

    archivo.close();

    if (!encontrado)
    {
      cout << "No se encontró ningún registro con el número de documento del padre proporcionado." << endl;
    }
  }
  else
  {
    cout << "Error al abrir el archivo de registros." << endl;
  }

}

// Función para editar un registro de bebe existente
void editarRegistroBebe()
{
  string numeroDocumentoPadre;
  cout << "Ingrese el número de documento del padre para buscar el registro a editar: ";
  cin >> numeroDocumentoPadre;

  ifstream archivo("registros_bebes.txt");
  if (archivo.is_open())
  {
    ofstream archivoTemp("temp.txt"); // Archivo temporal para escribir los registros actualizados
    string linea;
    bool encontrado = false;

    while (getline(archivo, linea))
    {
      // Crear un stringstream para leer los valores de cada campo de la línea
      istringstream iss(linea);

      // Extraer los valores de los campos del registro
      Bebe bebe;
      getline(iss, bebe.fechaNacimiento, ',');
      getline(iss, bebe.lugarOcurrenciaDep, ',');
      getline(iss, bebe.lugarOcurrenciaProv, ',');
      getline(iss, bebe.lugarOcurrenciaDist, ',');
      getline(iss, bebe.sexo, ',');
      getline(iss, bebe.nombreBebe, ',');
      getline(iss, bebe.primerApellidoBebe, ',');
      getline(iss, bebe.segundoApellidoBebe, ',');
      getline(iss, bebe.nombrePadre, ',');
      getline(iss, bebe.primerApellidoPadre, ',');
      getline(iss, bebe.segundoApellidoPadre, ',');
      getline(iss, bebe.tipoDocumentoPadre, ',');
      getline(iss, bebe.numeroDocumentoPadre, ',');
      getline(iss, bebe.nacionalidadPadre, ',');
      getline(iss, bebe.nombreMadre, ',');
      getline(iss, bebe.primerApellidoMadre, ',');
      getline(iss, bebe.segundoApellidoMadre, ',');
      getline(iss, bebe.tipoDocumentoMadre, ',');
      getline(iss, bebe.numeroDocumentoMadre, ',');
      getline(iss, bebe.nacionalidadMadre, ',');
      getline(iss, bebe.fechaRegistro, ',');
      getline(iss, bebe.oficinaRegistralDep, ',');
      getline(iss, bebe.oficinaRegistralProv, ',');
      getline(iss, bebe.oficinaRegistralDist, ',');

      // Comprobar si el número de documento del padre coincide
      if (bebe.numeroDocumentoPadre == numeroDocumentoPadre)
      {
        cout << "Registro encontrado:\n" << linea << endl;
        encontrado = true;

        // Leer los nuevos valores desde el usuario y actualizar el registro
        cout << "Fecha de Nacimiento (Actual: " << bebe.fechaNacimiento << "): ";
        cin >> bebe.fechaNacimiento;

        cout << "Lugar de Ocurrencia" << endl;
        cout << "Departamento (Actual: " << bebe.lugarOcurrenciaDep << "): ";
        cin >> bebe.lugarOcurrenciaDep;
        cout << "Provincia (Actual: " << bebe.lugarOcurrenciaProv << "): ";
        cin >> bebe.lugarOcurrenciaProv;
        cout << "Distrito (Actual: " << bebe.lugarOcurrenciaDist << "): ";
        cin >> bebe.lugarOcurrenciaDist;

        // Resto del código para ingresar los datos del bebé...
        // Puedes seguir el mismo código utilizado en la función agregarRegistroBebe()

        // Escribir la línea actualizada en el archivo temporal
        archivoTemp << bebe.fechaNacimiento << "," << bebe.lugarOcurrenciaDep << "," << bebe.lugarOcurrenciaProv << "," << bebe.lugarOcurrenciaDist
                    << "," << bebe.sexo << "," << bebe.nombreBebe << "," << bebe.primerApellidoBebe << "," << bebe.segundoApellidoBebe
                    << "," << bebe.nombrePadre << "," << bebe.primerApellidoPadre << "," << bebe.segundoApellidoPadre << "," << bebe.tipoDocumentoPadre
                    << "," << bebe.numeroDocumentoPadre << "," << bebe.nacionalidadPadre << "," << bebe.nombreMadre << "," << bebe.primerApellidoMadre
                    << "," << bebe.segundoApellidoMadre << "," << bebe.tipoDocumentoMadre << "," << bebe.numeroDocumentoMadre << "," << bebe.nacionalidadMadre
                    << "," << bebe.fechaRegistro << "," << bebe.oficinaRegistralDep << "," << bebe.oficinaRegistralProv << "," << bebe.oficinaRegistralDist << "\n";

        // Mostrar mensaje de éxito al usuario
        cout << "El registro del bebé ha sido actualizado exitosamente." << endl;
      }
      else
      {
        // Si no es el registro que se debe editar, simplemente escribirlo en el archivo temporal
        archivoTemp << linea << endl;
      }
    }

    archivo.close();
    archivoTemp.close();

    if (!encontrado)
    {
      cout << "No se encontró ningún registro con el número de documento del padre proporcionado." << endl;
    }
    else
    {
      // Reemplazar el archivo original con el archivo temporal para reflejar los cambios
      remove("registros_bebes.txt");
      rename("temp.txt", "registros_bebes.txt");
    }
  }
  else
  {
    cout << "Error al abrir el archivo de registros." << endl;
  }
}

// Función para mostrar los detalles de un bebe específico
void mostrarDetallesBebe(const Bebe & bebe)
{
  cout << "---------------------------" << endl;
  cout << "Fecha de Nacimiento: " << bebe.fechaNacimiento << endl;
  cout << "Lugar de Ocurrencia: " << bebe.lugarOcurrenciaDep << ", " << bebe.lugarOcurrenciaProv << ", " << bebe.lugarOcurrenciaDist << endl;
  cout << "Sexo: " << bebe.sexo << endl;
  cout << "Nombre del Bebé: " << bebe.nombreBebe << " " << bebe.primerApellidoBebe << " " << bebe.segundoApellidoBebe << endl;
  cout << "Nombre del Padre: " << bebe.nombrePadre << " " << bebe.primerApellidoPadre << " " << bebe.segundoApellidoPadre << endl;
  cout << "Tipo de Documento del Padre: " << bebe.tipoDocumentoPadre << endl;
  cout << "Número de Documento del Padre: " << bebe.numeroDocumentoPadre << endl;
  cout << "Nacionalidad del Padre: " << bebe.nacionalidadPadre << endl;
  cout << "Nombre de la Madre: " << bebe.nombreMadre << " " << bebe.primerApellidoMadre << " " << bebe.segundoApellidoMadre << endl;
  cout << "Tipo de Documento de la Madre: " << bebe.tipoDocumentoMadre << endl;
  cout << "Número de Documento de la Madre: " << bebe.numeroDocumentoMadre << endl;
  cout << "Nacionalidad de la Madre: " << bebe.nacionalidadMadre << endl;
  cout << "Fecha de Registro: " << bebe.fechaRegistro << endl;
  cout << "Oficina Registral: " << bebe.oficinaRegistralDep << ", " << bebe.oficinaRegistralProv << ", " << bebe.oficinaRegistralDist << endl;
  cout << "---------------------------" << endl;
}

void eliminarRegistroBebe()
{
  string numeroDocumentoPadre;
  cout << "Ingrese el número de documento del padre del bebe que desea eliminar: ";
  cin.ignore();
  getline(cin, numeroDocumentoPadre);

  ifstream archivo("registros_bebes.txt");
  ofstream archivoTemp("temp.txt");

  if (archivo.is_open() && archivoTemp.is_open())
  {
    string linea;
    bool encontrado = false;

    while (getline(archivo, linea))
    {
      istringstream iss(linea);
// Extraer los valores de los campos del registro
      Bebe bebe;
      getline(iss, bebe.fechaNacimiento, ',');
      getline(iss, bebe.lugarOcurrenciaDep, ',');
      getline(iss, bebe.lugarOcurrenciaProv, ',');
      getline(iss, bebe.lugarOcurrenciaDist, ',');
      getline(iss, bebe.sexo, ',');
      getline(iss, bebe.nombreBebe, ',');
      getline(iss, bebe.primerApellidoBebe, ',');
      getline(iss, bebe.segundoApellidoBebe, ',');
      getline(iss, bebe.nombrePadre, ',');
      getline(iss, bebe.primerApellidoPadre, ',');
      getline(iss, bebe.segundoApellidoPadre, ',');
      getline(iss, bebe.tipoDocumentoPadre, ',');
      getline(iss, bebe.numeroDocumentoPadre, ',');
      getline(iss, bebe.nacionalidadPadre, ',');
      getline(iss, bebe.nombreMadre, ',');
      getline(iss, bebe.primerApellidoMadre, ',');
      getline(iss, bebe.segundoApellidoMadre, ',');
      getline(iss, bebe.tipoDocumentoMadre, ',');
      getline(iss, bebe.numeroDocumentoMadre, ',');
      getline(iss, bebe.nacionalidadMadre, ',');
      getline(iss, bebe.fechaRegistro, ',');
      getline(iss, bebe.oficinaRegistralDep, ',');
      getline(iss, bebe.oficinaRegistralProv, ',');
      getline(iss, bebe.oficinaRegistralDist, ',');


      if (bebe.numeroDocumentoPadre == numeroDocumentoPadre)
      {
        encontrado = true;
        cout << "Registro de bebe a eliminar:\n" << linea << endl;
        continue;
      }

      // Escribir la línea en el archivo temporal
      archivoTemp << linea << endl;
    }
    archivo.close();
    archivoTemp.close();

    if (encontrado)
    {
      // Reemplazar el archivo original con el archivo temporal para reflejar los cambios
      remove("registros_bebes.txt");
      rename("temp.txt", "registros_bebes.txt");
      cout << "Registro de bebe eliminado correctamente." << endl;
    }
    else
    {
      cout << "No se encontró ningún bebe registrado con el número de documento del padre proporcionado." << endl;
    }
  }
  else
  {
    cout << "Error al abrir el archivo de registros." << endl;
  }
}

// Función para mostrar todos los registros de bebes desde el archivo
void mostrarRegistros()
{
  ifstream archivo("registros_bebes.txt");
  if (archivo.is_open())
  {
    string linea;
    bool registrosEncontrados = false;
    int contadorRegistros = 0; // Inicializar el contador de registros

    while (getline(archivo, linea))
    {
      // Procesar la línea para obtener los campos de un bebe
      if (linea.empty())
      {
        cout << endl; // Agregar una línea en blanco para separar los registros en la salida
        continue;
      }
      contadorRegistros++;
      cout << "Registro " << contadorRegistros << ": " << endl;

      istringstream iss(linea);
      Bebe bebe;
      getline(iss, bebe.fechaNacimiento, ',');
      getline(iss, bebe.lugarOcurrenciaDep, ',');
      getline(iss, bebe.lugarOcurrenciaProv, ',');
      getline(iss, bebe.lugarOcurrenciaDist, ',');
      getline(iss, bebe.sexo, ',');
      getline(iss, bebe.nombreBebe, ',');
      getline(iss, bebe.primerApellidoBebe, ',');
      getline(iss, bebe.segundoApellidoBebe, ',');
      getline(iss, bebe.nombrePadre, ',');
      getline(iss, bebe.primerApellidoPadre, ',');
      getline(iss, bebe.segundoApellidoPadre, ',');
      getline(iss, bebe.tipoDocumentoPadre, ',');
      getline(iss, bebe.numeroDocumentoPadre, ',');
      getline(iss, bebe.nacionalidadPadre, ',');
      getline(iss, bebe.nombreMadre, ',');
      getline(iss, bebe.primerApellidoMadre, ',');
      getline(iss, bebe.segundoApellidoMadre, ',');
      getline(iss, bebe.tipoDocumentoMadre, ',');
      getline(iss, bebe.numeroDocumentoMadre, ',');
      getline(iss, bebe.nacionalidadMadre, ',');
      getline(iss, bebe.fechaRegistro, ',');
      getline(iss, bebe.oficinaRegistralDep, ',');
      getline(iss, bebe.oficinaRegistralProv, ',');
      getline(iss, bebe.oficinaRegistralDist, ',');

      mostrarDetallesBebe(bebe);
      registrosEncontrados = true;
    }

    if (!registrosEncontrados)
    {
      cout << "No hay registros de bebes en el sistema." << endl;
    }

    archivo.close();
  }
  else
  {
    cout << "Error al abrir el archivo de registros." << endl;
  }
}

// Función para mostrar el menú principal del sistema
void mostrarMenu()
{
  int opcion;

  do
  {
    cout << "===== Menú Principal =====" << endl;
    cout << "1. Agregar registro de bebe" << endl;
    cout << "2. Buscar registro de bebe por número de documento del padre" << endl;
    cout << "3. Editar registro de bebe por número de documento del padre" << endl;
    cout << "4. Eliminar registro de bebe por número de documento del padre" << endl;
    cout << "5. Mostrar todos los registros de bebes" << endl;
    cout << "6. Salir" << endl;
    cout << "Ingrese la opción deseada: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
      agregarRegistroBebe();
      break;
    case 2:
      buscarRegistroBebePorDocumento();
      break;
    case 3:
      editarRegistroBebe();
      break;
    case 4:
      eliminarRegistroBebe();
      break;
    case 5:
      mostrarRegistros();
      break;
    case 6:
      cout << "!Hasta luego!" << endl;
      break;
    default:
      cout << "Opción inválida. Por favor, ingrese una opción válida." << endl;
      break;
    }
  }
  while (opcion != 6);
}

int main()
{
  mostrarMenu();
  return 0;
}
