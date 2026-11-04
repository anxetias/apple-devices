// rea decompile_all
// name: FUN_10000e196
// address: 0x10000e196
// body: available
// range: 0x10000e196-0x10000e297 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000e293 to 0x100013425 ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10000e196(long param_1)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  int iVar5;
  char local_d8 [48];
  undefined1 local_a8;
  char local_a7;
  ushort local_a6;
  undefined1 local_a4 [4];
  undefined1 local_a0 [120];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10001c070;
  if (param_1 != 0) {
    lVar1 = _CFDataGetLength();
    uVar3 = 0;
    _CFDataGetBytes(param_1,0,lVar1,&local_a8);
    if (lVar1 == 0x10) {
LAB_10000e204:
      puVar4 = local_a4;
      iVar5 = 2;
    }
    else {
      if (lVar1 != 0x1c) {
        if (lVar1 != 0x80) goto LAB_10000e272;
        if (local_a7 != '\x1e') {
          if (local_a7 != '\x02') goto LAB_10000e270;
          goto LAB_10000e204;
        }
      }
      puVar4 = local_a0;
      iVar5 = 0x1e;
    }
    pcVar2 = _inet_ntop(iVar5,puVar4,local_d8,0x2e);
    if (pcVar2 != (char *)0x0) {
      uVar3 = _CFStringCreateWithFormat
                        (*(undefined8 *)PTR__kCFAllocatorDefault_10001c010,0,&cf__s__d,local_d8,
                         local_a6 << 8 | local_a6 >> 8);
      goto LAB_10000e272;
    }
  }
LAB_10000e270:
  uVar3 = 0;
LAB_10000e272:
  if (*(long *)PTR____stack_chk_guard_10001c070 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

