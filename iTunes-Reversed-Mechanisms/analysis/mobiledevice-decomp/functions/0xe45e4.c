// rea decompile_all
// name: __AMRestoreGetResolvedBoardConfigWithPreferredName
// address: 0xe45e4
// body: available
// range: 0xe45e4-0xe48ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __AMRestoreGetResolvedBoardConfigWithPreferredName
               (int param_1,int param_2,int param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  void *pvVar8;
  void *pvVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  bool bVar17;
  long local_50;
  long local_40;
  
  if ((param_5 == 0) ||
     (lVar7 = _CFStringCompare(param_5,&cf_AppleMobileDevice_DFUMode_,0), lVar7 == 0)) {
    bVar17 = false;
  }
  else {
    lVar7 = _CFStringCompare(param_5,&cf_AppleMobileDevice_RecoveryMode_,0);
    bVar17 = lVar7 != 0;
  }
  lVar7 = _CFDictionaryGetCount(param_4);
  pvVar8 = _malloc(lVar7 * 8);
  pvVar9 = _malloc(lVar7 * 8);
  _CFDictionaryGetKeysAndValues(param_4,pvVar8,pvVar9);
  if (lVar7 < 1) {
    local_50 = 0;
    local_40 = 0;
    lVar16 = 0;
  }
  else {
    uVar1 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
    local_40 = 0;
    local_50 = 0;
    lVar15 = 0;
    lVar16 = 0;
    do {
      uVar2 = *(undefined8 *)((long)pvVar9 + lVar15 * 8);
      lVar10 = _CFGetTypeID(uVar2);
      lVar11 = _CFDictionaryGetTypeID();
      lVar14 = lVar16;
      lVar13 = local_50;
      if ((lVar10 == lVar11) && (lVar10 = _CFDictionaryGetValue(uVar2,&cf_BoardID), lVar10 != 0)) {
        lVar11 = _CFGetTypeID(lVar10);
        lVar12 = _CFStringGetTypeID();
        if (lVar11 == lVar12) {
          iVar4 = __convertCFStringToUInt64(lVar10);
          lVar10 = _CFDictionaryGetValue(uVar2,&cf_ChipID);
          if (lVar10 != 0) {
            lVar11 = _CFGetTypeID(lVar10);
            lVar12 = _CFStringGetTypeID();
            if (lVar11 == lVar12) {
              iVar5 = __convertCFStringToUInt64(lVar10);
              lVar10 = _CFDictionaryGetValue(uVar2,&cf_SecurityDomain);
              if (lVar10 != 0) {
                lVar11 = _CFGetTypeID(lVar10);
                lVar12 = _CFStringGetTypeID();
                if ((((lVar11 == lVar12) &&
                     (iVar6 = __convertCFStringToUInt64(lVar10), iVar4 == param_1)) &&
                    (iVar5 == param_2)) && (iVar6 == param_3)) {
                  if ((bVar17) &&
                     (lVar13 = _CFDictionaryGetValue(uVar2,&cf_HasPreferredName), lVar13 != 0)) {
                    lVar10 = _CFGetTypeID(lVar13);
                    lVar11 = _CFBooleanGetTypeID();
                    if ((lVar10 == lVar11) &&
                       (cVar3 = _CFEqual(lVar13,uVar1), local_40 = param_5, cVar3 != '\0')) break;
                  }
                  local_40 = *(long *)((long)pvVar8 + lVar15 * 8);
                  cVar3 = _CFStringHasSuffix(local_40,&cf_macap);
                  lVar13 = local_40;
                  if ((cVar3 == '\0') &&
                     (cVar3 = _CFStringHasSuffix(local_40,&cf_ap), lVar14 = local_40,
                     lVar13 = local_50, cVar3 == '\0')) break;
                }
              }
            }
          }
        }
      }
      local_50 = lVar13;
      lVar15 = lVar15 + 1;
      lVar16 = lVar14;
    } while (lVar7 != lVar15);
  }
  if (local_50 != 0) {
    local_40 = local_50;
  }
  if (lVar16 != 0) {
    local_40 = lVar16;
  }
  _free(pvVar8);
  _free(pvVar9);
  return local_40;
}

