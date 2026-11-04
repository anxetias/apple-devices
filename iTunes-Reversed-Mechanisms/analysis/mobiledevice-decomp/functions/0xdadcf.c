// rea decompile_all
// name: _handleRecoveryOSiBootFWFileRequest
// address: 0xdadcf
// body: available
// range: 0xdadcf-0xdb260 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xdb25c to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleRecoveryOSiBootFWFileRequest(AMRestoreMuxedDeviceMessage*, __CFDictionary const*,
   __CFError**) */

int _handleRecoveryOSiBootFWFileRequest
              (AMRestoreMuxedDeviceMessage *param_1,__CFDictionary *param_2,__CFError **param_3)

{
  size_t sVar1;
  __AMRestoreModeDevice *p_Var2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  void *pvVar8;
  long lVar9;
  undefined8 uVar10;
  __CFError *p_Var11;
  long local_c0;
  __AMRestoreModeDevice *local_b8;
  __CFDictionary *local_b0;
  AMRestoreMuxedDeviceMessage *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  long local_88;
  void *local_80;
  int local_74;
  void *local_70;
  undefined **local_68;
  int *local_60;
  long *local_58;
  undefined8 *local_50;
  undefined ***local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_c0 = *(long *)(param_1 + 0x10);
  p_Var2 = *(__AMRestoreModeDevice **)(local_c0 + 0x10);
  local_a0 = 0;
  local_74 = 0;
  uVar10 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  p_Var11 = (__CFError *)PTR__kCFTypeDictionaryValueCallBacks_004411b8;
  local_b0 = param_2;
  local_90 = _CFDictionaryCreateMutable(uVar10,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0);
  if (local_90 == 0) {
    _AMRLog(3,&cf_FailedallocatingfirmwareImagesdictionaryforrecoveryOSiBootfirmwarefiles_);
    iVar5 = 0x12;
    goto LAB_000db205;
  }
  local_68 = &PTR____func_00446140;
  local_60 = &local_74;
  local_58 = &local_c0;
  local_50 = &local_a0;
  local_b8 = p_Var2;
  local_48 = &local_68;
  __AMRestoreModeDevice::with_amai_locked(p_Var2,&local_68);
  if (local_48 == &local_68) {
    lVar7 = 0x20;
LAB_000daec4:
    p_Var11 = (__CFError *)*local_48;
    (**(code **)(p_Var11 + lVar7))();
  }
  else {
    lVar7 = 0x28;
    if (local_48 != (undefined ***)0x0) goto LAB_000daec4;
  }
  if (local_74 == 0) {
    local_a8 = param_1;
    local_88 = _CFDictionaryGetCount(local_a0);
    if (local_88 == 0) {
      _AMRLog(6,&cf_NorecoveryOSiBootadditonalfirmwarefound_continuewithrestore_);
      p_Var11 = (__CFError *)PTR__kCFTypeDictionaryValueCallBacks_004411b8;
      lVar7 = _CFDictionaryCreateMutable(uVar10,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0);
      if (lVar7 != 0) {
        _CFDictionarySetValue
                  (lVar7,&cf_RecoveryOSNoAssetFound,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
        iVar5 = (**(code **)(*(long *)local_a8 + 0x10))(local_a8,lVar7);
        if (iVar5 == 0) {
          local_70 = (void *)0x0;
          local_80 = (void *)0x0;
          lVar9 = 0;
          iVar5 = 0;
        }
        else {
          _AMRLog(3,&cf_FailedsendingnoiBootfirmwarefoundmessage_);
          iVar5 = 9;
          local_70 = (void *)0x0;
          local_80 = (void *)0x0;
          lVar9 = 0;
        }
LAB_000db1c8:
        _CFRelease(lVar7);
        goto LAB_000db1d0;
      }
      iVar5 = 0x12;
    }
    else {
      sVar1 = local_88 * 8;
      pvVar8 = _malloc(sVar1);
      local_80 = _malloc(sVar1);
      p_Var11 = (__CFError *)CONCAT71((int7)((ulong)p_Var11 >> 8),local_80 != (void *)0x0);
      local_70 = pvVar8;
      if (pvVar8 == (void *)0x0 || local_80 == (void *)0x0) {
        _AMRLog(3,&cf_FailedallocatingbuffersforrecoveryOSiBootfirmwarefiles_);
        iVar5 = 0x12;
        lVar9 = 0;
LAB_000db1d0:
        if (local_70 != (void *)0x0) goto LAB_000db1d9;
      }
      else {
        _CFDictionaryGetKeysAndValues(local_a0,pvVar8);
        if (local_88 < 1) {
          iVar5 = -1;
          lVar9 = 0;
        }
        else {
          lVar9 = 0;
          lVar7 = 0;
          do {
            local_98 = 0;
            if (lVar9 != 0) {
              _CFRelease(lVar9);
            }
            uVar3 = *(undefined8 *)((long)local_80 + lVar7 * 8);
            uVar4 = *(undefined8 *)((long)local_70 + lVar7 * 8);
            lVar9 = _CFURLCopyFileSystemPath(uVar3,0);
            if (lVar9 == 0) goto LAB_000db18c;
            iVar5 = __AMRestoreCreateCFDataWithContentsOfFile(lVar9,&local_98);
            if (iVar5 != 0) {
              _AMRLog(3,&cf_couldn_tloadrecoveryosfile__d_,iVar5);
              iVar5 = 10;
              goto LAB_000db1d9;
            }
            _AMRLog(6,&cf_Adding__totheiBootfirmwarefilesmessage_,uVar3);
            _CFDictionaryAddValue(local_90,uVar4,local_98);
            _CFRelease(local_98);
            lVar7 = lVar7 + 1;
          } while (local_88 != lVar7);
          iVar5 = 0;
        }
        _AMRestoreModeDeviceProgressAsync(local_b8,0x46,-1,(__CFString *)0x0);
        _AMRLog(6,&cf_SendingrecoveyOSiBootadditonalfirmwarefound_);
        p_Var11 = (__CFError *)PTR__kCFTypeDictionaryValueCallBacks_004411b8;
        lVar7 = _CFDictionaryCreateMutable(uVar10,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0);
        if (lVar7 != 0) {
          _CFDictionarySetValue(lVar7,&cf_AdditionalBootImages,local_90);
          iVar6 = (**(code **)(*(long *)local_a8 + 0x10))(local_a8,lVar7);
          if (iVar6 == 0) {
            _AMRLog(6,&cf_FinishedsendingiBootfirmwarefilestodevice_);
          }
          else {
            _AMRLog(3,&cf_FailedsendingnoiBootfirmwarefoundmessage_);
            iVar5 = 9;
          }
          goto LAB_000db1c8;
        }
        _AMRLog(3,&cf_FailedallocatingbuffersforrecoveryOSiBootfirmwarereplymessagetodevice_);
LAB_000db18c:
        iVar5 = 0x12;
LAB_000db1d9:
        _free(local_70);
      }
      if (local_80 != (void *)0x0) {
        _free(local_80);
      }
      if (lVar9 != 0) {
        _CFRelease(lVar9);
      }
    }
  }
  else {
    _AMRLog(3,&cf_AMAuthInstallBundleCopyPersonalizediBootFirmwareURLsreturned_d);
    iVar5 = 6;
  }
  _CFRelease(local_90);
LAB_000db205:
  if ((local_b0 != (__CFDictionary *)0x0) && (iVar5 != 0)) {
    uVar10 = _AMRCreateErrorWithUnderlyingError
                       ((__CFString *)(long)iVar5,0x45fdb0,(__CFString *)0x0,p_Var11);
    *(undefined8 *)local_b0 = uVar10;
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

