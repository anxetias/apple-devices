// rea decompile_all
// name: PRGSequencer::WriteElementToFile
// address: 0x1ba3dc
// body: available
// range: 0x1ba3dc-0x1ba482 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* PRGSequencer::WriteElementToFile(IFWD_MemoryStream*, unsigned int, unsigned int, char*) */

ulong __thiscall
PRGSequencer::WriteElementToFile
          (PRGSequencer *this,IFWD_MemoryStream *param_1,uint param_2,uint param_3,char *param_4)

{
  uint uVar1;
  ulong uVar2;
  void *pvVar3;
  
  uVar1 = 0x1c;
  pvVar3 = (void *)0x0;
  switch(param_2) {
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1e:
    uVar1 = 8;
    break;
  case 0xb:
    uVar1 = 0x65c;
    break;
  case 0xc:
    uVar2 = (ulong)*(uint *)(param_4 + 0x20);
    uVar1 = 0x1c;
    goto LAB_001ba446;
  case 0xd:
    uVar1 = 0xac;
    break;
  case 0xe:
    uVar1 = 0x470;
    break;
  case 0xf:
    uVar1 = 0x800;
    break;
  case 0x10:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
    uVar2 = (ulong)*(uint *)(param_4 + 0x10);
    uVar1 = 0xc;
    goto LAB_001ba446;
  case 0x11:
    uVar1 = 0x10;
    break;
  case 0x12:
  case 0x13:
    uVar2 = (ulong)*(uint *)(param_4 + 0x18);
    uVar1 = 0x20;
LAB_001ba446:
    if (*(int *)(this + 0xcb4) <= (int)uVar2) break;
    pvVar3 = *(void **)(this + uVar2 * 8 + 0x670);
  case 0x1d:
    goto switchD_001ba3fc_caseD_1d;
  default:
    if (param_2 != 1000) goto LAB_001ba47f;
    goto switchD_001ba3fc_caseD_1d;
  }
  pvVar3 = (void *)0x0;
switchD_001ba3fc_caseD_1d:
  PRGH_WriteElement(param_1,param_2,param_3,param_4 + 0xc,uVar1,pvVar3);
  pvVar3 = (void *)CONCAT71((int7)((ulong)pvVar3 >> 8),1);
LAB_001ba47f:
  return (ulong)pvVar3 & 0xffffffff;
}

