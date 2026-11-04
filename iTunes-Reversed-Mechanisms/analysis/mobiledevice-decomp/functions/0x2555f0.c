// rea decompile_all
// name: SERestoreInfo::SEFirmwareBase::getFormatVer
// address: 0x2555f0
// body: available
// range: 0x2555f0-0x2556dd inclusive
// range: 0x2556e3-0x255731 inclusive
// range: 0x255734-0x255782 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2556d9 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x25572d to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x25577e to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::SEFirmwareBase::getFormatVer(__CFData const*) */

undefined4 SERestoreInfo::SEFirmwareBase::getFormatVer(__CFData *param_1)

{
  int iVar1;
  runtime_error *this;
  undefined8 *puVar2;
  SEException *pSVar3;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  string local_40 [28];
  undefined4 local_24;
  
  if (param_1 == (__CFData *)0x0) {
    this = (runtime_error *)___cxa_allocate_exception(0x10);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (local_40,"Assertion: ");
    puVar2 = (undefined8 *)std::string::append((char *)local_40);
    local_58 = puVar2[2];
    local_68 = *puVar2;
    uStack_60 = puVar2[1];
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    std::runtime_error::runtime_error(this,(string *)&local_68);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(this,PTR_typeinfo_00441260,PTR__runtime_error_00441248);
  }
  local_24 = 0xffffffff;
  local_78 = _CFDataGetBytePtr();
  local_70 = _CFDataGetLength(param_1);
  iVar1 = _DERParseSequence(&local_78,2,&SEFirmwareDERSpec::SEFirmwareItemSpec,&local_68,0x20);
  if (iVar1 == 0) {
    iVar1 = _DERParseInteger(&local_68,&local_24);
    if (iVar1 == 0) {
      return local_24;
    }
    pSVar3 = (SEException *)___cxa_allocate_exception(0x48);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (local_40,"Cannot parse SEFirmware.version.");
    SEException::SEException(pSVar3,local_40,iVar1,(__CFString *)&cf_libDERErrorDomain);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(pSVar3,&SEException::typeinfo,SEException::~SEException);
  }
  pSVar3 = (SEException *)___cxa_allocate_exception(0x48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (local_40," Fail to parse fw per SEFirmwareItemSpec");
  SEException::SEException(pSVar3,local_40,iVar1,(__CFString *)&cf_libDERErrorDomain);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(pSVar3,&SEException::typeinfo,SEException::~SEException);
}

