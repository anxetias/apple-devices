// rea decompile_all
// name: SERestoreInfo::IcefallDeliveryObject::updateMeasurement
// address: 0x25400e
// body: available
// range: 0x25400e-0x254332 inclusive
// range: 0x254338-0x2543a8 inclusive
// range: 0x2543ae-0x2544b6 inclusive
// range: 0x2544b9-0x25452c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x25432e to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x2543a4 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x2544b2 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x254528 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::IcefallDeliveryObject::updateMeasurement(__CFDictionary*, __CFError**) const */

undefined8 __thiscall
SERestoreInfo::IcefallDeliveryObject::updateMeasurement
          (IcefallDeliveryObject *this,__CFDictionary *param_1,__CFError **param_2)

{
  IcefallDeliveryObject IVar1;
  IcefallDeliveryObject *pIVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  IcefallDeliveryObject *pIVar7;
  runtime_error *prVar8;
  ulong *puVar9;
  __CFError *p_Var10;
  undefined8 *puVar11;
  IcefallDeliveryObject *pIVar12;
  cfstringStruct *pcVar13;
  bool bVar14;
  byte local_118 [16];
  void *local_108;
  byte local_100 [16];
  void *local_f0;
  byte local_e8 [16];
  void *local_d8;
  IcefallDeliveryObject *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8 [6];
  cfstringStruct *local_88;
  IcefallDeliveryObject *local_80;
  __CFDictionary *local_78;
  char local_70 [24];
  void **local_58;
  cfstringStruct *local_50;
  ulong local_48;
  ulong uStack_40;
  void *local_38;
  
  local_80 = this;
  if (param_1 == (__CFDictionary *)0x0) {
    prVar8 = (runtime_error *)___cxa_allocate_exception(0x10);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (&local_48,"Assertion: ");
    puVar11 = (undefined8 *)std::string::append((char *)&local_48);
    local_b8[2] = (cfstringStruct *)puVar11[2];
    local_b8[0] = (cfstringStruct *)*puVar11;
    local_b8[1] = (cfstringStruct *)puVar11[1];
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    std::runtime_error::runtime_error(prVar8,(string *)local_b8);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(prVar8,PTR_typeinfo_00441260,PTR__runtime_error_00441248);
  }
  if (param_2 == (__CFError **)0x0) {
    prVar8 = (runtime_error *)___cxa_allocate_exception(0x10);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (&local_48,"Assertion: ");
    puVar11 = (undefined8 *)std::string::append((char *)&local_48);
    local_b8[2] = (cfstringStruct *)puVar11[2];
    local_b8[0] = (cfstringStruct *)*puVar11;
    local_b8[1] = (cfstringStruct *)puVar11[1];
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    std::runtime_error::runtime_error(prVar8,(string *)local_b8);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(prVar8,PTR_typeinfo_00441260,PTR__runtime_error_00441248);
  }
  local_b8[0] = &cf_SE_Bootloader;
  local_b8[1] = &cf_SE_Bootloader;
  local_b8[2] = &cf_SE_OS;
  local_b8[3] = &cf_SE_MigrationOS;
  local_b8[4] = &cf_SE_Firmware;
  pIVar7 = *(IcefallDeliveryObject **)(this + 0x20);
  local_d0 = this + 0x28;
  if (pIVar7 != local_d0) {
    local_58 = &local_108;
    local_c8 = &cf_DevelopmentCMAC;
    local_c0 = &cf_ProductionCMAC;
    local_50 = &cf_SEUpdaterErrorDomain;
    local_78 = param_1;
    do {
      if (4 < (ulong)*(uint *)(pIVar7 + 0x20)) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                  (local_118,"cmac.first is out of range");
        p_Var10 = (__CFError *)CreateCFError(local_118,2,0,local_50);
        *param_2 = p_Var10;
        local_f0 = local_108;
        local_100[0] = local_118[0];
joined_r0x002542b0:
        if ((local_100[0] & 1) == 0) {
          return 0;
        }
        operator_delete(local_f0);
        return 0;
      }
      pcVar13 = local_b8[*(uint *)(pIVar7 + 0x20)];
      cVar3 = _CFDictionaryContainsKey(param_1,pcVar13);
      if (cVar3 == '\0') {
        lVar5 = _CFDictionaryCreateMutable
                          (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                           PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        if (lVar5 == 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                    (local_e8,"imageProps is nullptr");
          p_Var10 = (__CFError *)CreateCFError(local_e8,3,0,local_50);
          *param_2 = p_Var10;
          local_f0 = local_d8;
          local_100[0] = local_e8[0];
          goto joined_r0x002542b0;
        }
      }
      else {
        uVar4 = _CFDictionaryGetValue(param_1,pcVar13);
        lVar5 = _CFRetain(uVar4);
        if (lVar5 == 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                    (local_100,"imageProps is nullptr");
          p_Var10 = (__CFError *)CreateCFError(local_100,2,0,local_50);
          *param_2 = p_Var10;
          goto joined_r0x002542b0;
        }
      }
      if (*(long *)(pIVar7 + 0x30) == 0) {
        prVar8 = (runtime_error *)___cxa_allocate_exception(0x10);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                  (local_70,"Assertion: ");
        puVar9 = (ulong *)std::string::append(local_70);
        local_38 = (void *)puVar9[2];
        local_48 = *puVar9;
        uStack_40 = puVar9[1];
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        std::runtime_error::runtime_error(prVar8,(string *)&local_48);
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(prVar8,PTR_typeinfo_00441260,PTR__runtime_error_00441248);
      }
      if (*(long *)(pIVar7 + 0x38) != 0x10) {
        prVar8 = (runtime_error *)___cxa_allocate_exception(0x10);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                  (local_70,"Assertion: ");
        puVar9 = (ulong *)std::string::append(local_70);
        local_38 = (void *)puVar9[2];
        local_48 = *puVar9;
        uStack_40 = puVar9[1];
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        std::runtime_error::runtime_error(prVar8,(string *)&local_48);
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(prVar8,PTR_typeinfo_00441260,PTR__runtime_error_00441248);
      }
      IVar1 = local_80[0x50];
      local_88 = pcVar13;
      lVar6 = _CFDataCreate(0,*(long *)(pIVar7 + 0x30),0x10);
      if (lVar6 == 0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                  (&local_48,"Cannot allocate for tmpData");
        p_Var10 = (__CFError *)CreateCFError(&local_48,3,0,local_50);
        param_1 = local_78;
        pcVar13 = local_88;
        *param_2 = p_Var10;
        if ((local_48 & 1) != 0) {
          operator_delete(local_38);
          goto LAB_002541c5;
        }
      }
      else {
        if (IVar1 == (IcefallDeliveryObject)0x0) {
          _CFDictionaryAddValue(lVar5,local_c0,lVar6);
        }
        else {
          _CFDictionarySetValue(lVar5,local_c8,lVar6);
        }
        _CFRelease(lVar6);
        param_1 = local_78;
        pcVar13 = local_88;
LAB_002541c5:
        p_Var10 = *param_2;
      }
      if (p_Var10 != (__CFError *)0x0) {
        _CFRelease(lVar5);
        return 0;
      }
      _CFDictionarySetValue(param_1,pcVar13,lVar5);
      _CFRelease(lVar5);
      pIVar2 = *(IcefallDeliveryObject **)(pIVar7 + 8);
      pIVar12 = pIVar7;
      if (*(IcefallDeliveryObject **)(pIVar7 + 8) == (IcefallDeliveryObject *)0x0) {
        do {
          pIVar7 = *(IcefallDeliveryObject **)(pIVar12 + 0x10);
          bVar14 = *(IcefallDeliveryObject **)pIVar7 != pIVar12;
          pIVar12 = pIVar7;
        } while (bVar14);
      }
      else {
        do {
          pIVar7 = pIVar2;
          pIVar2 = *(IcefallDeliveryObject **)pIVar7;
        } while (*(IcefallDeliveryObject **)pIVar7 != (IcefallDeliveryObject *)0x0);
      }
    } while (pIVar7 != local_d0);
  }
  return 1;
}

