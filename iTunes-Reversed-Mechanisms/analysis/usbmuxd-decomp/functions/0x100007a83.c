// rea decompile_all
// name: FUN_100007a83
// address: 0x100007a83
// body: available
// range: 0x100007a83-0x100007bec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100007be8 to 0x100013425 ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100007a83(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  char *pcVar5;
  cfstringStruct *pcVar6;
  char local_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10001c070;
  if (param_1 == 0) goto LAB_100007bca;
  uVar3 = _CFDictionaryGetValue(param_2,PTR_cf_PairRecordID_1000211f0);
  cVar1 = FUN_1000046c7(uVar3,local_428);
  if (cVar1 == '\0') {
    if (2 < DAT_100021030) {
      FUN_1000008d2(3,0,&cf__sCouldnotgetpairrecordpathfrommessage,"DeletePairingRecord");
      if (2 < DAT_100021030) {
        FUN_1000008d2(3,0,&cf_messagecontents_);
      }
    }
    FUN_1000086b3(param_2);
    iVar2 = 0x16;
  }
  else {
    iVar2 = _unlink(local_428);
    if (iVar2 == -1) {
      piVar4 = ___error();
      iVar2 = *piVar4;
      if (2 < DAT_100021030) {
        piVar4 = ___error();
        pcVar5 = _strerror(*piVar4);
        pcVar6 = &cf__sunabletounlinkfile_s__s;
        uVar3 = 3;
        goto LAB_100007bb8;
      }
    }
    else {
      iVar2 = 0;
      if (6 < DAT_100021030) {
        pcVar5 = *(char **)(param_1 + 0x30);
        pcVar6 = &cf__sdeletedfile_sfor___;
        iVar2 = 0;
        uVar3 = 7;
LAB_100007bb8:
        FUN_1000008d2(uVar3,0,pcVar6,"DeletePairingRecord",local_428,pcVar5);
      }
    }
  }
  FUN_100005497(param_1,iVar2);
LAB_100007bca:
  if (*(long *)PTR____stack_chk_guard_10001c070 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

