// rea decompile_all
// name: __AMRRegexSubstitutionWhitelist
// address: 0xf477f
// body: available
// range: 0xf477f-0xf4a20 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
__AMRRegexSubstitutionWhitelist
          (void *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,code *param_5,
          long *param_6)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  size_t sVar9;
  long lVar10;
  char *pcVar11;
  long *plVar12;
  cfstringStruct *pcVar13;
  void *pvVar14;
  
  uVar8 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  lVar3 = _CFStringCreateWithCString(uVar8,param_1,0x8000100);
  if (lVar3 == 0) {
    uVar2 = 0x12;
    if (param_5 != (code *)0x0) {
      pvVar14 = (void *)0x0;
      (*param_5)(3,&cf_FailedtocreatebuffString);
      goto LAB_000f49f9;
    }
  }
  else {
    lVar4 = _CFStringCreateArrayBySeparatingStrings(uVar8,lVar3,&cf_newline_s_);
    if (lVar4 != 0) {
      uVar2 = 0;
      lVar5 = _CFStringCreateMutable(uVar8,0);
      lVar6 = _CFArrayGetCount(lVar4);
      pvVar14 = (void *)0x0;
      if (0 < lVar6) {
        lVar6 = 0;
        pvVar14 = (void *)0x0;
        uVar2 = 0;
        do {
          lVar7 = _CFArrayGetValueAtIndex(lVar4,lVar6);
          uVar8 = _CFStringGetLength(lVar7);
          sVar9 = _CFStringGetMaximumSizeForEncoding(uVar8,0x8000100);
          _free(pvVar14);
          pvVar14 = _malloc(sVar9);
          if ((lVar7 != 0) && (lVar10 = _CFStringGetLength(lVar7), lVar10 != 0)) {
            _CFStringGetCString(lVar7,pvVar14,sVar9,0x8000100);
            lVar7 = *param_6;
            plVar12 = param_6;
            while (lVar7 != 0) {
              plVar12 = plVar12 + 1;
              cVar1 = __AMRRegexExists(pvVar14,lVar7,param_5);
              if (cVar1 != '\0') goto LAB_000f48ee;
              lVar7 = *plVar12;
            }
            uVar2 = __AMRRegexSubstitution(pvVar14,param_3,param_4,param_5);
LAB_000f48ee:
            _CFStringAppendFormat(lVar5,0,&cf__s,pvVar14);
          }
          lVar6 = lVar6 + 1;
          lVar7 = _CFArrayGetCount(lVar4);
        } while (lVar6 < lVar7);
      }
      if ((lVar5 == 0) || (lVar6 = _CFStringGetLength(lVar5), lVar6 == 0)) {
        if (param_5 != (code *)0x0) {
          pcVar13 = &cf_FailedtocreatefinalString;
LAB_000f49a7:
          (*param_5)(3,pcVar13);
        }
      }
      else {
        pcVar11 = (char *)_CFStringGetCStringPtr(lVar5,0x8000100);
        if (pcVar11 == (char *)0x0) {
          if (param_5 != (code *)0x0) {
            pcVar13 = &cf_Failedtocreatereplacementstring;
            goto LAB_000f49a7;
          }
        }
        else {
          sVar9 = _strlen(pcVar11);
          if (sVar9 < param_2) {
            param_2 = sVar9;
          }
          _memcpy(param_1,pcVar11,param_2);
        }
      }
      _CFRelease(lVar3);
      _CFRelease(lVar4);
      if (lVar5 != 0) {
        _CFRelease();
      }
      goto LAB_000f49f9;
    }
    if (param_5 != (code *)0x0) {
      (*param_5)(3,&cf_FailedtocreatestringArray);
    }
    _CFRelease(lVar3);
  }
  uVar2 = 0x12;
  pvVar14 = (void *)0x0;
LAB_000f49f9:
  _free(pvVar14);
  return uVar2;
}

