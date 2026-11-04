// rea decompile_all
// name: _AMAuthInstallSsoSetAppleConnectInfo
// address: 0x2a380d
// body: available
// range: 0x2a380d-0x2a3930 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _AMAuthInstallSsoSetAppleConnectInfo(long param_1,long param_2,long param_3)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((param_1 == 0) || (param_2 == 0)) {
LAB_002a3923:
    uVar2 = 1;
  }
  else {
    lVar3 = _CFGetTypeID(param_2);
    lVar4 = _CFStringGetTypeID();
    if ((param_3 == 0) || (lVar3 != lVar4)) goto LAB_002a3923;
    lVar3 = _CFGetTypeID(param_3);
    lVar4 = _CFDataGetTypeID();
    if (lVar3 != lVar4) goto LAB_002a3923;
    uVar5 = _CFGetAllocator(param_1);
    lVar3 = _CFDataCreateMutable(uVar5,0);
    if (lVar3 != 0) {
      lVar4 = _CFStringGetLength(param_2);
      _CFDataSetLength(lVar3,lVar4 + 1);
      uVar5 = _CFDataGetMutableBytePtr(lVar3);
      uVar6 = _CFDataGetLength(lVar3);
      cVar1 = _CFStringGetCString(param_2,uVar5,uVar6,0x8000100);
      if (cVar1 == '\0') {
        uVar2 = 3;
      }
      else {
        uVar5 = _CFDataGetBytePtr(param_3);
        uVar6 = _CFDataGetLength(param_3);
        _CFDataAppendBytes(lVar3,uVar5,uVar6);
        uVar2 = _AMAuthInstallSsoSetToken(param_1,lVar3);
      }
      goto LAB_002a3907;
    }
    uVar2 = 2;
  }
  lVar3 = 0;
LAB_002a3907:
  _SafeRelease(lVar3);
  return uVar2;
}

