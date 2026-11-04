// rea decompile_all
// name: SERestoreInfo::SEFirmwareBase::SEFirmwareBase
// address: 0x2557ee
// body: available
// range: 0x2557ee-0x255ab4 inclusive
// range: 0x255aba-0x255ac2 inclusive
// range: 0x255ac8-0x255b13 inclusive
// range: 0x255b19-0x255b64 inclusive
// range: 0x255b6a-0x255be7 inclusive
// range: 0x255bea-0x255c35 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x255ab0 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x255abe to 0x2165ea std::vector<std::string,std::allocator<std::string>>::__throw_length_error[abi:ne190102] (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x255b0f to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x255b60 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x255be3 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x255c31 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::SEFirmwareBase::SEFirmwareBase(__CFData const*) */

void __thiscall
SERestoreInfo::SEFirmwareBase::SEFirmwareBase(SEFirmwareBase *this,__CFData *param_1)

{
  allocator *paVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  SEException *pSVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [8];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  SEFirmwareBase *local_a8;
  __CFData *local_a0;
  undefined **local_98;
  undefined **local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  SEFirmwareBase *local_70;
  long local_68;
  long lStack_60;
  undefined8 *local_58;
  long local_50;
  allocator *local_48;
  uint local_34;
  
  *(undefined ***)this = &PTR__SEFirmwareBase_0044f4b8;
  local_70 = this + 0x10;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  local_c8 = _CFDataGetBytePtr(param_1);
  local_c0 = _CFDataGetLength(param_1);
  iVar3 = _DERParseSequence(&local_c8,2,&SEFirmwareDERSpec::SEFirmwareItemSpec,local_f0,0x20);
  if (iVar3 != 0) {
    pSVar7 = (SEException *)___cxa_allocate_exception(0x48);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (&local_68,"Fail to parse SEFW.");
    SEException::SEException(pSVar7,(string *)&local_68,iVar3,(__CFString *)&cf_libDERErrorDomain);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(pSVar7,&SEException::typeinfo,SEException::~SEException);
  }
  iVar3 = _DERParseInteger(local_f0,&local_34);
  if (iVar3 != 0) {
    pSVar7 = (SEException *)___cxa_allocate_exception(0x48);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (&local_68,"Failed to parse SEFirmware.version.");
    SEException::SEException(pSVar7,(string *)&local_68,iVar3,(__CFString *)&cf_libDERErrorDomain);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(pSVar7,&SEException::typeinfo,SEException::~SEException);
  }
  if (1 < local_34) {
    pSVar7 = (SEException *)___cxa_allocate_exception(0x48);
    std::to_string((uint)&local_90);
    plVar8 = (long *)std::string::insert((ulong)&local_90,(char *)0x0);
    local_58 = (undefined8 *)plVar8[2];
    local_68 = *plVar8;
    lStack_60 = plVar8[1];
    *plVar8 = 0;
    plVar8[1] = 0;
    plVar8[2] = 0;
    SEException::SEException(pSVar7,(string *)&local_68,7,(__CFString *)&cf_SEUpdaterErrorDomain);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(pSVar7,&SEException::typeinfo,SEException::~SEException);
  }
  iVar3 = _DERDecodeSeqInit(local_e0,local_d0,local_b8);
  local_a0 = param_1;
  if (iVar3 == 0) {
    paVar1 = (allocator *)(this + 0x20);
    iVar3 = 0;
    local_98 = &PTR__BLOB_0044f1c8;
    local_a8 = this;
    do {
      do {
        if (iVar3 != 0) {
          if (iVar3 == 1) {
            uVar6 = _CFRetain(local_a0);
            *(undefined8 *)(this + 8) = uVar6;
            return;
          }
          pSVar7 = (SEException *)___cxa_allocate_exception(0x48);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                    (&local_68,"Fail to DERDecodeSeqNext firmwareArray.");
          SEException::SEException
                    (pSVar7,(string *)&local_68,iVar3,(__CFString *)&cf_libDERErrorDomain);
                    /* WARNING: Subroutine does not return */
          ___cxa_throw(pSVar7,&SEException::typeinfo,SEException::~SEException);
        }
        iVar3 = _DERDecodeSeqNext(local_b8,local_108);
      } while (iVar3 != 0);
      local_90 = local_98;
      local_88 = local_100;
      uStack_80 = uStack_f8;
      local_78 = 0;
      puVar5 = *(undefined8 **)(this + 0x18);
      if (puVar5 < *(undefined8 **)(this + 0x20)) {
        *puVar5 = local_98;
        puVar5[1] = local_100;
        puVar5[2] = uStack_f8;
        puVar5[3] = 0;
        puVar5 = puVar5 + 4;
        *(undefined8 **)(this + 0x18) = puVar5;
      }
      else {
        lVar10 = (long)puVar5 - *(long *)local_70 >> 5;
        uVar2 = lVar10 + 1;
        if (0x7ffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
          std::vector<std::string,std::allocator<std::string>>::__throw_length_error_abi_ne190102_()
          ;
        }
        uVar4 = (long)*(undefined8 **)(this + 0x20) - *(long *)local_70;
        uVar9 = (long)uVar4 >> 4;
        if (uVar9 <= uVar2) {
          uVar9 = uVar2;
        }
        if (0x7fffffffffffffdf < uVar4) {
          uVar9 = 0x7ffffffffffffff;
        }
        local_48 = paVar1;
        if (uVar9 == 0) {
          auVar11 = ZEXT816(0);
        }
        else {
          auVar11 = std::__allocate_at_least_abi_ne190102_<std::allocator<SERestoreInfo::BLOB>>
                              (paVar1,uVar9);
        }
        local_68 = auVar11._0_8_;
        lVar10 = lVar10 * 0x20;
        lStack_60 = local_68 + lVar10;
        local_50 = auVar11._8_8_ * 0x20 + local_68;
        puVar5 = (undefined8 *)(local_68 + lVar10);
        local_58 = puVar5 + 4;
        *puVar5 = local_98;
        puVar5[1] = local_88;
        puVar5[2] = uStack_80;
        puVar5[3] = local_78;
        std::vector<SERestoreInfo::BLOB,std::allocator<SERestoreInfo::BLOB>>::
        __swap_out_circular_buffer
                  ((vector<SERestoreInfo::BLOB,std::allocator<SERestoreInfo::BLOB>> *)local_70,
                   (__split_buffer *)&local_68);
        this = local_a8;
        puVar5 = *(undefined8 **)(local_a8 + 0x18);
        std::__split_buffer<SERestoreInfo::BLOB,std::allocator<SERestoreInfo::BLOB>&>::
        ~__split_buffer((__split_buffer<SERestoreInfo::BLOB,std::allocator<SERestoreInfo::BLOB>&> *)
                        &local_68);
      }
      *(undefined8 **)(this + 0x18) = puVar5;
      BLOB::~BLOB((BLOB *)&local_90);
    } while( true );
  }
  pSVar7 = (SEException *)___cxa_allocate_exception(0x48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (&local_68,"Fail to DERDecodeSeqInit firmwareArray.");
  SEException::SEException(pSVar7,(string *)&local_68,iVar3,(__CFString *)&cf_libDERErrorDomain);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(pSVar7,&SEException::typeinfo,SEException::~SEException);
}

