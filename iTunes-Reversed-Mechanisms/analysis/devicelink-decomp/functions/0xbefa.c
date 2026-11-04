// rea decompile_all
// name: _createFileKeyFromAuthBlob
// address: 0xbefa
// body: available
// range: 0xbefa-0xc10c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _createFileKeyFromAuthBlob(long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ushort uVar3;
  char cVar4;
  ushort *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    puVar5 = (ushort *)_CFDataGetBytePtr();
    uVar3 = *puVar5;
    cVar4 = _DLLoggingEnabled(6);
    uVar9 = (ulong)(ushort)(uVar3 << 8 | uVar3 >> 8);
    if ((cVar4 != '\0') || (cVar4 = _DLOutputEnabled(6), cVar4 != '\0')) {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkUtility.c"
              ,"createFileKeyFromAuthBlob",6,&cf_Unpacking_dbytesofauthdata,uVar9);
    }
    lVar6 = _CFDataGetBytePtr(param_1);
    uVar1 = *(undefined1 *)(lVar6 + 2);
    lVar6 = _CFDataGetBytePtr(param_1);
    uVar2 = *(undefined1 *)(lVar6 + 3);
    cVar4 = _DLLoggingEnabled(6);
    if ((cVar4 != '\0') || (cVar4 = _DLOutputEnabled(6), cVar4 != '\0')) {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkUtility.c"
              ,"createFileKeyFromAuthBlob",6,&cf_Unpackingauthdatav_d__d,uVar1,uVar2);
    }
    lVar6 = _CFDataGetBytePtr(param_1);
    lVar7 = _CFDataCreate(0,lVar6 + 4,0x10);
    lVar6 = _CFDataGetBytePtr(param_1);
    lVar8 = _CFDataCreate(0,lVar6 + 0x14,uVar9 - 0x12);
    if ((lVar7 == 0) || (lVar8 == 0)) {
      cVar4 = _DLLoggingEnabled(3);
      if ((cVar4 != '\0') || (cVar4 = _DLOutputEnabled(3), cVar4 != '\0')) {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkUtility.c"
                ,"createFileKeyFromAuthBlob",3,
                &cf_Couldnotextractanivand_orencryptionkeyfromtheauthdata);
      }
      if (lVar7 != 0) {
        _CFRelease(lVar7);
      }
      lVar6 = 0;
      if (lVar8 == 0) {
        return 0;
      }
    }
    else {
      lVar6 = _createDecryptedData(lVar8,param_2,lVar7);
      if (lVar6 == 0) {
        cVar4 = _DLLoggingEnabled(4);
        if ((cVar4 == '\0') && (cVar4 = _DLOutputEnabled(4), cVar4 == '\0')) {
          lVar6 = 0;
        }
        else {
          lVar6 = 0;
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkUtility.c"
                  ,"createFileKeyFromAuthBlob",4,&cf_Couldnotdecrypttheencryptionkey);
        }
      }
      else {
        if (param_3 == (long *)0x0) {
          _CFRelease(lVar7);
        }
        else {
          *param_3 = lVar7;
        }
        if (param_4 != (long *)0x0) {
          *param_4 = uVar9 + 2;
        }
      }
    }
    _CFRelease(lVar8);
  }
  return lVar6;
}

