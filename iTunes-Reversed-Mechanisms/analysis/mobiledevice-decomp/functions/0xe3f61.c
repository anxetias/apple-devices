// rea decompile_all
// name: _AMRestoreCreateBootArgsByRemovingArg
// address: 0xe3f61
// body: available
// range: 0xe3f61-0xe406a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMRestoreCreateBootArgsByRemovingArg(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  short sVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar3 = _CFStringGetLength(param_2);
  uVar9 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  uVar4 = _CFStringCreateArrayBySeparatingStrings(uVar9,param_1,&cf_space_s_);
  uVar5 = _CFArrayCreateMutable(uVar9,0,PTR__kCFTypeArrayCallBacks_004411a8);
  lVar6 = _CFArrayGetCount(uVar4);
  if (0 < lVar6) {
    lVar6 = 0;
    do {
      uVar7 = _CFArrayGetValueAtIndex(uVar4,lVar6);
      lVar8 = _CFStringGetLength(uVar7);
      if (lVar8 != 0) {
        cVar1 = _CFStringHasPrefix(uVar7,param_2);
        if (cVar1 == '\0') {
LAB_000e4013:
          _CFArrayAppendValue(uVar5,uVar7);
        }
        else {
          lVar8 = _CFStringGetLength(uVar7);
          if (lVar8 != lVar3) {
            sVar2 = _CFStringGetCharacterAtIndex(uVar7,lVar3);
            if (sVar2 != 0x3d) goto LAB_000e4013;
          }
        }
      }
      lVar6 = lVar6 + 1;
      lVar8 = _CFArrayGetCount(uVar4);
    } while (lVar6 < lVar8);
  }
  uVar9 = _CFStringCreateByCombiningStrings(uVar9,uVar5,&cf_space_s_);
  _CFRelease(uVar5);
  _CFRelease(uVar4);
  return uVar9;
}

