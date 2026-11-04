// rea decompile_all
// name: SERestoreInfo::fixRootCaKeyId
// address: 0x2531db
// body: available
// range: 0x2531db-0x2532a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::fixRootCaKeyId(std::vector<unsigned char, std::allocator<unsigned char> >&,
   std::vector<unsigned char, std::allocator<unsigned char> > const&) */

void SERestoreInfo::fixRootCaKeyId(vector *param_1,vector *param_2)

{
  void *pvVar1;
  int iVar2;
  size_t sVar3;
  bool bVar4;
  void *local_58;
  void *pvStack_50;
  undefined8 local_48;
  uchar *local_38;
  uchar *local_30;
  
  local_58 = (void *)0x0;
  pvStack_50 = (void *)0x0;
  local_48 = 0;
  std::vector<unsigned_char,std::allocator<unsigned_char>>::
  __init_with_size_abi_ne190102_<unsigned_char_const*,unsigned_char_const*>
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)&local_58,
             &isProdCometIm4KeyId(std::vector<unsigned_char,std::allocator<unsigned_char>>const&)::
              prodCometIm4KeyIdArray,(uchar *)"N13SERestoreInfo11SEExceptionE",0x20);
  pvVar1 = local_58;
  sVar3 = *(long *)(param_2 + 8) - (long)*(void **)param_2;
  bVar4 = false;
  if (sVar3 == (long)pvStack_50 - (long)local_58) {
    iVar2 = _memcmp(*(void **)param_2,local_58,sVar3);
    bVar4 = iVar2 == 0;
  }
  if (pvVar1 != (void *)0x0) {
    pvStack_50 = pvVar1;
    operator_delete(pvVar1);
  }
  RootCA::getRootKeyId((RootCA *)&local_38,bVar4,0x73);
  if ((RootCA *)&local_38 != (RootCA *)param_1) {
    std::vector<unsigned_char,std::allocator<unsigned_char>>::
    __assign_with_size_abi_ne190102_<unsigned_char_const*,unsigned_char_const*>
              ((vector<unsigned_char,std::allocator<unsigned_char>> *)param_1,local_38,local_30,
               (long)local_30 - (long)local_38);
  }
  if (local_38 != (uchar *)0x0) {
    local_30 = local_38;
    operator_delete(local_38);
  }
  return;
}

