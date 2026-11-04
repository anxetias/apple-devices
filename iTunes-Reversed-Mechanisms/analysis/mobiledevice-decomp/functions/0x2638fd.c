// rea decompile_all
// name: _ccn_random_bits_fips
// address: 0x2638fd
// body: available
// range: 0x2638fd-0x2639d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2639d3 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _ccn_random_bits_fips(long param_1,void *param_2,undefined8 *param_3)

{
  size_t sVar1;
  int iVar2;
  ulong uVar3;
  byte bVar4;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar3 = param_1 + 0x3fU >> 6;
  sVar1 = uVar3 * 8;
  if (param_1 + 0x3fU < 0x80) {
    local_40 = 0;
    local_48 = 0;
    iVar2 = (*(code *)*param_3)(param_3,0xc);
    _memcpy(param_2,&local_48,sVar1);
    _cc_clear(sVar1,&local_48);
  }
  else {
    iVar2 = (*(code *)*param_3)(param_3,sVar1,param_2);
  }
  if (iVar2 == 0) {
    bVar4 = ((byte)param_1 & 0x3f ^ 0xbf) + 0x41;
    *(ulong *)((long)param_2 + uVar3 * 8 + -8) =
         (ulong)(*(long *)((long)param_2 + uVar3 * 8 + -8) << (bVar4 & 0x3f)) >> (bVar4 & 0x3f);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

