// rea decompile_all
// name: _SavageUpdaterCopyFirmware
// address: 0x2a8722
// body: available
// range: 0x2a8722-0x2a8d52 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _SavageUpdaterCopyFirmware(__CFDictionary *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  cfstringStruct *pcVar11;
  char *pcVar12;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  __CFString *local_70;
  undefined8 *local_68;
  __CFString *local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  __CFError *local_38;
  
  local_60 = (__CFString *)0x0;
  local_70 = (__CFString *)0x0;
  local_58 = 0;
  local_38 = (__CFError *)0x0;
  local_88 = 0;
  uStack_80 = 0;
  local_68 = param_2;
  if (param_1 == (__CFDictionary *)0x0) {
    local_48 = 0;
    local_38 = (__CFError *)
               _makeCFErrorWithDomain
                         ("SavageUpdaterCopyFirmware: options is NULL",2,0,&cf_SavageErrorDomain);
LAB_002a8c59:
    lVar5 = 0;
    local_50 = 0;
    local_40 = 0;
  }
  else {
    lVar5 = _CFDictionaryGetValue(param_1,&cf_DeviceInfo);
    if (lVar5 == 0) {
LAB_002a8bf0:
      local_38 = (__CFError *)
                 _makeCFErrorWithDomain
                           ("SavageUpdaterCopyFirmware: Missing device info",2,param_1,
                            &cf_SavageErrorDomain);
      local_48 = 0;
      goto LAB_002a8c59;
    }
    lVar6 = _CFGetTypeID(lVar5);
    lVar7 = _CFDictionaryGetTypeID();
    if (lVar6 != lVar7) goto LAB_002a8bf0;
    lVar6 = _CFCopyDescription(lVar5);
    if (lVar6 == 0) {
      SavageRestoreInfoLog
                ("%s [input]: DeviceInfo %s \n","SavageUpdaterCopyFirmware",
                 "No C string description available.");
    }
    else {
      cVar2 = _CFStringGetCString(lVar6,&_logString,0x1000,0);
      pcVar12 = "No C string description available.";
      if (cVar2 != '\0') {
        pcVar12 = &_logString;
      }
      SavageRestoreInfoLog("%s [input]: DeviceInfo %s \n","SavageUpdaterCopyFirmware",pcVar12);
      _CFRelease(lVar6);
    }
    local_40 = _SavageSafeRetain(lVar5);
    lVar5 = _CFDictionaryGetValue(local_40,&cf_YonkersDeviceInfo);
    if (lVar5 == 0) {
LAB_002a8939:
      local_50 = 0;
      lVar5 = 0;
LAB_002a8944:
      local_48 = 0;
LAB_002a894c:
      uVar4 = _GetRelevantMeasurementTags(local_40,&local_70,&local_58);
      if (local_70 == (__CFString *)0x0) {
        pcVar12 = "SavageUpdaterCopyFirmware: Unable to get kSavageTagMeasurementPatch";
      }
      else {
        if (local_58 != 0) {
          lVar6 = CreateFileData(param_1,local_70,&local_38);
          if (local_38 == (__CFError *)0x0) {
            if ((lVar6 == 0) || (lVar7 = _CFDataGetLength(lVar6), lVar7 == 0)) {
              pcVar12 = "SavageUpdaterCopyFirmware: Empty Savage firmware file";
              uStack_90 = 4;
            }
            else {
              uVar4 = _CFDataGetLength(lVar6);
              local_88 = CONCAT44(uVar4,(undefined4)local_88);
              lVar7 = _CFDataCreateMutable(0,0);
              if (lVar7 != 0) {
                _CFDataAppendBytes(lVar7,&local_88,0x10);
                uVar8 = _CFDataGetBytePtr(lVar6);
                uVar9 = _CFDataGetLength(lVar6);
                _CFDataAppendBytes(lVar7,uVar8,uVar9);
                if (lVar5 == 0) {
                  lVar5 = 0;
                }
                else {
                  _CFDictionaryAddValue(lVar5,&cf_SavageFirmware,lVar7);
                }
                goto LAB_002a8a19;
              }
              pcVar12 = "SavageUpdaterCopyFirmware: Cannot allocate memory for savageFirmwareData";
              uStack_90 = 3;
            }
            local_38 = (__CFError *)
                       _makeCFErrorWithDomain(pcVar12,uStack_90,param_1,&cf_SavageErrorDomain);
          }
          lVar7 = 0;
          goto LAB_002a8afb;
        }
        pcVar12 = "SavageUpdaterCopyFirmware: Unable to get kSavageTagMeasurementPatchVT";
      }
      local_38 = (__CFError *)_makeCFErrorWithDomain(pcVar12,uVar4,local_40,&cf_SavageErrorDomain);
    }
    else {
      lVar6 = _CFGetTypeID(lVar5);
      lVar7 = _CFDictionaryGetTypeID();
      if (lVar6 != lVar7) goto LAB_002a8939;
      local_48 = _SavageSafeRetain(lVar5);
      iVar3 = _GetYonkersMeasurementTags(local_48,&local_60);
      if ((iVar3 == 0) && (local_60 != (__CFString *)0x0)) {
        local_50 = CreateFileData(param_1,local_60,&local_38);
        if (local_38 != (__CFError *)0x0) {
LAB_002a8d46:
          lVar5 = 0;
          goto LAB_002a8d49;
        }
        if ((local_50 == 0) || (lVar5 = _CFDataGetLength(local_50), lVar5 == 0)) {
          pcVar11 = &cf_YonkersErrorDomain;
          pcVar12 = "SavageUpdaterCopyFirmware: Empty Yonkers firmware file?";
          uStack_90 = 4;
LAB_002a8d39:
          local_38 = (__CFError *)_makeCFErrorWithDomain(pcVar12,uStack_90,param_1,pcVar11);
          goto LAB_002a8d46;
        }
        lVar6 = _CFDataCreateMutable(0,0);
        lVar5 = local_50;
        if (lVar6 == 0) {
          pcVar11 = &cf_YonkersErrorDomain;
          pcVar12 = "SavageUpdaterCopyFirmware: Cannot allocate memory for yonkersFirmwareData";
LAB_002a8d37:
          uStack_90 = 3;
          goto LAB_002a8d39;
        }
        uVar8 = _CFDataGetBytePtr(local_50);
        uVar9 = _CFDataGetLength(lVar5);
        _CFDataAppendBytes(lVar6,uVar8,uVar9);
        lVar5 = _CFDictionaryCreateMutable
                          (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                           PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        if (lVar5 == 0) {
          pcVar11 = &cf_SavageErrorDomain;
          pcVar12 = "SavageUpdaterCopyFirmware: Cannot allocate memory for outputDict";
          goto LAB_002a8d37;
        }
        _CFDictionaryAddValue(lVar5,&cf_YonkersFirmware,lVar6);
        if (local_48 == 0) goto LAB_002a8944;
        lVar6 = _CFDictionaryGetCount(local_40);
        if (lVar6 != 1) goto LAB_002a894c;
        lVar7 = 0;
        lVar6 = 0;
LAB_002a8a19:
        lVar10 = _CFCopyDescription(lVar5);
        if (lVar10 == 0) {
          SavageRestoreInfoLog
                    ("%s [output]: %s \n","SavageUpdaterCopyFirmware",
                     "No C string description available.");
        }
        else {
          cVar2 = _CFStringGetCString(lVar10,&_logString,0x1000,0);
          pcVar12 = "No C string description available.";
          if (cVar2 != '\0') {
            pcVar12 = &_logString;
          }
          SavageRestoreInfoLog("%s [output]: %s \n","SavageUpdaterCopyFirmware",pcVar12);
          _CFRelease(lVar10);
        }
        lVar10 = _CFCopyDescription(lVar7);
        if (lVar10 == 0) {
          SavageRestoreInfoLog
                    ("%s [output]: %s \n","SavageUpdaterCopyFirmware",
                     "No C string description available.");
        }
        else {
          cVar2 = _CFStringGetCString(lVar10,&_logString,0x1000,0);
          pcVar12 = "No C string description available.";
          if (cVar2 != '\0') {
            pcVar12 = &_logString;
          }
          SavageRestoreInfoLog("%s [output]: %s \n","SavageUpdaterCopyFirmware",pcVar12);
          _CFRelease(lVar10);
        }
        goto LAB_002a8afb;
      }
      local_38 = (__CFError *)
                 _makeCFErrorWithDomain
                           ("SavageUpdaterCopyFirmware: Unable to get kYonkersPatchMeasurementTag",
                            iVar3,local_48,&cf_YonkersErrorDomain);
      lVar5 = 0;
      local_50 = 0;
    }
  }
LAB_002a8d49:
  lVar7 = 0;
  lVar6 = 0;
LAB_002a8afb:
  puVar1 = local_68;
  if (local_68 != (undefined8 *)0x0 && local_38 != (__CFError *)0x0) {
    uVar8 = _SavageSafeRetain();
    *puVar1 = uVar8;
    lVar10 = _CFErrorCopyDescription(local_38);
    if (lVar10 == 0) {
      SavageRestoreInfoLog
                ("%s [error]: %s \n","SavageUpdaterCopyFirmware",
                 "No C string description available.");
    }
    else {
      cVar2 = _CFStringGetCString(lVar10,&_logString,0x1000,0);
      pcVar12 = "No C string description available.";
      if (cVar2 != '\0') {
        pcVar12 = &_logString;
      }
      SavageRestoreInfoLog("%s [error]: %s \n","SavageUpdaterCopyFirmware",pcVar12);
      _CFRelease(lVar10);
    }
  }
  if (local_38 != (__CFError *)0x0) {
    _CFRelease();
    local_38 = (__CFError *)0x0;
  }
  if (local_48 != 0) {
    _CFRelease();
  }
  if (local_40 != 0) {
    _CFRelease();
  }
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  if (local_50 != 0) {
    _CFRelease();
  }
  if (lVar5 != 0) {
    lVar7 = lVar5;
  }
  return lVar7;
}

