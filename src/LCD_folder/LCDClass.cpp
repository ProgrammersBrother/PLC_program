#include "../../include/LCD_folder/LCDClass.h"

LCDClass::LCDClass() : _lcd(0x27, 20, 4)
{
}

void LCDClass::init()
{
    _lcd.init();
    _lcd.backlight();
}
void LCDClass::backlight()
{
    _lcd.backlight();
}
void LCDClass::clear()
{
    _lcd.clear();
}
void LCDClass::clearSetCursorAndPrint(int column, int row, String text)
{
    _lcd.clear();
    _lcd.setCursor(column, row);
    _lcd.print(text);
}
void LCDClass::setCursorAndPrint(int column, int row, String text)
{
    _lcd.setCursor(column, row);
    _lcd.print(text);
}