// rea decompile_all
// name: _BrotliFindAllStaticDictionaryMatches.cold.1
// address: 0x8ddb4
// body: available
// range: 0x8ddb4-0x8de39 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _BrotliFindAllStaticDictionaryMatches_cold_1(long param_1,int param_2,char *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar6 = param_2 - 1;
  if (uVar6 < 8) {
    uVar2 = 0;
    pcVar5 = param_3;
  }
  else {
    uVar2 = (ulong)(uVar6 & 0xfffffff8);
    pcVar5 = param_3 + uVar2;
    lVar3 = 0;
    uVar8 = 0;
    do {
      uVar4 = *(ulong *)(param_1 + 1 + uVar8 * 8);
      if (*(ulong *)(param_3 + uVar8 * 8) != uVar4) {
        uVar4 = uVar4 ^ *(ulong *)(param_3 + uVar8 * 8);
        uVar2 = 0;
        if (uVar4 != 0) {
          for (; (uVar4 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
          }
        }
        uVar8 = (uVar2 >> 3 & 0x1fffffff) - lVar3;
        goto LAB_0008de01;
      }
      uVar8 = uVar8 + 1;
      lVar3 = lVar3 + -8;
    } while (uVar6 >> 3 != uVar8);
  }
  uVar4 = (ulong)uVar6 & 7;
  uVar8 = uVar2;
  if ((uVar6 & 7) != 0) {
    uVar7 = uVar2 | uVar4;
    do {
      uVar8 = uVar2;
      if (*(char *)(param_1 + 1 + uVar2) != *pcVar5) break;
      pcVar5 = pcVar5 + 1;
      uVar2 = uVar2 + 1;
      uVar4 = uVar4 - 1;
      uVar8 = uVar7;
    } while (uVar4 != 0);
  }
LAB_0008de01:
  if (uVar8 == uVar6) {
    uVar1 = CONCAT71((int7)(uVar8 >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

