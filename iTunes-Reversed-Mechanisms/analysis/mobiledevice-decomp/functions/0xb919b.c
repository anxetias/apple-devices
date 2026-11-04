// rea decompile_all
// name: _AFCRenamePath
// address: 0xb919b
// body: available
// range: 0xb919b-0xb9297 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint _AFCRenamePath(long param_1,long param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint local_2c;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    uVar1 = ___AFCSetErrorResult(param_1,param_2,0xe8004007,param_4,0x10e,"NULL argument");
    goto LAB_000b9253;
  }
  uVar2 = _CFGetAllocator();
  lVar3 = _CFStringCreateWithCString(uVar2,param_2,0x8000100);
  uVar2 = _CFGetAllocator(param_1);
  lVar4 = _CFStringCreateWithCString(uVar2,param_3,0x8000100);
  if ((lVar3 == 0) || (lVar4 == 0)) {
    uVar1 = 0xe8004003;
    if (lVar3 != 0) goto LAB_000b923e;
  }
  else {
    uVar2 = _CFGetAllocator(param_1);
    lVar5 = _AFCOperationCreateRenamePath(uVar2,lVar3,lVar4,0);
    if (lVar5 == 0) {
      uVar1 = 0xe8004003;
    }
    else {
      _AFCLinkPath_cold_1(param_1,lVar5,&local_2c);
      uVar1 = local_2c;
    }
LAB_000b923e:
    _CFRelease(lVar3);
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
LAB_000b9253:
  return uVar1 & 0x1fff;
}

