// rea decompile_all
// name: SERestoreInfo::P73BaseDeliveryObject::updateMeasurement
// address: 0x24f36e
// body: available
// range: 0x24f36e-0x24f588 inclusive
// range: 0x24f58b-0x24f623 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x24f584 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::P73BaseDeliveryObject::updateMeasurement(__CFDictionary*, __CFError**) const */

ulong __thiscall
SERestoreInfo::P73BaseDeliveryObject::updateMeasurement
          (P73BaseDeliveryObject *this,__CFDictionary *param_1,__CFError **param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  runtime_error *this_00;
  __CFError *p_Var6;
  int iVar7;
  byte local_a0 [16];
  void *local_90;
  byte local_88 [16];
  void *local_78;
  long local_70 [3];
  void *local_58;
  void *pvStack_50;
  undefined8 local_48;
  uchar local_31;
  
  if ((param_1 == (__CFDictionary *)0x0) || (param_2 == (__CFError **)0x0)) {
    this_00 = (runtime_error *)___cxa_allocate_exception(0x10);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (local_70,"Assertion: ");
    puVar5 = (undefined8 *)std::string::append((char *)local_70);
    local_48 = puVar5[2];
    local_58 = (void *)*puVar5;
    pvStack_50 = (void *)puVar5[1];
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    std::runtime_error::runtime_error(this_00,(string *)&local_58);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(this_00,PTR_typeinfo_00441260,PTR__runtime_error_00441248);
  }
  local_70[0] = 0;
  cVar1 = _CFDictionaryGetValueIfPresent(param_1,&cf_SE_UpdatePayload,local_70);
  if (local_70[0] == 0 || cVar1 == '\0') {
LAB_0024f3fb:
    lVar2 = _CFDictionaryCreateMutable
                      (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar2 == 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                (local_a0,"Fail to allocate imageProps");
      p_Var6 = (__CFError *)CreateCFError(local_a0,3,0,&cf_SEUpdaterErrorDomain);
      *param_2 = p_Var6;
      if ((local_a0[0] & 1) != 0) {
        operator_delete(local_90);
      }
      param_2 = (__CFError **)0x0;
      goto LAB_0024f4fc;
    }
    _CFDictionarySetValue(param_1,&cf_SE_UpdatePayload,lVar2);
  }
  else {
    lVar2 = _CFGetTypeID();
    lVar3 = _CFDictionaryGetTypeID();
    if (lVar2 != lVar3) goto LAB_0024f3fb;
    if (local_70[0] == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = _CFRetain();
    }
  }
  puVar4 = (ulong *)_ccsha256_di();
  local_58 = (void *)0x0;
  pvStack_50 = (void *)0x0;
  local_48 = 0;
  local_31 = '\0';
  if (*puVar4 != 0) {
    std::vector<unsigned_char,std::allocator<unsigned_char>>::__append
              ((vector<unsigned_char,std::allocator<unsigned_char>> *)&local_58,*puVar4,&local_31);
  }
  _ccdigest(puVar4,*(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x28),local_58);
  lVar3 = _CFDataCreate(0,local_58,(long)pvStack_50 - (long)local_58);
  if (lVar3 == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (local_88,"Fail to allocate tmpData");
    p_Var6 = (__CFError *)CreateCFError(local_88,3,0,&cf_SEUpdaterErrorDomain);
    *param_2 = p_Var6;
    iVar7 = 6;
    if ((local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
  }
  else {
    cVar1 = isDev(this);
    if (cVar1 == '\0') {
      puVar5 = &_kSETagMeasurementProdHash;
    }
    else {
      puVar5 = &_kSETagMeasurementDevHash;
    }
    iVar7 = 0;
    _CFDictionarySetValue(lVar2,*puVar5,lVar3);
  }
  if (local_58 != (void *)0x0) {
    pvStack_50 = local_58;
    operator_delete(local_58);
  }
  if (iVar7 == 6) {
    param_2 = (__CFError **)0x0;
  }
  else {
    if (iVar7 != 0) goto LAB_0024f4fc;
    param_2 = (__CFError **)CONCAT71((int7)((ulong)param_2 >> 8),1);
  }
  if (lVar2 != 0) {
    _CFRelease(lVar2);
  }
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
LAB_0024f4fc:
  return (ulong)param_2 & 0xffffff01;
}

