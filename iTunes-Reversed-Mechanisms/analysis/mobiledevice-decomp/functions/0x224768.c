// rea decompile_all
// name: _verify_chain_img4_ec_v2
// address: 0x224768
// body: available
// range: 0x224768-0x224911 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_verify_chain_img4_ec_v2
          (long param_1,ulong param_2,undefined8 *param_3,undefined8 *param_4,long *param_5,
          long *param_6,undefined8 param_7,code *param_8)

{
  code *pcVar1;
  int iVar2;
  long local_278;
  ulong local_270;
  undefined1 local_268 [32];
  undefined1 local_248 [48];
  undefined1 local_218 [48];
  undefined1 local_1e8 [80];
  void *local_198;
  size_t local_190;
  void *local_118;
  size_t local_110;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [32];
  undefined1 local_68 [16];
  long local_58;
  long local_50;
  undefined8 *local_48;
  long *local_40;
  long *local_38;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (param_2 == 0) {
    return 0xffffffff;
  }
  if (param_3 == (undefined8 *)0x0) {
    return 0xffffffff;
  }
  if (param_4 != (undefined8 *)0x0) {
    local_48 = param_4;
    local_40 = param_6;
    local_38 = param_5;
    ___bzero(local_268,0x220);
    local_270 = param_2 & 0xffffffff;
    local_278 = param_1;
    iVar2 = (*param_8)(&local_278,local_268,2);
    if (iVar2 == 0) {
      iVar2 = _parse_ec_chain(local_268,2,local_248,local_1e8,local_a8,local_88,local_68);
      if (iVar2 == 0) {
        if (local_1e8 < (undefined1 *)0xffffffffffffff60) {
          if (local_190 != local_110) {
            return 0xffffffff;
          }
          iVar2 = _memcmp(local_198,local_118,local_190);
          if (iVar2 != 0) {
            return 0xffffffff;
          }
          if (local_248 < (undefined1 *)0xffffffffffffffd0) {
            iVar2 = _verify_chain_signatures(local_a8,local_218,param_7);
            if (iVar2 != 0) {
              return 0xffffffff;
            }
            if (local_a8 < (undefined1 *)0xfffffffffffffff0) {
              *param_3 = local_98;
              *local_48 = local_90;
              if (local_68 < (undefined1 *)0xfffffffffffffff0) {
                if (local_58 == 0) {
                  return 0;
                }
                if (local_50 != 0) {
                  if (local_40 != (long *)0x0 && local_38 != (long *)0x0) {
                    *local_38 = local_58;
                    *local_40 = local_50;
                    return 0;
                  }
                  return 0;
                }
                return 0;
              }
            }
          }
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
    return 0xffffffff;
  }
  return 0xffffffff;
}

