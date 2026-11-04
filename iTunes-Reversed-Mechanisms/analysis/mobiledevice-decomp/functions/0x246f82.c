// rea decompile_all
// name: RoseRestoreHost::init
// address: 0x246f82
// body: available
// range: 0x246f82-0x247697 inclusive
// range: 0x24769a-0x2476a1 inclusive
// range: 0x2476a4-0x2476ab inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x24768b to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x247693 to 0x2165ea std::vector<std::string,std::allocator<std::string>>::__throw_length_error[abi:ne190102] (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x24769d to 0x2165ea std::vector<std::string,std::allocator<std::string>>::__throw_length_error[abi:ne190102] (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x2476a7 to 0x2165ea std::vector<std::string,std::allocator<std::string>>::__throw_length_error[abi:ne190102] (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* RoseRestoreHost::init(__CFDictionary const*, __CFString const*) */

undefined8 __thiscall
RoseRestoreHost::init(RoseRestoreHost *this,__CFDictionary *param_1,__CFString *param_2)

{
  qword *pqVar1;
  vector<__CFString_const*,std::allocator<__CFString_const*>> *this_00;
  ulong uVar2;
  qword qVar3;
  void *pvVar4;
  undefined4 uVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  __CFDictionary *p_Var9;
  __CFDictionary *p_Var10;
  ushort *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  size_t sVar14;
  cfstringStruct *pcVar15;
  __CFString *p_Var16;
  ulong uVar17;
  cfstringStruct *pcVar18;
  cfstringStruct *pcVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  void *pvVar22;
  undefined1 auVar23 [16];
  undefined8 local_a8;
  cfstringStruct *pcStack_a0;
  cfstringStruct *local_98;
  cfstringStruct *pcStack_90;
  cfstringStruct *local_88;
  cfstringStruct *pcStack_80;
  cfstringStruct *local_78;
  __CFString *local_70;
  cfstringStruct *local_68;
  undefined8 local_60;
  cfstringStruct *local_58;
  undefined8 local_50;
  cfstringStruct *local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  p_Var10 = param_1;
  p_Var9 = (__CFDictionary *)this;
  if (param_1 == (__CFDictionary *)0x0) {
LAB_0024765f:
    init(p_Var9,(__CFString *)p_Var10);
  }
  else {
    lVar7 = _CFGetTypeID(param_1);
    lVar8 = _CFDictionaryGetTypeID();
    p_Var9 = param_1;
    if (lVar7 != lVar8) goto LAB_0024765f;
    pcVar15 = &cf_DeviceInfo;
    p_Var10 = param_1;
    p_Var9 = (__CFDictionary *)_CFDictionaryGetValue();
    if (p_Var9 == (__CFDictionary *)0x0) {
LAB_00247666:
      init(p_Var10,(__CFString *)pcVar15);
    }
    else {
      p_Var10 = p_Var9;
      lVar7 = _CFGetTypeID();
      lVar8 = _CFDictionaryGetTypeID();
      if (lVar7 != lVar8) goto LAB_00247666;
      pcVar15 = &cf_Rap_ChipID;
      p_Var10 = (__CFDictionary *)_CFDictionaryGetValue();
      if (p_Var10 == (__CFDictionary *)0x0) {
LAB_0024766d:
        init(p_Var9,(__CFString *)pcVar15);
      }
      else {
        p_Var9 = p_Var10;
        lVar7 = _CFGetTypeID();
        lVar8 = _CFDataGetTypeID();
        if (lVar7 != lVar8) goto LAB_0024766d;
        p_Var9 = p_Var10;
        lVar7 = _CFDataGetLength();
        if (lVar7 == 2) {
          puVar11 = (ushort *)_CFDataGetBytePtr(p_Var10);
          RoseCapabilities::create((RoseCapabilities *)&local_a8,*puVar11);
          pcVar15 = (cfstringStruct *)(this + 0xe8);
          p_Var16 = (__CFString *)&local_a8;
          pcVar18 = pcVar15;
          std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>::operator=[abi_ne190102_
                    ((shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const> *)pcVar15,p_Var16);
          pcVar19 = pcStack_a0;
          if (pcStack_a0 != (cfstringStruct *)0x0) {
            LOCK();
            pqVar1 = &pcStack_a0->field1_0x8;
            qVar3 = *pqVar1;
            *pqVar1 = *pqVar1 - 1;
            UNLOCK();
            if (qVar3 == 0) {
              (**(code **)(pcStack_a0->field0_0x0 + 0x10))(pcStack_a0);
              std::__shared_weak_count::__release_weak();
              pcVar18 = pcVar19;
            }
          }
          if (pcVar15->field0_0x0 == 0) {
            init((__CFDictionary *)pcVar18,p_Var16);
          }
          else {
            local_98 = &cf_Rap_SoftwareBinaryDsp1;
            pcStack_90 = &cf_Rap_RTKitOS;
            local_a8 = &cf_Rap_ChipID;
            pcStack_a0 = &cf_Rap_BoardID;
            this_00 = (vector<__CFString_const*,std::allocator<__CFString_const*>> *)(this + 0x28);
            std::vector<__CFString_const*,std::allocator<__CFString_const*>>::
            __assign_with_size_abi_ne190102_<__CFString_const*const*,__CFString_const*const*>
                      (this_00,(__CFString **)&local_a8,(__CFString **)&local_88,4);
            cVar6 = RoseCapabilities::supportsFDRTrustObjectDigestInBootManifest
                              (*(RoseCapabilities **)(this + 0xe8));
            if (cVar6 != '\0') {
              puVar21 = *(undefined8 **)(this + 0x30);
              if (puVar21 < *(undefined8 **)(this + 0x38)) {
                *puVar21 = &cf_Rap_RTKitIOConfig;
                puVar21 = puVar21 + 1;
              }
              else {
                lVar7 = (long)puVar21 - *(long *)this_00 >> 3;
                uVar2 = lVar7 + 1;
                if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                  std::vector<std::string,std::allocator<std::string>>::
                  __throw_length_error_abi_ne190102_();
                }
                uVar12 = (long)*(undefined8 **)(this + 0x38) - *(long *)this_00;
                uVar17 = (long)uVar12 >> 2;
                if (uVar17 <= uVar2) {
                  uVar17 = uVar2;
                }
                if (0x7ffffffffffffff7 < uVar12) {
                  uVar17 = 0x1fffffffffffffff;
                }
                if (uVar17 == 0) {
                  auVar23 = ZEXT816(0);
                }
                else {
                  auVar23 = std::
                            __allocate_at_least_abi_ne190102_<std::allocator<__CFString_const*>>
                                      ((allocator *)(this + 0x38),uVar17);
                }
                lVar8 = auVar23._0_8_;
                puVar20 = (undefined8 *)(lVar8 + lVar7 * 8);
                *puVar20 = &cf_Rap_RTKitIOConfig;
                puVar21 = (undefined8 *)(lVar8 + lVar7 * 8 + 8);
                sVar14 = *(long *)(this + 0x30) - (long)*(void **)(this + 0x28);
                pvVar22 = (void *)((long)puVar20 - sVar14);
                _memcpy(pvVar22,*(void **)(this + 0x28),sVar14);
                pvVar4 = *(void **)(this + 0x28);
                *(void **)(this + 0x28) = pvVar22;
                *(undefined8 **)(this + 0x30) = puVar21;
                *(long *)(this + 0x38) = lVar8 + auVar23._8_8_ * 8;
                if (pvVar4 != (void *)0x0) {
                  operator_delete(pvVar4);
                }
              }
              *(undefined8 **)(this + 0x30) = puVar21;
            }
            cVar6 = RoseCapabilities::requiresSeparateFirmwareTargetForCertification
                              ((RoseCapabilities *)pcVar15->field0_0x0);
            if (cVar6 != '\0') {
              puVar21 = *(undefined8 **)(this + 0x30);
              if (puVar21 < *(undefined8 **)(this + 0x38)) {
                *puVar21 = &cf_Rap_RestoreRTKitOS;
                puVar21 = puVar21 + 1;
              }
              else {
                lVar7 = (long)puVar21 - *(long *)this_00 >> 3;
                uVar2 = lVar7 + 1;
                if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                  std::vector<std::string,std::allocator<std::string>>::
                  __throw_length_error_abi_ne190102_();
                }
                uVar12 = (long)*(undefined8 **)(this + 0x38) - *(long *)this_00;
                uVar17 = (long)uVar12 >> 2;
                if (uVar17 <= uVar2) {
                  uVar17 = uVar2;
                }
                if (0x7ffffffffffffff7 < uVar12) {
                  uVar17 = 0x1fffffffffffffff;
                }
                if (uVar17 == 0) {
                  auVar23 = ZEXT816(0);
                }
                else {
                  auVar23 = std::
                            __allocate_at_least_abi_ne190102_<std::allocator<__CFString_const*>>
                                      ((allocator *)(this + 0x38),uVar17);
                }
                lVar8 = auVar23._0_8_;
                puVar20 = (undefined8 *)(lVar8 + lVar7 * 8);
                *puVar20 = &cf_Rap_RestoreRTKitOS;
                puVar21 = (undefined8 *)(lVar8 + lVar7 * 8 + 8);
                sVar14 = *(long *)(this + 0x30) - (long)*(void **)(this + 0x28);
                pvVar22 = (void *)((long)puVar20 - sVar14);
                _memcpy(pvVar22,*(void **)(this + 0x28),sVar14);
                pvVar4 = *(void **)(this + 0x28);
                *(void **)(this + 0x28) = pvVar22;
                *(undefined8 **)(this + 0x30) = puVar21;
                *(long *)(this + 0x38) = lVar8 + auVar23._8_8_ * 8;
                if (pvVar4 != (void *)0x0) {
                  operator_delete(pvVar4);
                }
              }
              *(undefined8 **)(this + 0x30) = puVar21;
            }
            local_78 = &cf_Rap_SecurityDomain;
            local_88 = &cf_Rap_ProductionMode;
            pcStack_80 = &cf_Rap_SecurityMode;
            local_98 = &cf_Rap_ECID;
            pcStack_90 = &cf_Rap_Nonce;
            local_a8 = &cf_Rap_ChipID;
            pcStack_a0 = &cf_Rap_BoardID;
            std::vector<__CFString_const*,std::allocator<__CFString_const*>>::
            __assign_with_size_abi_ne190102_<__CFString_const*const*,__CFString_const*const*>
                      ((vector<__CFString_const*,std::allocator<__CFString_const*>> *)(this + 0x40),
                       (__CFString **)&local_a8,&local_70,7);
            local_a8 = &cf__Rap_Ticket;
            std::vector<__CFString_const*,std::allocator<__CFString_const*>>::
            __assign_with_size_abi_ne190102_<__CFString_const*const*,__CFString_const*const*>
                      ((vector<__CFString_const*,std::allocator<__CFString_const*>> *)(this + 0x58),
                       (__CFString **)&local_a8,(__CFString **)&pcStack_a0,1);
            local_a8 = &cf_Rap_Ticket;
            std::vector<__CFString_const*,std::allocator<__CFString_const*>>::
            __assign_with_size_abi_ne190102_<__CFString_const*const*,__CFString_const*const*>
                      ((vector<__CFString_const*,std::allocator<__CFString_const*>> *)(this + 0x70),
                       (__CFString **)&local_a8,(__CFString **)&pcStack_a0,1);
            local_88 = &cf_Rap_RestoreRTKitOS;
            pcStack_80 = (cfstringStruct *)0x1;
            local_98 = &cf_Rap_RTKitOS;
            pcStack_90 = (cfstringStruct *)0x0;
            local_a8 = &cf_Rap_SoftwareBinaryDsp1;
            pcStack_a0 = (cfstringStruct *)0x0;
            std::vector<ACFURestoreHost::FileList,std::allocator<ACFURestoreHost::FileList>>::
            __assign_with_size_abi_ne190102_<ACFURestoreHost::FileList_const*,ACFURestoreHost::FileList_const*>
                      ((vector<ACFURestoreHost::FileList,std::allocator<ACFURestoreHost::FileList>>
                        *)(this + 0x88),(FileList *)&local_a8,(FileList *)&local_78,3);
            cVar6 = RoseCapabilities::supportsFDRTrustObjectDigestInBootManifest
                              (*(RoseCapabilities **)(this + 0xe8));
            if (cVar6 != '\0') {
              puVar21 = *(undefined8 **)(this + 0x90);
              if (puVar21 < *(undefined8 **)(this + 0x98)) {
                *puVar21 = &cf_Rap_RTKitIOConfig;
                *(undefined1 *)(puVar21 + 1) = 1;
                puVar21 = puVar21 + 2;
              }
              else {
                lVar7 = *(long *)(this + 0x88);
                lVar8 = (long)puVar21 - lVar7 >> 4;
                uVar2 = lVar8 + 1;
                if (uVar2 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
                  std::vector<std::string,std::allocator<std::string>>::
                  __throw_length_error_abi_ne190102_();
                }
                uVar12 = (long)*(undefined8 **)(this + 0x98) - lVar7;
                uVar17 = (long)uVar12 >> 3;
                if (uVar17 <= uVar2) {
                  uVar17 = uVar2;
                }
                if (0x7fffffffffffffef < uVar12) {
                  uVar17 = 0xfffffffffffffff;
                }
                if (uVar17 == 0) {
                  auVar23 = ZEXT816(0);
                }
                else {
                  auVar23 = std::
                            __allocate_at_least_abi_ne190102_<std::allocator<ACFURestoreHost::FileList>>
                                      ((allocator *)(this + 0x98),uVar17);
                }
                lVar7 = auVar23._0_8_;
                lVar8 = lVar8 * 0x10;
                puVar20 = (undefined8 *)(lVar8 + lVar7);
                puVar21 = puVar20 + 2;
                *puVar20 = &cf_Rap_RTKitIOConfig;
                *(undefined1 *)(puVar20 + 1) = 1;
                uVar5 = (undefined4)local_a8;
                *(undefined4 *)((long)puVar20 + 9) = uVar5;
                *(undefined4 *)((long)puVar20 + 0xc) = local_a8._3_4_;
                sVar14 = *(long *)(this + 0x90) - (long)*(void **)(this + 0x88);
                pvVar22 = (void *)((lVar7 + lVar8) - sVar14);
                _memcpy(pvVar22,*(void **)(this + 0x88),sVar14);
                pvVar4 = *(void **)(this + 0x88);
                *(void **)(this + 0x88) = pvVar22;
                *(undefined8 **)(this + 0x90) = puVar21;
                *(long *)(this + 0x98) = auVar23._8_8_ * 0x10 + lVar7;
                if (pvVar4 != (void *)0x0) {
                  operator_delete(pvVar4);
                }
              }
              *(undefined8 **)(this + 0x90) = puVar21;
            }
            pcStack_a0 = (cfstringStruct *)_CFNumberGetTypeID();
            local_a8 = &cf_Rap_ChipID;
            pcStack_90 = (cfstringStruct *)_CFNumberGetTypeID();
            local_98 = &cf_Rap_BoardID;
            pcStack_80 = (cfstringStruct *)_CFNumberGetTypeID();
            local_88 = &cf_Rap_SecurityDomain;
            local_70 = (__CFString *)_CFBooleanGetTypeID();
            local_78 = &cf_Rap_ProductionMode;
            local_60 = _CFBooleanGetTypeID();
            local_68 = &cf_Rap_SecurityMode;
            local_50 = _CFNumberGetTypeID();
            local_58 = &cf_Rap_ECID;
            local_40 = _CFDataGetTypeID();
            local_48 = &cf_Rap_Nonce;
            std::
            __tree<std::__value_type<__CFString_const*,unsigned_long>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,unsigned_long>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,unsigned_long>>>
            ::__assign_unique<std::pair<__CFString_const*const,unsigned_long>const*>
                      ((__tree<std::__value_type<__CFString_const*,unsigned_long>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,unsigned_long>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,unsigned_long>>>
                        *)(this + 0xa0),(pair_conflict *)&local_a8,(pair_conflict *)&local_38);
            cVar6 = RoseCapabilities::supportsFDRTrustObjectDigestInBootManifest
                              (*(RoseCapabilities **)(this + 0xe8));
            if (cVar6 != '\0') {
              *(cfstringStruct **)(this + 0xb8) = &cf_Rap_FdrRootCaDigest;
            }
            cVar6 = RoseCapabilities::supportsFDRTrustObjectDigestInBootManifest
                              ((RoseCapabilities *)pcVar15->field0_0x0);
            if (cVar6 != '\0') {
              *(cfstringStruct **)(this + 0xc0) = &cf_Rap_FDRAllowUnsealed;
            }
            local_a8 = &cf_Rap_RTKitOS;
            pcStack_a0 = (cfstringStruct *)CONCAT62(pcStack_a0._2_6_,1);
            local_98 = &cf_Rap_RestoreRTKitOS;
            pcStack_90 = (cfstringStruct *)CONCAT62(pcStack_90._2_6_,1);
            local_88 = &cf_Rap_SoftwareBinaryDsp1;
            pcStack_80 = (cfstringStruct *)((ulong)pcStack_80 & 0xffffffffffff0000);
            local_78 = &cf_Rap_RTKitIOConfig;
            local_70 = (__CFString *)((ulong)local_70 & 0xffffffffffff0000);
            std::
            __tree<std::__value_type<__CFString_const*,ACFURestoreHost::DemoteConfig>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,ACFURestoreHost::DemoteConfig>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,ACFURestoreHost::DemoteConfig>>>
            ::__assign_unique<std::pair<__CFString_const*const,ACFURestoreHost::DemoteConfig>const*>
                      ((__tree<std::__value_type<__CFString_const*,ACFURestoreHost::DemoteConfig>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,ACFURestoreHost::DemoteConfig>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,ACFURestoreHost::DemoteConfig>>>
                        *)(this + 200),(pair_conflict *)&local_a8,(pair_conflict *)&local_68);
            *(cfstringStruct **)(this + 0xe0) = &cf_Rose;
            cVar6 = ACFURestoreHost::init((ACFURestoreHost *)this,param_1,param_2);
            uVar13 = 1;
            if (cVar6 != '\0') goto LAB_0024763d;
            init((__CFDictionary *)this,(__CFString *)param_1);
          }
        }
        else {
          init(p_Var9,(__CFString *)pcVar15);
        }
      }
    }
  }
  uVar13 = 0;
LAB_0024763d:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

