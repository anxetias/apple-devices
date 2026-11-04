// rea decompile_all
// name: __AMRLazyFileGetDictForPath
// address: 0x26fb6a
// body: available
// range: 0x26fb6a-0x26fccf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x26fccb to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __AMRLazyFileGetDictForPath(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar2 = _CFDictionaryGetValue(*param_1,&cf___ExtractionRoot__);
  if (lVar2 != 0) {
    lVar3 = _CFDictionaryGetValue(*param_1,&cf___ArchiveFiles__);
    if (lVar3 != 0) {
      lVar4 = _CFStringGetLength(lVar2);
      ___bzero(local_438,0x400);
      cVar1 = _CFStringGetFileSystemRepresentation(param_2,local_438,0x400);
      if (cVar1 != '\0') {
        uVar6 = 0;
        lVar5 = _createCanonicalPath(local_438,0);
        if (lVar5 == 0) goto LAB_0026fca6;
        cVar1 = _CFStringHasPrefix(lVar5,lVar2);
        if (cVar1 == '\0') {
          lVar2 = _CFURLCreateWithFileSystemPath
                            (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,lVar5,0,0);
          if (lVar2 == 0) {
            _CFRelease(lVar5);
            goto LAB_0026fca3;
          }
          lVar2 = _CFURLCopyLastPathComponent(lVar2);
        }
        else {
          lVar2 = _CFStringGetLength(lVar5);
          lVar2 = _CFStringCreateWithSubstring
                            (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,lVar5,lVar4,
                             lVar2 - lVar4);
        }
        _CFRelease(lVar5);
        if (lVar2 != 0) {
          uVar6 = _CFDictionaryGetValue(lVar3,lVar2);
          _CFRelease(lVar2);
          goto LAB_0026fca6;
        }
      }
    }
  }
LAB_0026fca3:
  uVar6 = 0;
LAB_0026fca6:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

