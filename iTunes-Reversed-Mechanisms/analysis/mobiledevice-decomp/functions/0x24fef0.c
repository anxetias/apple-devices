// rea decompile_all
// name: SERestoreInfo::P73BaseDeliveryObject::parseFPRev
// address: 0x24fef0
// body: available
// range: 0x24fef0-0x250063 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x25005f to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::P73BaseDeliveryObject::parseFPRev(SERestoreInfo::BLOB) */

undefined1 SERestoreInfo::P73BaseDeliveryObject::parseFPRev(long param_1)

{
  uchar *puVar1;
  ulong uVar2;
  undefined1 uVar3;
  long lVar4;
  runtime_error *this;
  undefined8 *puVar5;
  bool bVar6;
  ulong local_60;
  long lStack_58;
  void *local_50;
  undefined8 local_48;
  long lStack_40;
  void *local_38;
  allocator local_21;
  
  puVar1 = *(uchar **)(param_1 + 8);
  if ((puVar1 == (uchar *)0x0) || (uVar2 = *(ulong *)(param_1 + 0x10), uVar2 == 0)) {
    this = (runtime_error *)___cxa_allocate_exception(0x10);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (&local_60,"Assertion: ");
    puVar5 = (undefined8 *)std::string::append((char *)&local_60);
    local_38 = (void *)puVar5[2];
    local_48 = *puVar5;
    lStack_40 = puVar5[1];
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    std::runtime_error::runtime_error(this,(string *)&local_48);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(this,PTR_typeinfo_00441260,PTR__runtime_error_00441248);
  }
  std::string::__init_with_size_abi_ne190102_<unsigned_char_const*,unsigned_char_const*>
            ((string *)&local_48,puVar1,puVar1 + uVar2,uVar2);
  lVar4 = std::string::rfind((char)(string *)&local_48,0x2d);
  uVar3 = 0xee;
  if (lVar4 != -1) {
    std::string::string((string *)&local_60,(string *)&local_48,lVar4 + 1,0xffffffffffffffff,
                        &local_21);
    if ((local_48 & 1) != 0) {
      operator_delete(local_38);
    }
    local_38 = local_50;
    local_48 = local_60;
    uVar2 = local_48;
    lStack_40 = lStack_58;
    local_48._0_1_ = SUB81(local_60,0);
    local_48 = uVar2;
    if ((local_60 & 1) == 0) {
      bVar6 = local_48._0_1_ != (string)0x4;
      if (bVar6) goto LAB_0024ffd6;
      local_50 = (void *)((long)&local_48 + 1);
    }
    else if (lStack_58 != 2) goto LAB_0024ffd6;
    lVar4 = 0;
    do {
      if (((long)*(char *)((long)local_50 + lVar4) < 0) ||
         ((PTR___DefaultRuneLocale_004412a0[(long)*(char *)((long)local_50 + lVar4) * 4 + 0x3d] & 4)
          == 0)) goto LAB_0024ffd6;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 2);
    uVar3 = std::stoul((string *)&local_48,(ulong *)0x0,10);
  }
LAB_0024ffd6:
  if ((local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  return uVar3;
}

