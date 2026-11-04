// rea decompile_all
// name: std::vector<SERestoreInfo::UpdateTableEntry,std::allocator<SERestoreInfo::UpdateTableEntry>>::__emplace_back_slow_path<SERestoreInfo::UpdateTableEntry&>
// address: 0x252162
// body: available
// range: 0x252162-0x25228b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x252287 to 0x2165ea std::vector<std::string,std::allocator<std::string>>::__throw_length_error[abi:ne190102] (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::UpdateTableEntry* std::vector<SERestoreInfo::UpdateTableEntry,
   std::allocator<SERestoreInfo::UpdateTableEntry>
   >::__emplace_back_slow_path<SERestoreInfo::UpdateTableEntry&>(SERestoreInfo::UpdateTableEntry&)
    */

UpdateTableEntry * __thiscall
std::vector<SERestoreInfo::UpdateTableEntry,std::allocator<SERestoreInfo::UpdateTableEntry>>::
__emplace_back_slow_path<SERestoreInfo::UpdateTableEntry&>
          (vector<SERestoreInfo::UpdateTableEntry,std::allocator<SERestoreInfo::UpdateTableEntry>>
           *this,UpdateTableEntry *param_1)

{
  allocator *this_00;
  undefined8 uVar1;
  UpdateTableEntry *pUVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  UpdateTableEntry *pUVar7;
  undefined1 auVar8 [16];
  long local_50;
  UpdateTableEntry *local_48;
  UpdateTableEntry *local_40;
  long local_38;
  allocator *local_30;
  
  lVar6 = *(long *)(this + 8) - *(long *)this >> 4;
  uVar3 = lVar6 * -0x5555555555555555 + 1;
  if (uVar3 < 0x555555555555556) {
    this_00 = (allocator *)(this + 0x10);
    lVar5 = *(long *)this_00 - *(long *)this >> 4;
    uVar4 = lVar5 * 0x5555555555555556;
    if (uVar3 < uVar4) {
      uVar3 = uVar4;
    }
    uVar4 = 0x555555555555555;
    if ((ulong)(lVar5 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
      uVar4 = uVar3;
    }
    local_30 = this_00;
    if (uVar4 == 0) {
      auVar8 = ZEXT816(0);
    }
    else {
      auVar8 = __allocate_at_least_abi_ne190102_<std::allocator<SERestoreInfo::UpdateTableEntry>>
                         (this_00,uVar4);
    }
    local_50 = auVar8._0_8_;
    local_48 = (UpdateTableEntry *)(lVar6 * 0x10 + local_50);
    local_38 = auVar8._8_8_ * 0x30 + local_50;
    local_40 = local_48;
    allocator<SERestoreInfo::UpdateTableEntry>::
    construct_abi_ne190102_<SERestoreInfo::UpdateTableEntry,SERestoreInfo::UpdateTableEntry&>
              ((allocator<SERestoreInfo::UpdateTableEntry> *)this_00,local_48,param_1);
    local_40 = local_40 + 0x30;
    pUVar7 = local_48 + ((long)*(UpdateTableEntry **)this - (long)*(UpdateTableEntry **)(this + 8));
    __uninitialized_allocator_relocate_abi_ne190102_<std::allocator<SERestoreInfo::UpdateTableEntry>,SERestoreInfo::UpdateTableEntry>
              (this_00,*(UpdateTableEntry **)this,*(UpdateTableEntry **)(this + 8),pUVar7);
    pUVar2 = local_40;
    local_50 = *(long *)this;
    *(UpdateTableEntry **)this = pUVar7;
    *(UpdateTableEntry **)(this + 8) = local_40;
    uVar1 = *(undefined8 *)(this + 0x10);
    *(long *)(this + 0x10) = local_38;
    local_48 = (UpdateTableEntry *)local_50;
    local_40 = (UpdateTableEntry *)local_50;
    local_38 = uVar1;
    __split_buffer<SERestoreInfo::UpdateTableEntry,std::allocator<SERestoreInfo::UpdateTableEntry>&>
    ::~__split_buffer((__split_buffer<SERestoreInfo::UpdateTableEntry,std::allocator<SERestoreInfo::UpdateTableEntry>&>
                       *)&local_50);
    return pUVar2;
  }
                    /* WARNING: Subroutine does not return */
  vector<std::string,std::allocator<std::string>>::__throw_length_error_abi_ne190102_();
}

