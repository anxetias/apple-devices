// rea decompile_all
// name: _AFCDirectoryCreate
// address: 0x2697b0
// body: available
// range: 0x2697b0-0x269889 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint _AFCDirectoryCreate(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar1 = ___AFCSetErrorResult(param_1,param_2,0xe8004007,param_4,0x2d0,"NULL argument");
  }
  else {
    uVar2 = _CFGetAllocator();
    lVar3 = _CFStringCreateWithCString(uVar2,param_2,0x8000100);
    if (lVar3 == 0) {
      uVar1 = 0xe8004003;
    }
    else {
      uVar2 = _CFGetAllocator(param_1);
      lVar4 = _AFCOperationCreateMakeDirectory(uVar2,lVar3,0);
      if (lVar4 == 0) {
        uVar1 = 0xe8004003;
      }
      else {
        lVar5 = _AFCConnectionGetIOTimeout(param_1);
        uVar1 = _AFCConnectionProcessOperation((double)lVar5,param_1,lVar4);
        if (uVar1 == 0) {
          uVar1 = _AFCOperationGetResultStatus(lVar4);
        }
        _CFRelease(lVar4);
      }
      _CFRelease(lVar3);
    }
  }
  return uVar1 & 0x1fff;
}

