// rea decompile_all
// name: _verify_chain_img4_v2_with_crack_callback
// address: 0x223dca
// body: available
// range: 0x223dca-0x223f83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_verify_chain_img4_v2_with_crack_callback
          (long param_1,ulong param_2,undefined8 *param_3,undefined8 *param_4,long *param_5,
          long *param_6,undefined8 param_7,code *param_8)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  long local_360;
  ulong local_358;
  undefined1 local_350 [48];
  undefined1 local_320 [144];
  undefined1 local_290 [48];
  size_t asStack_260 [4];
  void *local_240;
  size_t local_238;
  size_t local_1c0 [34];
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_80 [16];
  long local_70;
  long local_68;
  undefined8 *local_50;
  undefined8 *local_48;
  long *local_40;
  long *local_38;
  
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != (undefined8 *)0x0)) &&
     (param_4 != (undefined8 *)0x0)) {
    local_50 = param_4;
    local_48 = param_3;
    local_40 = param_6;
    local_38 = param_5;
    ___bzero(local_350,0x300);
    local_358 = param_2 & 0xffffffff;
    local_360 = param_1;
    iVar2 = (*param_8)(&local_360,local_350,2);
    if (iVar2 == 0) {
      iVar2 = _parse_chain(local_350,2,local_320,local_290,local_b0,local_80);
      if (iVar2 == 0) {
        lVar4 = 1;
        bVar3 = true;
        do {
          if (!bVar3) {
            if (local_b0 < (undefined1 *)0xfffffffffffffff0) {
              *local_48 = local_a0;
              *local_50 = local_98;
              if (local_80 < (undefined1 *)0xfffffffffffffff0) {
                if (local_70 == 0) {
                  return 0;
                }
                if (local_68 == 0) {
                  return 0;
                }
                if (local_40 == (long *)0x0 || local_38 == (long *)0x0) {
                  return 0;
                }
                *local_38 = local_70;
                *local_40 = local_68;
                return 0;
              }
            }
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if (local_238 != asStack_260[lVar4 * 0x14 + 1]) {
            return 0xffffffff;
          }
          iVar2 = _memcmp(local_240,(void *)asStack_260[lVar4 * 0x14],local_238);
          if (iVar2 != 0) {
            return 0xffffffff;
          }
          iVar2 = _verify_chain_signatures(local_b0,local_320 + lVar4 * 0x30,param_7);
          lVar4 = 2;
          bVar3 = false;
        } while (iVar2 == 0);
      }
    }
  }
  return 0xffffffff;
}

