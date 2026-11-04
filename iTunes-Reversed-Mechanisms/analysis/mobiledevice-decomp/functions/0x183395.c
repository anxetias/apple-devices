// rea decompile_all
// name: _uarpPlatformRemoteEndpointAddEntry
// address: 0x183395
// body: available
// range: 0x183395-0x183463 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _uarpPlatformRemoteEndpointAddEntry(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long local_30;
  
  uVar1 = *(uint *)(param_1 + 0x22c);
  if ((ulong)uVar1 != 0) {
    uVar3 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x230) + uVar3 * 8) == 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x230) + uVar3 * 8) = param_2;
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  local_30 = 0;
  iVar2 = _UARPLayer2RequestBuffer(param_1,&local_30,uVar1 * 8 + 8);
  if (iVar2 == 0) {
    uVar3 = (ulong)*(uint *)(param_1 + 0x22c);
    iVar2 = 0;
    if (uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar4 = 0;
      do {
        *(undefined8 *)(local_30 + uVar4 * 8) =
             *(undefined8 *)(*(long *)(param_1 + 0x230) + uVar4 * 8);
        uVar4 = uVar4 + 1;
      } while (uVar3 != uVar4);
    }
    *(undefined8 *)(local_30 + uVar3 * 8) = param_2;
    _UARPLayer2ReturnBuffer(param_1,*(undefined8 *)(param_1 + 0x230));
    *(uint *)(param_1 + 0x22c) = uVar1 + 1;
    *(long *)(param_1 + 0x230) = local_30;
  }
  return iVar2;
}

