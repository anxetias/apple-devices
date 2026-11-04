// rea decompile_all
// name: SERestoreInfo::SEFirmwareBase::get
// address: 0x2554d4
// body: available
// range: 0x2554d4-0x25559e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x25559a to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::SEFirmwareBase::get(int) const */

undefined8 SERestoreInfo::SEFirmwareBase::get(int param_1)

{
  long lVar1;
  long lVar2;
  runtime_error *this;
  undefined8 *puVar3;
  uint in_EDX;
  long *in_RSI;
  undefined4 in_register_0000003c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  char local_38 [24];
  
  if (-1 < (int)in_EDX) {
    lVar1 = in_RSI[2];
    if ((ulong)in_EDX < (ulong)(in_RSI[3] - lVar1 >> 5)) {
      lVar2 = (ulong)in_EDX * 0x20;
      local_58 = *(undefined8 *)(lVar1 + 8 + lVar2);
      uStack_50 = *(undefined8 *)(lVar1 + 0x10 + lVar2);
      (**(code **)(*in_RSI + 0x18))(CONCAT44(in_register_0000003c,param_1));
      return CONCAT44(in_register_0000003c,param_1);
    }
  }
  this = (runtime_error *)___cxa_allocate_exception(0x10);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (local_38,"Assertion: ");
  puVar3 = (undefined8 *)std::string::append(local_38);
  local_48 = puVar3[2];
  local_58 = *puVar3;
  uStack_50 = puVar3[1];
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  std::runtime_error::runtime_error(this,(string *)&local_58);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(this,PTR_typeinfo_00441260,PTR__runtime_error_00441248);
}

