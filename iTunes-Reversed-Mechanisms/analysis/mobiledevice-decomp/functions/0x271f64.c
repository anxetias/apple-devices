// rea decompile_all
// name: _internalBackendGetFlags
// address: 0x271f64
// body: available
// range: 0x271f64-0x271fdd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint _internalBackendGetFlags(undefined8 *param_1)

{
  uint in_EAX;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uStack_28;
  
  uVar2 = (uint)*(byte *)((long)param_1 + 0x51) + (uint)*(byte *)(param_1 + 10) * 2;
  uStack_28._0_4_ = in_EAX;
  if (*(char *)(param_1 + 2) == '\0') {
    iVar1 = _get_pers_params(param_1);
    if (iVar1 != 0) {
      return uVar2;
    }
    *(undefined1 *)(param_1 + 2) = 1;
  }
  if ((*(char *)((long)param_1 + 0x55) == '\0') &&
     ((*(char *)((long)param_1 + 0x31) != '\0' || (*(char *)((long)param_1 + 0x52) == '\x01')))) {
    uVar2 = uVar2 | 4;
  }
  uStack_28 = (ulong)(uint)uStack_28;
  iVar1 = _get_mode(*param_1,(long)&uStack_28 + 4);
  uVar3 = uVar2 + 0x10;
  if (uStack_28._4_4_ != 0x41444655 || iVar1 != 0) {
    uVar3 = uVar2;
  }
  return uVar3;
}

