// rea decompile_all
// name: _AppleTCONDP835RestoreInfoCreateRequest
// address: 0x2254cc
// body: available
// range: 0x2254cc-0x225feb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AppleTCONDP835RestoreInfoCreateRequest(long param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  cfstringStruct *pcVar17;
  int *piVar18;
  long lVar19;
  long local_58;
  undefined8 local_50;
  int local_44;
  long local_40;
  long local_38;
  
  if (param_1 == 0) {
    lVar10 = _AppleTCONLoggingCreateCFErrorWithDomain
                       ("AppleTCONDP835RestoreInfoCreateRequest: options is NULL",2,0,
                        &cf_AppleTCONUpdaterErrorDomain);
LAB_00225790:
    lVar11 = 0;
    local_38 = 0;
    lVar9 = 0;
    lVar8 = 0;
  }
  else {
    cVar4 = _CFDictionaryContainsKey(param_1,&cf_BuildIdentity);
    if (cVar4 == '\0') {
LAB_0022576c:
      lVar10 = _AppleTCONLoggingCreateCFErrorWithDomain
                         ("AppleTCONDP835RestoreInfoCreateRequest: BuildIdentity is NULL in input options"
                          ,2,param_1,&cf_AppleTCONUpdaterErrorDomain);
      goto LAB_00225790;
    }
    uVar7 = _CFDictionaryGetValue(param_1,&cf_BuildIdentity);
    lVar8 = _AMSupportSafeRetain(uVar7);
    if (lVar8 == 0) goto LAB_0022576c;
    cVar4 = _CFDictionaryContainsKey(param_1,&cf_DeviceInfo);
    if (cVar4 == '\0') {
LAB_002257a0:
      lVar10 = _AppleTCONLoggingCreateCFErrorWithDomain
                         ("AppleTCONDP835RestoreInfoCreateRequest: Cannot get DeviceInfo",2,param_1,
                          &cf_AppleTCONUpdaterErrorDomain);
      lVar9 = 0;
LAB_002257cf:
      local_38 = 0;
      lVar11 = 0;
    }
    else {
      uVar7 = _CFDictionaryGetValue(param_1,&cf_DeviceInfo);
      lVar9 = _AMSupportSafeRetain(uVar7);
      if (lVar9 == 0) goto LAB_002257a0;
      lVar10 = _CFDictionaryGetValue(param_1,&cf_FirmwareData);
      if (lVar10 == 0) {
LAB_00225e6f:
        lVar10 = _AppleTCONLoggingCreateCFErrorWithDomain
                           ("AppleTCONDP835RestoreInfoCreateRequest: kUpdaterFirmware is NULL in input options"
                            ,2,param_1,&cf_AppleTCONUpdaterErrorDomain);
        goto LAB_002257cf;
      }
      lVar11 = _CFGetTypeID(lVar10);
      lVar12 = _CFDataGetTypeID();
      if (lVar11 != lVar12) goto LAB_00225e6f;
      lVar12 = _AMSupportSafeRetain(lVar10);
      if (lVar12 == 0) {
        local_38 = 2;
LAB_00225ef6:
        lVar13 = 0;
LAB_00225f16:
        local_58 = 0;
LAB_00225f3d:
        local_40 = 0;
        lVar15 = 0;
        lVar11 = 0;
        lVar14 = 0;
      }
      else {
        uVar7 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
        lVar13 = _CFArrayCreateMutable(uVar7,0,PTR__kCFTypeArrayCallBacks_004411a8);
        if (lVar13 == 0) {
          local_38 = 3;
          goto LAB_00225ef6;
        }
        local_40 = uVar7;
        local_58 = _CFPropertyListCreateWithData(uVar7,lVar12,0,0,0);
        if (local_58 == 0) {
          local_38 = 0x11;
          goto LAB_00225f16;
        }
        lVar11 = _CFGetTypeID(local_58);
        lVar14 = _CFDictionaryGetTypeID();
        if (lVar11 != lVar14) {
          local_38 = 0x11;
          goto LAB_00225f3d;
        }
        local_38 = 3;
        lVar19 = 0;
        do {
          lVar3 = local_40;
          lVar11 = 0;
          lVar14 = _CFDictionaryCreateMutable
                             (local_40,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                              PTR__kCFTypeDictionaryValueCallBacks_004411b8);
          if (lVar14 == 0) {
            local_40 = 0;
            goto LAB_00225711;
          }
          lVar11 = 0;
          lVar15 = _CFStringCreateWithFormat
                             (lVar3,0,&cf__d_firmware__s_Digest,restoreInfoBoardID,
                              *(undefined8 *)((long)&restoreInfoFirmwareKeys + lVar19));
          if (lVar15 == 0) {
            local_40 = 0;
            lVar15 = 0;
            goto LAB_0022571b;
          }
          lVar11 = _AMSupportGetValueForKeyPathInDict(lVar3,local_58,lVar15);
          if (lVar11 == 0) {
            local_38 = 10;
            lVar11 = 0;
            local_40 = 0;
            goto LAB_0022571b;
          }
          _AMSupportSafeRelease(lVar15);
          _CFDictionarySetValue(lVar14,&cf_Digest,lVar11);
          _CFArrayAppendValue(lVar13);
          _AMSupportSafeRelease(lVar14);
          lVar19 = lVar19 + 0x10;
        } while (lVar19 != 0x40);
        lVar11 = _AMSupportSafeRetain(lVar13);
        local_38 = 0;
        local_40 = CONCAT71((int7)((ulong)lVar11 >> 8),1);
LAB_00225711:
        lVar15 = 0;
        lVar14 = 0;
      }
LAB_0022571b:
      _AMSupportSafeRelease(lVar15);
      _AMSupportSafeRelease(lVar13);
      _AMSupportSafeRelease(lVar14);
      _AMSupportSafeRelease(local_58);
      _AMSupportSafeRelease(lVar12);
      if ((char)local_40 == '\0') {
        lVar10 = _AppleTCONLoggingCreateCFErrorWithDomain
                           ("AppleTCONDP835RestoreInfoCreateRequest: CreateMeasurementArray fails for AppleTCONDP835"
                            ,local_38,lVar10,&cf_AppleTCONUpdaterErrorDomain);
        local_38 = 0;
      }
      else {
        lVar10 = _CFDictionaryGetCount(lVar9);
        if (lVar10 == 1) {
          lVar12 = 0;
          goto LAB_00225d24;
        }
        local_44 = 0;
        bVar1 = true;
        if (lVar11 == 0) {
          local_50 = 2;
LAB_00225e68:
          local_38 = 0;
          lVar10 = 0;
LAB_00225ce3:
          lVar12 = 0;
        }
        else {
          local_40 = _CFDictionaryCreateMutable
                               (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                PTR__kCFTypeDictionaryValueCallBacks_004411b8);
          if (local_40 == 0) {
            local_50 = 3;
            goto LAB_00225e68;
          }
          pcVar17 = (cfstringStruct *)
                    _AppleTCONDP835DeviceRestoreTagForBoardID(7,restoreInfoBoardID);
          lVar10 = _CFDictionaryGetValue(lVar9,pcVar17);
          local_50 = 0x11;
          if (lVar10 != 0) {
            lVar12 = _CFGetTypeID(lVar10);
            lVar13 = _CFNumberGetTypeID();
            if (lVar12 != lVar13) goto LAB_00225f45;
            iVar5 = _AMSupportGetUInt32(lVar10,&local_44);
            iVar2 = local_44;
            if (iVar5 != 0) {
              local_38 = 0;
              local_50 = 0xb;
              goto LAB_00225fbc;
            }
            if (local_44 == 0) {
              pcVar17 = &cf_Baobab_SecurityDomain;
            }
            _AMSupportCFDictionarySetInteger32(local_40,pcVar17,local_44);
            local_38 = 0;
            pcVar17 = (cfstringStruct *)
                      _AppleTCONDP835DeviceRestoreTagForBoardID(0,restoreInfoBoardID);
            if (iVar2 == 0) {
              pcVar17 = &cf__Baobab_Ticket;
            }
            lVar12 = *(long *)PTR__kCFBooleanTrue_00441110;
            _CFDictionaryAddValue(local_40,pcVar17);
            pcVar17 = (cfstringStruct *)
                      _AppleTCONDP835DeviceRestoreTagForBoardID(2,restoreInfoBoardID);
            lVar10 = _CFDictionaryGetValue(lVar8,&cf_Baobab_ChipID);
            if (lVar10 == 0) goto LAB_00225fbc;
            lVar13 = _CFGetTypeID(lVar10);
            lVar14 = _CFNumberGetTypeID();
            if (lVar13 != lVar14) goto LAB_00225ea0;
            iVar5 = _AMSupportGetUInt32(lVar10,&local_44);
            lVar10 = local_40;
            if (iVar5 != 0) {
              local_38 = 0;
              local_50 = 0xb;
LAB_00225e1c:
              lVar12 = 0;
              goto LAB_00225cf2;
            }
            if (iVar2 == 0) {
              pcVar17 = &cf_Baobab_ChipID;
            }
            _AMSupportCFDictionarySetInteger32(local_40,pcVar17,local_44);
            pcVar17 = (cfstringStruct *)
                      _AppleTCONDP835DeviceRestoreTagForBoardID(3,restoreInfoBoardID);
            lVar13 = _CFDictionaryGetValue(lVar8,pcVar17);
            if (lVar13 == 0) {
LAB_00225f5e:
              local_38 = 0;
              lVar12 = 0;
              bVar1 = true;
              goto LAB_00225cf6;
            }
            lVar14 = _CFGetTypeID(lVar13);
            lVar15 = _CFNumberGetTypeID();
            if (lVar14 != lVar15) goto LAB_00225f5e;
            iVar5 = _AMSupportGetUInt32(lVar13,&local_44);
            if (iVar5 != 0) {
LAB_00225f4f:
              local_50 = 0xb;
              goto LAB_00225f5e;
            }
            if (iVar2 == 0) {
              pcVar17 = &cf_Baobab_BoardID;
            }
            _AMSupportCFDictionarySetInteger32(lVar10,pcVar17,local_44);
            pcVar17 = (cfstringStruct *)
                      _AppleTCONDP835DeviceRestoreTagForBoardID(4,restoreInfoBoardID);
            lVar10 = _CFDictionaryGetValue(lVar8,&cf_Baobab_ManifestEpoch);
            if (lVar10 == 0) {
LAB_00225ea0:
              local_38 = 0;
              goto LAB_00225e1c;
            }
            lVar13 = _CFGetTypeID(lVar10);
            lVar14 = _CFNumberGetTypeID();
            if (lVar13 != lVar14) goto LAB_00225ea0;
            iVar5 = _AMSupportGetUInt32(lVar10,&local_44);
            lVar10 = local_40;
            if (iVar5 != 0) goto LAB_00225f4f;
            if (iVar2 == 0) {
              pcVar17 = &cf_Baobab_ManifestEpoch;
            }
            _AMSupportCFDictionarySetInteger32(local_40,pcVar17,local_44);
            pcVar17 = (cfstringStruct *)
                      _AppleTCONDP835DeviceRestoreTagForBoardID(5,restoreInfoBoardID);
            lVar13 = _CFDictionaryGetValue(lVar9,pcVar17);
            if (lVar13 == 0) goto LAB_00225f5e;
            lVar14 = _CFGetTypeID(lVar13);
            lVar15 = _CFBooleanGetTypeID();
            if (lVar14 != lVar15) goto LAB_00225f5e;
            cVar4 = _CFBooleanGetValue(lVar13);
            if (iVar2 == 0) {
              pcVar17 = &cf_Baobab_ProductionMode;
            }
            lVar13 = lVar12;
            if (cVar4 == '\0') {
              lVar13 = *(long *)PTR__kCFBooleanFalse_00441108;
            }
            _CFDictionaryAddValue(lVar10,pcVar17,lVar13);
            if (iVar2 != 0) {
              uVar7 = _AppleTCONDP835DeviceRestoreTagForBoardID(8,restoreInfoBoardID);
              lVar12 = _CFDictionaryGetValue(lVar9,uVar7);
              if (lVar12 != 0) {
                lVar14 = _CFGetTypeID(lVar12);
                lVar15 = _CFDataGetTypeID();
                if (lVar14 == lVar15) {
                  _CFDictionaryAddValue(lVar10,uVar7,lVar12);
                  pcVar17 = (cfstringStruct *)
                            _AppleTCONDP835DeviceRestoreTagForBoardID(10,restoreInfoBoardID);
                  lVar12 = _CFDictionaryGetValue(lVar9,pcVar17);
                  if (lVar12 != 0) {
                    lVar14 = _CFGetTypeID(lVar12);
                    lVar15 = _CFDataGetTypeID();
                    if (lVar14 == lVar15) goto LAB_00225bdd;
                  }
                }
              }
              goto LAB_00225f5e;
            }
            lVar14 = _CFDictionaryGetValue(param_1,&cf_Options);
            if (lVar14 != 0) {
              lVar15 = _CFGetTypeID(lVar14);
              lVar19 = _CFDictionaryGetTypeID();
              if ((lVar15 == lVar19) &&
                 (lVar14 = _CFDictionaryGetValue(lVar14,&cf_FuseSDOM), lVar14 != 0)) {
                lVar15 = _CFGetTypeID(lVar14);
                lVar19 = _CFBooleanGetTypeID();
                if ((lVar15 == lVar19) && (cVar4 = _CFBooleanGetValue(lVar14), cVar4 != '\0')) {
                  pcVar17 = &cf_Baobab_Provisioning;
LAB_00225bdd:
                  _CFDictionaryAddValue(lVar10,pcVar17,lVar12);
                }
              }
            }
            lVar10 = _CFArrayGetCount(lVar11);
            if (lVar10 != 4) {
              local_38 = 0;
              local_50 = 2;
              goto LAB_00225e1c;
            }
            uVar7 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
            piVar18 = &DAT_0044e5b8;
            local_38 = 0;
            lVar14 = 0;
            do {
              lVar10 = _CFArrayGetValueAtIndex(lVar11,lVar14);
              if (lVar10 == 0) goto LAB_00225e1c;
              lVar12 = _CFGetTypeID(lVar10);
              lVar15 = _CFDictionaryGetTypeID();
              if (lVar12 != lVar15) goto LAB_00225e1c;
              lVar12 = _CFDictionaryCreateMutableCopy(uVar7,0,lVar10);
              if (lVar12 == 0) {
                local_50 = 3;
                goto LAB_00225e1c;
              }
              _CFDictionaryAddValue(lVar12,&cf_EPRO,lVar13);
              uVar6 = *piVar18 - 0xb;
              if ((3 < uVar6) || (lVar10 = *(long *)(&DAT_0044e5f0)[uVar6], lVar10 == 0)) {
                local_50 = 2;
                goto LAB_00225cf2;
              }
              if (iVar2 != 0) {
                lVar10 = _AppleTCONDP835DeviceRestoreTagForBoardID(*piVar18,restoreInfoBoardID);
              }
              _CFDictionaryAddValue(local_40,lVar10,lVar12);
              _AMSupportSafeRelease(lVar12);
              lVar10 = local_40;
              lVar14 = lVar14 + 1;
              piVar18 = piVar18 + 4;
            } while (lVar14 != 4);
            local_38 = _AMSupportSafeRetain(local_40);
            bVar1 = false;
            local_50 = 0;
            goto LAB_00225ce3;
          }
LAB_00225f45:
          local_38 = 0;
LAB_00225fbc:
          lVar12 = 0;
LAB_00225cf2:
          bVar1 = true;
          lVar10 = local_40;
        }
LAB_00225cf6:
        _AMSupportSafeRelease(lVar12);
        _AMSupportSafeRelease(lVar10);
        if ((!bVar1) && (lVar12 = local_38, local_38 != 0)) goto LAB_00225d24;
        lVar10 = _AppleTCONLoggingCreateCFErrorWithDomain
                           ("AppleTCONDP835RestoreInfoCreateRequest: CreateRequestDictForTATSU fails."
                            ,local_50,param_1,&cf_AppleTCONUpdaterErrorDomain);
      }
    }
  }
  lVar12 = local_38;
  if (lVar10 != 0) {
    uVar7 = _CFErrorCopyDescription(lVar10);
    uVar16 = _CFStringGetCStringPtr(uVar7,0);
    _AppleTCONLoggingLogMsg("%s [error]: %s\n","AppleTCONDP835RestoreInfoCreateRequest",uVar16);
    _CFRelease(uVar7);
    _AMSupportSafeRelease(local_38);
    if (param_2 != (undefined8 *)0x0) {
      uVar7 = _AMSupportSafeRetain(lVar10);
      *param_2 = uVar7;
    }
    _AMSupportSafeRelease(lVar10);
    lVar12 = local_38;
  }
LAB_00225d24:
  _AMSupportSafeRelease(lVar11);
  _AMSupportSafeRelease(lVar8);
  _AMSupportSafeRelease(lVar9);
  return lVar12;
}

