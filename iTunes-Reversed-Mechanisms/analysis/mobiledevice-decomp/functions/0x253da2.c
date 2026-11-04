// rea decompile_all
// name: std::vector<SERestoreInfo::ApduBLOB,std::allocator<SERestoreInfo::ApduBLOB>>::emplace_back<SERestoreInfo::ApduBLOB>
// address: 0x253da2
// body: available
// range: 0x253da2-0x253eed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x253ee9 to 0x2165ea std::vector<std::string,std::allocator<std::string>>::__throw_length_error[abi:ne190102] (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* void std::vector<SERestoreInfo::ApduBLOB, std::allocator<SERestoreInfo::ApduBLOB>
   >::emplace_back<SERestoreInfo::ApduBLOB>(SERestoreInfo::ApduBLOB&&) */

void __thiscall
std::vector<SERestoreInfo::ApduBLOB,std::allocator<SERestoreInfo::ApduBLOB>>::
emplace_back<SERestoreInfo::ApduBLOB>
          (vector<SERestoreInfo::ApduBLOB,std::allocator<SERestoreInfo::ApduBLOB>> *this,
          ApduBLOB *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  long local_48;
  long local_40;
  undefined8 *local_38;
  long local_30;
  allocator *local_28;
  
  puVar4 = *(undefined8 **)(this + 8);
  if (puVar4 < *(undefined8 **)(this + 0x10)) {
    *puVar4 = &PTR__BLOB_0044f1c8;
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = *(undefined8 *)(param_1 + 8);
    puVar4[2] = uVar2;
    puVar4[3] = *(undefined8 *)(param_1 + 0x18);
    puVar4[4] = &PTR__BLOB_0044f1c8;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    puVar4[5] = *(undefined8 *)(param_1 + 0x28);
    puVar4[6] = uVar2;
    puVar4[7] = *(undefined8 *)(param_1 + 0x38);
    puVar4 = puVar4 + 8;
    *(undefined8 **)(this + 8) = puVar4;
  }
  else {
    lVar6 = (long)puVar4 - *(long *)this >> 6;
    uVar1 = lVar6 + 1;
    if (uVar1 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
      vector<std::string,std::allocator<std::string>>::__throw_length_error_abi_ne190102_();
    }
    uVar3 = (long)*(undefined8 **)(this + 0x10) - *(long *)this;
    uVar5 = (long)uVar3 >> 5;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    local_28 = (allocator *)(this + 0x10);
    if (0x7fffffffffffffbf < uVar3) {
      uVar5 = 0x3ffffffffffffff;
    }
    if (uVar5 == 0) {
      auVar7 = ZEXT816(0);
    }
    else {
      auVar7 = __allocate_at_least_abi_ne190102_<std::allocator<SERestoreInfo::ApduBLOB>>
                         (local_28,uVar5);
    }
    local_48 = auVar7._0_8_;
    lVar6 = lVar6 * 0x40;
    local_40 = local_48 + lVar6;
    local_30 = auVar7._8_8_ * 0x40 + local_48;
    puVar4 = (undefined8 *)(local_48 + lVar6);
    local_38 = puVar4 + 8;
    *puVar4 = &PTR__BLOB_0044f1c8;
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = *(undefined8 *)(param_1 + 8);
    puVar4[2] = uVar2;
    puVar4[3] = *(undefined8 *)(param_1 + 0x18);
    puVar4[4] = &PTR__BLOB_0044f1c8;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    puVar4[5] = *(undefined8 *)(param_1 + 0x28);
    puVar4[6] = uVar2;
    puVar4[7] = *(undefined8 *)(param_1 + 0x38);
    __swap_out_circular_buffer(this,(__split_buffer *)&local_48);
    puVar4 = *(undefined8 **)(this + 8);
    __split_buffer<SERestoreInfo::ApduBLOB,std::allocator<SERestoreInfo::ApduBLOB>&>::
    ~__split_buffer((__split_buffer<SERestoreInfo::ApduBLOB,std::allocator<SERestoreInfo::ApduBLOB>&>
                     *)&local_48);
  }
  *(undefined8 **)(this + 8) = puVar4;
  return;
}

