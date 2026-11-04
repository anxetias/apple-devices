// rea decompile_all
// name: _AFCSendStatusExtended
// address: 0xb7bbd
// body: available
// range: 0xb7bbd-0xb7cf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AFCSendStatusExtended(long param_1,undefined8 param_2,int param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _AFCLog(5,"Writing status packet %d info %p\n");
  if (param_3 + 0x17ffbfe9U < 0xffffffeb && param_3 != 0) {
    _AFCLog(5,"Oh no!");
  }
  if (*(char *)(param_1 + 0x44) == '\x01') {
    iVar1 = *(int *)(param_1 + 0x40);
  }
  else {
    if ((param_4 == 0) || ((*(byte *)(param_1 + 0x80) & 1) == 0)) {
      lVar2 = 0;
    }
    else {
      lVar2 = ___AFCCreateAFCDataWithDictionary(param_4);
      _CFDataGetLength(lVar2);
    }
    iVar1 = _AFCSendHeader(param_1);
    if (iVar1 == 0) {
      if (lVar2 == 0) {
        return 0;
      }
      uVar3 = _CFDataGetBytePtr(lVar2);
      uVar4 = _CFDataGetLength(lVar2);
      iVar1 = _AFCSendData(param_1,uVar3,uVar4);
    }
    else if (lVar2 == 0) {
      return iVar1;
    }
    _CFRelease(lVar2);
  }
  return iVar1;
}

