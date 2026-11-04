// rea decompile_all
// name: _copyKeyValuePairsFromIBootString
// address: 0xe0f0c
// body: available
// range: 0xe0f0c-0xe1092 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _copyKeyValuePairsFromIBootString(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  if (param_1 == 0) {
    uVar9 = 1;
  }
  else {
    uVar9 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    lVar1 = _CFDictionaryCreateMutable
                      (uVar9,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar1 != 0) {
      lVar2 = _CFStringCreateArrayBySeparatingStrings(uVar9,param_1,&cf_space_s_);
      lVar3 = _CFArrayGetCount(lVar2);
      if (0 < lVar3) {
        lVar8 = 0;
        do {
          uVar4 = _CFArrayGetValueAtIndex(lVar2,lVar8);
          lVar5 = _CFStringGetLength(uVar4);
          if (lVar5 != 0) {
            lVar5 = _CFStringFind(uVar4,&cf__,0);
            if (lVar5 == -1) {
              _AMRLog(4,&cf_token____hasunexpectedformat,uVar4);
            }
            else {
              uVar6 = _CFStringCreateWithSubstring(uVar9,uVar4,0,lVar5);
              lVar7 = _CFStringGetLength(uVar4);
              uVar4 = _CFStringCreateWithSubstring(uVar9,uVar4,lVar5 + 1,lVar7 - (lVar5 + 1));
              _CFDictionarySetValue(lVar1,uVar6,uVar4);
              _CFRelease(uVar6);
              _CFRelease(uVar4);
            }
          }
          lVar8 = lVar8 + 1;
        } while (lVar3 != lVar8);
      }
      *param_2 = lVar1;
      if (lVar2 == 0) {
        return 0;
      }
      _CFRelease(lVar2);
      return 0;
    }
    uVar9 = 0x12;
  }
  *param_2 = 0;
  return uVar9;
}

