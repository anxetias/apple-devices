// rea decompile_all
// name: std::__uninitialized_allocator_relocate[abi:ne190102]<std::allocator<SERestoreInfo::UpdateTableEntry>,SERestoreInfo::UpdateTableEntry>
// address: 0x252509
// body: available
// range: 0x252509-0x2525c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void 
   std::__uninitialized_allocator_relocate[abi:ne190102]<std::allocator<SERestoreInfo::UpdateTableEntry>,
   SERestoreInfo::UpdateTableEntry>(std::allocator<SERestoreInfo::UpdateTableEntry>&,
   SERestoreInfo::UpdateTableEntry*, SERestoreInfo::UpdateTableEntry*,
   SERestoreInfo::UpdateTableEntry*) */

void std::
     __uninitialized_allocator_relocate_abi_ne190102_<std::allocator<SERestoreInfo::UpdateTableEntry>,SERestoreInfo::UpdateTableEntry>
               (allocator *param_1,UpdateTableEntry *param_2,UpdateTableEntry *param_3,
               UpdateTableEntry *param_4)

{
  undefined8 uVar1;
  UpdateTableEntry *pUVar2;
  UpdateTableEntry *local_50;
  allocator *local_48;
  UpdateTableEntry **local_40;
  UpdateTableEntry **local_38;
  undefined1 local_30;
  UpdateTableEntry *local_28;
  
  local_38 = &local_28;
  local_40 = &local_50;
  local_28 = param_4;
  pUVar2 = param_2;
  local_50 = param_4;
  local_48 = param_1;
  if (param_2 == param_3) {
    local_30 = 1;
  }
  else {
    do {
      *(undefined8 *)local_28 = 0;
      *(undefined8 *)(local_28 + 8) = 0;
      *(undefined8 *)(local_28 + 0x10) = 0;
      uVar1 = *(undefined8 *)(pUVar2 + 8);
      *(undefined8 *)local_28 = *(undefined8 *)pUVar2;
      *(undefined8 *)(local_28 + 8) = uVar1;
      *(undefined8 *)(local_28 + 0x10) = *(undefined8 *)(pUVar2 + 0x10);
      *(undefined8 *)(pUVar2 + 0x10) = 0;
      *(undefined8 *)pUVar2 = 0;
      *(undefined8 *)(pUVar2 + 8) = 0;
      *(undefined8 *)(local_28 + 0x28) = 0;
      *(undefined8 *)(local_28 + 0x18) = 0;
      *(undefined8 *)(local_28 + 0x20) = 0;
      uVar1 = *(undefined8 *)(pUVar2 + 0x20);
      *(undefined8 *)(local_28 + 0x18) = *(undefined8 *)(pUVar2 + 0x18);
      *(undefined8 *)(local_28 + 0x20) = uVar1;
      *(undefined8 *)(local_28 + 0x28) = *(undefined8 *)(pUVar2 + 0x28);
      *(undefined8 *)(pUVar2 + 0x28) = 0;
      *(undefined8 *)(pUVar2 + 0x18) = 0;
      *(undefined8 *)(pUVar2 + 0x20) = 0;
      pUVar2 = pUVar2 + 0x30;
      local_28 = local_28 + 0x30;
    } while (pUVar2 != param_3);
    local_30 = 1;
    for (; param_2 != param_3; param_2 = param_2 + 0x30) {
      allocator<SERestoreInfo::UpdateTableEntry>::destroy_abi_ne190102_
                ((allocator<SERestoreInfo::UpdateTableEntry> *)param_1,param_2);
    }
  }
  __exception_guard_exceptions<std::_AllocatorDestroyRangeReverse<std::allocator<SERestoreInfo::UpdateTableEntry>,SERestoreInfo::UpdateTableEntry*>>
  ::~__exception_guard_exceptions_abi_ne190102_
            ((__exception_guard_exceptions<std::_AllocatorDestroyRangeReverse<std::allocator<SERestoreInfo::UpdateTableEntry>,SERestoreInfo::UpdateTableEntry*>>
              *)&local_48);
  return;
}

