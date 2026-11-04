// rea decompile_all
// name: _BuildHistograms
// address: 0x93db0
// body: available
// range: 0x93db0-0x93e77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _BuildHistograms(long param_1,ulong param_2,ulong param_3,long param_4,long param_5,
                     long param_6,long param_7,long param_8)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  
  if (param_5 != 0) {
    lVar6 = *(long *)(param_7 + 0xb00);
    lVar5 = 0;
    do {
      lVar4 = lVar5 * 0x10;
      uVar7 = (ulong)*(uint *)(param_4 + lVar4);
      uVar8 = *(uint *)(param_4 + 4 + lVar4);
      uVar2 = *(ushort *)(param_4 + 0xc + lVar4);
      uVar3 = *(ushort *)(param_4 + 0xe + lVar4);
      piVar1 = (int *)(param_7 + (ulong)uVar2 * 4);
      *piVar1 = *piVar1 + 1;
      lVar6 = lVar6 + 1;
      *(long *)(param_7 + 0xb00) = lVar6;
      if (uVar7 != 0) {
        lVar4 = *(long *)(param_6 + 0x400);
        do {
          lVar4 = lVar4 + 1;
          piVar1 = (int *)(param_6 + (ulong)*(byte *)(param_1 + (param_2 & param_3)) * 4);
          *piVar1 = *piVar1 + 1;
          *(long *)(param_6 + 0x400) = lVar4;
          param_2 = param_2 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      uVar8 = uVar8 & 0x1ffffff;
      if ((uVar8 != 0) && (0x7f < uVar2)) {
        piVar1 = (int *)(param_8 + (ulong)(uVar3 & 0x3ff) * 4);
        *piVar1 = *piVar1 + 1;
        *(long *)(param_8 + 0x880) = *(long *)(param_8 + 0x880) + 1;
      }
      param_2 = param_2 + uVar8;
      lVar5 = lVar5 + 1;
    } while (lVar5 != param_5);
  }
  return;
}

