// rea decompile_all
// name: SERestoreInfo::SERestoreInfoBase::SERestoreInfoBase
// address: 0x257894
// body: available
// range: 0x257894-0x25794b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x257947 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::SERestoreInfoBase::SERestoreInfoBase(__CFDictionary const*,
   std::shared_ptr<SERestoreInfo::SEDeviceInfo const>) */

void __thiscall
SERestoreInfo::SERestoreInfoBase::SERestoreInfoBase
          (SERestoreInfoBase *this,undefined8 param_1,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  SEException *this_00;
  string local_38 [24];
  
  *(undefined ***)this = &PTR__SERestoreInfoBase_0044f620;
  *(undefined8 *)(this + 0x10) = *param_3;
  lVar2 = param_3[1];
  *(long *)(this + 0x18) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  uVar1 = _CFRetain(param_1);
  *(undefined8 *)(this + 8) = uVar1;
  lVar2 = _CFDictionaryCreateMutable
                    (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  *(long *)(this + 0x20) = lVar2;
  if (lVar2 != 0) {
    return;
  }
  this_00 = (SEException *)___cxa_allocate_exception(0x48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (local_38,"Cannot allocate request dict");
  SEException::SEException(this_00,local_38,3,(__CFString *)&cf_SEUpdaterErrorDomain);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(this_00,&SEException::typeinfo,SEException::~SEException);
}

