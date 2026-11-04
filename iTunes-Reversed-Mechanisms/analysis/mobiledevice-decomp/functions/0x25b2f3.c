// rea decompile_all
// name: _SavageUpdaterGetTags
// address: 0x25b2f3
// body: available
// range: 0x25b2f3-0x25b844 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _SavageUpdaterGetTags(long param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  cfstringStruct *pcVar11;
  char *pcVar12;
  undefined8 *puVar13;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_38 = param_2;
  local_48 = _CFDictionaryCreateMutable
                       (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                        PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (local_48 == 0) {
    pcVar12 = "SavageUpdaterGetTags: Cannot allocate memory for outputDict";
LAB_0025b6d6:
    uVar10 = 3;
LAB_0025b6de:
    puVar9 = (undefined8 *)_makeCFErrorWithDomain(pcVar12,uVar10,0,&cf_SavageErrorDomain);
    puVar3 = (undefined8 *)0x0;
LAB_0025b710:
    puVar13 = (undefined8 *)0x0;
    puVar8 = (undefined8 *)0x0;
    lVar4 = 0;
LAB_0025b743:
    if ((local_38 == (undefined8 *)0x0) || (puVar9 == (undefined8 *)0x0)) {
      if (puVar9 != (undefined8 *)0x0) goto LAB_0025b814;
    }
    else {
      local_40 = puVar3;
      uVar10 = _SavageSafeRetain(puVar9);
      *local_38 = uVar10;
      local_38 = puVar9;
      lVar5 = _CFErrorCopyDescription(puVar9);
      if (lVar5 == 0) {
        SavageRestoreInfoLog
                  ("%s [error]: %s \n","SavageUpdaterGetTags","No C string description available.");
      }
      else {
        cVar1 = _CFStringGetCString(lVar5,&_logString,0x1000,0);
        pcVar12 = "No C string description available.";
        if (cVar1 != '\0') {
          pcVar12 = &_logString;
        }
        SavageRestoreInfoLog("%s [error]: %s \n","SavageUpdaterGetTags",pcVar12);
        _CFRelease(lVar5);
      }
      if (local_48 != 0) {
        _CFRelease();
      }
      local_48 = 0;
      puVar9 = local_38;
      puVar3 = local_40;
LAB_0025b814:
      _CFRelease(puVar9);
    }
    if (lVar4 == 0) goto LAB_0025b634;
  }
  else {
    if (param_1 == 0) {
      pcVar12 = "SavageUpdaterGetTags: options is NULL";
      uVar10 = 2;
      goto LAB_0025b6de;
    }
    uVar10 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    puVar3 = (undefined8 *)_CFArrayCreateMutable(uVar10,0,PTR__kCFTypeArrayCallBacks_004411a8);
    if (puVar3 == (undefined8 *)0x0) {
      pcVar12 = "SavageUpdaterGetTags: Cannot allocate memory for tagsInBI";
      goto LAB_0025b6d6;
    }
    lVar4 = _CFArrayCreateMutable(uVar10,0,PTR__kCFTypeArrayCallBacks_004411a8);
    if (lVar4 == 0) {
      puVar9 = (undefined8 *)
               _makeCFErrorWithDomain
                         ("SavageUpdaterGetTags: Cannot allocate memory for tagsInTssResponse",3,0,
                          &cf_SavageErrorDomain);
      goto LAB_0025b710;
    }
    lVar5 = _CFDictionaryGetValue(param_1,&cf_DeviceInfo);
    if (lVar5 == 0) {
LAB_0025b66e:
      puVar9 = (undefined8 *)
               _makeCFErrorWithDomain
                         ("SavageUpdaterGetTags: DeviceInfo is NULL?",0x11,param_1,
                          &cf_SavageErrorDomain);
      puVar8 = (undefined8 *)0x0;
      puVar13 = (undefined8 *)0x0;
      goto LAB_0025b743;
    }
    lVar6 = _CFGetTypeID(lVar5);
    lVar7 = _CFDictionaryGetTypeID();
    if (lVar6 != lVar7) goto LAB_0025b66e;
    lVar6 = _CFCopyDescription(lVar5);
    if (lVar6 == 0) {
      SavageRestoreInfoLog
                ("%s [input]: DeviceInfo %s \n","SavageUpdaterGetTags",
                 "No C string description available.");
    }
    else {
      cVar1 = _CFStringGetCString(lVar6,&_logString,0x1000,0);
      pcVar12 = "No C string description available.";
      if (cVar1 != '\0') {
        pcVar12 = &_logString;
      }
      SavageRestoreInfoLog("%s [input]: DeviceInfo %s \n","SavageUpdaterGetTags",pcVar12);
      _CFRelease(lVar6);
    }
    puVar8 = (undefined8 *)_SavageSafeRetain(lVar5);
    lVar5 = _CFDictionaryGetValue(puVar8,&cf_YonkersDeviceInfo);
    if (lVar5 != 0) {
      lVar6 = _CFGetTypeID(lVar5);
      lVar7 = _CFDictionaryGetTypeID();
      if (lVar6 != lVar7) goto LAB_0025b513;
      puVar9 = (undefined8 *)_SavageSafeRetain(lVar5);
      iVar2 = _GetYonkersMeasurementTags(puVar9,&local_50);
      puVar13 = puVar9;
      if ((iVar2 == 0) && (local_50 != 0)) {
        _CFArrayAppendValue(puVar3,&cf_SEP);
        _CFArrayAppendValue(puVar3,&cf_Yonkers_BoardID);
        _CFArrayAppendValue(puVar3,&cf_Yonkers_ChipID);
        _CFArrayAppendValue(puVar3,&cf_Yonkers_PatchEpoch);
        _CFArrayAppendValue(puVar3,local_50);
        _CFArrayAppendValue(lVar4,&cf_Yonkers_Ticket);
        if (puVar9 == (undefined8 *)0x0) goto LAB_0025b513;
        lVar5 = _CFDictionaryGetCount(puVar8);
        if (lVar5 != 1) goto LAB_0025b516;
        goto LAB_0025b577;
      }
      pcVar11 = &cf_YonkersErrorDomain;
      pcVar12 = "SavageUpdaterGetTags: Unable to get kYonkersPatchMeasurementTag";
LAB_0025b73e:
      puVar9 = (undefined8 *)_makeCFErrorWithDomain(pcVar12,iVar2,puVar9,pcVar11);
      goto LAB_0025b743;
    }
LAB_0025b513:
    puVar13 = (undefined8 *)0x0;
LAB_0025b516:
    iVar2 = _GetRelevantMeasurementTags(puVar8,&local_60,&local_58);
    if (local_60 == 0) {
      pcVar12 = "SavageUpdaterGetTags: Unable to get kSavageTagMeasurementPatch";
LAB_0025b739:
      pcVar11 = &cf_SavageErrorDomain;
      puVar9 = puVar8;
      goto LAB_0025b73e;
    }
    if (local_58 == 0) {
      pcVar12 = "SavageUpdaterGetTags: Unable to get kSavageTagMeasurementPatchVT";
      goto LAB_0025b739;
    }
    _CFArrayAppendValue(puVar3,&cf_Savage_ChipID);
    _CFArrayAppendValue(puVar3,&cf_Savage_PatchEpoch);
    _CFArrayAppendValue(puVar3,local_60);
    _CFArrayAppendValue(lVar4,&cf_Savage_Ticket);
    puVar9 = puVar13;
LAB_0025b577:
    lVar5 = local_48;
    local_40 = puVar9;
    local_38 = puVar8;
    _CFDictionaryAddValue(local_48,&cf_BuildIdentityTags,puVar3);
    _CFDictionaryAddValue(lVar5,&cf_ResponseTags,lVar4);
    lVar5 = _CFCopyDescription(lVar5);
    if (lVar5 == 0) {
      SavageRestoreInfoLog
                ("%s [output]: %s \n","SavageUpdaterGetTags","No C string description available.");
      puVar8 = local_38;
      puVar13 = local_40;
    }
    else {
      cVar1 = _CFStringGetCString(lVar5,&_logString,0x1000,0);
      pcVar12 = "No C string description available.";
      if (cVar1 != '\0') {
        pcVar12 = &_logString;
      }
      SavageRestoreInfoLog("%s [output]: %s \n","SavageUpdaterGetTags",pcVar12);
      _CFRelease(lVar5);
      puVar8 = local_38;
      puVar13 = local_40;
    }
  }
  _CFRelease(lVar4);
LAB_0025b634:
  if (puVar3 != (undefined8 *)0x0) {
    _CFRelease(puVar3);
  }
  if (puVar13 != (undefined8 *)0x0) {
    _CFRelease(puVar13);
  }
  if (puVar8 != (undefined8 *)0x0) {
    _CFRelease(puVar8);
  }
  return local_48;
}

