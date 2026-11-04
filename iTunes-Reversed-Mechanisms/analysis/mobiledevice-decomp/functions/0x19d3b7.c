// rea decompile_all
// name: __sendMsgToAccessory
// address: 0x19d3b7
// body: available
// range: 0x19d3b7-0x19d4a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong __sendMsgToAccessory(undefined8 param_1,long param_2,byte *param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = 0x1e;
  if (((param_2 != 0) && (param_3 != (byte *)0x0)) && (param_4 != 0)) {
    uVar1 = _uarpPlatformEndpointRecvMessage(param_2,param_2 + 0x438,param_3,param_4);
    if (uVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (ulong)uVar1;
      if (_inRestore == '\x01') {
        _printf("Failed to recv message, status = 0x%x\n",uVar2);
      }
      else {
        _uarpLogError(3,"Failed to recv message, status = 0x%x\n",uVar2);
      }
      if (5 < param_4) {
        if (_inRestore == '\x01') {
          _printf("Failing message: 0x%02x%02x%02x%02x%02x%02x",(ulong)*param_3,(ulong)param_3[1],
                  (ulong)param_3[2],(ulong)param_3[3],(ulong)param_3[4],(ulong)param_3[5]);
        }
        else {
          _uarpLogError(3,"Failing message: 0x%02x%02x%02x%02x%02x%02x");
        }
      }
    }
  }
  return uVar2;
}

