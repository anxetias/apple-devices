// rea decompile_all
// name: _ccn_read_uint_public_value
// address: 0x1d289
// body: available
// range: 0x1d289-0x1d348 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _ccn_read_uint_public_value(ulong param_1,long param_2,ulong param_3,byte *param_4)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  ulong uVar7;
  byte *pbVar8;
  
  uVar1 = param_1 * 8;
  lVar4 = param_3 + param_1 * -8;
  if (uVar1 <= param_3 && lVar4 != 0) {
    bVar6 = 0;
    pbVar8 = param_4;
    do {
      bVar2 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      bVar6 = bVar6 | bVar2;
      param_3 = param_3 - 1;
    } while (uVar1 < param_3);
    if (bVar6 != 0) {
      return 0xfffffff9;
    }
    param_4 = param_4 + lVar4;
    param_3 = uVar1;
  }
  param_4 = param_4 + param_3;
  if (param_3 < 8) {
    uVar5 = 0;
  }
  else {
    uVar5 = (param_3 - 8 >> 3) + 1;
    param_3 = (ulong)((uint)(param_3 - 8) & 7);
    uVar7 = 0;
    do {
      uVar3 = *(ulong *)(param_4 + -8);
      param_4 = param_4 + -8;
      *(ulong *)(param_2 + uVar7 * 8) =
           uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
           (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
           (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
      uVar7 = uVar7 + 1;
    } while (uVar5 != uVar7);
  }
  if (param_3 != 0) {
    lVar4 = -param_3;
    uVar7 = 0;
    do {
      uVar7 = (ulong)param_4[lVar4] | uVar7 << 8;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0);
    *(ulong *)(param_2 + uVar5 * 8) = uVar7;
    uVar5 = uVar5 + 1;
  }
  if (uVar5 < param_1) {
    ___bzero(param_2 + uVar5 * 8,uVar1 + uVar5 * -8);
  }
  return 0;
}

