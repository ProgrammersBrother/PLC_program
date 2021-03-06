#include "../../../include/Console_folder/Toggle_folder/ToggleWithKey.h"

ToggleWithKey::ToggleWithKey()
{
    pinMode(_PIN_MANUAL, INPUT);
    pinMode(_PIN_AUTOPILOT, INPUT);
}
ToggleWithKey *ToggleWithKey::_instance = NULL;
ToggleWithKey *ToggleWithKey::getInstance()
{
    if (_instance == NULL)
    {
        _instance = new ToggleWithKey();
    }
    return _instance;
}
String ToggleWithKey::getMode()
{
    bool manual = digitalRead(_PIN_MANUAL);
    bool autopilot = digitalRead(_PIN_AUTOPILOT);
    if (manual)
    {
        return String("MANUAL");
    }
    if (autopilot)
    {
        return String("AUTOPILOT");
    }
    return String("LOCKED");
}
