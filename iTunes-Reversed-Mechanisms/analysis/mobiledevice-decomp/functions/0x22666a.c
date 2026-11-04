// rea decompile_all
// name: _AppleTCONDP855RestoreInfoCreateRequest
// address: 0x22666a
// body: available
// range: 0x22666a-0x226f1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AppleTCONDP855RestoreInfoCreateRequest(long param_1,undefined8 *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  undefined4 local_3c;
  long local_38;
  
  if (param_1 == 0) {
    lVar6 = _AppleTCONLoggingCreateCFErrorWithDomain
                      ("AppleTCONDP855RestoreInfoCreateRequest: options is NULL",2,0,
                       &cf_AppleTCONUpdaterErrorDomain);
LAB_002268a8:
    local_58 = 0;
    lVar7 = 0;
    local_48 = 0;
    lVar5 = 0;
  }
  else {
    cVar2 = _CFDictionaryContainsKey(param_1,&cf_BuildIdentity);
    if (cVar2 == '\0') {
LAB_00226884:
      lVar6 = _AppleTCONLoggingCreateCFErrorWithDomain
                        ("AppleTCONDP855RestoreInfoCreateRequest: BuildIdentity is NULL in input options"
                         ,2,param_1,&cf_AppleTCONUpdaterErrorDomain);
      goto LAB_002268a8;
    }
    uVar4 = _CFDictionaryGetValue(param_1,&cf_BuildIdentity);
    lVar5 = _AMSupportSafeRetain(uVar4);
    if (lVar5 == 0) goto LAB_00226884;
    cVar2 = _CFDictionaryContainsKey(param_1,&cf_DeviceInfo);
    if (cVar2 == '\0') {
LAB_002268b8:
      lVar6 = _AppleTCONLoggingCreateCFErrorWithDomain
                        ("AppleTCONDP855RestoreInfoCreateRequest: Cannot get DeviceInfo",2,param_1,
                         &cf_AppleTCONUpdaterErrorDomain);
      local_58 = 0;
      lVar7 = 0;
      local_48 = 0;
    }
    else {
      uVar4 = _CFDictionaryGetValue(param_1,&cf_DeviceInfo);
      local_48 = _AMSupportSafeRetain(uVar4);
      if (local_48 == 0) goto LAB_002268b8;
      lVar6 = _CFDictionaryGetValue(param_1,&cf_FirmwareData);
      if (lVar6 == 0) {
LAB_00226ddc:
        lVar6 = _AppleTCONLoggingCreateCFErrorWithDomain
                          ("AppleTCONDP855RestoreInfoCreateRequest: kUpdaterFirmware is NULL in input options"
                           ,2,param_1,&cf_AppleTCONUpdaterErrorDomain);
        local_58 = 0;
        lVar7 = 0;
      }
      else {
        lVar7 = _CFGetTypeID(lVar6);
        lVar8 = _CFDataGetTypeID();
        if (lVar7 != lVar8) goto LAB_00226ddc;
        local_38 = _AMSupportSafeRetain(lVar6);
        if (local_38 == 0) {
          local_60 = 2;
LAB_00226e25:
          lVar7 = 0;
          lVar9 = 0;
          lVar8 = 0;
LAB_00226eaf:
          local_58 = 0;
          bVar1 = false;
        }
        else {
          uVar4 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
          lVar7 = _CFDictionaryCreateMutable
                            (uVar4,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                             PTR__kCFTypeDictionaryValueCallBacks_004411b8);
          local_60 = 3;
          if (lVar7 == 0) goto LAB_00226e25;
          lVar8 = _CFPropertyListCreateWithData(uVar4,local_38,0,0,0);
          if (lVar8 != 0) {
            lVar9 = _CFGetTypeID(lVar8);
            lVar10 = _CFDictionaryGetTypeID();
            if (lVar9 != lVar10) goto LAB_00226e7d;
            bVar1 = false;
            lVar9 = _CFStringCreateWithFormat(uVar4,0,&cf_1__s__s,"firmware","Digest");
            if (lVar9 == 0) {
              local_58 = 0;
              lVar9 = 0;
              goto LAB_00226834;
            }
            lVar10 = _AMSupportGetValueForKeyPathInDict(uVar4,lVar8,lVar9);
            if (lVar10 != 0) {
              local_60 = 0;
              _CFDictionarySetValue(lVar7,&cf_Digest,lVar10);
              local_58 = _AMSupportSafeRetain(lVar7);
              bVar1 = true;
              goto LAB_00226834;
            }
            local_60 = 10;
            goto LAB_00226eaf;
          }
          lVar8 = 0;
LAB_00226e7d:
          local_58 = 0;
          lVar9 = 0;
          bVar1 = false;
          local_60 = 0x11;
        }
LAB_00226834:
        _AMSupportSafeRelease(lVar9);
        _AMSupportSafeRelease(lVar7);
        _AMSupportSafeRelease(lVar8);
        _AMSupportSafeRelease(local_38);
        if (bVar1) {
          lVar6 = _CFDictionaryGetCount(local_48);
          if (lVar6 == 1) {
            lVar7 = 0;
            goto LAB_00226d6c;
          }
          local_3c = 0;
          bVar1 = true;
          if (local_58 == 0) {
            local_50 = 2;
LAB_00226e12:
            lVar7 = 0;
            lVar6 = 0;
            lVar8 = 0;
          }
          else {
            lVar6 = _CFDictionaryCreateMutable
                              (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                               PTR__kCFTypeDictionaryValueCallBacks_004411b8);
            if (lVar6 == 0) {
              local_50 = 3;
              goto LAB_00226e12;
            }
            local_60 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
            local_38 = lVar6;
            _CFDictionaryAddValue(lVar6,&cf__Baobab_Ticket);
            lVar6 = _CFDictionaryGetValue(lVar5,&cf_Baobab_ChipID);
            local_50 = 0x11;
            if (lVar6 == 0) {
              lVar8 = 0;
              goto LAB_00226dd3;
            }
            lVar7 = _CFGetTypeID(lVar6);
            lVar8 = _CFNumberGetTypeID();
            if (lVar7 == lVar8) {
              iVar3 = _AMSupportGetUInt32(lVar6,&local_3c);
              if (iVar3 != 0) {
LAB_00226dc3:
                local_50 = 0xb;
                goto LAB_00226dcd;
              }
              _AMSupportCFDictionarySetInteger32(local_38,&cf_Baobab_ChipID,local_3c);
              lVar6 = _CFDictionaryGetValue(lVar5,&cf_Baobab_BoardID);
              if (lVar6 == 0) goto LAB_00226dcd;
              lVar7 = _CFGetTypeID(lVar6);
              lVar8 = _CFNumberGetTypeID();
              if (lVar7 != lVar8) goto LAB_00226dcd;
              iVar3 = _AMSupportGetUInt32(lVar6,&local_3c);
              if (iVar3 != 0) goto LAB_00226dc3;
              _AMSupportCFDictionarySetInteger32(local_38,&cf_Baobab_BoardID,local_3c);
              lVar6 = _CFDictionaryGetValue(lVar5,&cf_Baobab_ManifestEpoch);
              if (lVar6 == 0) goto LAB_00226dcd;
              lVar7 = _CFGetTypeID(lVar6);
              lVar8 = _CFNumberGetTypeID();
              if (lVar7 != lVar8) goto LAB_00226dcd;
              iVar3 = _AMSupportGetUInt32(lVar6,&local_3c);
              if (iVar3 != 0) goto LAB_00226dc3;
              _AMSupportCFDictionarySetInteger32(local_38,&cf_Baobab_ManifestEpoch,local_3c);
              lVar6 = _CFDictionaryGetValue(local_48,&cf_Baobab_ProductionMode);
              if (lVar6 == 0) goto LAB_00226dcd;
              lVar7 = _CFGetTypeID(lVar6);
              lVar8 = _CFBooleanGetTypeID();
              if (lVar7 != lVar8) goto LAB_00226dcd;
              cVar2 = _CFBooleanGetValue(lVar6);
              if (cVar2 == '\0') {
                local_60 = *(undefined8 *)PTR__kCFBooleanFalse_00441108;
              }
              _CFDictionaryAddValue(local_38,&cf_Baobab_ProductionMode,local_60);
              lVar6 = _CFDictionaryGetValue(local_48,&cf_Baobab_SecurityDomain);
              if (lVar6 == 0) goto LAB_00226dcd;
              lVar7 = _CFGetTypeID(lVar6);
              lVar8 = _CFNumberGetTypeID();
              if (lVar7 != lVar8) goto LAB_00226dcd;
              iVar3 = _AMSupportGetUInt32(lVar6,&local_3c);
              if (iVar3 != 0) goto LAB_00226dc3;
              _AMSupportCFDictionarySetInteger32(local_38,&cf_Baobab_SecurityDomain,local_3c);
              lVar6 = _CFDictionaryGetValue(local_48,&cf_Baobab_Life);
              if (lVar6 == 0) goto LAB_00226dcd;
              lVar7 = _CFGetTypeID(lVar6);
              lVar8 = _CFNumberGetTypeID();
              if (lVar7 != lVar8) goto LAB_00226dcd;
              iVar3 = _AMSupportGetUInt32(lVar6,&local_3c);
              if (iVar3 != 0) goto LAB_00226dc3;
              _AMSupportCFDictionarySetInteger32(local_38,&cf_Baobab_Life,local_3c);
              lVar6 = _CFDictionaryGetValue(local_48,&cf_Baobab_UpdateNonce);
              if (lVar6 == 0) goto LAB_00226dcd;
              lVar7 = _CFGetTypeID(lVar6);
              lVar8 = _CFDataGetTypeID();
              if (lVar7 != lVar8) goto LAB_00226dcd;
              _CFDictionaryAddValue(local_38,&cf_Baobab_UpdateNonce,lVar6);
              lVar6 = _CFDictionaryGetValue(local_48,&cf_Baobab_ECID);
              if (lVar6 == 0) goto LAB_00226dcd;
              lVar7 = _CFGetTypeID(lVar6);
              lVar8 = _CFDataGetTypeID();
              if (lVar7 != lVar8) goto LAB_00226dcd;
              _CFDictionaryAddValue(local_38,&cf_Baobab_ECID,lVar6);
              lVar8 = _CFDictionaryCreateMutable
                                (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                 PTR__kCFTypeDictionaryValueCallBacks_004411b8);
              if (lVar8 == 0) {
                local_50 = 3;
                goto LAB_00226dcd;
              }
              lVar6 = _CFDictionaryGetValue(local_58,&cf_Digest);
              if (lVar6 == 0) goto LAB_00226dd3;
              lVar7 = _CFGetTypeID(lVar6);
              lVar9 = _CFDataGetTypeID();
              if (lVar7 != lVar9) goto LAB_00226dd3;
              _CFDictionaryAddValue(lVar8,&cf_Digest,lVar6);
              _CFDictionaryAddValue(lVar8,&cf_EPRO,local_60);
              lVar6 = local_38;
              _CFDictionaryAddValue(local_38,&cf_Baobab_TCON,lVar8);
              lVar7 = _AMSupportSafeRetain(lVar6);
              bVar1 = false;
              local_50 = 0;
            }
            else {
LAB_00226dcd:
              lVar8 = 0;
LAB_00226dd3:
              lVar7 = 0;
              bVar1 = true;
              lVar6 = local_38;
            }
          }
          _AMSupportSafeRelease(lVar6);
          _AMSupportSafeRelease(lVar8);
          if ((!bVar1) && (lVar7 != 0)) goto LAB_00226d6c;
          lVar6 = _AppleTCONLoggingCreateCFErrorWithDomain
                            ("AppleTCONDP855RestoreInfoCreateRequest: CreateRequestDictForTATSU fails."
                             ,local_50,param_1,&cf_AppleTCONUpdaterErrorDomain);
        }
        else {
          lVar6 = _AppleTCONLoggingCreateCFErrorWithDomain
                            ("AppleTCONDP855RestoreInfoCreateRequest: CreateMeasurementDict fails for AppleTCONDP855"
                             ,local_60,lVar6,&cf_AppleTCONUpdaterErrorDomain);
          lVar7 = 0;
        }
      }
    }
  }
  if (lVar6 != 0) {
    uVar4 = _CFErrorCopyDescription(lVar6);
    uVar11 = _CFStringGetCStringPtr(uVar4,0);
    _AppleTCONLoggingLogMsg("%s [error]: %s\n","AppleTCONDP855RestoreInfoCreateRequest",uVar11);
    _CFRelease(uVar4);
    _AMSupportSafeRelease(lVar7);
    if (param_2 != (undefined8 *)0x0) {
      uVar4 = _AMSupportSafeRetain(lVar6);
      *param_2 = uVar4;
    }
    _AMSupportSafeRelease(lVar6);
  }
LAB_00226d6c:
  _AMSupportSafeRelease(local_58);
  _AMSupportSafeRelease(lVar5);
  _AMSupportSafeRelease(local_48);
  return lVar7;
}

