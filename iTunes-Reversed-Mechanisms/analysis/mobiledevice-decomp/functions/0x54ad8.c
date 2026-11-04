// rea decompile_all
// name: _PrepareH65
// address: 0x54ad8
// body: available
// range: 0x54ad8-0x54c0e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _PrepareH65(long *param_1,undefined4 param_2,ulong param_3,long param_4)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  void *pvVar5;
  long lVar6;
  
  if ((int)param_1[0x16] != 0) {
    *(undefined4 *)(param_1 + 0x16) = 0;
    bVar1 = *(byte *)(param_1[0x17] + 0x2c);
    plVar2 = (long *)param_1[0x15];
    pvVar5 = (void *)((2L << (bVar1 & 0x3f)) + param_1[0x14] +
                     ((4L << (bVar1 & 0x3f)) << (*(byte *)(param_1[0x17] + 0x30) & 0x3f)));
    param_1[0xe] = (long)pvVar5;
    param_1[6] = (long)plVar2;
    iVar4 = *(int *)((long)plVar2 + 0x1c);
    *(int *)(param_1 + 2) = 0x40 - iVar4;
    lVar6 = 1L << ((byte)iVar4 & 0x3f);
    param_1[3] = 0xffffffffffffffff >> (*(char *)((long)plVar2 + 0x24) * -8 & 0x3fU);
    *param_1 = lVar6;
    lVar3 = 1L << ((byte)(int)plVar2[4] & 0x3f);
    *(int *)((long)param_1 + 0x24) = (int)plVar2[4];
    param_1[1] = lVar3;
    *(int *)(param_1 + 4) = (int)lVar3 + -1;
    *(int *)(param_1 + 5) = (int)plVar2[5];
    lVar3 = *plVar2;
    param_1[7] = lVar3;
    param_1[8] = lVar3 + lVar6 * 2;
    *(undefined4 *)(param_1 + 9) = 0;
    param_1[0xb] = 0;
    *(undefined8 *)((long)param_1 + 100) = 0xf1ebf08100010dcd;
    param_1[10] = (long)pvVar5;
    _memset(pvVar5,0xff,0x4000000);
  }
  _PrepareH6(param_1,param_2,param_3);
  if (0x1f < param_3) {
    lVar3 = 0;
    iVar4 = 0;
    do {
      iVar4 = iVar4 * *(int *)((long)param_1 + 100) + (uint)*(byte *)(param_4 + lVar3) + 1;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x20);
    *(int *)(param_1 + 9) = iVar4;
  }
  return;
}

