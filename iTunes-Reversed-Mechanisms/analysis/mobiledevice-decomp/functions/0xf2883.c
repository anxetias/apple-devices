// rea decompile_all
// name: __copyBootGraphicPath
// address: 0xf2883
// body: available
// range: 0xf2883-0xf2a77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __copyBootGraphicPath(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long local_40;
  long local_38;
  
  local_38 = 0;
  cVar1 = _AMRestoreOptionsAreLegacy(param_2);
  if (cVar1 == '\0') {
    iVar2 = _AMRAuthInstallCopyFileSystemPathForKey
                      (*(undefined8 *)(param_1 + 200),param_2,&cf_RestoreLogo,&local_38);
    lVar3 = local_38;
    if (iVar2 != 0) {
      _AMRLog(3,&cf_Failedtolocatebootgraphic);
      lVar3 = local_38;
    }
  }
  else {
    local_40 = 0;
    iVar2 = _AMRAuthInstallCreatePathFromBundle
                      (*(undefined8 *)(param_1 + 200),param_2,&cf_RestoreLogo,&local_40);
    lVar3 = local_40;
    if (iVar2 != 0 || local_40 == 0) {
      lVar3 = _CFDictionaryGetValue(param_2,&cf_NORImagePath);
      if (lVar3 == 0) {
        lVar3 = _CFDictionaryGetValue(param_2,&cf_FirmwareDirectory);
        lVar4 = _CFDictionaryGetValue(param_2,&cf_NORImageType);
        if (lVar4 == 0 || lVar3 == 0) {
          return 0;
        }
        lVar3 = _CFStringCreateWithFormat
                          (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                           &cf____call_flash_call_flash______,lVar3,0x2f,0x2f,
                           *(undefined8 *)(param_1 + 0x40),lVar4);
      }
      else {
        _CFRetain(lVar3);
      }
      lVar4 = __AMRestoreCopyManifestForNORImage(lVar3);
      if (lVar4 != 0) {
        lVar5 = _CFArrayGetCount(lVar4);
        if (0 < lVar5) {
          lVar7 = 0;
          do {
            uVar6 = _CFArrayGetValueAtIndex(lVar4,lVar7);
            cVar1 = _CFStringHasPrefix(uVar6,&cf_applelogo);
            if ((cVar1 == '\x01') ||
               (cVar1 = _CFStringHasPrefix(uVar6,&cf_skankwerklogo), cVar1 == '\x01')) {
              local_40 = _CFStringCreateWithFormat
                                   (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,&cf____c__,
                                    lVar3,0x2f,uVar6);
              break;
            }
            lVar7 = lVar7 + 1;
          } while (lVar5 != lVar7);
        }
        _CFRelease(lVar4);
      }
      _CFRelease(lVar3);
      lVar3 = local_40;
    }
  }
  local_38 = lVar3;
  return local_38;
}

