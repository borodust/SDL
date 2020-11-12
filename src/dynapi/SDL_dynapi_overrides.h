/*
  Simple DirectMedia Layer
  Copyright (C) 1997-2020 Sam Lantinga <slouken@libsdl.org>

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/

/* vi: set ts=4 sw=4 expandtab: */

/* DO NOT EDIT THIS FILE BY HAND. It is autogenerated by gendynapi.pl. */

#if !SDL_DYNAMIC_API
#error You should not be here.
#endif

#define SDL_SetError SDL_SetError_REAL
#define SDL_Log SDL_Log_REAL
#define SDL_LogVerbose SDL_LogVerbose_REAL
#define SDL_LogDebug SDL_LogDebug_REAL
#define SDL_LogInfo SDL_LogInfo_REAL
#define SDL_LogWarn SDL_LogWarn_REAL
#define SDL_LogError SDL_LogError_REAL
#define SDL_LogCritical SDL_LogCritical_REAL
#define SDL_LogMessage SDL_LogMessage_REAL
#define SDL_sscanf SDL_sscanf_REAL
#define SDL_snprintf SDL_snprintf_REAL
#define SDL_CreateThread SDL_CreateThread_REAL
#define SDL_RWFromFP SDL_RWFromFP_REAL
#define SDL_RegisterApp SDL_RegisterApp_REAL
#define SDL_UnregisterApp SDL_UnregisterApp_REAL
#define SDL_Direct3D9GetAdapterIndex SDL_Direct3D9GetAdapterIndex_REAL
#define SDL_RenderGetD3D9Device SDL_RenderGetD3D9Device_REAL
#define SDL_iPhoneSetAnimationCallback SDL_iPhoneSetAnimationCallback_REAL
#define SDL_iPhoneSetEventPump SDL_iPhoneSetEventPump_REAL
#define SDL_AndroidGetJNIEnv SDL_AndroidGetJNIEnv_REAL
#define SDL_AndroidGetActivity SDL_AndroidGetActivity_REAL
#define SDL_AndroidGetInternalStoragePath SDL_AndroidGetInternalStoragePath_REAL
#define SDL_AndroidGetExternalStorageState SDL_AndroidGetExternalStorageState_REAL
#define SDL_AndroidGetExternalStoragePath SDL_AndroidGetExternalStoragePath_REAL
#define SDL_Init SDL_Init_REAL
#define SDL_InitSubSystem SDL_InitSubSystem_REAL
#define SDL_QuitSubSystem SDL_QuitSubSystem_REAL
#define SDL_WasInit SDL_WasInit_REAL
#define SDL_Quit SDL_Quit_REAL
#define SDL_ReportAssertion SDL_ReportAssertion_REAL
#define SDL_SetAssertionHandler SDL_SetAssertionHandler_REAL
#define SDL_GetAssertionReport SDL_GetAssertionReport_REAL
#define SDL_ResetAssertionReport SDL_ResetAssertionReport_REAL
#define SDL_AtomicTryLock SDL_AtomicTryLock_REAL
#define SDL_AtomicLock SDL_AtomicLock_REAL
#define SDL_AtomicUnlock SDL_AtomicUnlock_REAL
#define SDL_AtomicCAS SDL_AtomicCAS_REAL
#define SDL_AtomicSet SDL_AtomicSet_REAL
#define SDL_AtomicGet SDL_AtomicGet_REAL
#define SDL_AtomicAdd SDL_AtomicAdd_REAL
#define SDL_AtomicCASPtr SDL_AtomicCASPtr_REAL
#define SDL_AtomicSetPtr SDL_AtomicSetPtr_REAL
#define SDL_AtomicGetPtr SDL_AtomicGetPtr_REAL
#define SDL_GetNumAudioDrivers SDL_GetNumAudioDrivers_REAL
#define SDL_GetAudioDriver SDL_GetAudioDriver_REAL
#define SDL_AudioInit SDL_AudioInit_REAL
#define SDL_AudioQuit SDL_AudioQuit_REAL
#define SDL_GetCurrentAudioDriver SDL_GetCurrentAudioDriver_REAL
#define SDL_OpenAudio SDL_OpenAudio_REAL
#define SDL_GetNumAudioDevices SDL_GetNumAudioDevices_REAL
#define SDL_GetAudioDeviceName SDL_GetAudioDeviceName_REAL
#define SDL_OpenAudioDevice SDL_OpenAudioDevice_REAL
#define SDL_GetAudioStatus SDL_GetAudioStatus_REAL
#define SDL_GetAudioDeviceStatus SDL_GetAudioDeviceStatus_REAL
#define SDL_PauseAudio SDL_PauseAudio_REAL
#define SDL_PauseAudioDevice SDL_PauseAudioDevice_REAL
#define SDL_LoadWAV_RW SDL_LoadWAV_RW_REAL
#define SDL_FreeWAV SDL_FreeWAV_REAL
#define SDL_BuildAudioCVT SDL_BuildAudioCVT_REAL
#define SDL_ConvertAudio SDL_ConvertAudio_REAL
#define SDL_MixAudio SDL_MixAudio_REAL
#define SDL_MixAudioFormat SDL_MixAudioFormat_REAL
#define SDL_LockAudio SDL_LockAudio_REAL
#define SDL_LockAudioDevice SDL_LockAudioDevice_REAL
#define SDL_UnlockAudio SDL_UnlockAudio_REAL
#define SDL_UnlockAudioDevice SDL_UnlockAudioDevice_REAL
#define SDL_CloseAudio SDL_CloseAudio_REAL
#define SDL_CloseAudioDevice SDL_CloseAudioDevice_REAL
#define SDL_SetClipboardText SDL_SetClipboardText_REAL
#define SDL_GetClipboardText SDL_GetClipboardText_REAL
#define SDL_HasClipboardText SDL_HasClipboardText_REAL
#define SDL_GetCPUCount SDL_GetCPUCount_REAL
#define SDL_GetCPUCacheLineSize SDL_GetCPUCacheLineSize_REAL
#define SDL_HasRDTSC SDL_HasRDTSC_REAL
#define SDL_HasAltiVec SDL_HasAltiVec_REAL
#define SDL_HasMMX SDL_HasMMX_REAL
#define SDL_Has3DNow SDL_Has3DNow_REAL
#define SDL_HasSSE SDL_HasSSE_REAL
#define SDL_HasSSE2 SDL_HasSSE2_REAL
#define SDL_HasSSE3 SDL_HasSSE3_REAL
#define SDL_HasSSE41 SDL_HasSSE41_REAL
#define SDL_HasSSE42 SDL_HasSSE42_REAL
#define SDL_GetSystemRAM SDL_GetSystemRAM_REAL
#define SDL_GetError SDL_GetError_REAL
#define SDL_ClearError SDL_ClearError_REAL
#define SDL_Error SDL_Error_REAL
#define SDL_PumpEvents SDL_PumpEvents_REAL
#define SDL_PeepEvents SDL_PeepEvents_REAL
#define SDL_HasEvent SDL_HasEvent_REAL
#define SDL_HasEvents SDL_HasEvents_REAL
#define SDL_FlushEvent SDL_FlushEvent_REAL
#define SDL_FlushEvents SDL_FlushEvents_REAL
#define SDL_PollEvent SDL_PollEvent_REAL
#define SDL_WaitEvent SDL_WaitEvent_REAL
#define SDL_WaitEventTimeout SDL_WaitEventTimeout_REAL
#define SDL_PushEvent SDL_PushEvent_REAL
#define SDL_SetEventFilter SDL_SetEventFilter_REAL
#define SDL_GetEventFilter SDL_GetEventFilter_REAL
#define SDL_AddEventWatch SDL_AddEventWatch_REAL
#define SDL_DelEventWatch SDL_DelEventWatch_REAL
#define SDL_FilterEvents SDL_FilterEvents_REAL
#define SDL_EventState SDL_EventState_REAL
#define SDL_RegisterEvents SDL_RegisterEvents_REAL
#define SDL_GetBasePath SDL_GetBasePath_REAL
#define SDL_GetPrefPath SDL_GetPrefPath_REAL
#define SDL_GameControllerAddMapping SDL_GameControllerAddMapping_REAL
#define SDL_GameControllerMappingForGUID SDL_GameControllerMappingForGUID_REAL
#define SDL_GameControllerMapping SDL_GameControllerMapping_REAL
#define SDL_IsGameController SDL_IsGameController_REAL
#define SDL_GameControllerNameForIndex SDL_GameControllerNameForIndex_REAL
#define SDL_GameControllerOpen SDL_GameControllerOpen_REAL
#define SDL_GameControllerName SDL_GameControllerName_REAL
#define SDL_GameControllerGetAttached SDL_GameControllerGetAttached_REAL
#define SDL_GameControllerGetJoystick SDL_GameControllerGetJoystick_REAL
#define SDL_GameControllerEventState SDL_GameControllerEventState_REAL
#define SDL_GameControllerUpdate SDL_GameControllerUpdate_REAL
#define SDL_GameControllerGetAxisFromString SDL_GameControllerGetAxisFromString_REAL
#define SDL_GameControllerGetStringForAxis SDL_GameControllerGetStringForAxis_REAL
#define SDL_GameControllerGetBindForAxis SDL_GameControllerGetBindForAxis_REAL
#define SDL_GameControllerGetAxis SDL_GameControllerGetAxis_REAL
#define SDL_GameControllerGetButtonFromString SDL_GameControllerGetButtonFromString_REAL
#define SDL_GameControllerGetStringForButton SDL_GameControllerGetStringForButton_REAL
#define SDL_GameControllerGetBindForButton SDL_GameControllerGetBindForButton_REAL
#define SDL_GameControllerGetButton SDL_GameControllerGetButton_REAL
#define SDL_GameControllerClose SDL_GameControllerClose_REAL
#define SDL_RecordGesture SDL_RecordGesture_REAL
#define SDL_SaveAllDollarTemplates SDL_SaveAllDollarTemplates_REAL
#define SDL_SaveDollarTemplate SDL_SaveDollarTemplate_REAL
#define SDL_LoadDollarTemplates SDL_LoadDollarTemplates_REAL
#define SDL_NumHaptics SDL_NumHaptics_REAL
#define SDL_HapticName SDL_HapticName_REAL
#define SDL_HapticOpen SDL_HapticOpen_REAL
#define SDL_HapticOpened SDL_HapticOpened_REAL
#define SDL_HapticIndex SDL_HapticIndex_REAL
#define SDL_MouseIsHaptic SDL_MouseIsHaptic_REAL
#define SDL_HapticOpenFromMouse SDL_HapticOpenFromMouse_REAL
#define SDL_JoystickIsHaptic SDL_JoystickIsHaptic_REAL
#define SDL_HapticOpenFromJoystick SDL_HapticOpenFromJoystick_REAL
#define SDL_HapticClose SDL_HapticClose_REAL
#define SDL_HapticNumEffects SDL_HapticNumEffects_REAL
#define SDL_HapticNumEffectsPlaying SDL_HapticNumEffectsPlaying_REAL
#define SDL_HapticQuery SDL_HapticQuery_REAL
#define SDL_HapticNumAxes SDL_HapticNumAxes_REAL
#define SDL_HapticEffectSupported SDL_HapticEffectSupported_REAL
#define SDL_HapticNewEffect SDL_HapticNewEffect_REAL
#define SDL_HapticUpdateEffect SDL_HapticUpdateEffect_REAL
#define SDL_HapticRunEffect SDL_HapticRunEffect_REAL
#define SDL_HapticStopEffect SDL_HapticStopEffect_REAL
#define SDL_HapticDestroyEffect SDL_HapticDestroyEffect_REAL
#define SDL_HapticGetEffectStatus SDL_HapticGetEffectStatus_REAL
#define SDL_HapticSetGain SDL_HapticSetGain_REAL
#define SDL_HapticSetAutocenter SDL_HapticSetAutocenter_REAL
#define SDL_HapticPause SDL_HapticPause_REAL
#define SDL_HapticUnpause SDL_HapticUnpause_REAL
#define SDL_HapticStopAll SDL_HapticStopAll_REAL
#define SDL_HapticRumbleSupported SDL_HapticRumbleSupported_REAL
#define SDL_HapticRumbleInit SDL_HapticRumbleInit_REAL
#define SDL_HapticRumblePlay SDL_HapticRumblePlay_REAL
#define SDL_HapticRumbleStop SDL_HapticRumbleStop_REAL
#define SDL_SetHintWithPriority SDL_SetHintWithPriority_REAL
#define SDL_SetHint SDL_SetHint_REAL
#define SDL_GetHint SDL_GetHint_REAL
#define SDL_AddHintCallback SDL_AddHintCallback_REAL
#define SDL_DelHintCallback SDL_DelHintCallback_REAL
#define SDL_ClearHints SDL_ClearHints_REAL
#define SDL_NumJoysticks SDL_NumJoysticks_REAL
#define SDL_JoystickNameForIndex SDL_JoystickNameForIndex_REAL
#define SDL_JoystickOpen SDL_JoystickOpen_REAL
#define SDL_JoystickName SDL_JoystickName_REAL
#define SDL_JoystickGetDeviceGUID SDL_JoystickGetDeviceGUID_REAL
#define SDL_JoystickGetGUID SDL_JoystickGetGUID_REAL
#define SDL_JoystickGetGUIDString SDL_JoystickGetGUIDString_REAL
#define SDL_JoystickGetGUIDFromString SDL_JoystickGetGUIDFromString_REAL
#define SDL_JoystickGetAttached SDL_JoystickGetAttached_REAL
#define SDL_JoystickInstanceID SDL_JoystickInstanceID_REAL
#define SDL_JoystickNumAxes SDL_JoystickNumAxes_REAL
#define SDL_JoystickNumBalls SDL_JoystickNumBalls_REAL
#define SDL_JoystickNumHats SDL_JoystickNumHats_REAL
#define SDL_JoystickNumButtons SDL_JoystickNumButtons_REAL
#define SDL_JoystickUpdate SDL_JoystickUpdate_REAL
#define SDL_JoystickEventState SDL_JoystickEventState_REAL
#define SDL_JoystickGetAxis SDL_JoystickGetAxis_REAL
#define SDL_JoystickGetHat SDL_JoystickGetHat_REAL
#define SDL_JoystickGetBall SDL_JoystickGetBall_REAL
#define SDL_JoystickGetButton SDL_JoystickGetButton_REAL
#define SDL_JoystickClose SDL_JoystickClose_REAL
#define SDL_GetKeyboardFocus SDL_GetKeyboardFocus_REAL
#define SDL_GetKeyboardState SDL_GetKeyboardState_REAL
#define SDL_GetModState SDL_GetModState_REAL
#define SDL_SetModState SDL_SetModState_REAL
#define SDL_GetKeyFromScancode SDL_GetKeyFromScancode_REAL
#define SDL_GetScancodeFromKey SDL_GetScancodeFromKey_REAL
#define SDL_GetScancodeName SDL_GetScancodeName_REAL
#define SDL_GetScancodeFromName SDL_GetScancodeFromName_REAL
#define SDL_GetKeyName SDL_GetKeyName_REAL
#define SDL_GetKeyFromName SDL_GetKeyFromName_REAL
#define SDL_StartTextInput SDL_StartTextInput_REAL
#define SDL_IsTextInputActive SDL_IsTextInputActive_REAL
#define SDL_StopTextInput SDL_StopTextInput_REAL
#define SDL_SetTextInputRect SDL_SetTextInputRect_REAL
#define SDL_HasScreenKeyboardSupport SDL_HasScreenKeyboardSupport_REAL
#define SDL_IsScreenKeyboardShown SDL_IsScreenKeyboardShown_REAL
#define SDL_LoadObject SDL_LoadObject_REAL
#define SDL_LoadFunction SDL_LoadFunction_REAL
#define SDL_UnloadObject SDL_UnloadObject_REAL
#define SDL_LogSetAllPriority SDL_LogSetAllPriority_REAL
#define SDL_LogSetPriority SDL_LogSetPriority_REAL
#define SDL_LogGetPriority SDL_LogGetPriority_REAL
#define SDL_LogResetPriorities SDL_LogResetPriorities_REAL
#define SDL_LogMessageV SDL_LogMessageV_REAL
#define SDL_LogGetOutputFunction SDL_LogGetOutputFunction_REAL
#define SDL_LogSetOutputFunction SDL_LogSetOutputFunction_REAL
#define SDL_SetMainReady SDL_SetMainReady_REAL
#define SDL_ShowMessageBox SDL_ShowMessageBox_REAL
#define SDL_ShowSimpleMessageBox SDL_ShowSimpleMessageBox_REAL
#define SDL_GetMouseFocus SDL_GetMouseFocus_REAL
#define SDL_GetMouseState SDL_GetMouseState_REAL
#define SDL_GetRelativeMouseState SDL_GetRelativeMouseState_REAL
#define SDL_WarpMouseInWindow SDL_WarpMouseInWindow_REAL
#define SDL_SetRelativeMouseMode SDL_SetRelativeMouseMode_REAL
#define SDL_GetRelativeMouseMode SDL_GetRelativeMouseMode_REAL
#define SDL_CreateCursor SDL_CreateCursor_REAL
#define SDL_CreateColorCursor SDL_CreateColorCursor_REAL
#define SDL_CreateSystemCursor SDL_CreateSystemCursor_REAL
#define SDL_SetCursor SDL_SetCursor_REAL
#define SDL_GetCursor SDL_GetCursor_REAL
#define SDL_GetDefaultCursor SDL_GetDefaultCursor_REAL
#define SDL_FreeCursor SDL_FreeCursor_REAL
#define SDL_ShowCursor SDL_ShowCursor_REAL
#define SDL_CreateMutex SDL_CreateMutex_REAL
#define SDL_LockMutex SDL_LockMutex_REAL
#define SDL_TryLockMutex SDL_TryLockMutex_REAL
#define SDL_UnlockMutex SDL_UnlockMutex_REAL
#define SDL_DestroyMutex SDL_DestroyMutex_REAL
#define SDL_CreateSemaphore SDL_CreateSemaphore_REAL
#define SDL_DestroySemaphore SDL_DestroySemaphore_REAL
#define SDL_SemWait SDL_SemWait_REAL
#define SDL_SemTryWait SDL_SemTryWait_REAL
#define SDL_SemWaitTimeout SDL_SemWaitTimeout_REAL
#define SDL_SemPost SDL_SemPost_REAL
#define SDL_SemValue SDL_SemValue_REAL
#define SDL_CreateCond SDL_CreateCond_REAL
#define SDL_DestroyCond SDL_DestroyCond_REAL
#define SDL_CondSignal SDL_CondSignal_REAL
#define SDL_CondBroadcast SDL_CondBroadcast_REAL
#define SDL_CondWait SDL_CondWait_REAL
#define SDL_CondWaitTimeout SDL_CondWaitTimeout_REAL
#define SDL_GetPixelFormatName SDL_GetPixelFormatName_REAL
#define SDL_PixelFormatEnumToMasks SDL_PixelFormatEnumToMasks_REAL
#define SDL_MasksToPixelFormatEnum SDL_MasksToPixelFormatEnum_REAL
#define SDL_AllocFormat SDL_AllocFormat_REAL
#define SDL_FreeFormat SDL_FreeFormat_REAL
#define SDL_AllocPalette SDL_AllocPalette_REAL
#define SDL_SetPixelFormatPalette SDL_SetPixelFormatPalette_REAL
#define SDL_SetPaletteColors SDL_SetPaletteColors_REAL
#define SDL_FreePalette SDL_FreePalette_REAL
#define SDL_MapRGB SDL_MapRGB_REAL
#define SDL_MapRGBA SDL_MapRGBA_REAL
#define SDL_GetRGB SDL_GetRGB_REAL
#define SDL_GetRGBA SDL_GetRGBA_REAL
#define SDL_CalculateGammaRamp SDL_CalculateGammaRamp_REAL
#define SDL_GetPlatform SDL_GetPlatform_REAL
#define SDL_GetPowerInfo SDL_GetPowerInfo_REAL
#define SDL_HasIntersection SDL_HasIntersection_REAL
#define SDL_IntersectRect SDL_IntersectRect_REAL
#define SDL_UnionRect SDL_UnionRect_REAL
#define SDL_EnclosePoints SDL_EnclosePoints_REAL
#define SDL_IntersectRectAndLine SDL_IntersectRectAndLine_REAL
#define SDL_GetNumRenderDrivers SDL_GetNumRenderDrivers_REAL
#define SDL_GetRenderDriverInfo SDL_GetRenderDriverInfo_REAL
#define SDL_CreateWindowAndRenderer SDL_CreateWindowAndRenderer_REAL
#define SDL_CreateRenderer SDL_CreateRenderer_REAL
#define SDL_CreateSoftwareRenderer SDL_CreateSoftwareRenderer_REAL
#define SDL_GetRenderer SDL_GetRenderer_REAL
#define SDL_GetRendererInfo SDL_GetRendererInfo_REAL
#define SDL_GetRendererOutputSize SDL_GetRendererOutputSize_REAL
#define SDL_CreateTexture SDL_CreateTexture_REAL
#define SDL_CreateTextureFromSurface SDL_CreateTextureFromSurface_REAL
#define SDL_QueryTexture SDL_QueryTexture_REAL
#define SDL_SetTextureColorMod SDL_SetTextureColorMod_REAL
#define SDL_GetTextureColorMod SDL_GetTextureColorMod_REAL
#define SDL_SetTextureAlphaMod SDL_SetTextureAlphaMod_REAL
#define SDL_GetTextureAlphaMod SDL_GetTextureAlphaMod_REAL
#define SDL_SetTextureBlendMode SDL_SetTextureBlendMode_REAL
#define SDL_GetTextureBlendMode SDL_GetTextureBlendMode_REAL
#define SDL_UpdateTexture SDL_UpdateTexture_REAL
#define SDL_UpdateYUVTexture SDL_UpdateYUVTexture_REAL
#define SDL_LockTexture SDL_LockTexture_REAL
#define SDL_UnlockTexture SDL_UnlockTexture_REAL
#define SDL_RenderTargetSupported SDL_RenderTargetSupported_REAL
#define SDL_SetRenderTarget SDL_SetRenderTarget_REAL
#define SDL_GetRenderTarget SDL_GetRenderTarget_REAL
#define SDL_RenderSetLogicalSize SDL_RenderSetLogicalSize_REAL
#define SDL_RenderGetLogicalSize SDL_RenderGetLogicalSize_REAL
#define SDL_RenderSetViewport SDL_RenderSetViewport_REAL
#define SDL_RenderGetViewport SDL_RenderGetViewport_REAL
#define SDL_RenderSetClipRect SDL_RenderSetClipRect_REAL
#define SDL_RenderGetClipRect SDL_RenderGetClipRect_REAL
#define SDL_RenderSetScale SDL_RenderSetScale_REAL
#define SDL_RenderGetScale SDL_RenderGetScale_REAL
#define SDL_SetRenderDrawColor SDL_SetRenderDrawColor_REAL
#define SDL_GetRenderDrawColor SDL_GetRenderDrawColor_REAL
#define SDL_SetRenderDrawBlendMode SDL_SetRenderDrawBlendMode_REAL
#define SDL_GetRenderDrawBlendMode SDL_GetRenderDrawBlendMode_REAL
#define SDL_RenderClear SDL_RenderClear_REAL
#define SDL_RenderDrawPoint SDL_RenderDrawPoint_REAL
#define SDL_RenderDrawPoints SDL_RenderDrawPoints_REAL
#define SDL_RenderDrawLine SDL_RenderDrawLine_REAL
#define SDL_RenderDrawLines SDL_RenderDrawLines_REAL
#define SDL_RenderDrawRect SDL_RenderDrawRect_REAL
#define SDL_RenderDrawRects SDL_RenderDrawRects_REAL
#define SDL_RenderFillRect SDL_RenderFillRect_REAL
#define SDL_RenderFillRects SDL_RenderFillRects_REAL
#define SDL_RenderCopy SDL_RenderCopy_REAL
#define SDL_RenderCopyEx SDL_RenderCopyEx_REAL
#define SDL_RenderReadPixels SDL_RenderReadPixels_REAL
#define SDL_RenderPresent SDL_RenderPresent_REAL
#define SDL_DestroyTexture SDL_DestroyTexture_REAL
#define SDL_DestroyRenderer SDL_DestroyRenderer_REAL
#define SDL_GL_BindTexture SDL_GL_BindTexture_REAL
#define SDL_GL_UnbindTexture SDL_GL_UnbindTexture_REAL
#define SDL_RWFromFile SDL_RWFromFile_REAL
#define SDL_RWFromMem SDL_RWFromMem_REAL
#define SDL_RWFromConstMem SDL_RWFromConstMem_REAL
#define SDL_AllocRW SDL_AllocRW_REAL
#define SDL_FreeRW SDL_FreeRW_REAL
#define SDL_ReadU8 SDL_ReadU8_REAL
#define SDL_ReadLE16 SDL_ReadLE16_REAL
#define SDL_ReadBE16 SDL_ReadBE16_REAL
#define SDL_ReadLE32 SDL_ReadLE32_REAL
#define SDL_ReadBE32 SDL_ReadBE32_REAL
#define SDL_ReadLE64 SDL_ReadLE64_REAL
#define SDL_ReadBE64 SDL_ReadBE64_REAL
#define SDL_WriteU8 SDL_WriteU8_REAL
#define SDL_WriteLE16 SDL_WriteLE16_REAL
#define SDL_WriteBE16 SDL_WriteBE16_REAL
#define SDL_WriteLE32 SDL_WriteLE32_REAL
#define SDL_WriteBE32 SDL_WriteBE32_REAL
#define SDL_WriteLE64 SDL_WriteLE64_REAL
#define SDL_WriteBE64 SDL_WriteBE64_REAL
#define SDL_CreateShapedWindow SDL_CreateShapedWindow_REAL
#define SDL_IsShapedWindow SDL_IsShapedWindow_REAL
#define SDL_SetWindowShape SDL_SetWindowShape_REAL
#define SDL_GetShapedWindowMode SDL_GetShapedWindowMode_REAL
#define SDL_malloc SDL_malloc_REAL
#define SDL_calloc SDL_calloc_REAL
#define SDL_realloc SDL_realloc_REAL
#define SDL_free SDL_free_REAL
#define SDL_getenv SDL_getenv_REAL
#define SDL_setenv SDL_setenv_REAL
#define SDL_qsort SDL_qsort_REAL
#define SDL_abs SDL_abs_REAL
#define SDL_isdigit SDL_isdigit_REAL
#define SDL_isspace SDL_isspace_REAL
#define SDL_toupper SDL_toupper_REAL
#define SDL_tolower SDL_tolower_REAL
#define SDL_memset SDL_memset_REAL
#define SDL_memcpy SDL_memcpy_REAL
#define SDL_memmove SDL_memmove_REAL
#define SDL_memcmp SDL_memcmp_REAL
#define SDL_wcslen SDL_wcslen_REAL
#define SDL_wcslcpy SDL_wcslcpy_REAL
#define SDL_wcslcat SDL_wcslcat_REAL
#define SDL_strlen SDL_strlen_REAL
#define SDL_strlcpy SDL_strlcpy_REAL
#define SDL_utf8strlcpy SDL_utf8strlcpy_REAL
#define SDL_strlcat SDL_strlcat_REAL
#define SDL_strdup SDL_strdup_REAL
#define SDL_strrev SDL_strrev_REAL
#define SDL_strupr SDL_strupr_REAL
#define SDL_strlwr SDL_strlwr_REAL
#define SDL_strchr SDL_strchr_REAL
#define SDL_strrchr SDL_strrchr_REAL
#define SDL_strstr SDL_strstr_REAL
#define SDL_itoa SDL_itoa_REAL
#define SDL_uitoa SDL_uitoa_REAL
#define SDL_ltoa SDL_ltoa_REAL
#define SDL_ultoa SDL_ultoa_REAL
#define SDL_lltoa SDL_lltoa_REAL
#define SDL_ulltoa SDL_ulltoa_REAL
#define SDL_atoi SDL_atoi_REAL
#define SDL_atof SDL_atof_REAL
#define SDL_strtol SDL_strtol_REAL
#define SDL_strtoul SDL_strtoul_REAL
#define SDL_strtoll SDL_strtoll_REAL
#define SDL_strtoull SDL_strtoull_REAL
#define SDL_strtod SDL_strtod_REAL
#define SDL_strcmp SDL_strcmp_REAL
#define SDL_strncmp SDL_strncmp_REAL
#define SDL_strcasecmp SDL_strcasecmp_REAL
#define SDL_strncasecmp SDL_strncasecmp_REAL
#define SDL_vsnprintf SDL_vsnprintf_REAL
#define SDL_acos SDL_acos_REAL
#define SDL_asin SDL_asin_REAL
#define SDL_atan SDL_atan_REAL
#define SDL_atan2 SDL_atan2_REAL
#define SDL_ceil SDL_ceil_REAL
#define SDL_copysign SDL_copysign_REAL
#define SDL_cos SDL_cos_REAL
#define SDL_cosf SDL_cosf_REAL
#define SDL_fabs SDL_fabs_REAL
#define SDL_floor SDL_floor_REAL
#define SDL_log SDL_log_REAL
#define SDL_pow SDL_pow_REAL
#define SDL_scalbn SDL_scalbn_REAL
#define SDL_sin SDL_sin_REAL
#define SDL_sinf SDL_sinf_REAL
#define SDL_sqrt SDL_sqrt_REAL
#define SDL_iconv_open SDL_iconv_open_REAL
#define SDL_iconv_close SDL_iconv_close_REAL
#define SDL_iconv SDL_iconv_REAL
#define SDL_iconv_string SDL_iconv_string_REAL
#define SDL_CreateRGBSurfaceWithFormat SDL_CreateRGBSurfaceWithFormat_REAL
#define SDL_CreateRGBSurfaceWithFormatFrom SDL_CreateRGBSurfaceWithFormatFrom_REAL
#define SDL_CreateRGBSurface SDL_CreateRGBSurface_REAL
#define SDL_CreateRGBSurfaceFrom SDL_CreateRGBSurfaceFrom_REAL
#define SDL_FreeSurface SDL_FreeSurface_REAL
#define SDL_SetSurfacePalette SDL_SetSurfacePalette_REAL
#define SDL_LockSurface SDL_LockSurface_REAL
#define SDL_UnlockSurface SDL_UnlockSurface_REAL
#define SDL_LoadBMP_RW SDL_LoadBMP_RW_REAL
#define SDL_SaveBMP_RW SDL_SaveBMP_RW_REAL
#define SDL_SetSurfaceRLE SDL_SetSurfaceRLE_REAL
#define SDL_SetColorKey SDL_SetColorKey_REAL
#define SDL_GetColorKey SDL_GetColorKey_REAL
#define SDL_SetSurfaceColorMod SDL_SetSurfaceColorMod_REAL
#define SDL_GetSurfaceColorMod SDL_GetSurfaceColorMod_REAL
#define SDL_SetSurfaceAlphaMod SDL_SetSurfaceAlphaMod_REAL
#define SDL_GetSurfaceAlphaMod SDL_GetSurfaceAlphaMod_REAL
#define SDL_SetSurfaceBlendMode SDL_SetSurfaceBlendMode_REAL
#define SDL_GetSurfaceBlendMode SDL_GetSurfaceBlendMode_REAL
#define SDL_SetClipRect SDL_SetClipRect_REAL
#define SDL_GetClipRect SDL_GetClipRect_REAL
#define SDL_ConvertSurface SDL_ConvertSurface_REAL
#define SDL_ConvertSurfaceFormat SDL_ConvertSurfaceFormat_REAL
#define SDL_ConvertPixels SDL_ConvertPixels_REAL
#define SDL_FillRect SDL_FillRect_REAL
#define SDL_FillRects SDL_FillRects_REAL
#define SDL_UpperBlit SDL_UpperBlit_REAL
#define SDL_LowerBlit SDL_LowerBlit_REAL
#define SDL_SoftStretch SDL_SoftStretch_REAL
#define SDL_UpperBlitScaled SDL_UpperBlitScaled_REAL
#define SDL_LowerBlitScaled SDL_LowerBlitScaled_REAL
#define SDL_GetWindowWMInfo SDL_GetWindowWMInfo_REAL
#define SDL_GetThreadName SDL_GetThreadName_REAL
#define SDL_ThreadID SDL_ThreadID_REAL
#define SDL_GetThreadID SDL_GetThreadID_REAL
#define SDL_SetThreadPriority SDL_SetThreadPriority_REAL
#define SDL_WaitThread SDL_WaitThread_REAL
#define SDL_DetachThread SDL_DetachThread_REAL
#define SDL_TLSCreate SDL_TLSCreate_REAL
#define SDL_TLSGet SDL_TLSGet_REAL
#define SDL_TLSSet SDL_TLSSet_REAL
#define SDL_GetTicks SDL_GetTicks_REAL
#define SDL_GetPerformanceCounter SDL_GetPerformanceCounter_REAL
#define SDL_GetPerformanceFrequency SDL_GetPerformanceFrequency_REAL
#define SDL_Delay SDL_Delay_REAL
#define SDL_AddTimer SDL_AddTimer_REAL
#define SDL_RemoveTimer SDL_RemoveTimer_REAL
#define SDL_GetNumTouchDevices SDL_GetNumTouchDevices_REAL
#define SDL_GetTouchDevice SDL_GetTouchDevice_REAL
#define SDL_GetNumTouchFingers SDL_GetNumTouchFingers_REAL
#define SDL_GetTouchFinger SDL_GetTouchFinger_REAL
#define SDL_GetVersion SDL_GetVersion_REAL
#define SDL_GetRevision SDL_GetRevision_REAL
#define SDL_GetRevisionNumber SDL_GetRevisionNumber_REAL
#define SDL_GetNumVideoDrivers SDL_GetNumVideoDrivers_REAL
#define SDL_GetVideoDriver SDL_GetVideoDriver_REAL
#define SDL_VideoInit SDL_VideoInit_REAL
#define SDL_VideoQuit SDL_VideoQuit_REAL
#define SDL_GetCurrentVideoDriver SDL_GetCurrentVideoDriver_REAL
#define SDL_GetNumVideoDisplays SDL_GetNumVideoDisplays_REAL
#define SDL_GetDisplayName SDL_GetDisplayName_REAL
#define SDL_GetDisplayBounds SDL_GetDisplayBounds_REAL
#define SDL_GetDisplayDPI SDL_GetDisplayDPI_REAL
#define SDL_GetNumDisplayModes SDL_GetNumDisplayModes_REAL
#define SDL_GetDisplayMode SDL_GetDisplayMode_REAL
#define SDL_GetDesktopDisplayMode SDL_GetDesktopDisplayMode_REAL
#define SDL_GetCurrentDisplayMode SDL_GetCurrentDisplayMode_REAL
#define SDL_GetClosestDisplayMode SDL_GetClosestDisplayMode_REAL
#define SDL_GetWindowDisplayIndex SDL_GetWindowDisplayIndex_REAL
#define SDL_SetWindowDisplayMode SDL_SetWindowDisplayMode_REAL
#define SDL_GetWindowDisplayMode SDL_GetWindowDisplayMode_REAL
#define SDL_GetWindowPixelFormat SDL_GetWindowPixelFormat_REAL
#define SDL_CreateWindow SDL_CreateWindow_REAL
#define SDL_CreateWindowFrom SDL_CreateWindowFrom_REAL
#define SDL_GetWindowID SDL_GetWindowID_REAL
#define SDL_GetWindowFromID SDL_GetWindowFromID_REAL
#define SDL_GetWindowFlags SDL_GetWindowFlags_REAL
#define SDL_SetWindowTitle SDL_SetWindowTitle_REAL
#define SDL_GetWindowTitle SDL_GetWindowTitle_REAL
#define SDL_SetWindowIcon SDL_SetWindowIcon_REAL
#define SDL_SetWindowData SDL_SetWindowData_REAL
#define SDL_GetWindowData SDL_GetWindowData_REAL
#define SDL_SetWindowPosition SDL_SetWindowPosition_REAL
#define SDL_GetWindowPosition SDL_GetWindowPosition_REAL
#define SDL_SetWindowSize SDL_SetWindowSize_REAL
#define SDL_GetWindowSize SDL_GetWindowSize_REAL
#define SDL_SetWindowMinimumSize SDL_SetWindowMinimumSize_REAL
#define SDL_GetWindowMinimumSize SDL_GetWindowMinimumSize_REAL
#define SDL_SetWindowMaximumSize SDL_SetWindowMaximumSize_REAL
#define SDL_GetWindowMaximumSize SDL_GetWindowMaximumSize_REAL
#define SDL_SetWindowBordered SDL_SetWindowBordered_REAL
#define SDL_ShowWindow SDL_ShowWindow_REAL
#define SDL_HideWindow SDL_HideWindow_REAL
#define SDL_RaiseWindow SDL_RaiseWindow_REAL
#define SDL_MaximizeWindow SDL_MaximizeWindow_REAL
#define SDL_MinimizeWindow SDL_MinimizeWindow_REAL
#define SDL_RestoreWindow SDL_RestoreWindow_REAL
#define SDL_SetWindowFullscreen SDL_SetWindowFullscreen_REAL
#define SDL_GetWindowSurface SDL_GetWindowSurface_REAL
#define SDL_UpdateWindowSurface SDL_UpdateWindowSurface_REAL
#define SDL_UpdateWindowSurfaceRects SDL_UpdateWindowSurfaceRects_REAL
#define SDL_SetWindowGrab SDL_SetWindowGrab_REAL
#define SDL_GetWindowGrab SDL_GetWindowGrab_REAL
#define SDL_SetWindowBrightness SDL_SetWindowBrightness_REAL
#define SDL_GetWindowBrightness SDL_GetWindowBrightness_REAL
#define SDL_SetWindowGammaRamp SDL_SetWindowGammaRamp_REAL
#define SDL_GetWindowGammaRamp SDL_GetWindowGammaRamp_REAL
#define SDL_DestroyWindow SDL_DestroyWindow_REAL
#define SDL_IsScreenSaverEnabled SDL_IsScreenSaverEnabled_REAL
#define SDL_EnableScreenSaver SDL_EnableScreenSaver_REAL
#define SDL_DisableScreenSaver SDL_DisableScreenSaver_REAL
#define SDL_GL_LoadLibrary SDL_GL_LoadLibrary_REAL
#define SDL_GL_GetProcAddress SDL_GL_GetProcAddress_REAL
#define SDL_GL_UnloadLibrary SDL_GL_UnloadLibrary_REAL
#define SDL_GL_ExtensionSupported SDL_GL_ExtensionSupported_REAL
#define SDL_GL_SetAttribute SDL_GL_SetAttribute_REAL
#define SDL_GL_GetAttribute SDL_GL_GetAttribute_REAL
#define SDL_GL_CreateContext SDL_GL_CreateContext_REAL
#define SDL_GL_MakeCurrent SDL_GL_MakeCurrent_REAL
#define SDL_GL_GetCurrentWindow SDL_GL_GetCurrentWindow_REAL
#define SDL_GL_GetCurrentContext SDL_GL_GetCurrentContext_REAL
#define SDL_GL_GetDrawableSize SDL_GL_GetDrawableSize_REAL
#define SDL_GL_SetSwapInterval SDL_GL_SetSwapInterval_REAL
#define SDL_GL_GetSwapInterval SDL_GL_GetSwapInterval_REAL
#define SDL_GL_SwapWindow SDL_GL_SwapWindow_REAL
#define SDL_GL_DeleteContext SDL_GL_DeleteContext_REAL
#define SDL_vsscanf SDL_vsscanf_REAL
#define SDL_GameControllerAddMappingsFromRW SDL_GameControllerAddMappingsFromRW_REAL
#define SDL_GL_ResetAttributes SDL_GL_ResetAttributes_REAL
#define SDL_HasAVX SDL_HasAVX_REAL
#define SDL_GetDefaultAssertionHandler SDL_GetDefaultAssertionHandler_REAL
#define SDL_GetAssertionHandler SDL_GetAssertionHandler_REAL
#define SDL_DXGIGetOutputInfo SDL_DXGIGetOutputInfo_REAL
#define SDL_RenderIsClipEnabled SDL_RenderIsClipEnabled_REAL
#define SDL_WinRTRunApp SDL_WinRTRunApp_REAL
#define SDL_WarpMouseGlobal SDL_WarpMouseGlobal_REAL
#define SDL_WinRTGetFSPathUNICODE SDL_WinRTGetFSPathUNICODE_REAL
#define SDL_WinRTGetFSPathUTF8 SDL_WinRTGetFSPathUTF8_REAL
#define SDL_WinRTRunApp SDL_WinRTRunApp_REAL
#define SDL_sqrtf SDL_sqrtf_REAL
#define SDL_tan SDL_tan_REAL
#define SDL_tanf SDL_tanf_REAL
#define SDL_CaptureMouse SDL_CaptureMouse_REAL
#define SDL_SetWindowHitTest SDL_SetWindowHitTest_REAL
#define SDL_GetGlobalMouseState SDL_GetGlobalMouseState_REAL
#define SDL_HasAVX2 SDL_HasAVX2_REAL
#define SDL_QueueAudio SDL_QueueAudio_REAL
#define SDL_GetQueuedAudioSize SDL_GetQueuedAudioSize_REAL
#define SDL_ClearQueuedAudio SDL_ClearQueuedAudio_REAL
#define SDL_GetGrabbedWindow SDL_GetGrabbedWindow_REAL
#define SDL_SetWindowsMessageHook SDL_SetWindowsMessageHook_REAL
#define SDL_JoystickCurrentPowerLevel SDL_JoystickCurrentPowerLevel_REAL
#define SDL_GameControllerFromInstanceID SDL_GameControllerFromInstanceID_REAL
#define SDL_JoystickFromInstanceID SDL_JoystickFromInstanceID_REAL
#define SDL_GetDisplayUsableBounds SDL_GetDisplayUsableBounds_REAL
#define SDL_GetWindowBordersSize SDL_GetWindowBordersSize_REAL
#define SDL_SetWindowOpacity SDL_SetWindowOpacity_REAL
#define SDL_GetWindowOpacity SDL_GetWindowOpacity_REAL
#define SDL_SetWindowInputFocus SDL_SetWindowInputFocus_REAL
#define SDL_SetWindowModalFor SDL_SetWindowModalFor_REAL
#define SDL_RenderSetIntegerScale SDL_RenderSetIntegerScale_REAL
#define SDL_RenderGetIntegerScale SDL_RenderGetIntegerScale_REAL
#define SDL_DequeueAudio SDL_DequeueAudio_REAL
#define SDL_SetWindowResizable SDL_SetWindowResizable_REAL
#define SDL_CreateRGBSurfaceWithFormat SDL_CreateRGBSurfaceWithFormat_REAL
#define SDL_CreateRGBSurfaceWithFormatFrom SDL_CreateRGBSurfaceWithFormatFrom_REAL
#define SDL_GetHintBoolean SDL_GetHintBoolean_REAL
#define SDL_JoystickGetDeviceVendor SDL_JoystickGetDeviceVendor_REAL
#define SDL_JoystickGetDeviceProduct SDL_JoystickGetDeviceProduct_REAL
#define SDL_JoystickGetDeviceProductVersion SDL_JoystickGetDeviceProductVersion_REAL
#define SDL_JoystickGetVendor SDL_JoystickGetVendor_REAL
#define SDL_JoystickGetProduct SDL_JoystickGetProduct_REAL
#define SDL_JoystickGetProductVersion SDL_JoystickGetProductVersion_REAL
#define SDL_GameControllerGetVendor SDL_GameControllerGetVendor_REAL
#define SDL_GameControllerGetProduct SDL_GameControllerGetProduct_REAL
#define SDL_GameControllerGetProductVersion SDL_GameControllerGetProductVersion_REAL
#define SDL_HasNEON SDL_HasNEON_REAL
#define SDL_GameControllerNumMappings SDL_GameControllerNumMappings_REAL
#define SDL_GameControllerMappingForIndex SDL_GameControllerMappingForIndex_REAL
#define SDL_JoystickGetAxisInitialState SDL_JoystickGetAxisInitialState_REAL
#define SDL_JoystickGetDeviceType SDL_JoystickGetDeviceType_REAL
#define SDL_JoystickGetType SDL_JoystickGetType_REAL
#define SDL_MemoryBarrierReleaseFunction SDL_MemoryBarrierReleaseFunction_REAL
#define SDL_MemoryBarrierAcquireFunction SDL_MemoryBarrierAcquireFunction_REAL
#define SDL_JoystickGetDeviceInstanceID SDL_JoystickGetDeviceInstanceID_REAL
#define SDL_utf8strlen SDL_utf8strlen_REAL
#define SDL_LoadFile_RW SDL_LoadFile_RW_REAL
#define SDL_wcscmp SDL_wcscmp_REAL
#define SDL_ComposeCustomBlendMode SDL_ComposeCustomBlendMode_REAL
#define SDL_DuplicateSurface SDL_DuplicateSurface_REAL
#define SDL_Vulkan_LoadLibrary SDL_Vulkan_LoadLibrary_REAL
#define SDL_Vulkan_GetVkGetInstanceProcAddr SDL_Vulkan_GetVkGetInstanceProcAddr_REAL
#define SDL_Vulkan_UnloadLibrary SDL_Vulkan_UnloadLibrary_REAL
#define SDL_Vulkan_GetInstanceExtensions SDL_Vulkan_GetInstanceExtensions_REAL
#define SDL_Vulkan_CreateSurface SDL_Vulkan_CreateSurface_REAL
#define SDL_Vulkan_GetDrawableSize SDL_Vulkan_GetDrawableSize_REAL
#define SDL_LockJoysticks SDL_LockJoysticks_REAL
#define SDL_UnlockJoysticks SDL_UnlockJoysticks_REAL
#define SDL_GetMemoryFunctions SDL_GetMemoryFunctions_REAL
#define SDL_SetMemoryFunctions SDL_SetMemoryFunctions_REAL
#define SDL_GetNumAllocations SDL_GetNumAllocations_REAL
#define SDL_NewAudioStream SDL_NewAudioStream_REAL
#define SDL_AudioStreamPut SDL_AudioStreamPut_REAL
#define SDL_AudioStreamGet SDL_AudioStreamGet_REAL
#define SDL_AudioStreamClear SDL_AudioStreamClear_REAL
#define SDL_AudioStreamAvailable SDL_AudioStreamAvailable_REAL
#define SDL_FreeAudioStream SDL_FreeAudioStream_REAL
#define SDL_AudioStreamFlush SDL_AudioStreamFlush_REAL
#define SDL_acosf SDL_acosf_REAL
#define SDL_asinf SDL_asinf_REAL
#define SDL_atanf SDL_atanf_REAL
#define SDL_atan2f SDL_atan2f_REAL
#define SDL_ceilf SDL_ceilf_REAL
#define SDL_copysignf SDL_copysignf_REAL
#define SDL_fabsf SDL_fabsf_REAL
#define SDL_floorf SDL_floorf_REAL
#define SDL_logf SDL_logf_REAL
#define SDL_powf SDL_powf_REAL
#define SDL_scalbnf SDL_scalbnf_REAL
#define SDL_fmod SDL_fmod_REAL
#define SDL_fmodf SDL_fmodf_REAL
#define SDL_SetYUVConversionMode SDL_SetYUVConversionMode_REAL
#define SDL_GetYUVConversionMode SDL_GetYUVConversionMode_REAL
#define SDL_GetYUVConversionModeForResolution SDL_GetYUVConversionModeForResolution_REAL
#define SDL_RenderGetMetalLayer SDL_RenderGetMetalLayer_REAL
#define SDL_RenderGetMetalCommandEncoder SDL_RenderGetMetalCommandEncoder_REAL
#define SDL_IsAndroidTV SDL_IsAndroidTV_REAL
#define SDL_WinRTGetDeviceFamily SDL_WinRTGetDeviceFamily_REAL
#define SDL_log10 SDL_log10_REAL
#define SDL_log10f SDL_log10f_REAL
#define SDL_GameControllerMappingForDeviceIndex SDL_GameControllerMappingForDeviceIndex_REAL
#define SDL_LinuxSetThreadPriority SDL_LinuxSetThreadPriority_REAL
#define SDL_HasAVX512F SDL_HasAVX512F_REAL
#define SDL_IsChromebook SDL_IsChromebook_REAL
#define SDL_IsDeXMode SDL_IsDeXMode_REAL
#define SDL_AndroidBackButton SDL_AndroidBackButton_REAL
#define SDL_exp SDL_exp_REAL
#define SDL_expf SDL_expf_REAL
#define SDL_wcsdup SDL_wcsdup_REAL
#define SDL_GameControllerRumble SDL_GameControllerRumble_REAL
#define SDL_JoystickRumble SDL_JoystickRumble_REAL
#define SDL_NumSensors SDL_NumSensors_REAL
#define SDL_SensorGetDeviceName SDL_SensorGetDeviceName_REAL
#define SDL_SensorGetDeviceType SDL_SensorGetDeviceType_REAL
#define SDL_SensorGetDeviceNonPortableType SDL_SensorGetDeviceNonPortableType_REAL
#define SDL_SensorGetDeviceInstanceID SDL_SensorGetDeviceInstanceID_REAL
#define SDL_SensorOpen SDL_SensorOpen_REAL
#define SDL_SensorFromInstanceID SDL_SensorFromInstanceID_REAL
#define SDL_SensorGetName SDL_SensorGetName_REAL
#define SDL_SensorGetType SDL_SensorGetType_REAL
#define SDL_SensorGetNonPortableType SDL_SensorGetNonPortableType_REAL
#define SDL_SensorGetInstanceID SDL_SensorGetInstanceID_REAL
#define SDL_SensorGetData SDL_SensorGetData_REAL
#define SDL_SensorClose SDL_SensorClose_REAL
#define SDL_SensorUpdate SDL_SensorUpdate_REAL
#define SDL_IsTablet SDL_IsTablet_REAL
#define SDL_GetDisplayOrientation SDL_GetDisplayOrientation_REAL
#define SDL_HasColorKey SDL_HasColorKey_REAL
#define SDL_CreateThreadWithStackSize SDL_CreateThreadWithStackSize_REAL
#define SDL_JoystickGetDevicePlayerIndex SDL_JoystickGetDevicePlayerIndex_REAL
#define SDL_JoystickGetPlayerIndex SDL_JoystickGetPlayerIndex_REAL
#define SDL_GameControllerGetPlayerIndex SDL_GameControllerGetPlayerIndex_REAL
#define SDL_RenderFlush SDL_RenderFlush_REAL
#define SDL_RenderDrawPointF SDL_RenderDrawPointF_REAL
#define SDL_RenderDrawPointsF SDL_RenderDrawPointsF_REAL
#define SDL_RenderDrawLineF SDL_RenderDrawLineF_REAL
#define SDL_RenderDrawLinesF SDL_RenderDrawLinesF_REAL
#define SDL_RenderDrawRectF SDL_RenderDrawRectF_REAL
#define SDL_RenderDrawRectsF SDL_RenderDrawRectsF_REAL
#define SDL_RenderFillRectF SDL_RenderFillRectF_REAL
#define SDL_RenderFillRectsF SDL_RenderFillRectsF_REAL
#define SDL_RenderCopyF SDL_RenderCopyF_REAL
#define SDL_RenderCopyExF SDL_RenderCopyExF_REAL
#define SDL_GetTouchDeviceType SDL_GetTouchDeviceType_REAL
#define SDL_UIKitRunApp SDL_UIKitRunApp_REAL
#define SDL_SIMDGetAlignment SDL_SIMDGetAlignment_REAL
#define SDL_SIMDAlloc SDL_SIMDAlloc_REAL
#define SDL_SIMDFree SDL_SIMDFree_REAL
#define SDL_RWsize SDL_RWsize_REAL
#define SDL_RWseek SDL_RWseek_REAL
#define SDL_RWtell SDL_RWtell_REAL
#define SDL_RWread SDL_RWread_REAL
#define SDL_RWwrite SDL_RWwrite_REAL
#define SDL_RWclose SDL_RWclose_REAL
#define SDL_LoadFile SDL_LoadFile_REAL
#define SDL_Metal_CreateView SDL_Metal_CreateView_REAL
#define SDL_Metal_DestroyView SDL_Metal_DestroyView_REAL
#define SDL_LockTextureToSurface SDL_LockTextureToSurface_REAL
#define SDL_HasARMSIMD SDL_HasARMSIMD_REAL
#define SDL_strtokr SDL_strtokr_REAL
#define SDL_wcsstr SDL_wcsstr_REAL
#define SDL_wcsncmp SDL_wcsncmp_REAL
#define SDL_GameControllerTypeForIndex SDL_GameControllerTypeForIndex_REAL
#define SDL_GameControllerGetType SDL_GameControllerGetType_REAL
#define SDL_GameControllerFromPlayerIndex SDL_GameControllerFromPlayerIndex_REAL
#define SDL_GameControllerSetPlayerIndex SDL_GameControllerSetPlayerIndex_REAL
#define SDL_JoystickFromPlayerIndex SDL_JoystickFromPlayerIndex_REAL
#define SDL_JoystickSetPlayerIndex SDL_JoystickSetPlayerIndex_REAL
#define SDL_SetTextureScaleMode SDL_SetTextureScaleMode_REAL
#define SDL_GetTextureScaleMode SDL_GetTextureScaleMode_REAL
#define SDL_OnApplicationWillTerminate SDL_OnApplicationWillTerminate_REAL
#define SDL_OnApplicationDidReceiveMemoryWarning SDL_OnApplicationDidReceiveMemoryWarning_REAL
#define SDL_OnApplicationWillResignActive SDL_OnApplicationWillResignActive_REAL
#define SDL_OnApplicationDidEnterBackground SDL_OnApplicationDidEnterBackground_REAL
#define SDL_OnApplicationWillEnterForeground SDL_OnApplicationWillEnterForeground_REAL
#define SDL_OnApplicationDidBecomeActive SDL_OnApplicationDidBecomeActive_REAL
#define SDL_OnApplicationDidChangeStatusBarOrientation SDL_OnApplicationDidChangeStatusBarOrientation_REAL
#define SDL_GetAndroidSDKVersion SDL_GetAndroidSDKVersion_REAL
#define SDL_isupper SDL_isupper_REAL
#define SDL_islower SDL_islower_REAL
#define SDL_JoystickAttachVirtual SDL_JoystickAttachVirtual_REAL
#define SDL_JoystickDetachVirtual SDL_JoystickDetachVirtual_REAL
#define SDL_JoystickIsVirtual SDL_JoystickIsVirtual_REAL
#define SDL_JoystickSetVirtualAxis SDL_JoystickSetVirtualAxis_REAL
#define SDL_JoystickSetVirtualBall SDL_JoystickSetVirtualBall_REAL
#define SDL_JoystickSetVirtualButton SDL_JoystickSetVirtualButton_REAL
#define SDL_JoystickSetVirtualHat SDL_JoystickSetVirtualHat_REAL
#define SDL_GetErrorMsg SDL_GetErrorMsg_REAL
#define SDL_LockSensors SDL_LockSensors_REAL
#define SDL_UnlockSensors SDL_UnlockSensors_REAL
#define SDL_Metal_GetLayer SDL_Metal_GetLayer_REAL
#define SDL_Metal_GetDrawableSize SDL_Metal_GetDrawableSize_REAL
#define SDL_trunc SDL_trunc_REAL
#define SDL_truncf SDL_truncf_REAL
#define SDL_GetPreferredLocales SDL_GetPreferredLocales_REAL
#define SDL_SIMDRealloc SDL_SIMDRealloc_REAL
#define SDL_AndroidRequestPermission SDL_AndroidRequestPermission_REAL
#define SDL_OpenURL SDL_OpenURL_REAL
#define SDL_HasSurfaceRLE SDL_HasSurfaceRLE_REAL
#define SDL_GameControllerHasLED SDL_GameControllerHasLED_REAL
#define SDL_GameControllerSetLED SDL_GameControllerSetLED_REAL
#define SDL_JoystickHasLED SDL_JoystickHasLED_REAL
#define SDL_JoystickSetLED SDL_JoystickSetLED_REAL
#define SDL_GameControllerRumbleTriggers SDL_GameControllerRumbleTriggers_REAL
#define SDL_JoystickRumbleTriggers SDL_JoystickRumbleTriggers_REAL
