// rea decompile_all
// name: __DestroyEscrowBag
// address: 0x13358c
// body: available
// range: 0x13358c-0x133742 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x13373e to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __DestroyEscrowBag(long param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long local_c50;
  char local_c48 [1040];
  undefined1 local_838 [1024];
  undefined1 local_438 [1032];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_004412b8;
  local_c50 = 0;
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Invalid input(s).");
  }
  else {
    ___bzero(local_838,0x400);
    uVar3 = _AMDGetPairingRecordDirectoryPath();
    _CFStringGetCString(uVar3,local_838,0x400,0x8000100);
    ___bzero(local_438,0x400);
    _CFStringGetCString(lVar1,local_438,0x400,0x8000100);
    _snprintf(local_c48,0x400,"%s%c%s.plist",local_838,0x2f,local_438);
  }
  __CreatePairingRecordFromRecordOnDiskForIdentifier(*(undefined8 *)(param_1 + 0x20),&local_c50);
  if (local_c50 != 0) {
    _CFDictionaryRemoveValue(local_c50,&cf_EscrowBag);
    cVar2 = __SavePairingRecordWithDeviceID(*(undefined8 *)(param_1 + 0x20),local_c50,0);
    if (cVar2 == '\0') {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"Failed to remove escrow bag from pairing record %@",
                        *(undefined8 *)(param_1 + 0x20));
    }
    if (local_c50 != 0) {
      _CFRelease();
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

