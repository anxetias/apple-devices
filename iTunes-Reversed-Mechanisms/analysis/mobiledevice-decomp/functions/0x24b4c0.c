// rea decompile_all
// name: SERestoreInfo::P73BaseDeviceInfo::parseManifest
// address: 0x24b4c0
// body: available
// range: 0x24b4c0-0x24b76d inclusive
// range: 0x24b773-0x24b7c0 inclusive
// range: 0x24b7c6-0x24b813 inclusive
// range: 0x24b816-0x24b88d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x24b769 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x24b7bc to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x24b80f to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x24b889 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::P73BaseDeviceInfo::parseManifest(SERestoreInfo::BLOB const&) */

P73BaseDeviceInfo * __thiscall
SERestoreInfo::P73BaseDeviceInfo::parseManifest(P73BaseDeviceInfo *this,BLOB *param_1)

{
  undefined4 uVar1;
  SEException *pSVar2;
  undefined8 *puVar3;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  byte local_98 [16];
  void *local_88;
  byte local_80 [16];
  void *local_70;
  byte local_68 [16];
  void *local_58;
  undefined1 local_50 [24];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_d0 = *(undefined8 *)(param_1 + 8);
  local_c8 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = _DERDecodeItem(&local_d0,&local_c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (local_98,"Fail to parse MQR: cannot decode top level tag");
  CallAndThrow<DERReturn>(uVar1,local_98);
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if (local_c0 != P73BaseManifestQueryResponseDerSpec::ManifestResponseSequenceTag) {
    pSVar2 = (SEException *)___cxa_allocate_exception(0x48);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (&local_38,"Fail to parse MQR: wrong top level tag");
    SEException::SEException(pSVar2,(string *)&local_38,2,(__CFString *)&cf_SEUpdaterErrorDomain);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(pSVar2,&SEException::typeinfo,SEException::~SEException);
  }
  local_a8 = 0;
  uStack_a0 = 0;
  uVar1 = _DERParseSequenceContent
                    (local_b8,1,&P73BaseManifestQueryResponseDerSpec::ManifestResponseItemSpec,
                     &local_a8,0x10);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (local_80,"Fail to parse MQR");
  CallAndThrow<DERReturn>(uVar1,local_80);
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  uVar1 = _DERParseSequenceContent
                    (&local_a8,0xf,
                     &P73BaseManifestQueryResponseDerSpec::ManifestResponseDataItemSpec,this,0xf0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (local_68,"Fail to parse MQR.data");
  CallAndThrow<DERReturn>(uVar1,local_68);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((((((*(long *)(this + 8) == 1) && (*(ulong *)(this + 0x18) < 3)) &&
        (*(ulong *)(this + 0x28) < 3)) &&
       (((*(ulong *)(this + 0x38) < 3 && (*(ulong *)(this + 0x48) < 3)) &&
        ((*(long *)(this + 0x78) == 1 &&
         ((*(ulong *)(this + 200) < 3 && (*(long *)(this + 0x68) == 0x18)))))))) &&
      (*(long *)(this + 0x88) == 0x14)) &&
     ((((*(long *)(this + 0x98) == 0x20 && (*(long *)(this + 0xa8) == 0x20)) &&
       (*(long *)(this + 0x58) == 2)) && (*(long *)(this + 0xb8) == 1)))) {
    if (**(char **)this == '\x01') {
      if ((*(long *)(this + 0xd8) == 3) && (*(long *)(this + 0xe8) == 0x20)) {
        return this;
      }
    }
    else {
      if (**(char **)this != '\0') {
        pSVar2 = (SEException *)___cxa_allocate_exception(0x48);
        std::to_string((longlong)local_50);
        puVar3 = (undefined8 *)std::string::insert((ulong)local_50,(char *)0x0);
        local_28 = puVar3[2];
        local_38 = *puVar3;
        uStack_30 = puVar3[1];
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        SEException::SEException
                  (pSVar2,(string *)&local_38,7,(__CFString *)&cf_SEUpdaterErrorDomain);
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(pSVar2,&SEException::typeinfo,SEException::~SEException);
      }
      if (*(long *)(this + 0xe8) == 0 && *(long *)(this + 0xd8) == 0) {
        return this;
      }
    }
    pSVar2 = (SEException *)___cxa_allocate_exception(0x48);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (&local_38,"size of factoryPostflightState or cometRootKeyId doesn\'t match");
    SEException::SEException(pSVar2,(string *)&local_38,2,(__CFString *)&cf_SEUpdaterErrorDomain);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(pSVar2,&SEException::typeinfo,SEException::~SEException);
  }
  pSVar2 = (SEException *)___cxa_allocate_exception(0x48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (&local_38,"size of MQRD doesn\'t match");
  SEException::SEException(pSVar2,(string *)&local_38,2,(__CFString *)&cf_SEUpdaterErrorDomain);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(pSVar2,&SEException::typeinfo,SEException::~SEException);
}

