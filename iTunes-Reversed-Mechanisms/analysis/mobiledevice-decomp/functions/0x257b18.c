// rea decompile_all
// name: SERestoreInfo::SERestoreInfoBase::getRequestDict
// address: 0x257b18
// body: available
// range: 0x257b18-0x257eb9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x257eb5 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::SERestoreInfoBase::getRequestDict() const */

undefined8 __thiscall SERestoreInfo::SERestoreInfoBase::getRequestDict(SERestoreInfoBase *this)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  __CFData *p_Var4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  SEException *this_00;
  undefined8 *puVar9;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  void *local_48;
  void *local_40;
  undefined8 local_30;
  
  uVar5 = *(undefined8 *)(this + 0x20);
  iVar3 = (**(code **)(**(long **)(this + 0x10) + 0x20))();
  puVar9 = &_kSETagRequestTicket;
  if (iVar3 < 200) {
    if ((iVar3 == 100) || (iVar3 == 0x73)) goto LAB_00257b6e;
  }
  else if ((iVar3 == 200) || ((iVar3 == 0xd2 || (iVar3 == 0x20211)))) goto LAB_00257b6e;
  puVar9 = &_kSETagRequestTicketEC384;
LAB_00257b6e:
  _CFDictionaryAddValue(uVar5,*puVar9,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
  (**(code **)(**(long **)(this + 0x10) + 0x18))
            (*(long **)(this + 0x10),*(undefined8 *)(this + 0x20),1);
  cVar2 = _CFDictionaryContainsKey(*(undefined8 *)(this + 8),&cf_FirmwareData);
  if (cVar2 == '\0') {
    cVar2 = _CFDictionaryContainsKey(*(undefined8 *)(this + 8),&cf_BuildIdentity);
    if (cVar2 == '\0') {
      this_00 = (SEException *)___cxa_allocate_exception(0x48);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                (&local_50,"missing build identity");
      SEException::SEException(this_00,(string *)&local_50,2,(__CFString *)&cf_SEUpdaterErrorDomain)
      ;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(this_00,&SEException::typeinfo,SEException::~SEException);
    }
    uVar5 = _CFDictionaryGetValue(*(undefined8 *)(this + 8),&cf_BuildIdentity);
    local_50 = *(long **)(this + 0x20);
    (**(code **)(*(long *)this + 0x18))(&local_48,this);
    local_30 = (**(code **)(*(long *)this + 0x20))(this);
    _CFDictionaryApplyFunction(uVar5,_WalkThroughDict);
    if (local_48 != (void *)0x0) {
      local_40 = local_48;
      operator_delete(local_48);
    }
  }
  else {
    p_Var4 = (__CFData *)_CFDictionaryGetValue(*(undefined8 *)(this + 8),&cf_FirmwareData);
    makeSEFirmware((SERestoreInfo *)&local_50,p_Var4);
    local_60 = *(undefined8 *)(this + 0x10);
    uVar5 = *(undefined8 *)(this + 0x20);
    local_58 = *(long **)(this + 0x18);
    if (local_58 != (long *)0x0) {
      LOCK();
      local_58[1] = local_58[1] + 1;
      UNLOCK();
    }
    (**(code **)(*local_50 + 0x10))(local_50,uVar5,&local_60);
    if (local_58 != (long *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar1 = local_50;
    local_50 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  lVar6 = _CFDictionaryGetValue(*(undefined8 *)(this + 8),&cf_SEAC);
  if (lVar6 != 0) {
    _CFDictionaryAddValue(*(undefined8 *)(this + 0x20),&cf_SEAC,lVar6);
  }
  lVar6 = _CFDictionaryGetValue(*(undefined8 *)(this + 8),&cf_SERS);
  if (lVar6 != 0) {
    _CFDictionaryAddValue(*(undefined8 *)(this + 0x20),&cf_SERS,lVar6);
  }
  lVar6 = _CFDictionaryGetValue(*(undefined8 *)(this + 8),&cf_SESA);
  if (lVar6 != 0) {
    _CFDictionaryAddValue(*(undefined8 *)(this + 0x20),&cf_SESA,lVar6);
  }
  lVar6 = _CFDictionaryGetValue(*(undefined8 *)(this + 8),&cf_SharedInfo);
  if (lVar6 != 0) {
    lVar7 = _CFDictionaryGetTypeID();
    lVar8 = _CFGetTypeID(lVar6);
    if ((lVar7 == lVar8) && (lVar6 = _CFDictionaryGetValue(lVar6,&cf_Rose), lVar6 != 0)) {
      lVar7 = _CFDictionaryGetValue(lVar6,&cf_SE_RapRTKitOS);
      if (lVar7 != 0) {
        lVar8 = _CFDictionaryCreateMutable
                          (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                           PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        _CFDictionaryAddValue(lVar8,&cf_Digest,lVar7);
        _CFDictionaryAddValue(*(undefined8 *)(this + 0x20),&cf_SE_RapRTKitOS,lVar8);
        if (lVar8 != 0) {
          _CFRelease(lVar8);
        }
      }
      lVar6 = _CFDictionaryGetValue(lVar6,&cf_SE_RapSwBinDsp);
      if (lVar6 != 0) {
        lVar7 = _CFDictionaryCreateMutable
                          (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                           PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        _CFDictionaryAddValue(lVar7,&cf_Digest,lVar6);
        _CFDictionaryAddValue(*(undefined8 *)(this + 0x20),&cf_SE_RapSwBinDsp,lVar7);
        if (lVar7 != 0) {
          _CFRelease(lVar7);
        }
      }
    }
  }
  return *(undefined8 *)(this + 0x20);
}

