// rea decompile_all
// name: ___AMAuthInstallVinylFwReaderInfoPlistCallback
// address: 0x1b78fd
// body: available
// range: 0x1b78fd-0x1b7a09 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
___AMAuthInstallVinylFwReaderInfoPlistCallback(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_40 [8];
  undefined8 local_38;
  
  local_38 = 0;
  uVar7 = 1;
  if ((*(long *)(param_1 + 0x10) == 0) || (cVar1 = _CFStringHasSuffix(param_2), cVar1 == '\0')) {
    lVar3 = 0;
    lVar4 = 0;
    uVar6 = 0;
  }
  else {
    lVar3 = __AMAuthInstallVinylGetPathComponent(param_2);
    if (lVar3 != 0) {
      iVar2 = _BbfwReaderFindAndCopyFileData(param_3,param_2,&local_38);
      if (iVar2 == 0) {
        uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
        lVar4 = _CFPropertyListCreateWithData(uVar6,local_38,0,0,local_40);
        if (lVar4 != 0) {
          lVar5 = *(long *)(param_1 + 0x38);
          if (lVar5 == 0) {
            uVar7 = 0;
            lVar5 = _CFDictionaryCreateMutable
                              (uVar6,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                               PTR__kCFTypeDictionaryValueCallBacks_004411b8);
            *(long *)(param_1 + 0x38) = lVar5;
            uVar6 = local_38;
            if (lVar5 == 0) goto LAB_001b793e;
          }
          _CFDictionaryAddValue(lVar5,lVar3,lVar4);
          uVar7 = 1;
          uVar6 = local_38;
          goto LAB_001b793e;
        }
      }
      else {
        ___AMAuthInstallVinylFwReaderInfoPlistCallback_cold_1();
      }
    }
    uVar7 = 0;
    lVar4 = 0;
    uVar6 = local_38;
  }
LAB_001b793e:
  _SafeRelease(uVar6);
  _SafeRelease(lVar3);
  _SafeRelease(lVar4);
  return uVar7;
}

