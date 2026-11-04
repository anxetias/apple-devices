// rea decompile_all
// name: _verify_chain_img4_ec_v1
// address: 0x2242a6
// body: available
// range: 0x2242a6-0x224479 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_verify_chain_img4_ec_v1
          (long param_1,ulong param_2,undefined8 *param_3,undefined8 *param_4,long *param_5,
          long *param_6,undefined8 param_7,code *param_8)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  size_t *psVar6;
  long local_390;
  ulong local_388;
  undefined1 local_380 [48];
  undefined1 local_350 [48];
  undefined1 local_320 [96];
  undefined1 local_2c0 [80];
  size_t local_270 [17];
  size_t local_1e8 [33];
  undefined1 local_e0 [32];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [48];
  undefined1 local_80 [32];
  long local_60;
  long local_58;
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
    ___bzero(local_380,0x330);
    local_388 = param_2 & 0xffffffff;
    local_390 = param_1;
    iVar2 = (*param_8)(&local_390,local_380,3);
    if ((iVar2 == 0) &&
       (iVar2 = _parse_ec_chain(local_380,3,local_350,local_2c0,local_e0,local_b0,local_80),
       iVar2 == 0)) {
      psVar6 = local_1e8;
      puVar4 = local_320;
      uVar3 = 0;
      do {
        uVar5 = uVar3 & 0xffffffff;
        if (((local_270[uVar5 * 0x14 + 1] != *psVar6) ||
            (iVar2 = _memcmp((void *)local_270[uVar5 * 0x14],(void *)psVar6[-1],
                             local_270[uVar5 * 0x14 + 1]), iVar2 != 0)) ||
           (iVar2 = _verify_chain_signatures(local_e0 + uVar5 * 0x10,puVar4,param_7), iVar2 != 0)) {
          return 0xffffffff;
        }
        psVar6 = psVar6 + 0x14;
        puVar4 = puVar4 + 0x30;
        uVar3 = uVar3 + 1;
      } while (uVar3 != 2);
      if (local_e0 < (undefined1 *)0xffffffffffffffe0) {
        *local_48 = local_c0;
        *local_50 = local_b8;
        if (local_80 < (undefined1 *)0xffffffffffffffe0) {
          if (local_60 == 0) {
            return 0;
          }
          if (local_58 == 0) {
            return 0;
          }
          if (local_40 == (long *)0x0 || local_38 == (long *)0x0) {
            return 0;
          }
          *local_38 = local_60;
          *local_40 = local_58;
          return 0;
        }
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  return 0xffffffff;
}

