// rea decompile_all
// name: _AMSupportHttpCreatePostBody
// address: 0x2629df
// body: available
// range: 0x2629df-0x262d22 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMSupportHttpCreatePostBody(undefined8 param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  void *pvVar8;
  undefined8 uStack_60;
  long local_38;
  
  local_38 = 0;
  uStack_60 = 1;
  if (param_2 != 0) {
    lVar5 = 0;
    pvVar2 = (void *)0x0;
    pvVar8 = (void *)0x0;
    pvVar6 = (void *)0x0;
    if (param_3 == (undefined8 *)0x0) goto LAB_00262b9a;
    lVar5 = _CFStringCreateMutable(param_1,0);
    uStack_60 = 2;
    if (lVar5 != 0) {
      lVar3 = _CFDictionaryGetCount(param_2);
      pvVar2 = _malloc(lVar3 * 8);
      pvVar8 = _malloc(lVar3 * 8);
      if (pvVar2 == (void *)0x0) {
        _AMSupportLogInternal
                  (3,"AMSupportHttpCreatePostBody","requestDictKeysBuffer allocation failed");
        pvVar2 = (void *)0x0;
      }
      else {
        if (pvVar8 != (void *)0x0) {
          _CFDictionaryGetKeysAndValues(param_2,pvVar2,pvVar8);
          if (0 < lVar3) {
            lVar7 = 0;
            do {
              if (*(long *)((long)pvVar2 + lVar7 * 8) == 0) {
                _AMSupportLogInternal
                          (3,"AMSupportHttpCreatePostBody","invalid requestDictKeysBuffer array");
                uStack_60 = 0xe;
                goto LAB_00262bff;
              }
              if (*(long *)((long)pvVar8 + lVar7 * 8) == 0) {
                local_38 = 0;
                _AMSupportLogInternal
                          (3,"AMSupportHttpCreatePostBody","invalid requestDictValuesBuffer array");
                uStack_60 = 0xe;
                pvVar6 = (void *)0x0;
                goto LAB_00262b9a;
              }
              _CFStringAppend(lVar5);
              _CFStringAppend(lVar5,&cf__);
              _CFStringAppend(lVar5,*(undefined8 *)((long)pvVar8 + lVar7 * 8));
              if (lVar7 < lVar3 + -1) {
                _CFStringAppend(lVar5,&cf__);
              }
              lVar7 = lVar7 + 1;
            } while (lVar3 != lVar7);
          }
          _AMSupportLogInternal(8,"AMSupportHttpCreatePostBody","postString=%@",lVar5);
          lVar3 = _CFStringGetLength(lVar5);
          pvVar6 = _malloc(lVar3 + 1U);
          if (pvVar6 == (void *)0x0) {
            _AMSupportLogInternal
                      (3,"AMSupportHttpCreatePostBody","tmpStringBuffer allocation failure");
            uStack_60 = 2;
LAB_00262bff:
            local_38 = 0;
            pvVar6 = (void *)0x0;
          }
          else {
            cVar1 = _CFStringGetCString(lVar5,pvVar6,lVar3 + 1U,0x8000100);
            uStack_60 = 2;
            if (cVar1 == '\0') {
              local_38 = 0;
              uStack_60 = 3;
              _AMSupportLogInternal
                        (3,"AMSupportHttpCreatePostBody",
                         "conversion of postString to c-string failed");
            }
            else {
              local_38 = _CFDataCreate(param_1,pvVar6,lVar3);
              if (local_38 == 0) {
                local_38 = 0;
                _AMSupportLogInternal(3,"AMSupportHttpCreatePostBody","postData allocation failed");
              }
              else {
                uVar4 = _CFRetain(local_38);
                *param_3 = uVar4;
                uStack_60 = 0;
              }
            }
          }
          goto LAB_00262b9a;
        }
        _AMSupportLogInternal
                  (3,"AMSupportHttpCreatePostBody","requestDictValuesBuffer allocation failed");
        pvVar8 = (void *)0x0;
      }
      local_38 = 0;
      pvVar6 = (void *)0x0;
      uStack_60 = 2;
      goto LAB_00262b9a;
    }
  }
  local_38 = 0;
  lVar5 = 0;
  pvVar2 = (void *)0x0;
  pvVar8 = (void *)0x0;
  pvVar6 = (void *)0x0;
LAB_00262b9a:
  _AMSupportSafeRelease(lVar5);
  _AMSupportSafeRelease(local_38);
  _AMSupportSafeFree(pvVar2);
  _AMSupportSafeFree(pvVar8);
  _AMSupportSafeFree(pvVar6);
  return uStack_60;
}

