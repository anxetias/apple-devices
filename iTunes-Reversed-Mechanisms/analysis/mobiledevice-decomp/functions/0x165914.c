// rea decompile_all
// name: ___thr_AMRestorableDeviceCreateFromAMDevice
// address: 0x165914
// body: available
// range: 0x165914-0x165a3a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1659cf to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x165a1d to 0x16f561 _AMRSafeLogAndRelease (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRestorableDeviceCreateFromAMDevice(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  undefined8 uVar5;
  
  if (param_1 == (long *)0x0) {
    pcVar4 = &cf_Can_tgetrestorablewithNULLargs;
  }
  else if (*param_1 == 0) {
    pcVar4 = &cf_Can_tgetrestorablewithNULLAMDeviceRef;
  }
  else {
    iVar1 = *(int *)(*param_1 + 0x10);
    if (iVar1 == 0) {
      pcVar4 = &cf_Can_tlocaterestorabledevicesinceAMDevicehasnomuxID;
    }
    else {
      lVar2 = __AMRestoreGetECIDForMuxID(iVar1);
      if (lVar2 != 0) {
        lVar2 = __AMRestorableCreateKeyForDeviceWithECID(lVar2);
        _dispatch_semaphore_wait
                  (*(dispatch_semaphore_t *)(_gRestorableData + 0x20),0xffffffffffffffff);
        lVar3 = _CFDictionaryGetValue(*(undefined8 *)(_gRestorableData + 0x38),lVar2);
        param_1[1] = lVar3;
        if (lVar3 != 0) {
          _CFRetain(lVar3);
        }
        _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x20));
        if (param_1[1] == 0) {
          uVar5 = _AMRMakeString(&cf_NorestorableexistsformuxID__d,iVar1);
        }
        else {
          uVar5 = 0;
        }
        _AMRSafeLogAndRelease(3,uVar5);
        if (lVar2 != 0) {
          _CFRelease(lVar2);
          return;
        }
        return;
      }
      pcVar4 = (cfstringStruct *)_AMRMakeString(&cf_NomuxdeviceisbeingtrackedbymuxID__d,iVar1);
    }
  }
  _AMRSafeLogAndRelease(3,pcVar4);
  return;
}

