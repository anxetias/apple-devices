// rea decompile_all
// name: _AFCOperationCreateGetSizeOfPathContents
// address: 0x26886b
// body: available
// range: 0x26886b-0x26893a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AFCOperationCreateGetSizeOfPathContents
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  size_t sVar4;
  undefined8 uVar5;
  
  lVar2 = _CFStringGetLength(param_2);
  uVar5 = 0;
  lVar3 = _CFAllocatorAllocate(0,lVar2 * 9 + 0x31,0);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x28) = param_3;
    cVar1 = _CFStringGetCString(param_2,(char *)(lVar3 + 0x30),lVar2 * 9 + 1,0x8000100);
    if (cVar1 == '\0') {
      uVar5 = 0;
      ___AFCSetErrorResult();
    }
    else {
      sVar4 = _strlen((char *)(lVar3 + 0x30));
      _AFCHeaderInit(lVar3,0x21,sVar4 + 0x31,0,0);
      uVar5 = _AFCOperationCreate(param_1,lVar3,0,0,0,param_4);
    }
    _CFAllocatorDeallocate(0,lVar3);
  }
  return uVar5;
}

