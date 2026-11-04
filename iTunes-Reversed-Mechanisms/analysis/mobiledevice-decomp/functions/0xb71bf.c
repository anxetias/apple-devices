// rea decompile_all
// name: _AFCSwapHeader
// address: 0xb71bf
// body: available
// range: 0xb71bf-0xb7245 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AFCSwapHeader(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  uVar3 = 0;
  if (*param_1 == 0x434641364c504141) {
    if (___gAFCHeaderSwapInfo != 0) {
      puVar4 = &___gAFCHeaderSwapInfo;
      lVar5 = ___gAFCHeaderSwapInfo;
      do {
        if (lVar5 == param_1[4]) {
          lVar5 = 1;
          while( true ) {
            uVar1 = puVar4[lVar5];
            if (uVar1 == 0) {
              return 0;
            }
            if (param_1[2] - 8U < uVar1) break;
            uVar2 = *(ulong *)((long)param_1 + (uVar1 & 0xfffffffffffffff8));
            *(ulong *)((long)param_1 + (uVar1 & 0xfffffffffffffff8)) =
                 uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                 (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                 (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 | (uVar2 & 0xff00) << 0x28 |
                 uVar2 << 0x38;
            lVar5 = lVar5 + 1;
            if (lVar5 == 9) {
              return 0;
            }
          }
          return 0xe8004001;
        }
        lVar5 = puVar4[9];
        puVar4 = puVar4 + 9;
      } while (lVar5 != 0);
      return 0xe8004006;
    }
    uVar3 = 0xe8004006;
  }
  return uVar3;
}

