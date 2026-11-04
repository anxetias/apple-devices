// rea decompile_all
// name: _T200UpdaterGetTagsWithLogging
// address: 0x25d799
// body: available
// range: 0x25d799-0x25d9dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _T200UpdaterGetTagsWithLogging
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long local_38;
  
  _logSinkFunc = param_2;
  _logContext = param_3;
  _T200RestoreInfoLog("%s:%d Start\n","_T200UpdaterGetTagsWithLogging",0x255);
  lVar1 = _CFDictionaryCreateMutable
                    (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar1 == 0) {
    _T200UpdaterGetTagsWithLogging_cold_5(&local_38);
LAB_0025d94b:
    lVar2 = 0;
    lVar4 = local_38;
LAB_0025d962:
    lVar3 = 0;
LAB_0025d977:
    if ((param_4 == (undefined8 *)0x0) || (lVar4 == 0)) {
      if (lVar4 != 0) goto LAB_0025d9c5;
    }
    else {
      uVar7 = _CFRetain(lVar4);
      *param_4 = uVar7;
      _T200RestoreInfoLog("%s:%d outputDict =\n","_T200UpdaterGetTagsWithLogging",0x276);
      _T200CFShow(lVar1);
      if (lVar1 != 0) {
        _CFRelease(lVar1);
      }
      lVar1 = 0;
LAB_0025d9c5:
      _CFRelease(lVar4);
    }
    lVar4 = 0;
    if (lVar3 == 0) goto LAB_0025d8ef;
  }
  else {
    uVar7 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    lVar2 = _CFArrayCreateMutable(uVar7,0,PTR__kCFTypeArrayCallBacks_004411a8);
    if (lVar2 == 0) {
      _T200UpdaterGetTagsWithLogging_cold_4(&local_38);
      goto LAB_0025d94b;
    }
    lVar3 = _CFArrayCreateMutable(uVar7,0,PTR__kCFTypeArrayCallBacks_004411a8);
    if (lVar3 == 0) {
      _T200UpdaterGetTagsWithLogging_cold_3(&local_38);
      lVar4 = local_38;
      goto LAB_0025d962;
    }
    _CFArrayAppendValue(lVar3,&cf_BMU_Ticket);
    if (param_1 == 0) {
      _T200UpdaterGetTagsWithLogging_cold_2(&local_38);
      lVar4 = local_38;
      goto LAB_0025d977;
    }
    lVar4 = _CFDictionaryGetValue(param_1,&cf_DeviceInfo);
    if (lVar4 == 0) {
LAB_0025d91b:
      _T200UpdaterGetTagsWithLogging_cold_1(&local_38);
      lVar4 = local_38;
      goto LAB_0025d977;
    }
    lVar5 = _CFGetTypeID(lVar4);
    lVar6 = _CFDictionaryGetTypeID();
    if (lVar5 != lVar6) goto LAB_0025d91b;
    lVar4 = _CFRetain(lVar4);
    _CFArrayAppendValue(lVar2,&cf_BMU_FirmwareMap);
    _CFDictionaryAddValue(lVar1,&cf_BuildIdentityTags,lVar2);
    _CFDictionaryAddValue(lVar1,&cf_ResponseTags,lVar3);
    _T200RestoreInfoLog("%s:%d End\n","_T200UpdaterGetTagsWithLogging",0x271);
  }
  _CFRelease(lVar3);
LAB_0025d8ef:
  if (lVar2 != 0) {
    _CFRelease(lVar2);
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  return lVar1;
}

