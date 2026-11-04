// rea decompile_all
// name: SERestoreInfo::makeSERestoreInfo
// address: 0x2582a7
// body: available
// range: 0x2582a7-0x25853c inclusive
// range: 0x258542-0x2585f8 inclusive
// range: 0x2585fe-0x25866e inclusive
// range: 0x258674-0x2586c1 inclusive
// range: 0x2586c4-0x258711 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x258538 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x2585f4 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x25866a to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x2586bd to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x25870d to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::makeSERestoreInfo(__CFDictionary const*, __CFError*&) */

__CFDictionary * SERestoreInfo::makeSERestoreInfo(__CFDictionary *param_1,__CFError **param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  P73BaseRestoreInfo *pPVar5;
  runtime_error *prVar6;
  undefined8 *puVar7;
  IcefallRestoreInfo *pIVar8;
  SEException *pSVar9;
  long *plVar10;
  __CFDictionary *p_Var11;
  undefined1 local_a8 [8];
  long *local_a0;
  undefined1 local_98 [8];
  long *local_90;
  __CFDictionary *local_88;
  long *plStack_80;
  __CFDictionary *local_70;
  __CFDictionary *local_68;
  long *plStack_60;
  undefined8 local_58;
  undefined8 local_50;
  __CFDictionary *local_48;
  long *plStack_40;
  
  local_70 = (__CFDictionary *)0x0;
  if (param_2 == (__CFError **)0x0) {
    prVar6 = (runtime_error *)___cxa_allocate_exception(0x10);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (&local_48,"Assertion: ");
    puVar7 = (undefined8 *)std::string::append((char *)&local_48);
    local_58 = puVar7[2];
    local_68 = (__CFDictionary *)*puVar7;
    plStack_60 = (long *)puVar7[1];
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    std::runtime_error::runtime_error(prVar6,(string *)&local_68);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(prVar6,PTR_typeinfo_00441260,PTR__runtime_error_00441248);
  }
  *(undefined8 *)param_1 = 0;
  cVar1 = _CFDictionaryGetValueIfPresent(param_2,&cf_DeviceInfo,&local_70);
  if ((cVar1 == '\0') || (local_70 == (__CFDictionary *)0x0)) {
    pSVar9 = (SEException *)___cxa_allocate_exception(0x48);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (&local_68,"Cannot find key kSEOptionDeviceInfo in options");
    SEException::SEException(pSVar9,(string *)&local_68,2,(__CFString *)&cf_SEUpdaterErrorDomain);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(pSVar9,&SEException::typeinfo,SEException::~SEException);
  }
  local_88 = (__CFDictionary *)0x0;
  plStack_80 = (long *)0x0;
  lVar3 = _CFGetTypeID();
  lVar4 = _CFDataGetTypeID();
  if (lVar3 == lVar4) {
    local_68 = (__CFDictionary *)&PTR__BLOB_0044f1c8;
    local_50 = _CFRetain(local_70);
    plStack_60 = (long *)_CFDataGetBytePtr(local_50);
    local_58 = _CFDataGetLength(local_50);
    makeDeviceInfo<SERestoreInfo::BLOB>((BLOB *)&local_48);
    plVar10 = plStack_40;
    p_Var11 = local_48;
    local_48 = (__CFDictionary *)0x0;
    plStack_40 = (long *)0x0;
    local_88 = p_Var11;
    plStack_80 = plVar10;
    BLOB::~BLOB((BLOB *)&local_68);
  }
  else {
    lVar3 = _CFGetTypeID(local_70);
    lVar4 = _CFDictionaryGetTypeID();
    if (lVar3 != lVar4) {
      pSVar9 = (SEException *)___cxa_allocate_exception(0x48);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                (&local_68,"kSEOptionDeviceInfo is neither CFData or CFDictionary");
      SEException::SEException
                (pSVar9,(string *)&local_68,0x10,(__CFString *)&cf_SEUpdaterErrorDomain);
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(pSVar9,&SEException::typeinfo,SEException::~SEException);
    }
    local_48 = local_70;
    makeDeviceInfo<__CFDictionary_const*>(&local_68);
    local_88 = local_68;
    plStack_80 = plStack_60;
    plVar10 = plStack_60;
    p_Var11 = local_68;
  }
  if (p_Var11 == (__CFDictionary *)0x0) {
    prVar6 = (runtime_error *)___cxa_allocate_exception(0x10);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (&local_48,"Assertion: ");
    puVar7 = (undefined8 *)std::string::append((char *)&local_48);
    local_58 = puVar7[2];
    local_68 = (__CFDictionary *)*puVar7;
    plStack_60 = (long *)puVar7[1];
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    std::runtime_error::runtime_error(prVar6,(string *)&local_68);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(prVar6,PTR_typeinfo_00441260,PTR__runtime_error_00441248);
  }
  iVar2 = (**(code **)(*(undefined **)p_Var11 + 0x20))(p_Var11);
  if (iVar2 < 200) {
    if (((0x3d < iVar2 - 0x36U) ||
        ((0x2000400000000007U >> ((ulong)(iVar2 - 0x36U) & 0x3f) & 1) == 0)) && (iVar2 != 0x2c)) {
LAB_002584cc:
      prVar6 = (runtime_error *)___cxa_allocate_exception(0x10);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                (&local_48,"Assertion: ");
      puVar7 = (undefined8 *)std::string::append((char *)&local_48);
      local_58 = puVar7[2];
      local_68 = (__CFDictionary *)*puVar7;
      plStack_60 = (long *)puVar7[1];
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      std::runtime_error::runtime_error(prVar6,(string *)&local_68);
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(prVar6,PTR_typeinfo_00441260,PTR__runtime_error_00441248);
    }
  }
  else if (iVar2 != 200) {
    if (iVar2 == 0x20211) {
      pIVar8 = operator_new(0x28);
      if (plVar10 != (long *)0x0) {
        LOCK();
        plVar10[1] = plVar10[1] + 1;
        UNLOCK();
      }
      local_90 = plVar10;
      IcefallRestoreInfo::IcefallRestoreInfo(pIVar8,param_2,local_98);
      *(IcefallRestoreInfo **)param_1 = pIVar8;
      local_a0 = local_90;
      goto LAB_0025843a;
    }
    if (iVar2 != 0xd2) goto LAB_002584cc;
  }
  pPVar5 = operator_new(0x28);
  if (plVar10 != (long *)0x0) {
    LOCK();
    plVar10[1] = plVar10[1] + 1;
    UNLOCK();
  }
  local_a0 = plVar10;
  P73BaseRestoreInfo::P73BaseRestoreInfo(pPVar5,param_2,local_a8);
  *(P73BaseRestoreInfo **)param_1 = pPVar5;
LAB_0025843a:
  if (local_a0 != (long *)0x0) {
    LOCK();
    plVar10 = local_a0 + 1;
    lVar3 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*local_a0 + 0x10))(local_a0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_80 != (long *)0x0) {
    LOCK();
    plVar10 = plStack_80 + 1;
    lVar3 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      std::__shared_weak_count::__release_weak();
    }
  }
  return param_1;
}

