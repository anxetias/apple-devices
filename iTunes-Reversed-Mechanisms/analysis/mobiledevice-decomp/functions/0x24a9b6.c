// rea decompile_all
// name: GetRoseTatsuTagToFileNameMap
// address: 0x24a9b6
// body: available
// range: 0x24a9b6-0x24aaaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x24aaab to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GetRoseTatsuTagToFileNameMap() */

void GetRoseTatsuTagToFileNameMap(void)

{
  long lVar1;
  byte abStack_b8 [8];
  undefined *puStack_b0;
  cfstringStruct *apcStack_a8 [2];
  byte local_98 [16];
  cfstringStruct *apcStack_88 [2];
  undefined1 local_78 [24];
  cfstringStruct *local_60;
  undefined1 local_58 [24];
  cfstringStruct *local_40;
  undefined1 local_38 [24];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_004412b8;
  apcStack_a8[1] = &cf_Rap_SoftwareBinaryDsp1;
  puStack_b0 = (undefined *)0x24a9f3;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (local_98,"sbd1");
  apcStack_88[1] = &cf_Rap_RTKitOS;
  puStack_b0 = (undefined *)0x24aa11;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (local_78,"rkos");
  local_60 = &cf_Rap_RestoreRTKitOS;
  puStack_b0 = (undefined *)0x24aa2f;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (local_58,"rrko");
  local_40 = &cf_Rap_RTKitIOConfig;
  puStack_b0 = (undefined *)0x24aa4d;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (local_38,"icnf");
  puStack_b0 = (undefined *)0x24aa68;
  std::
  map<__CFString_const*,std::string,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,std::string>>>
  ::map_abi_ne190102_();
  lVar1 = 0x80;
  do {
    if ((abStack_b8[lVar1] & 1) != 0) {
      puStack_b0 = (undefined *)0x24aa86;
      operator_delete(*(void **)((long)apcStack_a8 + lVar1));
    }
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != 0);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  puStack_b0 = &UNK_0024aab0;
  ___stack_chk_fail();
}

