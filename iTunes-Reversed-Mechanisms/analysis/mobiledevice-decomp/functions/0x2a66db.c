// rea decompile_all
// name: _DERImg4DecodePropertyWithItem
// address: 0x2a66db
// body: available
// range: 0x2a66db-0x2a679e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2a679a to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _DERImg4DecodePropertyWithItem(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  uint local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_004412b8;
  local_6c = 0;
  local_68 = 0;
  local_58 = 0;
  uStack_40 = 0;
  uStack_60 = 0x16;
  uStack_50 = 0x18;
  local_48 = param_3;
  iVar1 = _DERParseSequenceToObject(param_1,2,&local_68,param_4,0x30,0);
  if (((iVar1 == 0) && (iVar1 = _DERParseInteger(param_4,&local_6c), iVar1 == 0)) &&
     (iVar1 = 2, ((ulong)local_6c | 0xe000000000000000) == param_2)) {
    *(ulong *)(param_4 + 0x10) = param_2 | 0xe000000000000000;
    *(undefined8 *)(param_4 + 0x28) = param_3;
    iVar1 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar1;
}

