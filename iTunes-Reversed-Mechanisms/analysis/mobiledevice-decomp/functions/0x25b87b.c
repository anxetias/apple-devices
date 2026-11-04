// rea decompile_all
// name: _SavageUpdaterCreateRequest
// address: 0x25b87b
// body: available
// range: 0x25b87b-0x25c8d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _SavageUpdaterCreateRequest(long param_1,undefined8 *param_2)

{
  __CFDictionary *p_Var1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  __CFData *p_Var10;
  long lVar11;
  cfstringStruct *pcVar12;
  char *pcVar13;
  long local_a0;
  __CFDictionary *local_98;
  long local_90;
  long local_88;
  long local_80;
  __CFDictionary *local_78;
  undefined4 local_6c;
  long local_68;
  long local_60;
  int local_54;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_78 = (__CFDictionary *)0x0;
  local_88 = 0;
  local_60 = 0;
  if (param_1 == 0) {
    lVar6 = _makeCFErrorWithDomain
                      ("SavageUpdaterCreateRequest: options is NULL",2,0,&cf_SavageErrorDomain);
LAB_0025ba03:
    lVar7 = 0;
    lVar5 = 0;
    lVar8 = 0;
    param_2 = param_2;
LAB_0025be74:
    if ((param_2 == (undefined8 *)0x0) || (lVar6 == 0)) {
      if (lVar6 != 0) goto LAB_0025bf05;
    }
    else {
      uVar4 = _SavageSafeRetain(lVar6);
      *param_2 = uVar4;
      lVar9 = _CFErrorCopyDescription(lVar6);
      if (lVar9 == 0) {
        SavageRestoreInfoLog
                  ("%s [error]: %s \n","SavageUpdaterCreateRequest",
                   "No C string description available.");
      }
      else {
        cVar2 = _CFStringGetCString(lVar9,&_logString,0x1000,0);
        pcVar13 = "No C string description available.";
        if (cVar2 != '\0') {
          pcVar13 = &_logString;
        }
        SavageRestoreInfoLog("%s [error]: %s \n","SavageUpdaterCreateRequest",pcVar13);
        _CFRelease(lVar9);
      }
LAB_0025bf05:
      _CFRelease(lVar6);
    }
    if (lVar8 == 0) goto LAB_0025c709;
  }
  else {
    cVar2 = _CFDictionaryContainsKey(param_1,&cf_BuildIdentity);
    if (cVar2 == '\0') {
LAB_0025b9df:
      lVar6 = _makeCFErrorWithDomain
                        ("SavageUpdaterCreateRequest: BuildIdentity is NULL in input options",2,
                         param_1,&cf_SavageErrorDomain);
      goto LAB_0025ba03;
    }
    uVar4 = _CFDictionaryGetValue(param_1,&cf_BuildIdentity);
    lVar5 = _SavageSafeRetain(uVar4);
    lVar6 = _CFCopyDescription(lVar5);
    if (lVar6 == 0) {
      SavageRestoreInfoLog
                ("%s [input]: BuildIdentity %s \n","SavageUpdaterCreateRequest",
                 "No C string description available.");
    }
    else {
      cVar2 = _CFStringGetCString(lVar6,&_logString,0x1000,0);
      pcVar13 = "No C string description available.";
      if (cVar2 != '\0') {
        pcVar13 = &_logString;
      }
      SavageRestoreInfoLog("%s [input]: BuildIdentity %s \n","SavageUpdaterCreateRequest",pcVar13);
      _CFRelease(lVar6);
    }
    if (lVar5 == 0) goto LAB_0025b9df;
    cVar2 = _CFDictionaryContainsKey(param_1,&cf_DeviceInfo);
    if (cVar2 == '\0') {
LAB_0025bab5:
      lVar6 = _makeCFErrorWithDomain
                        ("SavageUpdaterCreateRequest: Cannot get DeviceInfo",2,param_1,
                         &cf_SavageErrorDomain);
      lVar7 = 0;
      lVar8 = 0;
      goto LAB_0025be74;
    }
    uVar4 = _CFDictionaryGetValue(param_1,&cf_DeviceInfo);
    lVar7 = _SavageSafeRetain(uVar4);
    lVar6 = _CFCopyDescription(lVar7);
    local_50 = param_2;
    if (lVar6 == 0) {
      SavageRestoreInfoLog
                ("%s [input]: DeviceInfo %s \n","SavageUpdaterCreateRequest",
                 "No C string description available.");
    }
    else {
      cVar2 = _CFStringGetCString(lVar6,&_logString,0x1000,0);
      param_2 = local_50;
      pcVar13 = "No C string description available.";
      if (cVar2 != '\0') {
        pcVar13 = &_logString;
      }
      SavageRestoreInfoLog("%s [input]: DeviceInfo %s \n","SavageUpdaterCreateRequest",pcVar13);
      _CFRelease(lVar6);
    }
    if (lVar7 == 0) goto LAB_0025bab5;
    cVar2 = _CFDictionaryContainsKey(param_1,&cf_FirmwareData);
    local_80 = lVar5;
    if (cVar2 != '\0') {
      lVar6 = _CFDictionaryGetValue(param_1,&cf_FirmwareData);
      lVar5 = _CFCopyDescription(lVar6);
      if (lVar5 == 0) {
        SavageRestoreInfoLog
                  ("%s [input]: FirmwareData %s \n","SavageUpdaterCreateRequest",
                   "No C string description available.");
      }
      else {
        cVar2 = _CFStringGetCString(lVar5,&_logString,0x1000,0);
        pcVar13 = "No C string description available.";
        if (cVar2 != '\0') {
          pcVar13 = &_logString;
        }
        SavageRestoreInfoLog("%s [input]: FirmwareData %s \n","SavageUpdaterCreateRequest",pcVar13);
        _CFRelease(lVar5);
      }
      if (lVar6 == 0) {
        lVar6 = _makeCFErrorWithDomain
                          ("SavageUpdaterCreateRequest: kSavageOptionFirmwareData is NULL in input options"
                           ,2,param_1,&cf_SavageErrorDomain);
        lVar5 = local_80;
      }
      else {
        lVar8 = _CFGetTypeID(lVar6);
        lVar9 = _CFDictionaryGetTypeID();
        lVar5 = local_80;
        if (lVar8 != lVar9) {
          lVar8 = _CFGetTypeID(lVar6);
          lVar9 = _CFDataGetTypeID();
          if (lVar8 == lVar9) {
            p_Var10 = (__CFData *)_SavageSafeRetain(lVar6);
            iVar3 = CreateMeasurementDict(p_Var10,&local_78);
            if (iVar3 != 0) {
              pcVar12 = &cf_SavageErrorDomain;
              pcVar13 = 
              "SavageUpdaterCreateRequest: CreateMeasurementDict fails for Savage (Old way).";
              goto LAB_0025c88d;
            }
            if (p_Var10 == (__CFData *)0x0) goto LAB_0025bb98;
LAB_0025bb75:
            _CFRelease(p_Var10);
          }
LAB_0025bb98:
          lVar6 = _CFCopyDescription(local_78);
          if (lVar6 == 0) {
            SavageRestoreInfoLog
                      ("%s [input]: SavageMeasurementDict - %s \n","SavageUpdaterCreateRequest",
                       "No C string description available.");
          }
          else {
            cVar2 = _CFStringGetCString(lVar6,&_logString,0x1000,0);
            pcVar13 = "No C string description available.";
            if (cVar2 != '\0') {
              pcVar13 = &_logString;
            }
            SavageRestoreInfoLog
                      ("%s [input]: SavageMeasurementDict - %s \n","SavageUpdaterCreateRequest",
                       pcVar13);
            _CFRelease(lVar6);
          }
          lVar6 = _CFCopyDescription(local_88);
          if (lVar6 == 0) {
            SavageRestoreInfoLog
                      ("%s [input]: YonkersMeasurementDict - %s \n","SavageUpdaterCreateRequest",
                       "No C string description available.");
            param_2 = local_50;
          }
          else {
            cVar2 = _CFStringGetCString(lVar6,&_logString,0x1000,0);
            pcVar13 = "No C string description available.";
            if (cVar2 != '\0') {
              pcVar13 = &_logString;
            }
            SavageRestoreInfoLog
                      ("%s [input]: YonkersMeasurementDict - %s \n","SavageUpdaterCreateRequest",
                       pcVar13);
            _CFRelease(lVar6);
            param_2 = local_50;
          }
          goto LAB_0025bc80;
        }
        uVar4 = _CFDictionaryGetValue(lVar6,&cf_SavageFirmware);
        p_Var10 = (__CFData *)_SavageSafeRetain(uVar4);
        if (p_Var10 == (__CFData *)0x0) {
LAB_0025bb3f:
          uVar4 = _CFDictionaryGetValue(lVar6,&cf_YonkersFirmware);
          p_Var10 = (__CFData *)_SavageSafeRetain(uVar4);
          if (p_Var10 == (__CFData *)0x0) goto LAB_0025bb98;
          iVar3 = _CreateYonkersMeasurementDict(p_Var10,&local_88);
          if (iVar3 == 0) goto LAB_0025bb75;
          pcVar12 = &cf_YonkersErrorDomain;
          pcVar13 = "SavageUpdaterCreateRequest: CreateMeasurementDict fails for Yonkers.";
        }
        else {
          iVar3 = CreateMeasurementDict(p_Var10,&local_78);
          if (iVar3 == 0) {
            _CFRelease(p_Var10);
            goto LAB_0025bb3f;
          }
          pcVar12 = &cf_SavageErrorDomain;
          pcVar13 = "SavageUpdaterCreateRequest: CreateMeasurementDict fails for Savage.";
        }
LAB_0025c88d:
        lVar6 = _makeCFErrorWithDomain(pcVar13,iVar3,lVar6,pcVar12);
      }
      lVar8 = 0;
      param_2 = local_50;
      goto LAB_0025be74;
    }
LAB_0025bc80:
    cVar2 = _CFDictionaryContainsKey(param_1,&cf_ReceiptManifest);
    if (cVar2 == '\0') {
LAB_0025be50:
      lVar6 = _makeCFErrorWithDomain
                        ("SavageUpdaterCreateRequest: ReceiptManifest is missing in input options",6
                         ,param_1,&cf_SavageErrorDomain);
      lVar8 = 0;
      goto LAB_0025be74;
    }
    uVar4 = _CFDictionaryGetValue(param_1,&cf_ReceiptManifest);
    local_68 = _SavageSafeRetain(uVar4);
    lVar6 = _CFDictionaryGetValue(local_68,&cf_SEP);
    if (lVar6 != 0) {
      lVar8 = _CFGetTypeID(lVar6);
      lVar9 = _CFDictionaryGetTypeID();
      param_2 = local_50;
      if (lVar8 == lVar9) {
        uVar4 = _CFDictionaryGetValue(lVar6,&cf_Digest);
        lVar6 = _CFCopyDescription(uVar4);
        if (lVar6 == 0) {
          SavageRestoreInfoLog
                    ("%s [input]: SEP Digest from ReceiptManifest - %s \n",
                     "SavageUpdaterCreateRequest","No C string description available.");
        }
        else {
          cVar2 = _CFStringGetCString(lVar6,&_logString,0x1000,0);
          param_2 = local_50;
          pcVar13 = "No C string description available.";
          if (cVar2 != '\0') {
            pcVar13 = &_logString;
          }
          SavageRestoreInfoLog
                    ("%s [input]: SEP Digest from ReceiptManifest - %s \n",
                     "SavageUpdaterCreateRequest",pcVar13);
          _CFRelease(lVar6);
        }
      }
    }
    if (local_68 == 0) goto LAB_0025be50;
    cVar2 = _CFDictionaryContainsKey(lVar7,&cf_YonkersDeviceInfo);
    if (cVar2 == '\0') {
LAB_0025bdee:
      p_Var1 = local_78;
      local_a0 = 0;
      local_90 = 0;
      lVar6 = _CFDictionaryCreateMutable
                        (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                         PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                         PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      local_98 = p_Var1;
      if (p_Var1 == (__CFDictionary *)0x0) {
        lVar8 = 0;
        iVar3 = 2;
        goto LAB_0025c65c;
      }
      local_38 = lVar6;
      if (local_60 == 0) {
        lVar8 = _CFDictionaryCreateMutable
                          (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                           PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        if (lVar8 == 0) {
          iVar3 = 3;
          lVar6 = local_38;
          lVar8 = 0;
          goto LAB_0025c65c;
        }
      }
      else {
        lVar8 = _SavageSafeRetain();
      }
      local_40 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
      _CFDictionaryAddValue(lVar8,&cf__Savage_Ticket);
      lVar6 = _CFDictionaryGetValue(local_80,&cf_Savage_ChipID);
      if (lVar6 == 0) {
LAB_0025c7b3:
        iVar3 = 0x11;
        lVar6 = local_38;
      }
      else {
        lVar5 = _CFGetTypeID(lVar6);
        lVar9 = _CFStringGetTypeID();
        if (lVar5 != lVar9) goto LAB_0025c7b3;
        cVar2 = _SavageCFStringToUInt32(lVar6,&local_6c);
        iVar3 = 0xb;
        lVar6 = local_38;
        if (cVar2 == '\0') goto LAB_0025c65c;
        _SavageCFDictionarySetInteger32(lVar8,&cf_Savage_ChipID,local_6c);
        lVar6 = _CFDictionaryGetValue(local_80,&cf_Savage_PatchEpoch);
        if (lVar6 == 0) goto LAB_0025c7b3;
        lVar5 = _CFGetTypeID(lVar6);
        lVar9 = _CFStringGetTypeID();
        if (lVar5 != lVar9) goto LAB_0025c7b3;
        cVar2 = _SavageCFStringToUInt32(lVar6,&local_6c);
        if (cVar2 == '\0') {
          lVar6 = local_38;
          iVar3 = 0xb;
          goto LAB_0025c65c;
        }
        _SavageCFDictionarySetInteger32(lVar8,&cf_Savage_PatchEpoch,local_6c);
        lVar6 = _CFDictionaryGetValue(lVar7,&cf_Savage_ProductionMode);
        if (lVar6 == 0) goto LAB_0025c7b3;
        lVar5 = _CFGetTypeID(lVar6);
        lVar9 = _CFBooleanGetTypeID();
        if (lVar5 != lVar9) goto LAB_0025c7b3;
        cVar2 = _CFBooleanGetValue(lVar6);
        local_48 = *(undefined8 *)PTR__kCFBooleanFalse_00441108;
        uVar4 = local_40;
        if (cVar2 == '\0') {
          uVar4 = local_48;
        }
        _CFDictionaryAddValue(lVar8,&cf_Savage_ProductionMode,uVar4);
        lVar6 = _CFDictionaryGetValue(lVar7,&cf_Savage_UID);
        if (lVar6 == 0) goto LAB_0025c7b3;
        lVar5 = _CFGetTypeID(lVar6);
        lVar9 = _CFDataGetTypeID();
        if (lVar5 != lVar9) goto LAB_0025c7b3;
        _CFDictionaryAddValue(lVar8,&cf_Savage_UID,lVar6);
        lVar6 = _CFDictionaryGetValue(lVar7,&cf_Savage_Nonce);
        if (lVar6 == 0) goto LAB_0025c7b3;
        lVar5 = _CFGetTypeID(lVar6);
        lVar9 = _CFDataGetTypeID();
        if (lVar5 != lVar9) goto LAB_0025c7b3;
        _CFDictionaryAddValue(lVar8,&cf_Savage_Nonce,lVar6);
        local_54 = _GetRelevantMeasurementTags(lVar7,&local_a0,&local_90);
        lVar6 = local_38;
        iVar3 = local_54;
        if ((local_a0 != 0) && (local_90 != 0)) {
          lVar6 = _CFDictionaryGetValue(local_98,&cf_MeasurementDictPatch);
          if (lVar6 != 0) {
            lVar5 = _CFGetTypeID(lVar6);
            lVar9 = _CFDictionaryGetTypeID();
            if (lVar5 == lVar9) {
              _CFDictionaryAddValue(lVar8,local_a0,lVar6);
              lVar6 = _CFDictionaryGetValue(local_98,&cf_MeasurementDictPatchVT);
              if (lVar6 != 0) {
                lVar5 = _CFGetTypeID(lVar6);
                lVar9 = _CFDictionaryGetTypeID();
                if (lVar5 == lVar9) {
                  _CFDictionaryAddValue(lVar8,local_90,lVar6);
                }
              }
              lVar6 = _CFDictionaryGetValue(local_68,&cf_SEP);
              if (lVar6 != 0) {
                lVar5 = _CFGetTypeID(lVar6);
                lVar9 = _CFDictionaryGetTypeID();
                if ((lVar5 == lVar9) &&
                   (lVar6 = _CFDictionaryGetValue(lVar6,&cf_Digest), lVar6 != 0)) {
                  lVar9 = _CFGetTypeID(lVar6);
                  lVar11 = _CFDataGetTypeID();
                  lVar5 = local_38;
                  if (lVar9 == lVar11) {
                    _CFDictionarySetValue(local_38,&cf_Digest,lVar6);
                    _CFDictionaryAddValue(lVar8,&cf_SEP,lVar5);
                  }
                }
              }
              lVar6 = _CFDictionaryGetValue(lVar7,&cf_Savage_ReadECKey);
              if (lVar6 != 0) {
                lVar5 = _CFGetTypeID(lVar6);
                lVar9 = _CFBooleanGetTypeID();
                if (lVar5 == lVar9) {
                  cVar2 = _CFBooleanGetValue(lVar6);
                  uVar4 = local_40;
                  if (cVar2 == '\0') {
                    uVar4 = local_48;
                  }
                  _CFDictionaryAddValue(lVar8,&cf_Savage_ReadECKey,uVar4);
                }
              }
              lVar6 = _CFDictionaryGetValue(lVar7,&cf_Savage_WriteECKey);
              if (lVar6 != 0) {
                lVar5 = _CFGetTypeID(lVar6);
                lVar9 = _CFBooleanGetTypeID();
                if (lVar5 == lVar9) {
                  cVar2 = _CFBooleanGetValue(lVar6);
                  uVar4 = local_40;
                  if (cVar2 == '\0') {
                    uVar4 = local_48;
                  }
                  _CFDictionaryAddValue(lVar8,&cf_Savage_WriteECKey,uVar4);
                }
              }
              lVar6 = _CFDictionaryGetValue(lVar7,&cf_Savage_WriteUID);
              if (lVar6 != 0) {
                lVar5 = _CFGetTypeID(lVar6);
                lVar9 = _CFBooleanGetTypeID();
                if (lVar5 == lVar9) {
                  cVar2 = _CFBooleanGetValue(lVar6);
                  uVar4 = local_40;
                  if (cVar2 == '\0') {
                    uVar4 = local_48;
                  }
                  _CFDictionaryAddValue(lVar8,&cf_Savage_WriteUID,uVar4);
                }
              }
              lVar6 = _CFDictionaryGetValue(lVar7,&cf_Savage_WriteEpoch);
              if (lVar6 != 0) {
                lVar5 = _CFGetTypeID(lVar6);
                lVar9 = _CFBooleanGetTypeID();
                if (lVar5 == lVar9) {
                  cVar2 = _CFBooleanGetValue(lVar6);
                  uVar4 = local_40;
                  if (cVar2 == '\0') {
                    uVar4 = local_48;
                  }
                  _CFDictionaryAddValue(lVar8,&cf_Savage_WriteEpoch,uVar4);
                }
              }
              lVar6 = _CFDictionaryGetValue(lVar7,&cf_Savage_ReadGID);
              if (lVar6 != 0) {
                lVar5 = _CFGetTypeID(lVar6);
                lVar9 = _CFBooleanGetTypeID();
                if (lVar5 == lVar9) {
                  cVar2 = _CFBooleanGetValue(lVar6);
                  uVar4 = local_40;
                  if (cVar2 == '\0') {
                    uVar4 = local_48;
                  }
                  _CFDictionaryAddValue(lVar8,&cf_Savage_ReadGID,uVar4);
                }
              }
              lVar6 = _CFDictionaryGetValue(lVar7,&cf_Savage_ReadFWKey);
              if (lVar6 != 0) {
                lVar5 = _CFGetTypeID(lVar6);
                lVar9 = _CFBooleanGetTypeID();
                if (lVar5 == lVar9) {
                  cVar2 = _CFBooleanGetValue(lVar6);
                  uVar4 = local_40;
                  if (cVar2 == '\0') {
                    uVar4 = local_48;
                  }
                  _CFDictionaryAddValue(lVar8,&cf_Savage_ReadFWKey,uVar4);
                }
              }
              lVar6 = _CFDictionaryGetValue(lVar7,&cf_Savage_AllowOfflineBoot);
              if (lVar6 != 0) {
                lVar5 = _CFGetTypeID(lVar6);
                lVar9 = _CFBooleanGetTypeID();
                if (lVar5 == lVar9) {
                  cVar2 = _CFBooleanGetValue(lVar6);
                  uVar4 = local_40;
                  if (cVar2 == '\0') {
                    uVar4 = local_48;
                  }
                  _CFDictionaryAddValue(lVar8,&cf_Savage_AllowOfflineBoot,uVar4);
                }
              }
              lVar6 = _CFDictionaryGetValue(lVar7,&cf_Savage_TempDemote);
              if (lVar6 != 0) {
                lVar5 = _CFGetTypeID(lVar6);
                lVar9 = _CFBooleanGetTypeID();
                if (lVar5 == lVar9) {
                  cVar2 = _CFBooleanGetValue(lVar6);
                  uVar4 = local_40;
                  if (cVar2 == '\0') {
                    uVar4 = local_48;
                  }
                  _CFDictionaryAddValue(lVar8,&cf_Savage_TempDemote,uVar4);
                }
              }
              lVar6 = _CFDictionaryGetValue(lVar7,&cf_Savage_AccessSensor);
              if (lVar6 != 0) {
                lVar5 = _CFGetTypeID(lVar6);
                lVar9 = _CFBooleanGetTypeID();
                if (lVar5 == lVar9) {
                  cVar2 = _CFBooleanGetValue(lVar6);
                  uVar4 = local_40;
                  if (cVar2 == '\0') {
                    uVar4 = local_48;
                  }
                  _CFDictionaryAddValue(lVar8,&cf_Savage_AccessSensor,uVar4);
                }
              }
              lVar6 = _CFDictionaryGetValue(lVar7,&cf_Savage_AccessSecurity);
              if (lVar6 != 0) {
                lVar5 = _CFGetTypeID(lVar6);
                lVar9 = _CFBooleanGetTypeID();
                if (lVar5 == lVar9) {
                  cVar2 = _CFBooleanGetValue(lVar6);
                  uVar4 = local_40;
                  if (cVar2 == '\0') {
                    uVar4 = local_48;
                  }
                  _CFDictionaryAddValue(lVar8,&cf_Savage_AccessSecurity,uVar4);
                }
              }
              lVar6 = _CFDictionaryGetValue(lVar7,&cf_Savage_FADemote);
              if (lVar6 != 0) {
                lVar5 = _CFGetTypeID(lVar6);
                lVar9 = _CFBooleanGetTypeID();
                if (lVar5 == lVar9) {
                  cVar2 = _CFBooleanGetValue(lVar6);
                  uVar4 = local_40;
                  if (cVar2 == '\0') {
                    uVar4 = local_48;
                  }
                  _CFDictionaryAddValue(lVar8,&cf_Savage_FADemote,uVar4);
                }
              }
              lVar6 = _CFDictionaryGetValue(lVar7,&cf_Savage_DebugStatus);
              if (lVar6 != 0) {
                lVar5 = _CFGetTypeID(lVar6);
                lVar9 = _CFBooleanGetTypeID();
                if (lVar5 == lVar9) {
                  cVar2 = _CFBooleanGetValue(lVar6);
                  uVar4 = local_40;
                  if (cVar2 == '\0') {
                    uVar4 = local_48;
                  }
                  _CFDictionaryAddValue(lVar8,&cf_Savage_DebugStatus,uVar4);
                }
              }
              lVar6 = _CFDictionaryGetValue(lVar7,&cf_Savage_Provisioning);
              if (lVar6 != 0) {
                lVar5 = _CFGetTypeID(lVar6);
                lVar9 = _CFBooleanGetTypeID();
                if (lVar5 == lVar9) {
                  cVar2 = _CFBooleanGetValue(lVar6);
                  uVar4 = local_40;
                  if (cVar2 == '\0') {
                    uVar4 = local_48;
                  }
                  _CFDictionaryAddValue(lVar8,&cf_Savage_Provisioning,uVar4);
                }
              }
              lVar6 = local_38;
              iVar3 = local_54;
              if (local_60 == 0) {
                local_60 = _SavageSafeRetain(lVar8);
                lVar6 = local_38;
                iVar3 = local_54;
              }
              goto LAB_0025c65c;
            }
          }
          goto LAB_0025c7b3;
        }
      }
LAB_0025c65c:
      if (lVar6 != 0) {
        _CFRelease(lVar6);
      }
      lVar5 = local_80;
      if (lVar8 != 0) {
        _CFRelease(lVar8);
      }
      if ((iVar3 != 0) || (local_60 == 0)) {
        lVar6 = _makeCFErrorWithDomain
                          ("SavageUpdaterCreateRequest: CreateRequestDictForTATSU fails.",iVar3,
                           param_1,&cf_SavageErrorDomain);
        lVar8 = local_68;
        param_2 = local_50;
        goto LAB_0025be74;
      }
    }
    else {
      uVar4 = _CFDictionaryGetValue(lVar7,&cf_YonkersDeviceInfo);
      lVar6 = _SavageSafeRetain(uVar4);
      iVar3 = _CreateYonkersRequestDictForTATSU(lVar6,lVar5,local_88,local_68,&local_60);
      if ((iVar3 != 0) || (local_60 == 0)) {
        lVar6 = _makeCFErrorWithDomain
                          ("SavageUpdaterCreateRequest: CreateYonkersRequestDictForTATSU fails.",
                           iVar3,param_1,&cf_YonkersErrorDomain);
        lVar8 = local_68;
        goto LAB_0025be74;
      }
      if ((lVar6 == 0) || (lVar6 = _CFDictionaryGetCount(lVar7), lVar6 != 1)) goto LAB_0025bdee;
    }
    lVar6 = _CFCopyDescription(local_60);
    if (lVar6 == 0) {
      SavageRestoreInfoLog
                ("%s [output]: %s \n","SavageUpdaterCreateRequest",
                 "No C string description available.");
      lVar8 = local_68;
    }
    else {
      cVar2 = _CFStringGetCString(lVar6,&_logString,0x1000,0);
      pcVar13 = "No C string description available.";
      if (cVar2 != '\0') {
        pcVar13 = &_logString;
      }
      SavageRestoreInfoLog("%s [output]: %s \n","SavageUpdaterCreateRequest",pcVar13);
      _CFRelease(lVar6);
      lVar8 = local_68;
    }
  }
  _CFRelease(lVar8);
LAB_0025c709:
  if (local_78 != (__CFDictionary *)0x0) {
    _CFRelease();
    local_78 = (__CFDictionary *)0x0;
  }
  if (local_88 != 0) {
    _CFRelease();
    local_88 = 0;
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (lVar7 != 0) {
    _CFRelease(lVar7);
  }
  return local_60;
}

