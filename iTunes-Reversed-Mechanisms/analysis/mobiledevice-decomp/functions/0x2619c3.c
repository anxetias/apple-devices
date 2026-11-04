// rea decompile_all
// name: _AMSupportCopySetValueForKeyPathInDict
// address: 0x2619c3
// body: available
// range: 0x2619c3-0x261c61 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMSupportCopySetValueForKeyPathInDict
               (undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  long local_38;
  
  if (param_2 == 0) {
    pcVar7 = "dict is NULL";
LAB_00261c18:
    _AMSupportLogInternal(3,"AMSupportCopySetValueForKeyPathInDict",pcVar7);
    return 0;
  }
  if (param_3 == 0) {
    pcVar7 = "keyPath is NULL";
    goto LAB_00261c18;
  }
  if (param_4 == 0) {
    pcVar7 = "value is NULL";
    goto LAB_00261c18;
  }
  lVar1 = _CFStringFind(param_3,&cf__,0);
  if (lVar1 == -1) {
    uVar6 = _CFDictionaryGetCount(param_2);
    lVar1 = _CFDictionaryCreateMutableCopy(param_1,uVar6,param_2);
    if (lVar1 == 0) {
      return 0;
    }
    _CFDictionarySetValue(lVar1,param_3,param_4);
    lVar2 = _CFRetain(lVar1);
    _CFRelease(lVar1);
    return lVar2;
  }
  lVar2 = _CFStringGetLength(param_3);
  lVar2 = _CFStringCreateWithSubstring(param_1,param_3,lVar1 + 1,lVar2 - (lVar1 + 1));
  if (lVar2 == 0) {
    pcVar7 = "failed to create key substring";
    goto LAB_00261c18;
  }
  lVar1 = _CFStringCreateWithSubstring(param_1,param_3,0,lVar1);
  if (lVar1 == 0) {
    _AMSupportLogInternal
              (3,"AMSupportCopySetValueForKeyPathInDict","failed to create current substring");
    _CFRelease(lVar2);
    return 0;
  }
  lVar3 = _CFDictionaryGetValue(param_2,lVar1);
  if (lVar3 == 0) {
    local_38 = 0;
    lVar4 = _CFDictionaryCreateMutable
                      (param_1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    lVar5 = 0;
    lVar3 = 0;
    if (lVar4 == 0) goto LAB_00261b87;
  }
  else {
    lVar4 = _CFGetTypeID(lVar3);
    lVar5 = _CFDictionaryGetTypeID();
    if (lVar4 != lVar5) {
      local_38 = 0;
      _AMSupportLogInternal
                (3,"AMSupportCopySetValueForKeyPathInDict","item %@ not a dictionary",lVar1);
      lVar5 = 0;
      lVar3 = 0;
      goto LAB_00261b87;
    }
    lVar4 = _CFDictionaryCreateMutableCopy(param_1,0,lVar3);
  }
  lVar5 = _AMSupportCopySetValueForKeyPathInDict(param_1,lVar4,lVar2,param_4);
  local_38 = _CFDictionaryCreateMutableCopy(param_1,0,param_2);
  lVar3 = lVar4;
  if (local_38 == 0) {
    local_38 = 0;
  }
  else {
    _CFDictionarySetValue(local_38,lVar1,lVar5);
  }
LAB_00261b87:
  _CFRelease(lVar2);
  _CFRelease(lVar1);
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  if (lVar5 == 0) {
    return local_38;
  }
  _CFRelease(lVar5);
  return local_38;
}

