// rea decompile_all
// name: _AMDeviceRequestAbbreviatedSendSync
// address: 0x10119a
// body: available
// range: 0x10119a-0x1018eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _AMDeviceRequestAbbreviatedSendSync(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  cfstringStruct *pcVar10;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  if (param_1 == 0) {
    _AMRLog(3,&cf__s_badparameter_device,"AMDeviceRequestAbbreviatedSendSync");
    return 1;
  }
  lVar4 = _AMDeviceCreateCopy();
  if (lVar4 == 0) {
    _AMRLog(3,&cf_Couldnotcreatecopyofdevice_p,param_1);
    return 0xffffffff;
  }
  iVar2 = _AMDeviceConnect(lVar4);
  if (iVar2 != 0) {
    lVar7 = 0;
    _AMRLog(3,&cf_can_tconnecttothedevice);
    uVar3 = 0xffffffff;
    lVar5 = 0;
    lVar6 = 0;
    goto LAB_00101834;
  }
  lVar5 = _AMDeviceCopyValueWithError(lVar4,0,&cf_UniqueChipID,0);
  if (lVar5 != 0) {
    lVar6 = _CFGetTypeID(lVar5);
    lVar7 = _CFNumberGetTypeID();
    if (lVar6 == lVar7) {
      _CFNumberGetValue(lVar5,0xb,&local_58);
      _CFRelease(lVar5);
      lVar5 = _AMDeviceCopyValueWithError(lVar4,0,&cf_ChipID,0);
      local_50 = param_3;
      if (lVar5 != 0) {
        lVar6 = _CFGetTypeID(lVar5);
        lVar7 = _CFNumberGetTypeID();
        if (lVar6 != lVar7) goto LAB_00101305;
        _CFNumberGetValue(lVar5,9,&local_38);
        _CFRelease(lVar5);
        lVar6 = 0;
        goto LAB_00101505;
      }
LAB_00101305:
      lVar6 = _AMDeviceCopyValueWithError(lVar4,0,&cf_HardwareModel,0);
      if (lVar6 == 0) {
LAB_001014ef:
        pcVar10 = &cf_devicedoesn_tsupportHardwareModelquery;
        lVar7 = 0;
LAB_00101822:
        _AMRLog(3,pcVar10);
      }
      else {
        lVar7 = _CFGetTypeID(lVar6);
        lVar8 = _CFStringGetTypeID();
        if (lVar7 != lVar8) goto LAB_001014ef;
        lVar7 = _CFStringCompare(lVar6,&cf_N94AP,0);
        if ((((lVar7 == 0) || (lVar7 = _CFStringCompare(lVar6,&cf_K93AP,0), lVar7 == 0)) ||
            (lVar7 = _CFStringCompare(lVar6,&cf_K94AP,0), lVar7 == 0)) ||
           (lVar7 = _CFStringCompare(lVar6,&cf_K95AP,0), lVar7 == 0)) {
          local_38 = 0x8940;
LAB_00101505:
          lVar5 = _AMDeviceCopyValueWithError(lVar4,0,&cf_BoardId,0);
          if (lVar5 == 0) {
LAB_0010154f:
            if (lVar6 == 0) {
              local_48 = 0;
              lVar6 = _AMDeviceCopyValueWithError(lVar4,0,&cf_HardwareModel,0);
              lVar7 = local_48;
              if (lVar6 != 0) goto LAB_0010157b;
            }
            else {
LAB_0010157b:
              lVar8 = _CFGetTypeID(lVar6);
              lVar9 = _CFStringGetTypeID();
              lVar7 = lVar6;
              if (lVar8 == lVar9) {
                lVar7 = _CFStringCompare(lVar6,&cf_N94AP,0);
                local_40 = param_2;
                if (((lVar7 == 0) || (lVar7 = _CFStringCompare(lVar6,&cf_N81AP,0), lVar7 == 0)) ||
                   (lVar7 = _CFStringCompare(lVar6,&cf_J33AP,0), lVar7 == 0)) {
                  local_34 = 8;
                }
                else {
                  lVar7 = _CFStringCompare(lVar6,&cf_N90AP,0);
                  if (((lVar7 == 0) || (lVar7 = _CFStringCompare(lVar6,&cf_N88AP,0), lVar7 == 0)) ||
                     (lVar7 = _CFStringCompare(lVar6,&cf_J1AP,0), lVar7 == 0)) {
                    local_34 = 0;
                  }
                  else {
                    lVar7 = _CFStringCompare(lVar6,&cf_N92AP,0);
                    if (((lVar7 == 0) || (lVar7 = _CFStringCompare(lVar6,&cf_K94AP,0), lVar7 == 0))
                       || (lVar7 = _CFStringCompare(lVar6,&cf_K93AAP,0), lVar7 == 0)) {
                      local_34 = 6;
                    }
                    else {
                      lVar7 = _CFStringCompare(lVar6,&cf_K48AP,0);
                      if ((lVar7 == 0) || (lVar7 = _CFStringCompare(lVar6,&cf_K48mAP,0), lVar7 == 0)
                         ) {
                        local_34 = 3;
                      }
                      else {
                        lVar7 = _CFStringCompare(lVar6,&cf_K93AP,0);
                        if ((lVar7 == 0) ||
                           (lVar7 = _CFStringCompare(lVar6,&cf_J2AAP,0), lVar7 == 0)) {
                          local_34 = 4;
                        }
                        else {
                          lVar7 = _CFStringCompare(lVar6,&cf_K95AP,0);
                          if (((lVar7 != 0) &&
                              (lVar7 = _CFStringCompare(lVar6,&cf_J2AP,0), lVar7 != 0)) &&
                             (lVar7 = _CFStringCompare(lVar6,&cf_N18AP,0), lVar7 != 0))
                          goto LAB_0010173b;
                          local_34 = 2;
                        }
                      }
                    }
                  }
                }
                goto LAB_001017a7;
              }
            }
            local_48 = lVar7;
            lVar7 = 0;
            _AMRLog(3,&cf_devicedoesn_tsupportHardwareModelquery);
            uVar3 = 0xffffffff;
            lVar6 = local_48;
            goto LAB_00101834;
          }
          lVar7 = _CFGetTypeID(lVar5);
          lVar8 = _CFNumberGetTypeID();
          if (lVar7 != lVar8) goto LAB_0010154f;
          local_40 = param_2;
          _CFNumberGetValue(lVar5,9,&local_34);
LAB_001017a7:
          lVar7 = _AMDeviceCopyValueWithError(lVar4,0,&cf_ProductionSOC,0);
          if (lVar7 != 0) {
            lVar8 = _CFGetTypeID(lVar7);
            lVar9 = _CFBooleanGetTypeID();
            if (lVar8 == lVar9) {
              cVar1 = _CFBooleanGetValue(lVar7);
              _CFRelease(lVar7);
              uVar3 = _AMRestoreRequestAbbreviatedSendSync
                                (local_58,local_38,local_34,1,cVar1 != '\0',local_40,local_50);
              goto LAB_00101816;
            }
          }
          pcVar10 = &cf_devicedoesn_tsupportProductionSOCquery;
          goto LAB_00101822;
        }
        lVar7 = _CFStringCompare(lVar6,&cf_N90AP,0);
        if (((lVar7 == 0) || (lVar7 = _CFStringCompare(lVar6,&cf_N92AP,0), lVar7 == 0)) ||
           ((lVar7 = _CFStringCompare(lVar6,&cf_K48AP,0), lVar7 == 0 ||
            ((lVar7 = _CFStringCompare(lVar6,&cf_N81AP,0), lVar7 == 0 ||
             (lVar7 = _CFStringCompare(lVar6,&cf_K48mAP,0), lVar7 == 0)))))) {
          local_38 = 0x8930;
          goto LAB_00101505;
        }
        lVar7 = _CFStringCompare(lVar6,&cf_N88AP,0);
        if (lVar7 == 0) {
          local_38 = 0x8920;
          goto LAB_00101505;
        }
        lVar7 = _CFStringCompare(lVar6,&cf_J1AP,0);
        if (((lVar7 == 0) || (lVar7 = _CFStringCompare(lVar6,&cf_J2AP,0), lVar7 == 0)) ||
           (lVar7 = _CFStringCompare(lVar6,&cf_J2AAP,0), lVar7 == 0)) {
          local_38 = 0x8945;
          goto LAB_00101505;
        }
        lVar7 = _CFStringCompare(lVar6,&cf_K93AAP,0);
        if ((lVar7 == 0) || (lVar7 = _CFStringCompare(lVar6,&cf_J33AP,0), lVar7 == 0)) {
          local_38 = 0x8942;
          goto LAB_00101505;
        }
        lVar7 = _CFStringCompare(lVar6,&cf_N18AP,0);
        if (lVar7 == 0) {
          local_38 = 0x8922;
          goto LAB_00101505;
        }
LAB_0010173b:
        uVar3 = 0;
        lVar7 = _CFStringFind(lVar6,&cf_dev,1);
        if (lVar7 != -1) {
LAB_00101816:
          lVar7 = 0;
          goto LAB_00101834;
        }
        lVar7 = 0;
        _AMRLog(3,&cf_unabletofindhardwaremodel__,lVar6);
      }
      uVar3 = 0xffffffff;
      goto LAB_00101834;
    }
  }
  lVar7 = 0;
  _AMRLog(3,&cf_devicedoesn_tsupportUniqueChipIDquery);
  uVar3 = 0xffffffff;
  lVar6 = 0;
LAB_00101834:
  _AMDeviceDisconnect(lVar4);
  _CFRelease(lVar4);
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (lVar7 != 0) {
    _CFRelease(lVar7);
  }
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  return uVar3;
}

