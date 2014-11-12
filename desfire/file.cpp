#include "file.h"


File::File(uint8_t _filenumber, mifare_desfire_file_settings _settings, Item* parent) :
  Item(parent),
  settings(_settings),
  filenumber(_filenumber)
{
}


File::~File()
{
  qDebug("destructor File");
  //TODO
}


int File::select()
{
  return 0;
}


void File::deselect()
{
}
