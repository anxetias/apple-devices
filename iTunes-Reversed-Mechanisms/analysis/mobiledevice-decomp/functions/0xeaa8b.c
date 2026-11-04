// rea decompile_all
// name: __AMRUSBDeviceCreateDevice
// address: 0xeaa8b
// body: available
// range: 0xeaa8b-0xeabbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __AMRUSBDeviceCreateDevice(int param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  code *local_40;
  code *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_50 = &local_58;
  local_58 = 0;
  local_48 = 0x3052000000;
  local_40 = ___Block_byref_object_copy_;
  local_38 = ___Block_byref_object_dispose_;
  local_30 = 0;
  if (param_1 == 0) {
    lVar2 = 0;
    _AMRLog(3,&cf_TriedtocreateaUSBdevicewithanullUSBservice_);
  }
  else {
    uVar1 = _objc_alloc(&objc::class_t::AMRLocalUSBDevice);
    lVar2 = (*(code *)PTR__objc_msgSend_00441098)(uVar1,"initWithService:",param_1);
    local_50[5] = lVar2;
    if (lVar2 == 0) {
      _AMRLog(3,&
                cf_FailedtocreateUSBdevicewithservice_d_retryingwithMDPrivilegedUSBSupport_ExpectedforPortDFUdevicesonMacOS<13_
              ,param_1);
      local_28 = 0;
      _IORegistryEntryGetRegistryEntryID(param_1);
      _setMDPrivilegedUSBSupportObjectProxy();
      (*(code *)PTR__objc_msgSend_00441098)
                (_gMDPrivilegedUSBSupportProxy,"deviceForIORegistryEntryID:withReply:",local_28);
      lVar2 = local_50[5];
    }
  }
  __Block_object_dispose(&local_58,8);
  return lVar2;
}

