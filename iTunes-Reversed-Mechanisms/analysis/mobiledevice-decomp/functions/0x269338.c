// rea decompile_all
// name: _AFCFileRefSeek
// address: 0x269338
// body: available
// range: 0x269338-0x2693c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint _AFCFileRefSeek(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar1 = ___AFCSetErrorResult(param_1,param_2,0xe8004007,param_4,0x1f6,"NULL argument");
  }
  else {
    lVar2 = _AFCFileDescriptorCreateSetPositionOperation(param_2,param_4,param_3,0);
    if (lVar2 == 0) {
      uVar1 = 0xe8004003;
    }
    else {
      lVar3 = _AFCConnectionGetIOTimeout(param_1);
      uVar1 = _AFCConnectionProcessOperation((double)lVar3,param_1,lVar2);
      if (uVar1 == 0) {
        uVar1 = _AFCOperationGetResultStatus(lVar2);
      }
      _CFRelease(lVar2);
    }
  }
  return uVar1 & 0x1fff;
}

