// rea decompile_all
// name: _image3GetTagStruct
// address: 0x1b9168
// body: available
// range: 0x1b9168-0x1b91e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _image3GetTagStruct(long *param_1,int param_2,ulong *param_3,ulong *param_4,int param_5)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  ulong uVar5;
  
  lVar2 = *param_1;
  if ((ulong)*(uint *)(lVar2 + 8) != 0) {
    piVar4 = (int *)(lVar2 + (ulong)*(uint *)(lVar2 + 8) + 0x14);
    piVar3 = (int *)(lVar2 + 0x14);
    do {
      piVar1 = piVar3 + 3;
      if (piVar4 < piVar1) {
        return 0x16;
      }
      uVar5 = (ulong)(uint)piVar3[2];
      if (piVar4 < (int *)((long)piVar1 + uVar5)) {
        return 0x16;
      }
      if ((param_2 == -1) || (*piVar3 == param_2)) {
        if (param_5 == 0) {
          if (param_4 != (ulong *)0x0) {
            if ((*param_4 != 0) && (*param_4 != uVar5)) {
              return 0x16;
            }
            *param_4 = uVar5;
          }
          *param_3 = (ulong)piVar1;
          return 0;
        }
        param_5 = param_5 + -1;
      }
      if ((ulong)(uint)piVar3[1] < uVar5 + 0xc) {
        return 0x16;
      }
      piVar3 = (int *)((long)piVar3 + (ulong)(uint)piVar3[1]);
    } while (piVar3 < piVar4);
  }
  return 2;
}

