// rea decompile_all
// name: _AMAuthInstallMonetFuseIfNecessary
// address: 0x292e9d
// body: available
// range: 0x292e9d-0x293234 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallMonetFuseIfNecessary(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  char *pcVar8;
  int iVar9;
  long lVar10;
  undefined8 local_48;
  undefined8 local_40;
  char local_31;
  
  local_48 = 0;
  local_40 = 0;
  local_31 = '\0';
  iVar9 = 1;
  iVar2 = iVar9;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x30) == 0)) goto LAB_0029308f;
  iVar2 = _AMAuthInstallBasebandIsFused(param_1,&local_31);
  if (iVar2 != 0) {
    pvVar6 = (void *)0x0;
    pvVar7 = (void *)0x0;
    lVar4 = 0;
    goto LAB_00293158;
  }
  if ((local_31 == '\0') || (*(int *)(*(long *)(param_1 + 0x30) + 0x60) == 2)) {
    if (*(long *)(param_1 + 0x1a8) == 0) {
      lVar4 = *(long *)PTR__kCFBooleanFalse_00441108;
    }
    else {
      uVar3 = _CFGetAllocator(param_1);
      lVar4 = _AMAuthInstallSupportGetValueForKeyWithFormat
                        (uVar3,*(undefined8 *)(param_1 + 0x1a8),&cf______,&cf_BbRequestEntries,
                         &cf_BbFactoryDebugEnable);
    }
    if ((lVar4 == 0) || (cVar1 = _CFBooleanGetValue(lVar4), cVar1 == '\0')) {
      pcVar8 = 
      "baseband fusing is being attempted but the Factory Debug entitlement was not requested. Please enable Factory Debug to fuse."
      ;
LAB_00293088:
      _AMAuthInstallLog(3,"AMAuthInstallMonetFuseIfNecessary",pcVar8);
      iVar2 = iVar9;
    }
    else if (*(char *)(param_1 + 0xb9) == '\0') {
      if (*(char *)(param_1 + 0xb8) == '\0') {
        iVar2 = _AMAuthInstallFusingProgramRequest(param_1);
        if (iVar2 == 0) goto LAB_00292fea;
      }
      else {
        _AMAuthInstallLog(3,"AMAuthInstallMonetFuseIfNecessary","fusing program request prohibited")
        ;
        iVar2 = 0xe;
      }
    }
    else {
LAB_00292fea:
      if (*(long *)(param_1 + 0xb0) == 0) {
        iVar2 = 0xe;
      }
      else {
        uVar3 = _CFGetAllocator(param_1);
        lVar4 = _CFPropertyListCreateData(uVar3,*(undefined8 *)(param_1 + 0xb0),100,0,&local_40);
        if (lVar4 != 0) {
          _CFDictionarySetValue(param_3,&cf_fusingprogram_plist,lVar4);
          _SafeRelease(local_40);
          if ((*(long *)(*(long *)(param_1 + 0x30) + 0x18) != 0) &&
             (*(long *)(*(long *)(param_1 + 0x30) + 0x10) != 0)) {
            _AMAuthInstallLog(5,"AMAuthInstallMonetFuseIfNecessary",
                              "baseband appears to be unfused and booted; will provide fusing program and fully personalized stack"
                             );
            goto LAB_00293155;
          }
          uVar3 = _CFGetAllocator(param_1);
          iVar2 = _BbfwCreateDictionaryFromURL(uVar3,param_2,&local_48);
          if (iVar2 == 0) {
            lVar5 = _CFDictionaryGetCount(local_48);
            pvVar6 = _malloc(lVar5 * 8);
            iVar2 = 2;
            if (pvVar6 == (void *)0x0) {
              pvVar6 = (void *)0x0;
            }
            else {
              pvVar7 = _malloc(lVar5 * 8);
              if (pvVar7 != (void *)0x0) {
                _CFDictionaryGetKeysAndValues(local_48,pvVar6,pvVar7);
                if (0 < lVar5) {
                  lVar10 = 0;
                  do {
                    _CFDictionarySetValue
                              (param_3,*(undefined8 *)((long)pvVar6 + lVar10 * 8),
                               *(undefined8 *)((long)pvVar7 + lVar10 * 8));
                    lVar10 = lVar10 + 1;
                  } while (lVar5 != lVar10);
                }
                iVar2 = 0;
                _AMAuthInstallLog(5,"AMAuthInstallMonetFuseIfNecessary",
                                  "baseband appears to be unfused and unbootable; will provide fusing program and unpersonalized stack"
                                 );
                goto LAB_00293158;
              }
            }
            pvVar7 = (void *)0x0;
            goto LAB_00293158;
          }
          goto LAB_00292f94;
        }
        _AMAuthInstallLog(3,"AMAuthInstallMonetFuseIfNecessary",
                          "failed to convert fusing program to xml %@",local_40);
        iVar2 = 3;
      }
    }
LAB_0029308f:
    pvVar6 = (void *)0x0;
    pvVar7 = (void *)0x0;
    lVar4 = 0;
  }
  else {
    if (*(long *)(param_1 + 0xb0) == 0) {
      lVar4 = 0;
LAB_00293155:
      pvVar6 = (void *)0x0;
      pvVar7 = (void *)0x0;
      iVar2 = 0;
      goto LAB_00293158;
    }
    uVar3 = _CFGetAllocator(param_1);
    iVar2 = 0;
    lVar4 = _CFPropertyListCreateData(uVar3,*(undefined8 *)(param_1 + 0xb0),100,0,&local_40);
    if (lVar4 == 0) {
      pcVar8 = "failed to convert fusing program to xml";
      iVar9 = 3;
      goto LAB_00293088;
    }
    _CFDictionarySetValue(param_3,&cf_fusingprogram_plist,lVar4);
LAB_00292f94:
    pvVar6 = (void *)0x0;
    pvVar7 = (void *)0x0;
  }
LAB_00293158:
  _SafeRelease(lVar4);
  _SafeRelease(local_48);
  _SafeRelease(0);
  _SafeFree(pvVar6);
  _SafeFree(pvVar7);
  _SafeRelease(local_40);
  return iVar2;
}

