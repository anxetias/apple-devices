// rea decompile_all
// name: _ccrsa_emsa_pkcs1v15_verify_canary_out
// address: 0x1e71c
// body: available
// range: 0x1e71c-0x1e893 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _ccrsa_emsa_pkcs1v15_verify_canary_out
                (ulong param_1,byte *param_2,long param_3,undefined8 param_4,long param_5,
                undefined1 (*param_6) [16])

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  *param_6 = (undefined1  [16])0x0;
  if (param_5 == 0) {
    uVar4 = 0;
    lVar5 = param_3;
  }
  else {
    uVar4 = (ulong)*(byte *)(param_5 + 1);
    lVar5 = param_3 + uVar4 + 10;
  }
  uVar2 = 0xffffffe9;
  if (lVar5 + 0xbU <= param_1) {
    pbVar6 = param_2 + 2;
    bVar8 = param_2[1] ^ 1 | *param_2;
    if (param_1 - lVar5 != 3) {
      lVar3 = (lVar5 - param_1) + 3;
      do {
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        bVar8 = bVar8 | ~bVar1;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0);
    }
    bVar8 = bVar8 | *pbVar6;
    if (param_5 == 0) {
      pbVar7 = pbVar6 + 1;
    }
    else {
      auVar10._8_8_ = 0;
      auVar10._0_8_ =
           (ulong)(byte)((char)lVar5 - 2) << 8 | 0x300030 | (ulong)(byte)((char)uVar4 + 4) << 0x18;
      auVar10 = auVar10 ^ ZEXT416(*(uint *)(pbVar6 + 1));
      bVar1 = _cc_cmp_safe(uVar4 + 2,pbVar6 + 5,param_5);
      pbVar7 = pbVar6 + uVar4 + 0xb;
      auVar9._0_4_ = auVar10._0_4_ >> 0x10;
      auVar9._4_4_ = 0;
      auVar9._8_4_ = auVar10._8_4_ >> 0x10;
      auVar9._12_4_ = auVar10._12_4_ >> 0x10;
      bVar8 = bVar1 | pbVar6[uVar4 + 8] | bVar8 |
              pbVar6[uVar4 + 10] ^ (byte)param_3 | pbVar6[uVar4 + 9] ^ 4 | pbVar6[uVar4 + 7] ^ 5 |
              SUB161(auVar9 | auVar10,1) | SUB161(auVar9 | auVar10,0);
    }
    _cc_fault_canary_set(param_6,&_CCRSA_PKCS1_FAULT_CANARY,param_3,param_4,pbVar7);
    bVar1 = _cc_cmp_safe(param_3,pbVar7,param_4);
    uVar2 = (ulong)(bVar1 | bVar8);
  }
  return uVar2;
}

