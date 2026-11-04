// rea decompile_all
// name: _ccder_blob_decode_eckey_internal
// address: 0xd758
// body: available
// range: 0xd758-0xd88e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_ccder_blob_decode_eckey_internal
          (undefined8 param_1,long *param_2,long *param_3,long *param_4,undefined8 *param_5,
          long *param_6,long *param_7,undefined8 *param_8)

{
  char cVar1;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_48;
  long lStack_40;
  
  local_48 = 0;
  lStack_40 = 0;
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  cVar1 = _ccder_blob_decode_sequence_tl();
  if ((((cVar1 != '\0') && (cVar1 = _ccder_blob_decode_uint64(&local_58,param_2), cVar1 != '\0')) &&
      (*param_2 == 1)) && (cVar1 = _ccder_blob_decode_range(&local_58,4,&local_48), cVar1 != '\0'))
  {
    *param_4 = local_48;
    *param_3 = lStack_40 - local_48;
    local_68 = local_58;
    uStack_64 = uStack_54;
    uStack_60 = uStack_50;
    uStack_5c = uStack_4c;
    cVar1 = _ccder_blob_decode_range(&local_68,0xa000000000000000);
    if (cVar1 == '\0') {
      *param_5 = 0;
    }
    else {
      cVar1 = _ccder_blob_decode_oid(&local_48,param_5);
      if (cVar1 == '\0') {
        return 0;
      }
      local_58 = local_68;
      uStack_54 = uStack_64;
      uStack_50 = uStack_60;
      uStack_4c = uStack_5c;
    }
    local_78 = local_58;
    uStack_74 = uStack_54;
    uStack_70 = uStack_50;
    uStack_6c = uStack_4c;
    cVar1 = _ccder_blob_decode_range(&local_78,0xa000000000000001,&local_48);
    if (cVar1 == '\0') {
      *param_7 = 0;
      *param_6 = 0;
      *param_8 = 0;
    }
    else {
      cVar1 = _ccder_blob_decode_bitstring(&local_48,&local_48,param_8);
      if (cVar1 == '\0') {
        return 0;
      }
      *param_7 = local_48;
      *param_6 = lStack_40 - local_48;
    }
    return 1;
  }
  return 0;
}

