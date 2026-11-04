// rea decompile_all
// name: _AFCSendDataPacket
// address: 0x267891
// body: available
// range: 0x267891-0x26792f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _AFCSendDataPacket(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  
  _AFCLog(5,"Writing data packet with data length %u\n",param_4 & 0xffffffff);
  if (*(char *)(param_1 + 0x44) == '\x01') {
    uVar1 = (ulong)*(uint *)(param_1 + 0x40);
  }
  else {
    uVar1 = _AFCSendHeader(param_1);
    if ((int)uVar1 == 0) {
      uVar1 = _AFCSendData(param_1,param_3,param_4);
    }
  }
  return uVar1;
}

