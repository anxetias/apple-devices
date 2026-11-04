// rea decompile_all
// name: _externalBackendGetPersParam
// address: 0x2727d6
// body: available
// range: 0x2727d6-0x27288f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_externalBackendGetPersParam
          (void *param_1,undefined4 param_2,void *param_3,uint param_4,uint *param_5)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_1 == (void *)0x0) || (param_3 == (void *)0x0)) goto LAB_0027288c;
  uVar1 = 0x1a;
  uVar2 = 8;
  switch(param_2) {
  case 0:
    param_1 = (void *)((long)param_1 + 0x2b);
    goto LAB_0027284e;
  case 1:
    param_1 = (void *)((long)param_1 + 8);
    uVar2 = 2;
    break;
  case 2:
    break;
  case 3:
    param_1 = (void *)((long)param_1 + 0x10);
    break;
  case 4:
    param_1 = (void *)((long)param_1 + 0x28);
    goto LAB_0027284e;
  case 5:
    param_1 = (void *)((long)param_1 + 0x29);
    goto LAB_0027284e;
  case 6:
    uVar2 = *(uint *)((long)param_1 + 0x20);
    param_1 = *(void **)((long)param_1 + 0x18);
    break;
  default:
    goto switchD_00272818_caseD_7;
  case 8:
    param_1 = (void *)((long)param_1 + 0x2a);
LAB_0027284e:
    uVar2 = 1;
    break;
  case 10:
    param_1 = (void *)((long)param_1 + 0x30);
    goto LAB_0027285c;
  case 0xb:
    param_1 = (void *)((long)param_1 + 0x34);
    goto LAB_0027285c;
  case 0xc:
    param_1 = (void *)((long)param_1 + 0x38);
LAB_0027285c:
    uVar2 = 4;
  }
  if (param_1 == (void *)0x0) {
LAB_0027288c:
    uVar1 = 0x1e;
  }
  else {
    uVar1 = 0x1e;
    if (uVar2 <= param_4) {
      _memcpy(param_3,param_1,(ulong)uVar2);
      uVar1 = 0;
      if (param_5 != (uint *)0x0) {
        *param_5 = uVar2;
      }
    }
  }
switchD_00272818_caseD_7:
  return uVar1;
}

