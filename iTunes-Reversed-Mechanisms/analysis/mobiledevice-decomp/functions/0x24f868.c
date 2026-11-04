// rea decompile_all
// name: SERestoreInfo::P73BaseDeliveryObject::updateVersionDict
// address: 0x24f868
// body: available
// range: 0x24f868-0x24f953 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x24f94f to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::P73BaseDeliveryObject::updateVersionDict(__CFDictionary*, __CFError**) const */

undefined8 __thiscall
SERestoreInfo::P73BaseDeliveryObject::updateVersionDict
          (P73BaseDeliveryObject *this,__CFDictionary *param_1,__CFError **param_2)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  runtime_error *this_00;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  char local_38 [24];
  
  if ((param_1 != (__CFDictionary *)0x0) && (param_2 != (__CFError **)0x0)) {
    lVar2 = _CFStringCreateWithBytes
                      (0,*(undefined8 *)(this + 0x60),*(undefined8 *)(this + 0x68),0x8000100,0);
    cVar1 = isDev(this);
    if (cVar1 == '\0') {
      puVar3 = &_kSETagVersionProd;
    }
    else {
      puVar3 = &_kSETagVersionDev;
    }
    _CFDictionarySetValue(param_1,*puVar3,lVar2);
    if (lVar2 != 0) {
      _CFRelease(lVar2);
    }
    return 1;
  }
  this_00 = (runtime_error *)___cxa_allocate_exception(0x10);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (local_38,"Assertion: ");
  puVar3 = (undefined8 *)std::string::append(local_38);
  local_48 = puVar3[2];
  local_58 = *puVar3;
  uStack_50 = puVar3[1];
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  std::runtime_error::runtime_error(this_00,(string *)&local_58);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(this_00,PTR_typeinfo_00441260,PTR__runtime_error_00441248);
}

