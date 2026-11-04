// rea decompile_all
// name: __ConvertStatsToDict
// address: 0xab6e7
// body: available
// range: 0xab6e7-0xab817 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xab813 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __ConvertStatsToDict(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_1d8 [26];
  undefined8 local_108 [26];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar4 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  uVar1 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
  uVar2 = *(undefined8 *)PTR__kCFBooleanFalse_00441108;
  plVar6 = &DAT_004443b8;
  lVar5 = 0;
  do {
    local_108[lVar5] = *(undefined8 *)plVar6[-3];
    if ((char)plVar6[-1] == '\x01') {
      uVar3 = uVar1;
      if ((*(byte *)(param_1 + *plVar6) & 1) == 0) {
        uVar3 = uVar2;
      }
      _CFRetain(uVar3);
    }
    else {
      uVar3 = _CFNumberCreate(uVar4,plVar6[-2],*plVar6 + param_1);
    }
    local_1d8[lVar5] = uVar3;
    lVar5 = lVar5 + 1;
    plVar6 = plVar6 + 5;
  } while (lVar5 != 0x1a);
  uVar4 = _CFDictionaryCreate(uVar4,local_108,local_1d8,0x1a,
                              PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                              PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  lVar5 = 0;
  do {
    _CFRelease(local_1d8[lVar5]);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x1a);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

