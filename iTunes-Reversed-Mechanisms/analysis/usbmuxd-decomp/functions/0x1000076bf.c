// rea decompile_all
// name: FUN_1000076bf
// address: 0x1000076bf
// body: available
// range: 0x1000076bf-0x100007874 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100007870 to 0x100013425 ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000076bf(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 local_43c;
  undefined1 local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10001c070;
  local_43c = 0x16;
  if (param_1 != 0) {
    uVar2 = _CFDictionaryGetValue(param_2,PTR_cf_PairRecordID_1000211f0);
    cVar1 = FUN_1000046c7(uVar2,local_438);
    if (cVar1 == '\0') {
      if ((2 < DAT_100021030) &&
         (FUN_1000008d2(3,0,&cf__sCouldnotgetpairrecordpathfrommessage,"SendPairingRecord"),
         2 < DAT_100021030)) {
        FUN_1000008d2(3,0,&cf_messagecontents_);
      }
      FUN_1000086b3(param_2);
      uVar5 = 0x16;
    }
    else {
      lVar3 = FUN_100004818(local_438,&local_43c);
      uVar5 = local_43c;
      if (lVar3 != 0) {
        lVar4 = _CFDictionaryCreateMutable
                          (*(undefined8 *)PTR__kCFAllocatorDefault_10001c010,0,
                           PTR__kCFTypeDictionaryKeyCallBacks_10001c058,
                           PTR__kCFTypeDictionaryValueCallBacks_10001c060);
        if (lVar4 == 0) {
          FUN_100005497(param_1,0xc);
        }
        else {
          _CFDictionaryAddValue(lVar4,PTR_cf_PairRecordData_1000211f8,lVar3);
          if (5 < DAT_100021030) {
            uVar2 = _CFDictionaryGetValue(param_2,PTR_cf_PairRecordID_1000211f0);
            FUN_1000008d2(6,0,&cf_pairingrecord__senttoclient,uVar2);
          }
          FUN_100002e00(param_1,*(undefined4 *)(*(long *)(*(long *)(param_1 + 0x88) + 0x20) + 0xc),
                        lVar4);
          _CFRelease(lVar4);
        }
        _CFRelease(lVar3);
        goto LAB_10000784e;
      }
    }
    FUN_100005497(param_1,uVar5);
  }
LAB_10000784e:
  if (*(long *)PTR____stack_chk_guard_10001c070 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

