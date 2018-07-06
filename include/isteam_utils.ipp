EXTERN_ABI uint32 ISteamUtils_GetAppID(void *);

template <size_t N, typename R, typename... As>
EXTERN_ABI static R ISteamUtils_Unimplemented(void *_this, As...) {
  debug("ISteamUtils_Unimplemented: %s->vtbl[%zu](%p, ...)", static_cast<isteam_object *>(_this)->clazz, N, _this);
  return static_cast<R>(0);
}

struct ISteamUtils001 {
  EXTERN_ABI uint32 (*GetSecondsSinceAppActive)(void *)            = ISteamUtils_Unimplemented<0, uint32>;
  EXTERN_ABI uint32 (*GetSecondsSinceComputerActive)(void *)       = ISteamUtils_Unimplemented<1, uint32>;
  EXTERN_ABI EUniverse (*GetConnectedUniverse)(void *)             = ISteamUtils_Unimplemented<2, EUniverse>;
  EXTERN_ABI uint32 (*GetServerRealTime)(void *)                   = ISteamUtils_Unimplemented<3, uint32>;
  EXTERN_ABI const char *(*GetIPCountry)(void *)                   = ISteamUtils_Unimplemented<4, const char *>;
  EXTERN_ABI bool (*GetImageSize)(void *, int, uint32 *, uint32 *) = ISteamUtils_Unimplemented<5, bool, int, uint32 *, uint32 *>;
  EXTERN_ABI bool (*GetImageRGBA)(void *, int, uint8 *, int)       = ISteamUtils_Unimplemented<6, bool, int, uint8 *, int>;
} const isteam_utils_001_vtbl;

struct ISteamUtils002 {
  EXTERN_ABI uint32 (*GetSecondsSinceAppActive)(void *)                            = ISteamUtils_Unimplemented<0, uint32>;
  EXTERN_ABI uint32 (*GetSecondsSinceComputerActive)(void *)                       = ISteamUtils_Unimplemented<1, uint32>;
  EXTERN_ABI EUniverse (*GetConnectedUniverse)(void *)                             = ISteamUtils_Unimplemented<2, EUniverse>;
  EXTERN_ABI uint32 (*GetServerRealTime)(void *)                                   = ISteamUtils_Unimplemented<3, uint32>;
  EXTERN_ABI const char *(*GetIPCountry)(void *)                                   = ISteamUtils_Unimplemented<4, const char *>;
  EXTERN_ABI bool (*GetImageSize)(void *, int, uint32 *, uint32 *)                 = ISteamUtils_Unimplemented<5, bool, int, uint32 *, uint32 *>;
  EXTERN_ABI bool (*GetImageRGBA)(void *, int, uint8 *, int)                       = ISteamUtils_Unimplemented<6, bool, int, uint8 *, int>;
  EXTERN_ABI bool (*GetCSERIPPort)(void *, uint32 *, uint16 *)                     = ISteamUtils_Unimplemented<7, bool, uint32 *, uint16 *>;
  EXTERN_ABI uint8 (*GetCurrentBatteryPower)(void *)                               = ISteamUtils_Unimplemented<8, uint8>;
  EXTERN_ABI uint32 (*GetAppID)(void *)                                            = ISteamUtils_GetAppID;
  EXTERN_ABI void (*SetOverlayNotificationPosition)(void *, ENotificationPosition) = ISteamUtils_Unimplemented<10, void, ENotificationPosition>;
} const isteam_utils_002_vtbl;

struct ISteamUtils003 {
  EXTERN_ABI uint32 (*GetSecondsSinceAppActive)(void *)                                 = ISteamUtils_Unimplemented<0, uint32>;
  EXTERN_ABI uint32 (*GetSecondsSinceComputerActive)(void *)                            = ISteamUtils_Unimplemented<1, uint32>;
  EXTERN_ABI EUniverse (*GetConnectedUniverse)(void *)                                  = ISteamUtils_Unimplemented<2, EUniverse>;
  EXTERN_ABI uint32 (*GetServerRealTime)(void *)                                        = ISteamUtils_Unimplemented<3, uint32>;
  EXTERN_ABI const char *(*GetIPCountry)(void *)                                        = ISteamUtils_Unimplemented<4, const char *>;
  EXTERN_ABI bool (*GetImageSize)(void *, int, uint32 *, uint32 *)                      = ISteamUtils_Unimplemented<5, bool, int, uint32 *, uint32 *>;
  EXTERN_ABI bool (*GetImageRGBA)(void *, int, uint8 *, int)                            = ISteamUtils_Unimplemented<6, bool, int, uint8 *, int>;
  EXTERN_ABI bool (*GetCSERIPPort)(void *, uint32 *, uint16 *)                          = ISteamUtils_Unimplemented<7, bool, uint32 *, uint16 *>;
  EXTERN_ABI uint8 (*GetCurrentBatteryPower)(void *)                                    = ISteamUtils_Unimplemented<8, uint8>;
  EXTERN_ABI uint32 (*GetAppID)(void *)                                                 = ISteamUtils_GetAppID;
  EXTERN_ABI void (*SetOverlayNotificationPosition)(void *, ENotificationPosition)      = ISteamUtils_Unimplemented<10, void, ENotificationPosition>;
  EXTERN_ABI bool (*IsAPICallCompleted)(void *, SteamAPICall_t, bool *)                 = ISteamUtils_Unimplemented<11, bool, SteamAPICall_t, bool *>;
  EXTERN_ABI ESteamAPICallFailure (*GetAPICallFailureReason)(void *, SteamAPICall_t)    = ISteamUtils_Unimplemented<12, ESteamAPICallFailure, SteamAPICall_t>;
  EXTERN_ABI bool (*GetAPICallResult)(void *, SteamAPICall_t, void *, int, int, bool *) = ISteamUtils_Unimplemented<13, bool, SteamAPICall_t, void *, int, int, bool *>;
  EXTERN_ABI void (*RunFrame)(void *)                                                   = ISteamUtils_Unimplemented<14, void>;
  EXTERN_ABI uint32 (*GetIPCCallCount)(void *)                                          = ISteamUtils_Unimplemented<15, uint32>;
  EXTERN_ABI void (*SetWarningMessageHook)(void *, SteamAPIWarningMessageHook_t)        = ISteamUtils_Unimplemented<16, void, SteamAPIWarningMessageHook_t>;
} const isteam_utils_003_vtbl;

struct ISteamUtils004 {
  EXTERN_ABI uint32 (*GetSecondsSinceAppActive)(void *)                                 = ISteamUtils_Unimplemented<0, uint32>;
  EXTERN_ABI uint32 (*GetSecondsSinceComputerActive)(void *)                            = ISteamUtils_Unimplemented<1, uint32>;
  EXTERN_ABI EUniverse (*GetConnectedUniverse)(void *)                                  = ISteamUtils_Unimplemented<2, EUniverse>;
  EXTERN_ABI RTime32 (*GetServerRealTime)(void *)                                       = ISteamUtils_Unimplemented<3, RTime32>;
  EXTERN_ABI const char *(*GetIPCountry)(void *)                                        = ISteamUtils_Unimplemented<4, const char *>;
  EXTERN_ABI bool (*GetImageSize)(void *, int, uint32 *, uint32 *)                      = ISteamUtils_Unimplemented<5, bool, int, uint32 *, uint32 *>;
  EXTERN_ABI bool (*GetImageRGBA)(void *, int, uint8 *, int)                            = ISteamUtils_Unimplemented<6, bool, int, uint8 *, int>;
  EXTERN_ABI bool (*GetCSERIPPort)(void *, uint32 *, uint16 *)                          = ISteamUtils_Unimplemented<7, bool, uint32 *, uint16 *>;
  EXTERN_ABI uint8 (*GetCurrentBatteryPower)(void *)                                    = ISteamUtils_Unimplemented<8, uint8>;
  EXTERN_ABI uint32 (*GetAppID)(void *)                                                 = ISteamUtils_GetAppID;
  EXTERN_ABI void (*SetOverlayNotificationPosition)(void *, ENotificationPosition)      = ISteamUtils_Unimplemented<11, void, ENotificationPosition>;
  EXTERN_ABI bool (*IsAPICallCompleted)(void *, SteamAPICall_t, bool *)                 = ISteamUtils_Unimplemented<12, bool, SteamAPICall_t, bool *>;
  EXTERN_ABI ESteamAPICallFailure (*GetAPICallFailureReason)(void *, SteamAPICall_t)    = ISteamUtils_Unimplemented<13, ESteamAPICallFailure, SteamAPICall_t>;
  EXTERN_ABI bool (*GetAPICallResult)(void *, SteamAPICall_t, void *, int, int, bool *) = ISteamUtils_Unimplemented<14, bool, SteamAPICall_t, void *, int, int, bool *>;
  EXTERN_ABI void (*RunFrame)(void *)                                                   = ISteamUtils_Unimplemented<15, void>;
  EXTERN_ABI uint32 (*GetIPCCallCount)(void *)                                          = ISteamUtils_Unimplemented<16, uint32>;
  EXTERN_ABI void (*SetWarningMessageHook)(void *, SteamAPIWarningMessageHook_t)        = ISteamUtils_Unimplemented<17, void, SteamAPIWarningMessageHook_t>;
  EXTERN_ABI bool (*IsOverlayEnabled)(void *)                                           = ISteamUtils_Unimplemented<18, bool>;
} const isteam_utils_004_vtbl;

struct ISteamUtils005 {
  EXTERN_ABI uint32 (*GetSecondsSinceAppActive)(void *)                                                                   = ISteamUtils_Unimplemented<0, uint32>;
  EXTERN_ABI uint32 (*GetSecondsSinceComputerActive)(void *)                                                              = ISteamUtils_Unimplemented<1, uint32>;
  EXTERN_ABI EUniverse (*GetConnectedUniverse)(void *)                                                                    = ISteamUtils_Unimplemented<2, EUniverse>;
  EXTERN_ABI uint32 (*GetServerRealTime)(void *)                                                                          = ISteamUtils_Unimplemented<3, uint32>;
  EXTERN_ABI const char *(*GetIPCountry)(void *)                                                                          = ISteamUtils_Unimplemented<4, const char *>;
  EXTERN_ABI bool (*GetImageSize)(void *, int, uint32 *, uint32 *)                                                        = ISteamUtils_Unimplemented<5, bool, int, uint32 *, uint32 *>;
  EXTERN_ABI bool (*GetImageRGBA)(void *, int, uint8 *, int)                                                              = ISteamUtils_Unimplemented<6, bool, int, uint8 *, int>;
  EXTERN_ABI bool (*GetCSERIPPort)(void *, uint32 *, uint16 *)                                                            = ISteamUtils_Unimplemented<7, bool, uint32 *, uint16 *>;
  EXTERN_ABI uint8 (*GetCurrentBatteryPower)(void *)                                                                      = ISteamUtils_Unimplemented<8, uint8>;
  EXTERN_ABI uint32 (*GetAppID)(void *)                                                                                   = ISteamUtils_GetAppID;
  EXTERN_ABI void (*SetOverlayNotificationPosition)(void *, ENotificationPosition)                                        = ISteamUtils_Unimplemented<11, void, ENotificationPosition>;
  EXTERN_ABI bool (*IsAPICallCompleted)(void *, SteamAPICall_t, bool *)                                                   = ISteamUtils_Unimplemented<12, bool, SteamAPICall_t, bool *>;
  EXTERN_ABI ESteamAPICallFailure (*GetAPICallFailureReason)(void *, SteamAPICall_t)                                      = ISteamUtils_Unimplemented<13, ESteamAPICallFailure, SteamAPICall_t>;
  EXTERN_ABI bool (*GetAPICallResult)(void *, SteamAPICall_t, void *, int, int, bool *)                                   = ISteamUtils_Unimplemented<14, bool, SteamAPICall_t, void *, int, int, bool *>;
  EXTERN_ABI void (*RunFrame)(void *)                                                                                     = ISteamUtils_Unimplemented<15, void>;
  EXTERN_ABI uint32 (*GetIPCCallCount)(void *)                                                                            = ISteamUtils_Unimplemented<16, uint32>;
  EXTERN_ABI void (*SetWarningMessageHook)(void *, SteamAPIWarningMessageHook_t)                                          = ISteamUtils_Unimplemented<17, void, SteamAPIWarningMessageHook_t>;
  EXTERN_ABI bool (*IsOverlayEnabled)(void *)                                                                             = ISteamUtils_Unimplemented<18, bool>;
  EXTERN_ABI bool (*BOverlayNeedsPresent)(void *)                                                                         = ISteamUtils_Unimplemented<19, bool>;
  EXTERN_ABI SteamAPICall_t (*CheckFileSignature)(void *, const char *)                                                   = ISteamUtils_Unimplemented<20, SteamAPICall_t, const char *>;
  EXTERN_ABI bool (*ShowGamepadTextInput)(void *, EGamepadTextInputMode, EGamepadTextInputLineMode, const char *, uint32) = ISteamUtils_Unimplemented<21, bool, EGamepadTextInputMode, EGamepadTextInputLineMode, const char *, uint32>;
  EXTERN_ABI uint32 (*GetEnteredGamepadTextLength)(void *)                                                                = ISteamUtils_Unimplemented<22, uint32>;
  EXTERN_ABI bool (*GetEnteredGamepadTextInput)(void *, char *, uint32)                                                   = ISteamUtils_Unimplemented<23, bool, char *, uint32>;
} const isteam_utils_005_vtbl;

struct ISteamUtils006 {
  EXTERN_ABI uint32 (*GetSecondsSinceAppActive)(void *)                                                                   = ISteamUtils_Unimplemented<0, uint32>;
  EXTERN_ABI uint32 (*GetSecondsSinceComputerActive)(void *)                                                              = ISteamUtils_Unimplemented<1, uint32>;
  EXTERN_ABI EUniverse (*GetConnectedUniverse)(void *)                                                                    = ISteamUtils_Unimplemented<2, EUniverse>;
  EXTERN_ABI uint32 (*GetServerRealTime)(void *)                                                                          = ISteamUtils_Unimplemented<3, uint32>;
  EXTERN_ABI const char *(*GetIPCountry)(void *)                                                                          = ISteamUtils_Unimplemented<4, const char *>;
  EXTERN_ABI bool (*GetImageSize)(void *, int, uint32 *, uint32 *)                                                        = ISteamUtils_Unimplemented<5, bool, int, uint32 *, uint32 *>;
  EXTERN_ABI bool (*GetImageRGBA)(void *, int, uint8 *, int)                                                              = ISteamUtils_Unimplemented<6, bool, int, uint8 *, int>;
  EXTERN_ABI bool (*GetCSERIPPort)(void *, uint32 *, uint16 *)                                                            = ISteamUtils_Unimplemented<7, bool, uint32 *, uint16 *>;
  EXTERN_ABI uint8 (*GetCurrentBatteryPower)(void *)                                                                      = ISteamUtils_Unimplemented<8, uint8>;
  EXTERN_ABI uint32 (*GetAppID)(void *)                                                                                   = ISteamUtils_GetAppID;
  EXTERN_ABI void (*SetOverlayNotificationPosition)(void *, ENotificationPosition)                                        = ISteamUtils_Unimplemented<11, void, ENotificationPosition>;
  EXTERN_ABI bool (*IsAPICallCompleted)(void *, SteamAPICall_t, bool *)                                                   = ISteamUtils_Unimplemented<12, bool, SteamAPICall_t, bool *>;
  EXTERN_ABI ESteamAPICallFailure (*GetAPICallFailureReason)(void *, SteamAPICall_t)                                      = ISteamUtils_Unimplemented<13, ESteamAPICallFailure, SteamAPICall_t>;
  EXTERN_ABI bool (*GetAPICallResult)(void *, SteamAPICall_t, void *, int, int, bool *)                                   = ISteamUtils_Unimplemented<14, bool, SteamAPICall_t, void *, int, int, bool *>;
  EXTERN_ABI void (*RunFrame)(void *)                                                                                     = ISteamUtils_Unimplemented<15, void>;
  EXTERN_ABI uint32 (*GetIPCCallCount)(void *)                                                                            = ISteamUtils_Unimplemented<16, uint32>;
  EXTERN_ABI void (*SetWarningMessageHook)(void *, SteamAPIWarningMessageHook_t)                                          = ISteamUtils_Unimplemented<17, void, SteamAPIWarningMessageHook_t>;
  EXTERN_ABI bool (*IsOverlayEnabled)(void *)                                                                             = ISteamUtils_Unimplemented<18, bool>;
  EXTERN_ABI bool (*BOverlayNeedsPresent)(void *)                                                                         = ISteamUtils_Unimplemented<19, bool>;
  EXTERN_ABI SteamAPICall_t (*CheckFileSignature)(void *, const char *)                                                   = ISteamUtils_Unimplemented<20, SteamAPICall_t, const char *>;
  EXTERN_ABI bool (*ShowGamepadTextInput)(void *, EGamepadTextInputMode, EGamepadTextInputLineMode, const char *, uint32) = ISteamUtils_Unimplemented<21, bool, EGamepadTextInputMode, EGamepadTextInputLineMode, const char *, uint32>;
  EXTERN_ABI uint32 (*GetEnteredGamepadTextLength)(void *)                                                                = ISteamUtils_Unimplemented<22, uint32>;
  EXTERN_ABI bool (*GetEnteredGamepadTextInput)(void *, char *, uint32)                                                   = ISteamUtils_Unimplemented<23, bool, char *, uint32>;
  EXTERN_ABI const char *(*GetSteamUILanguage)(void *)                                                                    = ISteamUtils_Unimplemented<24, const char *>;
  EXTERN_ABI bool (*IsSteamRunningInVR)(void *)                                                                           = ISteamUtils_Unimplemented<25, bool>;
} const isteam_utils_006_vtbl;

struct ISteamUtils007 {
  EXTERN_ABI uint32 (*GetSecondsSinceAppActive)(void *)                                                                                 = ISteamUtils_Unimplemented<0, uint32>;
  EXTERN_ABI uint32 (*GetSecondsSinceComputerActive)(void *)                                                                            = ISteamUtils_Unimplemented<1, uint32>;
  EXTERN_ABI EUniverse (*GetConnectedUniverse)(void *)                                                                                  = ISteamUtils_Unimplemented<2, EUniverse>;
  EXTERN_ABI uint32 (*GetServerRealTime)(void *)                                                                                        = ISteamUtils_Unimplemented<3, uint32>;
  EXTERN_ABI const char *(*GetIPCountry)(void *)                                                                                        = ISteamUtils_Unimplemented<4, const char *>;
  EXTERN_ABI bool (*GetImageSize)(void *, int, uint32 *, uint32 *)                                                                      = ISteamUtils_Unimplemented<5, bool, int, uint32 *, uint32 *>;
  EXTERN_ABI bool (*GetImageRGBA)(void *, int, uint8 *, int)                                                                            = ISteamUtils_Unimplemented<6, bool, int, uint8 *, int>;
  EXTERN_ABI bool (*GetCSERIPPort)(void *, uint32 *, uint16 *)                                                                          = ISteamUtils_Unimplemented<7, bool, uint32 *, uint16 *>;
  EXTERN_ABI uint8 (*GetCurrentBatteryPower)(void *)                                                                                    = ISteamUtils_Unimplemented<8, uint8>;
  EXTERN_ABI uint32 (*GetAppID)(void *)                                                                                                 = ISteamUtils_GetAppID;
  EXTERN_ABI void (*SetOverlayNotificationPosition)(void *, ENotificationPosition)                                                      = ISteamUtils_Unimplemented<11, void, ENotificationPosition>;
  EXTERN_ABI bool (*IsAPICallCompleted)(void *, SteamAPICall_t, bool *)                                                                 = ISteamUtils_Unimplemented<12, bool, SteamAPICall_t, bool *>;
  EXTERN_ABI ESteamAPICallFailure (*GetAPICallFailureReason)(void *, SteamAPICall_t)                                                    = ISteamUtils_Unimplemented<13, ESteamAPICallFailure, SteamAPICall_t>;
  EXTERN_ABI bool (*GetAPICallResult)(void *, SteamAPICall_t, void *, int, int, bool *)                                                 = ISteamUtils_Unimplemented<14, bool, SteamAPICall_t, void *, int, int, bool *>;
  EXTERN_ABI void (*RunFrame)(void *)                                                                                                   = ISteamUtils_Unimplemented<15, void>;
  EXTERN_ABI uint32 (*GetIPCCallCount)(void *)                                                                                          = ISteamUtils_Unimplemented<16, uint32>;
  EXTERN_ABI void (*SetWarningMessageHook)(void *, SteamAPIWarningMessageHook_t)                                                        = ISteamUtils_Unimplemented<17, void, SteamAPIWarningMessageHook_t>;
  EXTERN_ABI bool (*IsOverlayEnabled)(void *)                                                                                           = ISteamUtils_Unimplemented<18, bool>;
  EXTERN_ABI bool (*BOverlayNeedsPresent)(void *)                                                                                       = ISteamUtils_Unimplemented<19, bool>;
  EXTERN_ABI SteamAPICall_t (*CheckFileSignature)(void *, const char *)                                                                 = ISteamUtils_Unimplemented<20, SteamAPICall_t, const char *>;
  EXTERN_ABI bool (*ShowGamepadTextInput)(void *, EGamepadTextInputMode, EGamepadTextInputLineMode, const char *, uint32, const char *) = ISteamUtils_Unimplemented<21, bool, EGamepadTextInputMode, EGamepadTextInputLineMode, const char *, uint32, const char *>;
  EXTERN_ABI uint32 (*GetEnteredGamepadTextLength)(void *)                                                                              = ISteamUtils_Unimplemented<22, uint32>;
  EXTERN_ABI bool (*GetEnteredGamepadTextInput)(void *, char *, uint32)                                                                 = ISteamUtils_Unimplemented<23, bool, char *, uint32>;
  EXTERN_ABI const char *(*GetSteamUILanguage)(void *)                                                                                  = ISteamUtils_Unimplemented<24, const char *>;
  EXTERN_ABI bool (*IsSteamRunningInVR)(void *)                                                                                         = ISteamUtils_Unimplemented<25, bool>;
  EXTERN_ABI void (*SetOverlayNotificationInset)(void *, int32, int32)                                                                  = ISteamUtils_Unimplemented<26, void, int32, int32>;
  EXTERN_ABI bool (*IsSteamInBigPictureMode)(void *)                                                                                    = ISteamUtils_Unimplemented<27, bool>;
} const isteam_utils_007_vtbl;

struct ISteamUtils008 {
  EXTERN_ABI uint32 (*GetSecondsSinceAppActive)(void *)                                                                                 = ISteamUtils_Unimplemented<0, uint32>;
  EXTERN_ABI uint32 (*GetSecondsSinceComputerActive)(void *)                                                                            = ISteamUtils_Unimplemented<1, uint32>;
  EXTERN_ABI EUniverse (*GetConnectedUniverse)(void *)                                                                                  = ISteamUtils_Unimplemented<2, EUniverse>;
  EXTERN_ABI uint32 (*GetServerRealTime)(void *)                                                                                        = ISteamUtils_Unimplemented<3, uint32>;
  EXTERN_ABI const char *(*GetIPCountry)(void *)                                                                                        = ISteamUtils_Unimplemented<4, const char *>;
  EXTERN_ABI bool (*GetImageSize)(void *, int, uint32 *, uint32 *)                                                                      = ISteamUtils_Unimplemented<5, bool, int, uint32 *, uint32 *>;
  EXTERN_ABI bool (*GetImageRGBA)(void *, int, uint8 *, int)                                                                            = ISteamUtils_Unimplemented<6, bool, int, uint8 *, int>;
  EXTERN_ABI bool (*GetCSERIPPort)(void *, uint32 *, uint16 *)                                                                          = ISteamUtils_Unimplemented<7, bool, uint32 *, uint16 *>;
  EXTERN_ABI uint8 (*GetCurrentBatteryPower)(void *)                                                                                    = ISteamUtils_Unimplemented<8, uint8>;
  EXTERN_ABI uint32 (*GetAppID)(void *)                                                                                                 = ISteamUtils_GetAppID;
  EXTERN_ABI void (*SetOverlayNotificationPosition)(void *, ENotificationPosition)                                                      = ISteamUtils_Unimplemented<11, void, ENotificationPosition>;
  EXTERN_ABI bool (*IsAPICallCompleted)(void *, SteamAPICall_t, bool *)                                                                 = ISteamUtils_Unimplemented<12, bool, SteamAPICall_t, bool *>;
  EXTERN_ABI ESteamAPICallFailure (*GetAPICallFailureReason)(void *, SteamAPICall_t)                                                    = ISteamUtils_Unimplemented<13, ESteamAPICallFailure, SteamAPICall_t>;
  EXTERN_ABI bool (*GetAPICallResult)(void *, SteamAPICall_t, void *, int, int, bool *)                                                 = ISteamUtils_Unimplemented<14, bool, SteamAPICall_t, void *, int, int, bool *>;
  EXTERN_ABI void (*RunFrame)(void *)                                                                                                   = ISteamUtils_Unimplemented<15, void>;
  EXTERN_ABI uint32 (*GetIPCCallCount)(void *)                                                                                          = ISteamUtils_Unimplemented<16, uint32>;
  EXTERN_ABI void (*SetWarningMessageHook)(void *, SteamAPIWarningMessageHook_t)                                                        = ISteamUtils_Unimplemented<17, void, SteamAPIWarningMessageHook_t>;
  EXTERN_ABI bool (*IsOverlayEnabled)(void *)                                                                                           = ISteamUtils_Unimplemented<18, bool>;
  EXTERN_ABI bool (*BOverlayNeedsPresent)(void *)                                                                                       = ISteamUtils_Unimplemented<19, bool>;
  EXTERN_ABI SteamAPICall_t (*CheckFileSignature)(void *, const char *)                                                                 = ISteamUtils_Unimplemented<20, SteamAPICall_t, const char *>;
  EXTERN_ABI bool (*ShowGamepadTextInput)(void *, EGamepadTextInputMode, EGamepadTextInputLineMode, const char *, uint32, const char *) = ISteamUtils_Unimplemented<21, bool, EGamepadTextInputMode, EGamepadTextInputLineMode, const char *, uint32, const char *>;
  EXTERN_ABI uint32 (*GetEnteredGamepadTextLength)(void *)                                                                              = ISteamUtils_Unimplemented<22, uint32>;
  EXTERN_ABI bool (*GetEnteredGamepadTextInput)(void *, char *, uint32)                                                                 = ISteamUtils_Unimplemented<23, bool, char *, uint32>;
  EXTERN_ABI const char *(*GetSteamUILanguage)(void *)                                                                                  = ISteamUtils_Unimplemented<24, const char *>;
  EXTERN_ABI bool (*IsSteamRunningInVR)(void *)                                                                                         = ISteamUtils_Unimplemented<25, bool>;
  EXTERN_ABI void (*SetOverlayNotificationInset)(void *, int32, int32)                                                                  = ISteamUtils_Unimplemented<26, void, int32, int32>;
  EXTERN_ABI bool (*IsSteamInBigPictureMode)(void *)                                                                                    = ISteamUtils_Unimplemented<27, bool>;
  EXTERN_ABI void (*StartVRDashboard)(void *)                                                                                           = ISteamUtils_Unimplemented<28, void>;
} const isteam_utils_008_vtbl;

struct ISteamUtils009 {
  EXTERN_ABI uint32 (*GetSecondsSinceAppActive)(void *)                                                                                 = ISteamUtils_Unimplemented<0, uint32>;
  EXTERN_ABI uint32 (*GetSecondsSinceComputerActive)(void *)                                                                            = ISteamUtils_Unimplemented<1, uint32>;
  EXTERN_ABI EUniverse (*GetConnectedUniverse)(void *)                                                                                  = ISteamUtils_Unimplemented<2, EUniverse>;
  EXTERN_ABI uint32 (*GetServerRealTime)(void *)                                                                                        = ISteamUtils_Unimplemented<3, uint32>;
  EXTERN_ABI const char *(*GetIPCountry)(void *)                                                                                        = ISteamUtils_Unimplemented<4, const char *>;
  EXTERN_ABI bool (*GetImageSize)(void *, int, uint32 *, uint32 *)                                                                      = ISteamUtils_Unimplemented<5, bool, int, uint32 *, uint32 *>;
  EXTERN_ABI bool (*GetImageRGBA)(void *, int, uint8 *, int)                                                                            = ISteamUtils_Unimplemented<6, bool, int, uint8 *, int>;
  EXTERN_ABI bool (*GetCSERIPPort)(void *, uint32 *, uint16 *)                                                                          = ISteamUtils_Unimplemented<7, bool, uint32 *, uint16 *>;
  EXTERN_ABI uint8 (*GetCurrentBatteryPower)(void *)                                                                                    = ISteamUtils_Unimplemented<8, uint8>;
  EXTERN_ABI uint32 (*GetAppID)(void *)                                                                                                 = ISteamUtils_GetAppID;
  EXTERN_ABI void (*SetOverlayNotificationPosition)(void *, ENotificationPosition)                                                      = ISteamUtils_Unimplemented<11, void, ENotificationPosition>;
  EXTERN_ABI bool (*IsAPICallCompleted)(void *, SteamAPICall_t, bool *)                                                                 = ISteamUtils_Unimplemented<12, bool, SteamAPICall_t, bool *>;
  EXTERN_ABI ESteamAPICallFailure (*GetAPICallFailureReason)(void *, SteamAPICall_t)                                                    = ISteamUtils_Unimplemented<13, ESteamAPICallFailure, SteamAPICall_t>;
  EXTERN_ABI bool (*GetAPICallResult)(void *, SteamAPICall_t, void *, int, int, bool *)                                                 = ISteamUtils_Unimplemented<14, bool, SteamAPICall_t, void *, int, int, bool *>;
  EXTERN_ABI void (*RunFrame)(void *)                                                                                                   = ISteamUtils_Unimplemented<15, void>;
  EXTERN_ABI uint32 (*GetIPCCallCount)(void *)                                                                                          = ISteamUtils_Unimplemented<16, uint32>;
  EXTERN_ABI void (*SetWarningMessageHook)(void *, SteamAPIWarningMessageHook_t)                                                        = ISteamUtils_Unimplemented<17, void, SteamAPIWarningMessageHook_t>;
  EXTERN_ABI bool (*IsOverlayEnabled)(void *)                                                                                           = ISteamUtils_Unimplemented<18, bool>;
  EXTERN_ABI bool (*BOverlayNeedsPresent)(void *)                                                                                       = ISteamUtils_Unimplemented<19, bool>;
  EXTERN_ABI SteamAPICall_t (*CheckFileSignature)(void *, const char *)                                                                 = ISteamUtils_Unimplemented<20, SteamAPICall_t, const char *>;
  EXTERN_ABI bool (*ShowGamepadTextInput)(void *, EGamepadTextInputMode, EGamepadTextInputLineMode, const char *, uint32, const char *) = ISteamUtils_Unimplemented<21, bool, EGamepadTextInputMode, EGamepadTextInputLineMode, const char *, uint32, const char *>;
  EXTERN_ABI uint32 (*GetEnteredGamepadTextLength)(void *)                                                                              = ISteamUtils_Unimplemented<22, uint32>;
  EXTERN_ABI bool (*GetEnteredGamepadTextInput)(void *, char *, uint32)                                                                 = ISteamUtils_Unimplemented<23, bool, char *, uint32>;
  EXTERN_ABI const char *(*GetSteamUILanguage)(void *)                                                                                  = ISteamUtils_Unimplemented<24, const char *>;
  EXTERN_ABI bool (*IsSteamRunningInVR)(void *)                                                                                         = ISteamUtils_Unimplemented<25, bool>;
  EXTERN_ABI void (*SetOverlayNotificationInset)(void *, int32, int32)                                                                  = ISteamUtils_Unimplemented<26, void, int32, int32>;
  EXTERN_ABI bool (*IsSteamInBigPictureMode)(void *)                                                                                    = ISteamUtils_Unimplemented<27, bool>;
  EXTERN_ABI void (*StartVRDashboard)(void *)                                                                                           = ISteamUtils_Unimplemented<28, void>;
  EXTERN_ABI bool (*IsVRHeadsetStreamingEnabled)(void *)                                                                                = ISteamUtils_Unimplemented<29, bool>;
  EXTERN_ABI void (*SetVRHeadsetStreamingEnabled)(void *, bool)                                                                         = ISteamUtils_Unimplemented<30, void, bool>;
} const isteam_utils_009_vtbl;
