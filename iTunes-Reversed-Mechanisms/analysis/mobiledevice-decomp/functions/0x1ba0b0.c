// rea decompile_all
// name: PRGSequencer::TamperDataAfterRead
// address: 0x1ba0b0
// body: available
// range: 0x1ba0b0-0x1ba157 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* PRGSequencer::TamperDataAfterRead(unsigned int, char*) */

void __thiscall PRGSequencer::TamperDataAfterRead(PRGSequencer *this,uint param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  iVar2 = -1;
  switch(param_1) {
  case 0xc:
    iVar1 = *(int *)(this + 0xcb4);
    lVar3 = 0x20;
    lVar4 = 0x28;
    break;
  default:
    goto switchD_001ba0d3_caseD_d;
  case 0x10:
  case 0x14:
  case 0x15:
  case 0x16:
    iVar1 = *(int *)(this + 0xcb4);
    lVar3 = 0x10;
    lVar4 = 0x18;
    break;
  case 0x12:
  case 0x13:
    iVar1 = *(int *)(this + 0xcb4);
    lVar3 = 0x18;
    lVar4 = 0x20;
    break;
  case 0x17:
  case 0x18:
  case 0x19:
    iVar1 = *(int *)(this + 0xcb4);
    lVar3 = 0x10;
    lVar4 = 0x18;
  }
  if (iVar1 < 200) {
    *(char **)(this + (long)iVar1 * 8 + 0x670) = param_2 + lVar4;
    *(int *)(this + 0xcb4) = iVar1 + 1;
    iVar2 = iVar1;
  }
  *(int *)(*(long *)(this + (long)*(int *)(this + 0xcb0) * 8 + 0x30) + lVar3) = iVar2;
switchD_001ba0d3_caseD_d:
  return;
}

