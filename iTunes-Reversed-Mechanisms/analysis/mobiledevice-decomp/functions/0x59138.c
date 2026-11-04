// rea decompile_all
// name: _lzvnEncodeInitState
// address: 0x59138
// body: available
// range: 0x59138-0x591b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _lzvnEncodeInitState(long *param_1,int param_2,long param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  
  lVar5 = -0xffff;
  if (-0xffff < param_1[1]) {
    lVar5 = param_1[1];
  }
  iVar6 = (uint)(param_2 != 0x901) * 3 + 0xb;
  uVar2 = *(undefined4 *)(*param_1 + lVar5);
  *(int *)(param_1 + 9) = iVar6;
  param_1[0x10] = param_3;
  uVar8 = (undefined4)lVar5;
  lVar5 = 0x10;
  uVar7 = 1;
  do {
    lVar3 = param_1[0x10];
    puVar1 = (undefined4 *)(lVar3 + -0x10 + lVar5);
    *puVar1 = uVar8;
    puVar1[1] = uVar8;
    puVar1[2] = uVar8;
    puVar1[3] = uVar8;
    puVar1 = (undefined4 *)(lVar3 + lVar5);
    *puVar1 = uVar2;
    puVar1[1] = uVar2;
    puVar1[2] = uVar2;
    puVar1[3] = uVar2;
    lVar5 = lVar5 + 0x20;
    uVar4 = uVar7 >> (sbyte)iVar6;
    uVar7 = uVar7 + 1;
  } while (uVar4 == 0);
  return;
}

