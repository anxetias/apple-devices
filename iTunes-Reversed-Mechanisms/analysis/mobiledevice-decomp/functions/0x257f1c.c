// rea decompile_all
// name: SERestoreInfo::_WalkThroughDict
// address: 0x257f1c
// body: available
// range: 0x257f1c-0x2580ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2580ea to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::_WalkThroughDict(__CFString const*, __CFDictionary const*,
   SERestoreInfo::_SEMeasurementWalkThrought const*) */

void SERestoreInfo::_WalkThroughDict
               (__CFString *param_1,__CFDictionary *param_2,_SEMeasurementWalkThrought *param_3)

{
  long lVar1;
  long lVar2;
  runtime_error *this;
  undefined8 *puVar3;
  ulong uVar4;
  char local_60 [24];
  void *local_48;
  void *pvStack_40;
  undefined8 local_38;
  
  if (param_3 == (_SEMeasurementWalkThrought *)0x0) {
    this = (runtime_error *)___cxa_allocate_exception(0x10);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (local_60,"Assertion: ");
    puVar3 = (undefined8 *)std::string::append(local_60);
    local_38 = puVar3[2];
    local_48 = (void *)*puVar3;
    pvStack_40 = (void *)puVar3[1];
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    std::runtime_error::runtime_error(this,(string *)&local_48);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(this,PTR_typeinfo_00441260,PTR__runtime_error_00441248);
  }
  lVar1 = _CFGetTypeID();
  lVar2 = _CFStringGetTypeID();
  if (lVar1 != lVar2) {
    return;
  }
  lVar1 = _CFGetTypeID(param_2);
  lVar2 = _CFDictionaryGetTypeID();
  if (lVar1 != lVar2) {
    return;
  }
  local_48 = (void *)0x0;
  pvStack_40 = (void *)0x0;
  local_38 = 0;
  std::vector<__CFString_const*,std::allocator<__CFString_const*>>::
  __init_with_size_abi_ne190102_<__CFString_const**,__CFString_const**>
            ((vector<__CFString_const*,std::allocator<__CFString_const*>> *)&local_48,
             *(__CFString ***)(param_3 + 8),*(__CFString ***)(param_3 + 0x10),
             (long)*(__CFString ***)(param_3 + 0x10) - (long)*(__CFString ***)(param_3 + 8) >> 3);
  if (pvStack_40 == local_48) {
    lVar1 = 0;
    lVar2 = 0;
  }
  else {
    uVar4 = 1;
    do {
      lVar1 = _CFStringCompare(*(undefined8 *)((long)local_48 + uVar4 * 8 + -8),param_1,0);
      if ((ulong)((long)pvStack_40 - (long)local_48 >> 3) <= uVar4) break;
      uVar4 = uVar4 + 1;
    } while (lVar1 != 0);
    if ((lVar1 == 0) &&
       (lVar1 = _CFDictionaryCreateMutable
                          (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                           PTR__kCFTypeDictionaryValueCallBacks_004411b8), lVar1 != 0)) {
      lVar2 = _CFDictionaryGetValue(param_2,*(undefined8 *)(param_3 + 0x20));
      if ((lVar2 != 0) && (lVar2 = _CFRetain(lVar2), lVar2 != 0)) {
        _CFDictionaryAddValue(lVar1,*(undefined8 *)(param_3 + 0x20),lVar2);
        _CFDictionarySetValue(*(undefined8 *)param_3,param_1,lVar1);
        goto LAB_00258049;
      }
    }
    else {
      lVar1 = 0;
    }
    lVar2 = 0;
  }
LAB_00258049:
  if (local_48 != (void *)0x0) {
    pvStack_40 = local_48;
    operator_delete(local_48);
  }
  if (lVar2 != 0) {
    _CFRelease(lVar2);
  }
  if (lVar1 != 0) {
    _CFRelease(lVar1);
  }
  return;
}

