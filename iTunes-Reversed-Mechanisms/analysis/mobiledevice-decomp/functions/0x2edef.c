// rea decompile_all
// name: _read_string
// address: 0x2edef
// body: available
// range: 0x2edef-0x2eeb9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * _read_string(uint param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  void *pvVar6;
  
  if (param_1 != 0) {
    bVar1 = *(byte *)(param_2 + (ulong)(param_1 & 0xff) * 4);
    if (((ulong)bVar1 != 0) && (!CARRY1((byte)param_1,(byte)(bVar1 - 1) >> 2))) {
      lVar3 = _CFStringCreateWithBytes
                        (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,
                         param_2 + (ulong)(param_1 & 0xff) * 4 + 2,(ulong)bVar1 - 2,0x100,0);
      if (lVar3 == 0) {
        return (void *)0x0;
      }
      uVar4 = _CFStringGetLength(lVar3);
      lVar5 = _CFStringGetMaximumSizeForEncoding(uVar4,0x8000100);
      pvVar6 = _malloc(lVar5 + 1U);
      if ((pvVar6 == (void *)0x0) ||
         (cVar2 = _CFStringGetCString(lVar3,pvVar6,lVar5 + 1U,0x8000100), cVar2 != '\0')) {
        _CFRelease(lVar3);
        return pvVar6;
      }
      _CFRelease(lVar3);
      _free(pvVar6);
    }
  }
  return (void *)0x0;
}

