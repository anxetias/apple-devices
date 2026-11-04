// rea decompile_all
// name: SERestoreInfo::SERestoreInfoBase::getChipID
// address: 0x2579ec
// body: available
// range: 0x2579ec-0x257a82 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x257a7e to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::SERestoreInfoBase::getChipID() const */

void __thiscall SERestoreInfo::SERestoreInfoBase::getChipID(SERestoreInfoBase *this)

{
  runtime_error *this_00;
  undefined8 *puVar1;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  char local_38 [24];
  
  if (*(long **)(this + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00257a0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x10) + 0x20))();
    return;
  }
  this_00 = (runtime_error *)___cxa_allocate_exception(0x10);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (local_38,"Assertion: ");
  puVar1 = (undefined8 *)std::string::append(local_38);
  local_48 = puVar1[2];
  local_58 = *puVar1;
  uStack_50 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  std::runtime_error::runtime_error(this_00,(string *)&local_58);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(this_00,PTR_typeinfo_00441260,PTR__runtime_error_00441248);
}

