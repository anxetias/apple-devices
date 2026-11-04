// rea decompile_all
// name: _ccec_der_import_priv
// address: 0x1685c
// body: available
// range: 0x1685c-0x16a22 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _ccec_der_import_priv(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long local_70;
  ulong local_68;
  undefined8 local_60;
  code *local_58;
  code *local_50;
  undefined8 local_48;
  ulong local_40;
  ulong local_38;
  long local_30;
  
  uVar5 = *param_1 * 0x14;
  uVar4 = *param_1 * 0x1a;
  if (uVar4 < uVar5) {
    uVar4 = uVar5;
  }
  local_70 = _cc_malloc_clear(uVar4 << 3);
  uVar5 = *param_1 * 0x14;
  local_68 = *param_1 * 0x1a;
  if (local_68 < uVar5) {
    local_68 = uVar5;
  }
  local_60 = 0;
  local_58 = _cc_ws_alloc;
  local_50 = _cc_ws_free;
  if (local_70 != 0) {
    local_40 = 0;
    local_38 = 0;
    local_48 = 0;
    local_30 = 0;
    *param_4 = param_1;
    lVar3 = _ccder_decode_eckey_internal();
    uVar5 = local_40;
    iVar2 = -1;
    if (((lVar3 != 0) &&
        (lVar3 = _cczp_bitlen(param_1 + *param_1 * 5 + 4), uVar5 == lVar3 + 7U >> 3)) &&
       (iVar1 = _ccn_read_uint_internal
                          (*param_1,param_4 + *(long *)*param_4 * 3 + 2,local_40,local_48),
       iVar1 == 0)) {
      if ((local_30 == 0) ||
         (uVar5 = local_38 >> 3, lVar3 = _cczp_bitlen(param_1), uVar5 < (lVar3 + 7U >> 2 | 1))) {
        iVar2 = _ccec_make_pub_from_priv_ws
                          (&local_70,param_1,0,param_4 + *(long *)*param_4 * 3 + 2,0,param_4);
      }
      else {
        iVar2 = _ccec_import_pub_ws(&local_70,param_1,local_38 >> 3,local_30,param_4);
        iVar2 = -(uint)(iVar2 != 0);
      }
    }
    (*local_50)();
    return iVar2;
  }
  return -0xd;
}

