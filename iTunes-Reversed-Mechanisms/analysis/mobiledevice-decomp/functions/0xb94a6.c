// rea decompile_all
// name: _AFCKeyValueRead
// address: 0xb94a6
// body: available
// range: 0xb94a6-0xb96d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint _AFCKeyValueRead(long param_1,long *param_2,long *param_3)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (((param_1 == 0) || (param_2 == (long *)0x0)) || (param_3 == (long *)0x0)) goto LAB_000b963f;
  lVar3 = _AFCIteratorNext();
  if (lVar3 == 0) {
    *param_2 = 0;
    uVar2 = 0;
LAB_000b95e9:
    *param_3 = 0;
  }
  else {
    lVar4 = _CFGetTypeID(lVar3);
    lVar5 = _CFStringGetTypeID();
    if (lVar4 == lVar5) {
      uVar6 = _AFCIteratorGetObject(param_1);
      lVar4 = _CFGetTypeID(uVar6);
      lVar5 = _CFDictionaryGetTypeID();
      if (lVar4 != lVar5) goto LAB_000b963f;
      uVar6 = _AFCIteratorGetObject(param_1);
      uVar6 = _CFDictionaryGetValue(uVar6,lVar3);
      lVar4 = _CFGetTypeID(uVar6);
      lVar5 = _CFStringGetTypeID();
      if (lVar4 != lVar5) {
LAB_000b96aa:
        uVar2 = ___AFCSetErrorResult();
        goto LAB_000b96b5;
      }
      lVar4 = _CFStringGetLength(lVar3);
      lVar5 = lVar4 * 9 + 1;
      lVar4 = _AFCIteratorGetKeyBuffer(param_1,lVar5);
      *param_2 = lVar4;
      if ((lVar4 == 0) || (cVar1 = _CFStringGetCString(lVar3,lVar4,lVar5,0x8000100), cVar1 == '\0'))
      goto LAB_000b96aa;
      lVar3 = _CFStringGetLength(uVar6);
      lVar4 = lVar3 * 9 + 1;
      lVar3 = _AFCIteratorGetValueBuffer(param_1,lVar4);
      *param_3 = lVar3;
      if ((lVar3 == 0) || (cVar1 = _CFStringGetCString(uVar6,lVar3,lVar4,0x8000100), cVar1 == '\0'))
      goto LAB_000b96aa;
    }
    else {
LAB_000b963f:
      uVar2 = ___AFCSetErrorResult();
LAB_000b96b5:
      if (uVar2 != 0) {
        if (param_2 != (long *)0x0) {
          *param_2 = 0;
        }
        if (param_3 == (long *)0x0) goto LAB_000b95f1;
        goto LAB_000b95e9;
      }
    }
    uVar2 = 0;
  }
LAB_000b95f1:
  return uVar2 & 0x1fff;
}

