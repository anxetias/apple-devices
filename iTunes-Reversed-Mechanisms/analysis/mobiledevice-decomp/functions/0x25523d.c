// rea decompile_all
// name: std::__uninitialized_allocator_relocate[abi:ne190102]<std::allocator<SERestoreInfo::ApduBLOB>,SERestoreInfo::ApduBLOB>
// address: 0x25523d
// body: available
// range: 0x25523d-0x2552e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void 
   std::__uninitialized_allocator_relocate[abi:ne190102]<std::allocator<SERestoreInfo::ApduBLOB>,
   SERestoreInfo::ApduBLOB>(std::allocator<SERestoreInfo::ApduBLOB>&, SERestoreInfo::ApduBLOB*,
   SERestoreInfo::ApduBLOB*, SERestoreInfo::ApduBLOB*) */

void std::
     __uninitialized_allocator_relocate_abi_ne190102_<std::allocator<SERestoreInfo::ApduBLOB>,SERestoreInfo::ApduBLOB>
               (allocator *param_1,ApduBLOB *param_2,ApduBLOB *param_3,ApduBLOB *param_4)

{
  undefined8 uVar1;
  ApduBLOB *pAVar2;
  ApduBLOB *local_48;
  allocator *local_40;
  ApduBLOB **local_38;
  ApduBLOB **local_30;
  undefined1 local_28;
  ApduBLOB *local_20;
  
  local_30 = &local_20;
  local_38 = &local_48;
  local_20 = param_4;
  pAVar2 = param_2;
  local_48 = param_4;
  local_40 = param_1;
  if (param_2 == param_3) {
    local_28 = 1;
  }
  else {
    do {
      *(undefined ***)local_20 = &PTR__BLOB_0044f1c8;
      uVar1 = *(undefined8 *)(pAVar2 + 0x10);
      *(undefined8 *)(local_20 + 8) = *(undefined8 *)(pAVar2 + 8);
      *(undefined8 *)(local_20 + 0x10) = uVar1;
      *(undefined8 *)(local_20 + 0x18) = *(undefined8 *)(pAVar2 + 0x18);
      *(undefined ***)(local_20 + 0x20) = &PTR__BLOB_0044f1c8;
      uVar1 = *(undefined8 *)(pAVar2 + 0x30);
      *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(pAVar2 + 0x28);
      *(undefined8 *)(local_20 + 0x30) = uVar1;
      *(undefined8 *)(local_20 + 0x38) = *(undefined8 *)(pAVar2 + 0x38);
      pAVar2 = pAVar2 + 0x40;
      local_20 = local_20 + 0x40;
    } while (pAVar2 != param_3);
    local_28 = 1;
    for (; param_2 != param_3; param_2 = param_2 + 0x40) {
      SERestoreInfo::BLOB::~BLOB((BLOB *)(param_2 + 0x20));
      SERestoreInfo::BLOB::~BLOB((BLOB *)param_2);
    }
  }
  __exception_guard_exceptions<std::_AllocatorDestroyRangeReverse<std::allocator<SERestoreInfo::ApduBLOB>,SERestoreInfo::ApduBLOB*>>
  ::~__exception_guard_exceptions_abi_ne190102_
            ((__exception_guard_exceptions<std::_AllocatorDestroyRangeReverse<std::allocator<SERestoreInfo::ApduBLOB>,SERestoreInfo::ApduBLOB*>>
              *)&local_40);
  return;
}

