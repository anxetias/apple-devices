// rea decompile_all
// name: _AMAuthInstallLogDumpMemory
// address: 0x1ac22d
// body: available
// range: 0x1ac22d-0x1ac31e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1ac31a to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _AMAuthInstallLogDumpMemory
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,byte *param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  char local_78 [64];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  _AMAuthInstallLog(param_1,param_2,"[%s: %u bytes]",param_3);
  if (0 < param_5) {
    uVar4 = param_5 + 1;
    uVar2 = 0;
    uVar3 = 0;
    do {
      iVar1 = _snprintf(local_78 + uVar3,0x40 - uVar3,"%02x ",(ulong)*param_4);
      uVar2 = uVar2 + 1;
      if (uVar4 == 2 || 0xf < uVar2) {
        uVar3 = 0;
        _AMAuthInstallLog((int)param_1,"","%s",local_78);
        uVar2 = 0;
      }
      else {
        uVar3 = (ulong)(uint)((int)uVar3 + iVar1);
      }
      param_4 = param_4 + 1;
      uVar4 = uVar4 - 1;
    } while (1 < uVar4);
  }
  _AMAuthInstallLog((int)param_1,"","-----------------------------------------------");
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

