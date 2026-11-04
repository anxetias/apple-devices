// rea decompile_all
// name: _USBCUpdateECID
// address: 0x19bcd4
// body: available
// range: 0x19bcd4-0x19bd45 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_USBCUpdateECID(long param_1,undefined8 param_2,undefined8 *param_3,uint param_4,undefined4 *param_5
               )

{
  int iVar1;
  undefined8 in_RAX;
  undefined8 local_28;
  
  local_28 = in_RAX;
  if ((param_1 != 0) && (7 < param_4)) {
    local_28 = 0;
    iVar1 = _BackendGetPersParam(*(undefined8 *)(param_1 + 0x568),3,&local_28,8,param_5);
    if (iVar1 == 0) {
      *param_3 = local_28;
      *param_5 = 8;
      return 0;
    }
  }
  _generic_copyout(0,param_3,param_4,param_5);
  return 0;
}

