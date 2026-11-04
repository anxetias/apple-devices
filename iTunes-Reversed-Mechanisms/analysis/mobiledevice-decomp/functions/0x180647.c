// rea decompile_all
// name: _uarpAvailableTransmitBuffer
// address: 0x180647
// body: available
// range: 0x180647-0x1806b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1806b3 to 0x17fce0 _uarpAllocateTransmitBuffer2 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _uarpAvailableTransmitBuffer(undefined8 param_1,long param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  
  if ((ulong)*(ushort *)(param_2 + 0x60) != 0) {
    uVar2 = 0;
    do {
      lVar1 = *(long *)(*(long *)(param_2 + 0x68) + uVar2 * 8);
      if (lVar1 != 0) {
        *(undefined8 *)(*(long *)(param_2 + 0x68) + uVar2 * 8) = 0;
        if (param_3 <= *(uint *)(lVar1 + 0x18)) {
          return lVar1;
        }
        _UARPLayer2ReturnTransmitMsgBuffer(param_1,param_2,lVar1);
        lVar1 = _uarpAllocateTransmitBuffer2(param_1,param_2,param_3);
        return lVar1;
      }
      uVar2 = uVar2 + 1;
    } while (*(ushort *)(param_2 + 0x60) != uVar2);
  }
  return 0;
}

