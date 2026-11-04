// rea decompile_all
// name: ACFURestoreHost::getTags
// address: 0x21105c
// body: available
// range: 0x21105c-0x2112ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFURestoreHost::getTags() */

long __thiscall ACFURestoreHost::getTags(ACFURestoreHost *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ACFULogging *pAVar6;
  ulong *puVar7;
  ACFURestoreHost local_e0 [24];
  ACFURestoreHost local_c8 [24];
  ACFURestoreHost local_b0 [24];
  ACFURestoreHost local_98 [24];
  byte local_80 [16];
  void *local_70;
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  ulong local_48;
  ulong uStack_40;
  void *local_38;
  
  lVar1 = _CFDictionaryCreateMutable
                    (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                     PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar1 == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (local_e0,"getTags: failed to allocate output dictionary");
    ACFUError::addError((ACFUError *)(this + 0x18),local_e0,4000,0);
    getTags(local_e0);
    return 0;
  }
  lVar2 = createArrayFromList((vector *)(this + 0x28));
  if (lVar2 == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (local_c8,"getTags: failed to create build identity tag list");
    ACFUError::addError((ACFUError *)(this + 0x18),local_c8,4000,0);
    getTags(local_c8);
    return lVar1;
  }
  lVar3 = createArrayFromList((vector *)(this + 0x70));
  if (lVar3 == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (local_b0,"getTags: failed to create response tag list");
    ACFUError::addError((ACFUError *)(this + 0x18),local_b0,4000,0);
    getTags(local_b0);
    goto LAB_002111e0;
  }
  lVar4 = _CFDictionaryGetValue(*(undefined8 *)(this + 0x10),&cf_DeviceInfo);
  if (lVar4 == 0) {
LAB_002111fd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (local_98,"getTags: failed to get device info list");
    ACFUError::addError((ACFUError *)(this + 0x18),local_98,0xfa1,0);
    getTags(local_98);
  }
  else {
    lVar4 = _CFGetTypeID(lVar4);
    lVar5 = _CFDictionaryGetTypeID();
    if (lVar4 != lVar5) goto LAB_002111fd;
    _CFDictionaryAddValue(lVar1,&cf_BuildIdentityTags,lVar2);
    _CFDictionaryAddValue(lVar1,&cf_ResponseTags,lVar3);
    pAVar6 = (ACFULogging *)ACFULogging::getLogInstance();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (local_80,"ACFURestoreHost");
    puVar7 = (ulong *)std::string::append((char *)local_80);
    local_38 = (void *)puVar7[2];
    local_48 = *puVar7;
    uStack_40 = puVar7[1];
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7 = (ulong *)std::string::append((char *)&local_48);
    local_58 = (void *)puVar7[2];
    local_68 = *puVar7;
    uStack_60 = puVar7[1];
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    ACFULogging::handleMessageCFType(pAVar6,&local_68,0,"Request Tags:",lVar1);
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
    if ((local_48 & 1) != 0) {
      operator_delete(local_38);
    }
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
  }
  _CFRelease(lVar3);
LAB_002111e0:
  _CFRelease(lVar2);
  return lVar1;
}

