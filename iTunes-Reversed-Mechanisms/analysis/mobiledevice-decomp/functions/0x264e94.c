// rea decompile_all
// name: _usbDFU_downloadBlock
// address: 0x264e94
// body: available
// range: 0x264e94-0x264f0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _usbDFU_downloadBlock(long param_1,undefined2 param_2,ushort param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  undefined2 local_28;
  undefined2 local_26;
  ushort local_24;
  ushort local_22;
  long local_20;
  
  if (param_1 == 0) {
    return 0xfffffffffffffff7;
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 == 0) {
    return 0xfffffffffffffff7;
  }
  if (param_3 != 0) {
    if (param_4 == 0) {
      return 0xfffffffffffffff7;
    }
    if (*(long *)(lVar1 + 0x20) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(ushort *)(*(long *)(lVar1 + 0x20) + 5);
    }
    if (uVar3 < param_3) {
      return 0xfffffffffffffff7;
    }
  }
  local_28 = 0x121;
  local_24 = (ushort)*(byte *)(*(long *)(lVar1 + 0x18) + 3);
  local_26 = param_2;
  local_22 = param_3;
  local_20 = param_4;
  uVar2 = (**(code **)(**(long **)(lVar1 + 8) + 0xd0))(*(long **)(lVar1 + 8),&local_28);
  if ((int)uVar2 == 0) {
    *(undefined4 *)(lVar1 + 0x28) = 0;
    uVar2 = 0;
  }
  return uVar2;
}

