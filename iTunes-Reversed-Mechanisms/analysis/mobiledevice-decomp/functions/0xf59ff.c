// rea decompile_all
// name: _PRProgressComputeOverallProgress
// address: 0xf59ff
// body: available
// range: 0xf59ff-0xf5ab1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _PRProgressComputeOverallProgress(long *param_1,uint param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  
  if (param_1 == (long *)0x0) {
    return -1;
  }
  if ((int)param_2 < 0) {
    uVar2 = param_1[2];
LAB_000f5a56:
    if (uVar2 == 0) {
      iVar3 = 0;
      goto LAB_000f5a79;
    }
  }
  else {
    uVar4 = (ulong)param_2;
    uVar2 = param_1[2];
    if (uVar2 <= uVar4) goto LAB_000f5a56;
    iVar3 = *(int *)(*param_1 + uVar4 * 4);
    if (param_3 == -1) {
      *(int *)(param_1[1] + uVar4 * 4) = iVar3;
    }
    else if (iVar3 != 0) {
      iVar3 = (int)((double)iVar3 * ((double)param_3 / 100.0));
      if (*(int *)(param_1[1] + uVar4 * 4) < iVar3) {
        *(int *)(param_1[1] + uVar4 * 4) = iVar3;
      }
    }
  }
  uVar4 = 0;
  iVar3 = 0;
  do {
    iVar3 = iVar3 + *(int *)(param_1[1] + uVar4 * 4);
    uVar4 = uVar4 + 1;
  } while (uVar2 != uVar4);
LAB_000f5a79:
  *(int *)(param_1 + 3) = iVar3;
  iVar1 = (int)(((float)iVar3 / (float)*(int *)((long)param_1 + 0x1c)) * 100.0);
  iVar3 = 100;
  if (iVar1 < 100) {
    iVar3 = iVar1;
  }
  iVar1 = -1;
  if (-1 < iVar3) {
    iVar1 = iVar3;
  }
  return iVar1;
}

