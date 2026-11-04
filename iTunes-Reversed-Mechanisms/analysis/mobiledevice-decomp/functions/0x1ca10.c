// rea decompile_all
// name: _ccn_gcd_approximate
// address: 0x1ca10
// body: available
// range: 0x1ca10-0x1cad3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _ccn_gcd_approximate(ulong param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  *param_3 = param_2[param_1 - 1];
  uVar5 = param_4[param_1 - 1];
  *param_5 = uVar5;
  if (1 < param_1) {
    uVar6 = param_1 - 2;
    do {
      uVar4 = uVar5 | *param_3 | 1;
      lVar1 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      bVar2 = (byte)lVar1 ^ 0x3f;
      bVar3 = -((uVar5 | *param_3) != 0) &
              (((char)((byte)(*param_5 >> 0x38) | (byte)(*param_3 >> 0x38)) >> 7) - bVar2) + 0x40;
      *param_3 = param_2[uVar6] >> (bVar3 & 0x3f) | *param_3 << (bVar2 & 0x3f);
      uVar5 = param_4[uVar6] >> (bVar3 & 0x3f) | *param_5 << (bVar2 & 0x3f);
      *param_5 = uVar5;
      uVar6 = uVar6 - 1;
    } while (uVar6 < param_1);
  }
  *param_3 = *param_2 & 0x7fffffff | *param_3 & 0xffffffff80000000;
  *param_5 = *param_4 & 0x7fffffff | *param_5 & 0xffffffff80000000;
  return;
}

