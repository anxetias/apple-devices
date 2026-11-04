// rea decompile_all
// name: _b64_ntop
// address: 0x1ba980
// body: available
// range: 0x1ba980-0x1baadb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _b64_ntop(byte *param_1,ulong param_2,undefined1 *param_3,ulong param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  char cVar6;
  ulong uVar7;
  byte local_23 [3];
  
  *param_3 = 0;
  if (param_2 < 3) {
    uVar5 = 0;
  }
  else {
    uVar4 = 0;
    do {
      uVar5 = uVar4 + 4;
      if (param_4 < uVar5) goto LAB_001baac8;
      bVar1 = param_1[2];
      bVar2 = param_1[1];
      bVar3 = *param_1;
      param_2 = param_2 - 3;
      param_1 = param_1 + 3;
      param_3[uVar4] =
           "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[bVar3 >> 2];
      param_3[uVar4 + 1] =
           "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
           [(bVar3 & 3) << 4 | (uint)(bVar2 >> 4)];
      param_3[uVar4 + 2] =
           "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
           [(uint)(bVar1 >> 6) + (bVar2 & 0xf) * 4];
      param_3[uVar4 + 3] =
           "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[bVar1 & 0x3f];
      uVar4 = uVar5;
    } while (2 < param_2);
  }
  if (param_2 != 0) {
    local_23[2] = 0;
    local_23[0] = 0;
    local_23[1] = 0;
    uVar4 = 0;
    uVar7 = 0;
    do {
      local_23[uVar7] = param_1[uVar4];
      uVar4 = uVar4 + 1;
      uVar7 = uVar4 & 0xffffffff;
    } while (uVar7 < param_2);
    if (param_4 < uVar5 + 4) goto LAB_001baac8;
    param_3[uVar5] =
         "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[local_23[0] >> 2];
    param_3[uVar5 + 1] =
         "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
         [(local_23[0] & 3) << 4 | (uint)(local_23[1] >> 4)];
    cVar6 = '=';
    if (param_2 != 1) {
      cVar6 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
              [(uint)(local_23[2] >> 6) + (local_23[1] & 0xf) * 4];
    }
    param_3[uVar5 | 2] = cVar6;
    param_3[uVar5 + 3] = 0x3d;
    uVar5 = uVar5 + 4;
  }
  if (uVar5 < param_4) {
    param_3[uVar5] = 0;
    return uVar5;
  }
LAB_001baac8:
  param_3[param_4 - 1] = 0;
  *param_3 = 0;
  return 0xffffffff;
}

