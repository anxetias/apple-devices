// rea decompile_all
// name: SERestoreInfo::isDummyRootCaKeyId
// address: 0x253156
// body: available
// range: 0x253156-0x2531da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::isDummyRootCaKeyId(std::vector<unsigned char, std::allocator<unsigned char> >
   const&) */

ulong SERestoreInfo::isDummyRootCaKeyId(vector *param_1)

{
  void *pvVar1;
  int iVar2;
  size_t sVar3;
  ulong uVar4;
  void *local_38;
  void *pvStack_30;
  undefined8 local_28;
  
  local_38 = (void *)0x0;
  pvStack_30 = (void *)0x0;
  local_28 = 0;
  std::vector<unsigned_char,std::allocator<unsigned_char>>::
  __init_with_size_abi_ne190102_<unsigned_char_const*,unsigned_char_const*>
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)&local_38,
             &isDummyRootCaKeyId(std::vector<unsigned_char,std::allocator<unsigned_char>>const&)::
              dummyRootCaKeyIdArray,
             &isProdCometIm4KeyId(std::vector<unsigned_char,std::allocator<unsigned_char>>const&)::
              prodCometIm4KeyIdArray,0x20);
  pvVar1 = local_38;
  sVar3 = *(long *)(param_1 + 8) - (long)*(void **)param_1;
  if (sVar3 == (long)pvStack_30 - (long)local_38) {
    iVar2 = _memcmp(*(void **)param_1,local_38,sVar3);
    uVar4 = CONCAT71((int7)((ulong)&local_38 >> 8),iVar2 == 0);
  }
  else {
    uVar4 = 0;
  }
  if (pvVar1 != (void *)0x0) {
    pvStack_30 = pvVar1;
    operator_delete(pvVar1);
  }
  return uVar4 & 0xffffffff;
}

