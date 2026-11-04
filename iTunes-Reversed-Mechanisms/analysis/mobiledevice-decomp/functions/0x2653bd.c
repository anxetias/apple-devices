// rea decompile_all
// name: _usbDFU_clearStatus
// address: 0x2653bd
// body: available
// range: 0x2653bd-0x265473 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _usbDFU_clearStatus(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 local_48;
  ushort local_44;
  undefined2 local_42;
  undefined8 local_40;
  int local_30 [2];
  int local_28;
  
  if ((param_1 == 0) || (lVar1 = *(long *)(param_1 + 0x28), lVar1 == 0)) {
    uVar3 = 0xfffffff7;
  }
  else {
    uVar3 = _usbDFU_getStatus(param_1,local_30);
    if ((((int)uVar3 == 0) && (uVar3 = 0, local_30[0] != 0)) && (local_28 != 2)) {
      local_48 = 0x421;
      local_44 = (ushort)*(byte *)(*(long *)(lVar1 + 0x18) + 3);
      local_42 = 0;
      local_40 = 0;
      uVar3 = 0xfffffff7;
      if (*(long *)(param_1 + 0x28) != 0) {
        plVar2 = *(long **)(*(long *)(param_1 + 0x28) + 8);
        uVar3 = (**(code **)(*plVar2 + 0xd0))(plVar2,&local_48);
        if ((int)uVar3 == 0) {
          uVar3 = _usbDFU_getStatus(param_1,local_30);
          if ((int)uVar3 == 0) {
            uVar3 = 0xffffffed;
            if (local_28 == 2 && local_30[0] == 0) {
              uVar3 = 0;
            }
          }
        }
      }
    }
  }
  return uVar3;
}

