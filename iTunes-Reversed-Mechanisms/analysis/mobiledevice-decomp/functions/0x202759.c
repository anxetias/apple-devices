// rea decompile_all
// name: _fse_adjust_freqs
// address: 0x202759
// body: available
// range: 0x202759-0x2027a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _fse_adjust_freqs(long param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  
  if (param_2 != 0) {
    bVar2 = 3;
    do {
      if (0 < (int)param_3) {
        uVar3 = 0;
        do {
          uVar1 = *(ushort *)(param_1 + uVar3 * 2);
          if (1 < uVar1) {
            uVar4 = uVar1 - 1 >> (bVar2 & 0x1f);
            if ((int)param_2 <= (int)uVar4) {
              uVar4 = param_2;
            }
            *(ushort *)(param_1 + uVar3 * 2) = uVar1 - (short)uVar4;
            param_2 = param_2 - uVar4;
            if (param_2 == 0) {
              return;
            }
          }
          uVar3 = uVar3 + 1;
        } while (param_3 != uVar3);
      }
      bVar2 = bVar2 - 1;
    } while (param_2 != 0);
  }
  return;
}

