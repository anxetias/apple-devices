// rea decompile_all
// name: __CopyHexStringFromData
// address: 0x29e988
// body: available
// range: 0x29e988-0x29ea32 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __CopyHexStringFromData(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  pbVar3 = (byte *)_CFDataGetBytePtr(param_2);
  uVar2 = _CFDataGetLength(param_2);
  pvVar4 = _calloc(1,(ulong)(uVar2 * 2) + 1);
  if (pvVar4 == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    if ((ulong)uVar2 != 0) {
      uVar5 = 0;
      do {
        bVar1 = *pbVar3;
        *(char *)((long)pvVar4 + (uVar5 & 0xffffffff)) = "0123456789abcdef"[bVar1 >> 4];
        *(char *)((long)pvVar4 + (ulong)((int)uVar5 + 1)) = "0123456789abcdef"[bVar1 & 0xf];
        pbVar3 = pbVar3 + 1;
        uVar5 = uVar5 + 2;
      } while ((ulong)uVar2 * 2 != uVar5);
    }
    uVar6 = _CFStringCreateWithCString(param_1,pvVar4,0x8000100);
    _free(pvVar4);
  }
  return uVar6;
}

