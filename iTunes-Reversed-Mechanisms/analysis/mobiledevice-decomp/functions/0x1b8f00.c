// rea decompile_all
// name: _image3SetTagStructure
// address: 0x1b8f00
// body: available
// range: 0x1b8f00-0x1b9029 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_image3SetTagStructure(long *param_1,undefined4 param_2,void *param_3,size_t param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  
  uVar3 = 0x1e;
  if ((*(byte *)((long)param_1 + 10) & 2) == 0) {
    if (param_5 == 0) {
      pvVar4 = (void *)*param_1;
    }
    else {
      iVar6 = (param_5 - (int)param_1[3] % param_5) % param_5 + (int)param_1[3];
      *(int *)(param_1 + 3) = iVar6;
      iVar2 = *(int *)((long)param_1 + 0x1c);
      pvVar4 = (void *)*param_1;
      if ((long)iVar2 != -1) {
        *(int *)((long)pvVar4 + (long)iVar2 + 0x18) = iVar6 - iVar2;
      }
    }
    uVar8 = (uint)param_4;
    lVar7 = 0x10 - (ulong)(uVar8 & 0xf);
    if ((ulong)(uVar8 & 0xf) == 0) {
      lVar7 = 0;
    }
    lVar5 = (long)(int)param_1[3];
    uVar9 = lVar5 + param_4 + lVar7 + 0x20;
    if ((ulong)param_1[2] < uVar9) {
      pvVar4 = _realloc(pvVar4,uVar9);
      if (pvVar4 == (void *)0x0) {
        return 0xc;
      }
      *param_1 = (long)pvVar4;
      param_1[2] = uVar9;
      lVar5 = (long)(int)param_1[3];
    }
    *(undefined4 *)((long)pvVar4 + lVar5 + 0x14) = param_2;
    *(uint *)((long)pvVar4 + lVar5 + 0x1c) = uVar8;
    uVar1 = uVar8 + (int)lVar7;
    iVar2 = (uVar1 & 0xfffffffc) + 0x10;
    if ((uVar1 & 3) == 0) {
      iVar2 = uVar8 + (int)lVar7 + 0xc;
    }
    *(int *)((long)pvVar4 + lVar5 + 0x18) = iVar2;
    _memcpy((void *)((long)pvVar4 + lVar5 + 0x20),param_3,param_4);
    ___bzero((long)pvVar4 + param_4 + lVar5 + 0x20,lVar7);
    *(int *)((long)param_1 + 0x1c) = (int)param_1[3];
    iVar2 = (int)param_1[3] + *(int *)((long)pvVar4 + lVar5 + 0x18);
    *(int *)(param_1 + 3) = iVar2;
    *(int *)(*param_1 + 8) = iVar2;
    uVar3 = 0;
  }
  return uVar3;
}

