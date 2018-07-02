#include "steakworms.hpp"

bool ISteamController::Init() {
  debug("ISteamController::Init()");
  return true;
}

bool ISteamController::Shutdown() {
  debug("ISteamController::Shutdown()");
  return true;
}

void ISteamController::RunFrame() { debug("ISteamController::RunFrame()"); }

int ISteamController::GetConnectedControllers(ControllerHandle_t *handlesOut) {
  debug("ISteamController::GetConnectedControllers()");
  return 0;
}

bool ISteamController::ShowBindingPanel(ControllerHandle_t controllerHandle) {
  debug("ISteamController::ShowBindingPanel()");
  return true;
}

ControllerActionSetHandle_t
ISteamController::GetActionSetHandle(const char *pszActionSetName) {
  debug("ISteamController::GetActionSetHandle()");
  return {};
}

void ISteamController::ActivateActionSet(
    ControllerHandle_t          controllerHandle,
    ControllerActionSetHandle_t actionSetHandle) {
  debug("ISteamController::ActivateActionSet()");
}

ControllerActionSetHandle_t
ISteamController::GetCurrentActionSet(ControllerHandle_t controllerHandle) {
  debug("ISteamController::GetCurrentActionSet()");
  return {};
}

void ISteamController::ActivateActionSetLayer(
    ControllerHandle_t          controllerHandle,
    ControllerActionSetHandle_t actionSetLayerHandle) {
  debug("ISteamController::ActivateActionSetLayer()");
}

void ISteamController::DeactivateActionSetLayer(
    ControllerHandle_t          controllerHandle,
    ControllerActionSetHandle_t actionSetLayerHandle) {
  debug("ISteamController::DeactivateActionSetLayer()");
}

void ISteamController::DeactivateAllActionSetLayers(
    ControllerHandle_t controllerHandle) {
  debug("ISteamController::DeactivateAllActionSetLayers()");
}

int ISteamController::GetActiveActionSetLayers(
    ControllerHandle_t           controllerHandle,
    ControllerActionSetHandle_t *handlesOut) {
  debug("ISteamController::GetActiveActionSetLayers()");
  return 0;
}

ControllerDigitalActionHandle_t
ISteamController::GetDigitalActionHandle(const char *pszActionName) {
  debug("ISteamController::GetDigitalActionHandle()");
  return {};
}

ControllerDigitalActionData_t ISteamController::GetDigitalActionData(
    ControllerHandle_t              controllerHandle,
    ControllerDigitalActionHandle_t digitalActionHandle) {
  debug("ISteamController::GetDigitalActionData()");
  return {};
}

int ISteamController::GetDigitalActionOrigins(
    ControllerHandle_t              controllerHandle,
    ControllerActionSetHandle_t     actionSetHandle,
    ControllerDigitalActionHandle_t digitalActionHandle,
    EControllerActionOrigin *       originsOut) {
  debug("ISteamController::GetDigitalActionOrigins()");
  return 0;
}

ControllerAnalogActionHandle_t
ISteamController::GetAnalogActionHandle(const char *pszActionName) {
  debug("ISteamController::GetAnalogActionHandle()");
  return {};
}

ControllerAnalogActionData_t ISteamController::GetAnalogActionData(
    ControllerHandle_t             controllerHandle,
    ControllerAnalogActionHandle_t analogActionHandle) {
  debug("ISteamController::GetAnalogActionData()");
  return {};
}

int ISteamController::GetAnalogActionOrigins(
    ControllerHandle_t             controllerHandle,
    ControllerActionSetHandle_t    actionSetHandle,
    ControllerAnalogActionHandle_t analogActionHandle,
    EControllerActionOrigin *      originsOut) {
  debug("ISteamController::GetAnalogActionOrigins()");
  return 0;
}

void ISteamController::StopAnalogActionMomentum(
    ControllerHandle_t             controllerHandle,
    ControllerAnalogActionHandle_t eAction) {
  debug("ISteamController::StopAnalogActionMomentum()");
}

void ISteamController::TriggerHapticPulse(ControllerHandle_t  controllerHandle,
                                          ESteamControllerPad eTargetPad,
                                          unsigned short usDurationMicroSec) {
  debug("ISteamController::TriggerHapticPulse()");
}

void ISteamController::TriggerRepeatedHapticPulse(
    ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad,
    unsigned short usDurationMicroSec, unsigned short usOffMicroSec,
    unsigned short unRepeat, unsigned int nFlags) {
  debug("ISteamController::TriggerRepeatedHapticPulse()");
}

void ISteamController::TriggerVibration(ControllerHandle_t controllerHandle,
                                        unsigned short     usLeftSpeed,
                                        unsigned short     usRightSpeed) {
  debug("ISteamController::TriggerVibration()");
}

void ISteamController::SetLEDColor(ControllerHandle_t controllerHandle,
                                   uint8 nColorR, uint8 nColorG, uint8 nColorB,
                                   unsigned int nFlags) {
  debug("ISteamController::SetLEDColor()");
}

int ISteamController::GetGamepadIndexForController(
    ControllerHandle_t ulControllerHandle) {
  debug("ISteamController::GetGamepadIndexForController()");
  return 0;
}

ControllerHandle_t ISteamController::GetControllerForGamepadIndex(int nIndex) {
  debug("ISteamController::GetControllerForGamepadIndex()");
  return {};
}

ControllerMotionData_t
ISteamController::GetMotionData(ControllerHandle_t controllerHandle) {
  debug("ISteamController::GetMotionData()");
  return {};
}

bool ISteamController::ShowDigitalActionOrigins(
    ControllerHandle_t              controllerHandle,
    ControllerDigitalActionHandle_t digitalActionHandle, float flScale,
    float flXPosition, float flYPosition) {
  debug("ISteamController::ShowDigitalActionOrigins()");
  return true;
}

bool ISteamController::ShowAnalogActionOrigins(
    ControllerHandle_t             controllerHandle,
    ControllerAnalogActionHandle_t analogActionHandle, float flScale,
    float flXPosition, float flYPosition) {
  debug("ISteamController::ShowAnalogActionOrigins()");
  return true;
}

const char *
ISteamController::GetStringForActionOrigin(EControllerActionOrigin eOrigin) {
  debug("ISteamController::GetStringForActionOrigin()");
  return "";
}

const char *
ISteamController::GetGlyphForActionOrigin(EControllerActionOrigin eOrigin) {
  debug("ISteamController::GetGlyphForActionOrigin()");
  return "";
}

ESteamInputType
ISteamController::GetInputTypeForHandle(ControllerHandle_t controllerHandle) {
  debug("ISteamController::GetInputTypeForHandle()");
  return {};
}
