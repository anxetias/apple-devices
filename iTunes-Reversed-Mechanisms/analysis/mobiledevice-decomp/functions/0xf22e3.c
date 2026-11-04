// rea decompile_all
// name: __setArgs
// address: 0xf22e3
// body: available
// range: 0xf22e3-0xf2768 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xf2755 to 0xf17b3 __sendCommandToDeviceWithTimeout (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __setArgs(long param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  cfstringStruct *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  cfstringStruct *pcVar11;
  ulong uVar12;
  int local_38;
  
  __AMRecoveryModeDeviceProgress(param_1,8);
  cVar2 = _AMRestoreDeviceIsBootstrapOnly(param_2,param_1 + 0x58);
  pcVar4 = (cfstringStruct *)_CFDictionaryGetValue(param_2,&cf_RestoreBootArgs);
  pcVar11 = &cf_rd_md0nand_enable_reformat_1_progress_restore;
  if (cVar2 != '\0') {
    pcVar11 = pcVar4;
  }
  if (pcVar4 != (cfstringStruct *)0x0) {
    pcVar11 = pcVar4;
  }
  if (pcVar11 == (cfstringStruct *)0x0) {
    local_38 = 0;
  }
  else {
    uVar10 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    uVar5 = _CFStringCreateWithFormat(uVar10,0,&cf_setenvnpboot_args__,pcVar11);
    __loadFirmwareInfo(param_1);
    iVar3 = __sendCommandToDeviceWithTimeout
                      (*(undefined8 *)
                        (&DAT_0032ca70 +
                        (ulong)((*(uint *)(param_1 + 0x5c) & 0xfffffff0) == 0xf0) * 8),param_1,uVar5
                       ,0);
    if (iVar3 == 0) {
      local_38 = 0;
    }
    else {
      _CFRelease(uVar5);
      _AMRLog(4,&cf_setenvnpcommandfailedwitherror_d_CouldbeanoldiBoot_Tryingplainsetenv_,iVar3);
      uVar5 = _CFStringCreateWithFormat(uVar10,0,&cf_setenvboot_args__,pcVar11);
      __loadFirmwareInfo(param_1);
      local_38 = __sendCommandToDeviceWithTimeout
                           (*(undefined8 *)
                             (&DAT_0032ca70 +
                             (ulong)((*(uint *)(param_1 + 0x5c) & 0xfffffff0) == 0xf0) * 8),param_1,
                            uVar5,0);
    }
    _CFRelease(uVar5);
  }
  lVar6 = _CFDictionaryGetValue(param_2,&cf_PersistRestoreNVRAMVariables);
  lVar1 = *(long *)PTR__kCFBooleanTrue_00441110;
  lVar7 = _CFDictionaryGetValue(param_2,&cf_RestoreNVRAMVariables);
  if (lVar7 == 0) {
    _AMRLog(6,&cf_NoreadablevaluefoundinkAMRestoreOptionsRestoreNVRAMVariables);
  }
  else {
    pcVar11 = &cf_setenvnp;
    if (lVar6 == lVar1) {
      pcVar11 = &cf_setenv;
    }
    lVar8 = _CFGetTypeID(lVar7);
    lVar9 = _CFArrayGetTypeID();
    if (lVar8 == lVar9) {
      lVar8 = _CFArrayGetCount();
      if (0 < lVar8) {
        uVar10 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
        uVar12 = 0;
        do {
          uVar5 = _CFArrayGetValueAtIndex(lVar7,uVar12);
          lVar8 = _CFGetTypeID(uVar5);
          lVar9 = _CFArrayGetTypeID();
          if (lVar8 == lVar9) {
            lVar8 = _CFArrayGetValueAtIndex(lVar7,uVar12);
            if (lVar8 == 0) {
              _AMRLog(4,&cf_Couldn_tgetNVRAMstringarrayinindex_d_,uVar12 & 0xffffffff);
              goto LAB_000f25f9;
            }
            lVar8 = _CFStringCreateByCombiningStrings(uVar10,lVar8,&cf_space_s_);
LAB_000f2534:
            if (lVar8 == 0) goto LAB_000f25f9;
            uVar5 = _CFStringCreateWithFormat(uVar10,0,&cf_____,pcVar11,lVar8);
            __loadFirmwareInfo(param_1);
            local_38 = __sendCommandToDeviceWithTimeout
                                 (*(undefined8 *)
                                   (&DAT_0032ca70 +
                                   (ulong)((*(uint *)(param_1 + 0x5c) & 0xfffffff0) == 0xf0) * 8),
                                  param_1,uVar5,0);
            if (local_38 != 0) {
              _AMRLog(4,&cf___command__failedwitherror_d_,pcVar11,uVar5,local_38);
            }
            _CFRelease(uVar5);
            _CFRelease(lVar8);
          }
          else {
            lVar9 = _CFStringGetTypeID();
            if (lVar8 == lVar9) {
              lVar8 = _CFArrayGetValueAtIndex(lVar7,uVar12);
              _CFRetain(lVar8);
              goto LAB_000f2534;
            }
            _AMRLog(4,&cf_UnknownargtypeinkAMRestoreOptionsRestoreNVRAMVariables_lu,lVar8);
LAB_000f25f9:
            _AMRLog(4,&cf_NoexecutablecommandatRestoreNVRAMVariablesarrayindex_d_,
                    uVar12 & 0xffffffff);
          }
          uVar12 = uVar12 + 1;
          lVar8 = _CFArrayGetCount(lVar7);
        } while ((long)uVar12 < lVar8);
      }
    }
    else {
      lVar8 = _CFGetTypeID(lVar7);
      lVar9 = _CFStringGetTypeID();
      if (lVar8 == lVar9) {
        uVar10 = _CFStringCreateWithFormat
                           (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,&cf_____,pcVar11,
                            lVar7);
        __loadFirmwareInfo(param_1);
        local_38 = __sendCommandToDeviceWithTimeout
                             (*(undefined8 *)
                               (&DAT_0032ca70 +
                               (ulong)((*(uint *)(param_1 + 0x5c) & 0xfffffff0) == 0xf0) * 8),
                              param_1,uVar10,0);
        if (local_38 != 0) {
          _AMRLog(4,&cf___command__failedwitherror_d_,pcVar11,uVar10,local_38);
        }
        _CFRelease(uVar10);
      }
      else {
        uVar10 = _CFGetTypeID(0);
        _AMRLog(4,&
                  cf_Unrecognizedargumenttype__lu_inRestoreNVRAMVariables_onlysupportCFArrayandCFString_
                ,uVar10);
      }
    }
  }
  if (local_38 != 0 || lVar6 != lVar1) {
    return;
  }
  __loadFirmwareInfo(param_1);
  __sendCommandToDeviceWithTimeout
            (*(undefined8 *)
              (&DAT_0032ca70 + (ulong)((*(uint *)(param_1 + 0x5c) & 0xfffffff0) == 0xf0) * 8),
             param_1,&cf_saveenv,0);
  return;
}

