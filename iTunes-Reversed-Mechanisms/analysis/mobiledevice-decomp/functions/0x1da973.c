// rea decompile_all
// name: _BrotliSetDepth
// address: 0x1da973
// body: available
// range: 0x1da973-0x1daa0c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1daa08 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _BrotliSetDepth(int param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  int local_58 [18];
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_004412b8;
  local_58[0] = -1;
  uVar4 = 0;
  while( true ) {
    while( true ) {
      lVar1 = (long)param_1;
      param_1 = (int)*(short *)(param_2 + 4 + lVar1 * 8);
      iVar3 = (int)uVar4;
      if (-1 < param_1) break;
      *(char *)(param_3 + *(short *)(param_2 + 6 + lVar1 * 8)) = (char)uVar4;
      uVar2 = 1;
      if (iVar3 < 0) goto LAB_001da9f2;
      while( true ) {
        iVar3 = (int)uVar4;
        param_1 = local_58[uVar4];
        if (param_1 != -1) break;
        uVar4 = (ulong)(iVar3 - 1);
        if (iVar3 < 1) goto LAB_001da9f2;
      }
      local_58[uVar4] = -1;
    }
    if (param_4 <= iVar3) break;
    uVar4 = (ulong)(iVar3 + 1);
    local_58[(long)iVar3 + 1] = (int)*(short *)(param_2 + 6 + lVar1 * 8);
  }
  uVar2 = 0;
LAB_001da9f2:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_10) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

