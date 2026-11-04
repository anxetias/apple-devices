// rea decompile_all
// name: _AMAuthInstallHttpCreatePostBody
// address: 0x29117d
// body: available
// range: 0x29117d-0x29147f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallHttpCreatePostBody(undefined8 param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  void *pvVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_60;
  void *local_40;
  
  local_40 = (void *)0x0;
  uStack_60 = 1;
  if (param_2 != 0) {
    pvVar6 = (void *)0x0;
    pvVar2 = (void *)0x0;
    lVar7 = 0;
    lVar8 = 0;
    if (param_3 == (undefined8 *)0x0) goto LAB_0029132f;
    lVar7 = _CFStringCreateMutable(param_1,0);
    uStack_60 = 2;
    if (lVar7 != 0) {
      lVar8 = _CFDictionaryGetCount(param_2);
      local_40 = _malloc(lVar8 * 8);
      pvVar6 = _malloc(lVar8 * 8);
      if (local_40 == (void *)0x0) {
        pcVar4 = "requestDictKeysBuffer allocation failed";
        local_40 = (void *)0x0;
      }
      else {
        if (pvVar6 != (void *)0x0) {
          _CFDictionaryGetKeysAndValues(param_2,local_40,pvVar6);
          if (0 < lVar8) {
            lVar5 = 0;
            do {
              if (*(long *)((long)local_40 + lVar5 * 8) == 0) {
                _AMAuthInstallLog(3,"AMAuthInstallHttpCreatePostBody",
                                  "invalid requestDictKeysBuffer array");
                uStack_60 = 0xe;
                goto LAB_0029138c;
              }
              if (*(long *)((long)pvVar6 + lVar5 * 8) == 0) {
                _AMAuthInstallLog(3,"AMAuthInstallHttpCreatePostBody",
                                  "invalid requestDictValuesBuffer array");
                uStack_60 = 0xe;
                goto LAB_002913af;
              }
              _CFStringAppend(lVar7);
              _CFStringAppend(lVar7,&cf__);
              _CFStringAppend(lVar7,*(undefined8 *)((long)pvVar6 + lVar5 * 8));
              if (lVar5 < lVar8 + -1) {
                _CFStringAppend(lVar7,&cf__);
              }
              lVar5 = lVar5 + 1;
            } while (lVar8 != lVar5);
          }
          _AMAuthInstallLog(8,"AMAuthInstallHttpCreatePostBody","postString=%@",lVar7);
          lVar8 = _CFStringGetLength(lVar7);
          pvVar2 = _malloc(lVar8 + 1U);
          if (pvVar2 == (void *)0x0) {
            _AMAuthInstallLog(3,"AMAuthInstallHttpCreatePostBody",
                              "tmpStringBuffer allocation failure");
            uStack_60 = 2;
LAB_0029138c:
            lVar8 = 0;
            pvVar2 = (void *)0x0;
          }
          else {
            cVar1 = _CFStringGetCString(lVar7,pvVar2,lVar8 + 1U,0x8000100);
            if (cVar1 == '\0') {
              lVar8 = 0;
              uStack_60 = 3;
              _AMAuthInstallLog(3,"AMAuthInstallHttpCreatePostBody",
                                "conversion of postString to c-string failed");
            }
            else {
              lVar8 = _CFDataCreate(param_1,pvVar2,lVar8);
              if (lVar8 == 0) {
                lVar8 = 0;
                _AMAuthInstallLog(3,"AMAuthInstallHttpCreatePostBody","postData allocation failed");
                uStack_60 = 2;
              }
              else {
                uVar3 = _CFRetain(lVar8);
                *param_3 = uVar3;
                uStack_60 = 0;
              }
            }
          }
          goto LAB_0029132f;
        }
        pcVar4 = "requestDictValuesBuffer allocation failed";
        pvVar6 = (void *)0x0;
      }
      _AMAuthInstallLog(3,"AMAuthInstallHttpCreatePostBody",pcVar4);
      pvVar2 = (void *)0x0;
      lVar8 = 0;
      uStack_60 = 2;
      goto LAB_0029132f;
    }
  }
  local_40 = (void *)0x0;
  pvVar6 = (void *)0x0;
  lVar7 = 0;
LAB_002913af:
  pvVar2 = (void *)0x0;
  lVar8 = 0;
LAB_0029132f:
  _SafeRelease(lVar7);
  _SafeRelease(lVar8);
  _SafeFree(local_40);
  _SafeFree(pvVar6);
  _SafeFree(pvVar2);
  return uStack_60;
}

