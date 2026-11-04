// rea decompile_all
// name: _PrepareH55
// address: 0x1ceff6
// body: available
// range: 0x1ceff6-0x1cf0a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _PrepareH55(undefined8 *param_1,undefined4 param_2,ulong param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  void *pvVar3;
  
  if (*(int *)(param_1 + 0xf) != 0) {
    *(undefined4 *)(param_1 + 0xf) = 0;
    pvVar3 = (void *)(param_1[0xd] + 0x400000);
    param_1[7] = pvVar3;
    *param_1 = (undefined8 *)param_1[0xe];
    param_1[1] = *(undefined8 *)param_1[0xe];
    *(undefined4 *)(param_1 + 2) = 0;
    param_1[4] = 0;
    *(undefined8 *)((long)param_1 + 0x2c) = 0x16c4362100010dcd;
    param_1[3] = pvVar3;
    _memset(pvVar3,0xff,0x4000000);
  }
  _PrepareH54(param_1,param_2,param_3,param_4);
  if (0x1f < param_3) {
    iVar1 = 0;
    uVar2 = 0xfffffffffffffffc;
    do {
      iVar1 = iVar1 * *(int *)((long)param_1 + 0x2c) + (uint)*(byte *)(param_4 + 4 + uVar2) + 1;
      uVar2 = uVar2 + 4;
    } while (uVar2 < 0x1c);
    *(int *)(param_1 + 2) = iVar1;
  }
  return;
}

