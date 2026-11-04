// rea decompile_all
// name: _AMRLazyExtractorAddFile
// address: 0x26f4ca
// body: available
// range: 0x26f4ca-0x26f60e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x26f60a to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _AMRLazyExtractorAddFile
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  long local_60;
  cfstringStruct *local_58;
  cfstringStruct *pcStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar2 = _CFDictionaryGetValue(param_1,&cf___ExtractionRoot__);
  if (lVar2 != 0) {
    lVar2 = _CFDictionaryGetValue(param_1,&cf___ArchiveFiles__);
    if (lVar2 != 0) {
      uVar6 = 0;
      lVar3 = _createCanonicalPath(param_2,0);
      if (lVar3 != 0) {
        uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
        lVar4 = _CFNumberCreate(uVar1,4);
        local_58 = &cf___FileScheme__;
        pcStack_50 = &cf___FileArgs__;
        local_48 = 0x46b2f0;
        uStack_44 = 0;
        uStack_40 = 0x46b310;
        uStack_3c = 0;
        local_78 = param_4;
        local_70 = param_5;
        local_68 = lVar3;
        local_60 = lVar4;
        lVar5 = _CFDictionaryCreate(uVar1,&local_58,&local_78,4,
                                    PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                    PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        _CFDictionarySetValue(lVar2,lVar3,lVar5);
        _CFRelease(lVar3);
        if (lVar4 != 0) {
          _CFRelease(lVar4);
        }
        uVar6 = CONCAT71((int7)((ulong)lVar4 >> 8),1);
        if (lVar5 != 0) {
          _CFRelease(lVar5);
        }
      }
      goto LAB_0026f5e3;
    }
  }
  uVar6 = 0;
LAB_0026f5e3:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

