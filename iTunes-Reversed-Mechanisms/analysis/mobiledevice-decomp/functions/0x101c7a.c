// rea decompile_all
// name: _isDeviceAttached
// address: 0x101c7a
// body: available
// range: 0x101c7a-0x101d4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _isDeviceAttached(undefined4 param_1)

{
  char cVar1;
  undefined4 in_EAX;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong unaff_R13;
  long lVar6;
  int local_38;
  int local_34;
  
  _local_38 = CONCAT44(param_1,in_EAX);
  lVar2 = _USBMuxCopyDeviceArray();
  if (lVar2 == 0) {
    unaff_R13 = 0;
  }
  else {
    lVar6 = 0;
    while( true ) {
      lVar3 = _CFArrayGetCount(lVar2);
      unaff_R13 = CONCAT71((int7)(unaff_R13 >> 8),lVar6 < lVar3);
      if (lVar3 <= lVar6) break;
      lVar3 = _CFArrayGetValueAtIndex(lVar2,lVar6);
      if (lVar3 != 0) {
        lVar4 = _CFGetTypeID(lVar3);
        lVar5 = _CFDictionaryGetTypeID();
        if (lVar4 == lVar5) {
          lVar3 = _CFDictionaryGetValue(lVar3,_kUSBMuxProperty_DeviceID);
          if (lVar3 != 0) {
            lVar4 = _CFGetTypeID(lVar3);
            lVar5 = _CFNumberGetTypeID();
            if (lVar4 == lVar5) {
              cVar1 = _CFNumberGetValue(lVar3,3,&local_38);
              if ((cVar1 != '\0') && (local_38 == local_34)) break;
            }
          }
        }
      }
      lVar6 = lVar6 + 1;
    }
    _CFRelease(lVar2);
  }
  return unaff_R13 & 0xffffffff;
}

