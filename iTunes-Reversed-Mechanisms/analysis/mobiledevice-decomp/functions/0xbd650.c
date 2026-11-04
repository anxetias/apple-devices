// rea decompile_all
// name: _MISArrayAllowsEntitlementValue
// address: 0xbd650
// body: available
// range: 0xbd650-0xbd743 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char _MISArrayAllowsEntitlementValue(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  short sVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar4 = _CFArrayGetCount();
  if (lVar4 < 1) {
LAB_000bd72e:
    cVar2 = '\0';
  }
  else {
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    lVar8 = 1;
    do {
      uVar5 = _CFArrayGetValueAtIndex(param_1,lVar8 + -1);
      lVar6 = _CFGetTypeID(uVar5);
      lVar7 = _CFStringGetTypeID();
      if (lVar6 != lVar7) goto LAB_000bd72e;
      lVar6 = _CFStringGetLength(uVar5);
      if (lVar6 < 1) {
        cVar2 = '\0';
      }
      else {
        sVar3 = _CFStringGetCharacterAtIndex(uVar5,lVar6 + -1);
        if (sVar3 == 0x2a) {
          uVar5 = _CFStringCreateWithSubstring(uVar1,uVar5,0,lVar6 + -1);
          cVar2 = _CFStringHasPrefix(param_2,uVar5);
          _CFRelease(uVar5);
        }
        else {
          lVar6 = _CFStringCompare(uVar5,param_2,0);
          cVar2 = lVar6 == 0;
        }
      }
    } while ((lVar8 < lVar4) && (lVar8 = lVar8 + 1, cVar2 == '\0'));
  }
  return cVar2;
}

