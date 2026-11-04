// rea decompile_all
// name: _ccdigest_internal
// address: 0xea4d
// body: available
// range: 0xea4d-0xeb05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xeb01 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _ccdigest_internal(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar4 = -((*(long *)(param_1 + 8) + *(long *)(param_1 + 0x10) + 0x13U & 0xfffffffffffffff8) + 0xf
           & 0xfffffffffffffff0);
  lVar5 = (long)&local_38 + lVar4;
  *(undefined8 *)((long)&uStack_40 + lVar4) = 0xeaa2;
  ___bzero(lVar5);
  *(undefined8 *)((long)&uStack_40 + lVar4) = 0xeaad;
  _ccdigest_init(param_1,lVar5);
  *(undefined8 *)((long)&uStack_40 + lVar4) = 0xeabe;
  _ccdigest_update_internal(param_1,lVar5,param_2,param_3);
  pcVar1 = *(code **)(param_1 + 0x38);
  *(undefined8 *)((long)&uStack_40 + lVar4) = 0xeaca;
  (*pcVar1)(param_1,lVar5,param_4);
  lVar2 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  *(undefined8 *)((long)&uStack_40 + lVar4) = 0xeae2;
  _cc_clear(lVar2 + lVar3 + 0xc,lVar5);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)((long)&uStack_40 + lVar4) = _ccdigest;
  ___stack_chk_fail();
}

