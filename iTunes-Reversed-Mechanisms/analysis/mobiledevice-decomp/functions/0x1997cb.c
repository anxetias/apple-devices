// rea decompile_all
// name: _simulationBackendGetPersParam
// address: 0x1997cb
// body: available
// range: 0x1997cb-0x199845 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_simulationBackendGetPersParam
          (undefined4 *param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4,
          undefined4 *param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x1a;
  switch(param_2) {
  case 0:
    uVar1 = *(undefined1 *)(param_1 + 1);
    break;
  case 1:
    uVar2 = param_1[2];
    goto LAB_00199827;
  case 2:
    uVar2 = *param_1;
    goto LAB_00199827;
  case 3:
    *param_3 = *(undefined8 *)(param_1 + 4);
    uVar2 = 8;
    goto LAB_0019983a;
  case 4:
    uVar1 = *(undefined1 *)((long)param_1 + 0xf);
    break;
  case 5:
    uVar1 = *(undefined1 *)((long)param_1 + 0xe);
    break;
  case 6:
    uVar3 = *(undefined8 *)(param_1 + 8);
    *param_3 = *(undefined8 *)(param_1 + 6);
    param_3[1] = uVar3;
    uVar2 = 0x10;
    goto LAB_0019983a;
  case 7:
    uVar1 = *(undefined1 *)(param_1 + 3);
    break;
  case 8:
    uVar1 = *(undefined1 *)((long)param_1 + 0xd);
    break;
  default:
    goto switchD_001997e9_caseD_9;
  case 10:
    uVar2 = param_1[10];
LAB_00199827:
    *(undefined4 *)param_3 = uVar2;
    uVar2 = 4;
    goto LAB_0019983a;
  }
  *(undefined1 *)param_3 = uVar1;
  uVar2 = 1;
LAB_0019983a:
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = uVar2;
  }
  uVar3 = 0;
switchD_001997e9_caseD_9:
  return uVar3;
}

