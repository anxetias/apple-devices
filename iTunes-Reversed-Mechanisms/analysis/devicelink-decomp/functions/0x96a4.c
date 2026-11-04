// rea decompile_all
// name: _SocketConnectLockdownService
// address: 0x96a4
// body: available
// range: 0x96a4-0x99a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x99a5 to 0xee55 ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * _SocketConnectLockdownService(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  void *pvVar5;
  char *pcVar6;
  undefined1 local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_00015070;
  puVar3 = _calloc(0x28,1);
  if (puVar3 == (undefined8 *)0x0) goto LAB_00009793;
  *puVar3 = 0xffffffff;
  uVar1 = _AMDeviceConnect(param_1);
  if (uVar1 == 0) {
    iVar2 = _AMDeviceValidatePairing(param_1);
    if (iVar2 != 0) {
      _AMDeviceDisconnect(param_1);
      _SocketLog("Attempt to connect to a unpaired device. Cowardly refusing to do so.");
      *(undefined4 *)((long)puVar3 + 4) = 8;
      goto LAB_00009793;
    }
    uVar1 = _AMDeviceStartSession(param_1);
    if (uVar1 == 0) {
      uVar1 = _AMDeviceSecureStartService(param_1,param_2,param_3,puVar3 + 2);
      if (uVar1 != 0) {
        _AMDeviceDisconnect(param_1);
        lVar4 = _AMDCopyErrorText(uVar1);
        pvVar5 = (void *)__createCStringFromCFString(lVar4);
        if (lVar4 != 0) {
          _CFRelease(lVar4);
        }
        ___sprintf_chk(local_438,0,0x400,"Could not start service on device: %s (%d/%d)",pvVar5,
                       uVar1,uVar1 & 0x17ffffff);
        _free(pvVar5);
        _SocketLog(local_438);
        iVar2 = 9;
        if (uVar1 != 0xe8000081) {
          iVar2 = (uint)(uVar1 == 0xe800001a) * 3 + 6;
        }
        *(int *)((long)puVar3 + 4) = iVar2;
      }
      uVar1 = _AMDeviceStopSession(param_1);
      if (uVar1 != 0) {
        lVar4 = _AMDCopyErrorText(uVar1);
        pvVar5 = (void *)__createCStringFromCFString(lVar4);
        if (lVar4 != 0) {
          _CFRelease(lVar4);
        }
        ___sprintf_chk(local_438,0,0x400,"Could not stop session with device: %s (%d/%d)",pvVar5,
                       uVar1,uVar1 & 0x17ffffff);
        _free(pvVar5);
        _SocketLog(local_438);
      }
      uVar1 = _AMDeviceDisconnect(param_1);
      if (uVar1 != 0) {
        lVar4 = _AMDCopyErrorText(uVar1);
        pvVar5 = (void *)__createCStringFromCFString(lVar4);
        if (lVar4 != 0) {
          _CFRelease(lVar4);
        }
        ___sprintf_chk(local_438,0,0x400,"Could not disconnect from the attached device: %s (%d/%d)"
                       ,pvVar5,uVar1,uVar1 & 0x17ffffff);
        _free(pvVar5);
        _SocketLog(local_438);
      }
      goto LAB_00009793;
    }
    _AMDeviceDisconnect(param_1);
    lVar4 = _AMDCopyErrorText(uVar1);
    pvVar5 = (void *)__createCStringFromCFString(lVar4);
    if (lVar4 != 0) {
      _CFRelease(lVar4);
    }
    pcVar6 = "Could not start session with device: %s (%d/%d)";
  }
  else {
    lVar4 = _AMDCopyErrorText(uVar1);
    pvVar5 = (void *)__createCStringFromCFString(lVar4);
    if (lVar4 != 0) {
      _CFRelease(lVar4);
    }
    pcVar6 = "Could not connect to attached device: %s (%d/%d)";
  }
  ___sprintf_chk(local_438,0,0x400,pcVar6,pvVar5,uVar1,uVar1 & 0x17ffffff);
  _free(pvVar5);
  _SocketLog(local_438);
  *(undefined4 *)((long)puVar3 + 4) = 6;
LAB_00009793:
  if (*(long *)PTR____stack_chk_guard_00015070 == local_38) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

