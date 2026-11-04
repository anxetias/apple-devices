// rea decompile_all
// name: SERestoreInfo::IcefallDeliveryObject::addApdu
// address: 0x253a66
// body: available
// range: 0x253a66-0x253c02 inclusive
// range: 0x253c08-0x253c55 inclusive
// range: 0x253c5b-0x253ca9 inclusive
// range: 0x253caf-0x253cfc inclusive
// range: 0x253cff-0x253d4b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x253bfe to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x253c51 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x253ca5 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x253cf8 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x253d47 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::IcefallDeliveryObject::addApdu(SERestoreInfo::ApduType_t, DERItem const&) */

void __thiscall
SERestoreInfo::IcefallDeliveryObject::addApdu
          (IcefallDeliveryObject *this,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  SEException *pSVar3;
  undefined1 local_d0 [8];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  long lStack_a0;
  undefined8 local_98;
  long lStack_90;
  piecewise_construct_t *local_88;
  piecewise_construct_t *local_80;
  undefined8 local_78;
  long lStack_70;
  undefined8 local_68;
  piecewise_construct_t *local_60;
  undefined8 local_58;
  long lStack_50;
  undefined8 local_48;
  undefined4 local_3c;
  int local_38;
  
  local_3c = param_2;
  iVar1 = _DERDecodeSeqContentInit(param_3,local_b8);
  if (iVar1 != 0) {
    pSVar3 = (SEException *)___cxa_allocate_exception(0x48);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (&local_80,"Cannot decode APDUs.");
    SEException::SEException(pSVar3,(string *)&local_80,iVar1,(__CFString *)&cf_libDERErrorDomain);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(pSVar3,&SEException::typeinfo,SEException::~SEException);
  }
  local_88 = (piecewise_construct_t *)&PTR__BLOB_0044f1c8;
  iVar1 = 0;
  while( true ) {
    do {
      if (iVar1 != 0) {
        if (iVar1 == 1) {
          return;
        }
        pSVar3 = (SEException *)___cxa_allocate_exception(0x48);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                  (&local_80,"Fail to parse Apdu]");
        SEException::SEException
                  (pSVar3,(string *)&local_80,iVar1,(__CFString *)&cf_libDERErrorDomain);
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(pSVar3,&SEException::typeinfo,SEException::~SEException);
      }
      iVar1 = _DERDecodeSeqNext(local_b8,local_d0);
    } while (iVar1 != 0);
    local_38 = iVar1;
    iVar1 = _DERParseSequenceContent
                      (local_c8,2,&IcefallFirmwareDERSpec::ApduItemSpec,&local_a8,0x20);
    if (iVar1 != 0) {
      pSVar3 = (SEException *)___cxa_allocate_exception(0x48);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                (&local_80,"Cannot parse per ApduItemSpec");
      SEException::SEException(pSVar3,(string *)&local_80,iVar1,(__CFString *)&cf_libDERErrorDomain)
      ;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(pSVar3,&SEException::typeinfo,SEException::~SEException);
    }
    if (lStack_a0 != 5) {
      pSVar3 = (SEException *)___cxa_allocate_exception(0x48);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                (&local_80,"wrong apdu header size");
      SEException::SEException
                (pSVar3,(string *)&local_80,0xf,(__CFString *)&cf_SEUpdaterErrorDomain);
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(pSVar3,&SEException::typeinfo,SEException::~SEException);
    }
    if (lStack_90 - 0x2032U < 0xffffffffffffdfc9) break;
    local_80 = (piecewise_construct_t *)&local_3c;
    lVar2 = std::
            __tree<std::__value_type<SERestoreInfo::ApduType_t,std::vector<SERestoreInfo::ApduBLOB,std::allocator<SERestoreInfo::ApduBLOB>>>,std::__map_value_compare<SERestoreInfo::ApduType_t,std::__value_type<SERestoreInfo::ApduType_t,std::vector<SERestoreInfo::ApduBLOB,std::allocator<SERestoreInfo::ApduBLOB>>>,std::less<SERestoreInfo::ApduType_t>,true>,std::allocator<std::__value_type<SERestoreInfo::ApduType_t,std::vector<SERestoreInfo::ApduBLOB,std::allocator<SERestoreInfo::ApduBLOB>>>>>
            ::
            __emplace_unique_key_args<SERestoreInfo::ApduType_t,std::piecewise_construct_t_const&,std::tuple<SERestoreInfo::ApduType_t_const&>,std::tuple<>>
                      (this + 8,local_80,(tuple *)&std::piecewise_construct,(tuple *)&local_80);
    local_80 = local_88;
    local_78 = local_a8;
    lStack_70 = lStack_a0;
    local_68 = 0;
    local_60 = local_88;
    local_58 = local_98;
    lStack_50 = lStack_90;
    local_48 = 0;
    std::vector<SERestoreInfo::ApduBLOB,std::allocator<SERestoreInfo::ApduBLOB>>::
    emplace_back<SERestoreInfo::ApduBLOB>
              ((vector<SERestoreInfo::ApduBLOB,std::allocator<SERestoreInfo::ApduBLOB>> *)
               (lVar2 + 0x28),(ApduBLOB *)&local_80);
    BLOB::~BLOB((BLOB *)&local_60);
    BLOB::~BLOB((BLOB *)&local_80);
    iVar1 = local_38;
  }
  pSVar3 = (SEException *)___cxa_allocate_exception(0x48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (&local_80,"wrong apdu size");
  SEException::SEException(pSVar3,(string *)&local_80,0xf,(__CFString *)&cf_SEUpdaterErrorDomain);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(pSVar3,&SEException::typeinfo,SEException::~SEException);
}

