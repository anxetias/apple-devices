// rea decompile_all
// name: _AFCDirectoryRead
// address: 0xb93a0
// body: available
// range: 0xb93a0-0xb9465 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint _AFCDirectoryRead(long param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  bool bVar7;
  
  bVar7 = param_2 != 0 && param_1 != 0;
  if (bVar7 && param_3 != (undefined8 *)0x0) {
    lVar3 = _AFCIteratorNext(param_2);
    if (lVar3 == 0) {
      *param_3 = 0;
      uVar2 = 0;
    }
    else {
      lVar4 = _CFGetTypeID(lVar3);
      lVar5 = _CFStringGetTypeID();
      uVar2 = 7;
      if (lVar4 == lVar5) {
        lVar4 = _CFStringGetLength(lVar3);
        lVar4 = lVar4 * 9 + 1;
        uVar6 = _AFCIteratorGetValueBuffer(param_2,lVar4);
        *param_3 = uVar6;
        cVar1 = _CFStringGetCString(lVar3,uVar6,lVar4,0x8000100);
        uVar2 = 0x17;
        if (cVar1 != '\0') {
          uVar2 = 0;
        }
      }
    }
  }
  else {
    uVar2 = ___AFCSetErrorResult(param_1,param_2,0xe8004007,bVar7,0x2a3,"NULL argument");
    uVar2 = uVar2 & 0x1fff;
  }
  return uVar2;
}

