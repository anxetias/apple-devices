// rea decompile_all
// name: _createFileAuthBlob
// address: 0xbd1e
// body: available
// range: 0xbd1e-0xbef9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _createFileAuthBlob(undefined8 param_1,long *param_2,long *param_3)

{
  char cVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ushort local_42;
  long *local_40;
  undefined1 local_32;
  undefined1 local_31;
  
  lVar5 = _createRandomBytes(0x10);
  lVar6 = _createRandomBytes(0x20);
  lVar7 = _createEncryptedData(lVar6,param_1,lVar5);
  if (lVar7 == 0) {
    cVar1 = _DLLoggingEnabled(3);
    if ((cVar1 != '\0') || (cVar1 = _DLOutputEnabled(3), cVar1 != '\0')) {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkUtility.c"
              ,"createFileAuthBlob",3,&cf_Couldnotcreateencryptedauthdata);
    }
    if (lVar5 != 0) {
      _CFRelease(lVar5);
    }
    if (lVar6 != 0) {
      _CFRelease(lVar6);
    }
    if (param_2 == (long *)0x0) {
      uVar8 = 0;
      lVar5 = 0;
      if (param_3 == (long *)0x0) {
        return 0;
      }
      goto LAB_0000bec6;
    }
    lVar5 = 0;
    lVar6 = 0;
    uVar8 = 0;
LAB_0000beab:
    *param_2 = lVar6;
  }
  else {
    local_40 = param_3;
    sVar2 = _CFDataGetLength(lVar5);
    sVar3 = _CFDataGetLength(lVar7);
    uVar4 = sVar3 + sVar2 + 2;
    uVar8 = _CFDataCreateMutable(0,(ulong)uVar4 + 2);
    local_42 = uVar4 * 0x100 | uVar4 >> 8;
    local_32 = 1;
    local_31 = 0;
    _CFDataAppendBytes(uVar8,&local_42,2);
    _CFDataAppendBytes(uVar8,&local_32,1);
    _CFDataAppendBytes(uVar8,&local_31,1);
    uVar9 = _CFDataGetBytePtr(lVar5);
    uVar10 = _CFDataGetLength(lVar5);
    _CFDataAppendBytes(uVar8,uVar9,uVar10);
    uVar9 = _CFDataGetBytePtr(lVar7);
    uVar10 = _CFDataGetLength(lVar7);
    _CFDataAppendBytes(uVar8,uVar9,uVar10);
    _CFRelease(lVar7);
    param_3 = local_40;
    if (param_2 != (long *)0x0) goto LAB_0000beab;
    if (lVar6 != 0) {
      _CFRelease(lVar6);
      param_3 = local_40;
    }
  }
  if (param_3 == (long *)0x0) {
    if (lVar5 == 0) {
      return uVar8;
    }
    _CFRelease(lVar5);
    return uVar8;
  }
LAB_0000bec6:
  *param_3 = lVar5;
  return uVar8;
}

