// rea decompile_all
// name: SERestoreInfo::SN300V2DeviceInfo::SN300V2DeviceInfo
// address: 0x24ab76
// body: available
// range: 0x24ab76-0x24abd1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x24abcd to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::SN300V2DeviceInfo::SN300V2DeviceInfo(SERestoreInfo::BLOB const&) */

void __thiscall
SERestoreInfo::SN300V2DeviceInfo::SN300V2DeviceInfo(SN300V2DeviceInfo *this,BLOB *param_1)

{
  SEWrongDeviceInfo *this_00;
  
  P73BaseDeviceInfo::P73BaseDeviceInfo((P73BaseDeviceInfo *)this,param_1);
  *(undefined ***)this = &PTR__SN300V2DeviceInfo_0044ed98;
  if (*(int *)(this + 0x38) == 0x36) {
    return;
  }
  this_00 = (SEWrongDeviceInfo *)___cxa_allocate_exception(0x48);
  SEWrongDeviceInfo::SEWrongDeviceInfo(this_00);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(this_00,&SEWrongDeviceInfo::typeinfo,SEWrongDeviceInfo::~SEWrongDeviceInfo);
}

