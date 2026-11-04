// rea decompile_all
// name: _ConsumeEntries
// address: 0xb09e4
// body: available
// range: 0xb09e4-0xb0d17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _ConsumeEntries(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar9 = 0;
    _dmlog("ConsumeEntries",0x15e,&cf_invalidparameter_s__entries__p_dictionary__p,param_1,param_2);
  }
  else {
    lVar2 = _CFDictionaryGetValue(param_1,&cf_DIR_CONTENTS);
    if (lVar2 != 0) {
      lVar3 = _CFGetTypeID(lVar2);
      lVar4 = _CFDictionaryGetTypeID();
      if (lVar3 == lVar4) {
        lVar3 = _CFDictionaryGetValue(param_2,&cf_FILES);
        local_58 = lVar3;
        lVar4 = _CFDictionaryGetValue(param_2,&cf_LINKS);
        local_60 = lVar4;
        lVar5 = _CFDictionaryGetValue(param_2,&cf_DIRS);
        local_50 = lVar5;
        lVar6 = _CFDictionaryGetValue(param_2,&cf_BUNDLE_VERSION);
        local_48 = lVar6;
        lVar7 = _CFDictionaryGetValue(param_2,&cf_BUNDLE_ID);
        local_40 = lVar7;
        lVar8 = _CFDictionaryGetValue(param_2,&cf_SUPPORTED_DEVICES);
        local_38 = lVar8;
        if (lVar6 == 0) {
          lVar6 = _CFDictionaryGetValue(param_1,&cf_BUNDLE_VERSION);
          local_48 = lVar6;
          if (lVar6 != 0) {
            cVar1 = _verbose();
            if (cVar1 != '\0') {
              _dmlog("ConsumeEntries",0x16c,&cf_gotbundleversions___,lVar6);
            }
            _CFDictionarySetValue(param_2,&cf_BUNDLE_VERSION,lVar6);
          }
          lVar6 = _CFDictionaryGetValue(param_1,&cf_INFO_PLIST_HASH);
          if (lVar6 != 0) {
            _CFDictionarySetValue(param_2,&cf_INFO_PLIST_HASH,lVar6);
          }
        }
        if (lVar7 == 0) {
          lVar6 = _CFDictionaryGetValue(param_1,&cf_BUNDLE_ID);
          local_40 = lVar6;
          if (lVar6 != 0) {
            cVar1 = _verbose();
            if (cVar1 != '\0') {
              _dmlog("ConsumeEntries",0x178,&cf_gotbundleid___,lVar6);
            }
            _CFDictionarySetValue(param_2,&cf_BUNDLE_ID,lVar6);
          }
        }
        if (lVar3 == 0) {
          lVar3 = _CFDictionaryCreateMutable
                            (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                             PTR__kCFTypeDictionaryValueCallBacks_004411b8);
          local_58 = lVar3;
          _CFDictionarySetValue(param_2,&cf_FILES,lVar3);
          _CFRelease(lVar3);
        }
        lVar3 = param_1;
        if (lVar4 == 0) {
          lVar3 = _CFDictionaryCreateMutable
                            (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                             PTR__kCFTypeDictionaryValueCallBacks_004411b8);
          local_60 = lVar3;
          _CFDictionarySetValue(param_2,&cf_LINKS,lVar3);
          _CFRelease(lVar3);
        }
        if (lVar5 == 0) {
          lVar3 = _CFDictionaryCreateMutable
                            (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                             PTR__kCFTypeDictionaryValueCallBacks_004411b8);
          local_50 = lVar3;
          _CFDictionarySetValue(param_2,&cf_DIRS,lVar3);
          _CFRelease(lVar3);
        }
        if (lVar8 == 0) {
          lVar4 = _CFDictionaryGetValue(param_1,&cf_SUPPORTED_DEVICES);
          local_38 = lVar4;
          if (lVar4 != 0) {
            cVar1 = _verbose();
            if (cVar1 != '\0') {
              _dmlog("ConsumeEntries",400,&cf_gotsupporteddevices___,lVar4);
            }
            _CFDictionarySetValue(param_2,&cf_SUPPORTED_DEVICES,lVar4);
            lVar3 = lVar4;
          }
        }
        _CFDictionaryApplyFunction(lVar2,_process_entries,&local_60);
        uVar9 = CONCAT71((int7)((ulong)lVar3 >> 8),1);
        goto LAB_000b0cd7;
      }
    }
    _ConsumeEntries_cold_1();
    uVar9 = 0;
  }
LAB_000b0cd7:
  return uVar9 & 0xffffffff;
}

