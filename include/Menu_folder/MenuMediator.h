#ifndef MENUMEDIATOR_H
#define MENUMEDIATOR_H
#include "../src/main.h"
#include "../Console_folder/Toggle_folder/ToggleWithKey.h"
#include "ManualMenuMode.h"
#include "AutopilotMenuMode.h"
#include "LockedMenuMode.h"


class MenuMediator
{
private:
    ToggleWithKey *_pToggleKey;
    MenuMode *_pMenuMode = NULL;
    ManualMenuMode _manualMenuMode;
    AutopilotMenuMode _autopilotMenuMode;
    LockedMenuMode _lockedMenuMode;
    MenuOnLCD _menuOnLCD;

    String _currentMode;
    String _targetMode;
    static const int _numberOfModes = 3;
    String _namesOfModes[_numberOfModes] = {"AUTOPILOT", "LOCKED", "MANUAL"};

    bool _modeExists(String mode);
    void _setCurrentMode(String mode);
    String _getCurrentMode();
    void _setTargetMode(String mode);
    String _getTargetMode();

public:
    MenuMediator();
    void doMenu();
    void initLCD();
};

#endif