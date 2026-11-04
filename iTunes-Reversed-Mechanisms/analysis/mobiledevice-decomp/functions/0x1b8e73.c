// rea decompile_all
// name: _image3AdvanceCursorWithZeroPad
// address: 0x1b8e73
// body: available
// range: 0x1b8e73-0x1b8eff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _image3AdvanceCursorWithZeroPad(long *param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  
  uVar4 = 0x1e;
  if ((*(byte *)((long)param_1 + 10) & 2) == 0) {
    iVar2 = (int)param_1[3];
    param_2 = param_2 + iVar2;
    *(int *)(param_1 + 3) = param_2;
    iVar3 = *(int *)((long)param_1 + 0x1c);
    pvVar5 = (void *)*param_1;
    if ((long)iVar3 != -1) {
      *(int *)((long)pvVar5 + (long)iVar3 + 0x18) = param_2 - iVar3;
      param_2 = (int)param_1[3];
    }
    lVar6 = (long)param_2;
    uVar1 = lVar6 + 0x14;
    if ((ulong)param_1[2] < uVar1) {
      pvVar5 = _realloc(pvVar5,uVar1);
      if (pvVar5 == (void *)0x0) {
        return 0xc;
      }
      *param_1 = (long)pvVar5;
      param_1[2] = uVar1;
      lVar6 = (long)(int)param_1[3];
    }
    ___bzero((long)pvVar5 + (long)iVar2 + 0x14,lVar6 - iVar2);
    *(int *)(*param_1 + 8) = (int)param_1[3];
    uVar4 = 0;
  }
  return uVar4;
}

