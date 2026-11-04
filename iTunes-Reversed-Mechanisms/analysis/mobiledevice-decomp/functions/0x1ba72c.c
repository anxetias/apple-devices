// rea decompile_all
// name: PRGSequencer::WriteToBuffer
// address: 0x1ba72c
// body: available
// range: 0x1ba72c-0x1ba8b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* PRGSequencer::WriteToBuffer(char**, unsigned int*) */

undefined8 __thiscall PRGSequencer::WriteToBuffer(PRGSequencer *this,char **param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  IFWD_MemoryStream *pIVar4;
  char *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  pIVar4 = operator_new(0x18);
  IFWD_MemoryStream::IFWD_MemoryStream(pIVar4);
  *(IFWD_MemoryStream **)(this + 8) = pIVar4;
  IFWD_MemoryStream::~IFWD_MemoryStream(pIVar4);
  iVar3 = *(int *)(this + 0xcb0);
  if (0 < iVar3) {
    uVar6 = 0;
    do {
      puVar2 = *(uint **)(this + uVar6 * 8 + 0x30);
      if (((puVar2 != (uint *)0x0) && (uVar1 = *puVar2, (uVar1 & 0xfffffffa) != 0x12)) &&
         ((0x1d < uVar1 || ((0x23319000U >> (uVar1 & 0x1f) & 1) == 0)))) {
        WriteElementToFile(this,*(IFWD_MemoryStream **)(this + 8),uVar1,puVar2[2],(char *)puVar2);
        iVar3 = *(int *)(this + 0xcb0);
      }
    } while ((uVar6 < 199) && (uVar6 = uVar6 + 1, (long)uVar6 < (long)iVar3));
  }
  if (0 < iVar3 && *(int *)(this + 0xcbc) != 5) {
    uVar6 = 0;
    do {
      puVar2 = *(uint **)(this + uVar6 * 8 + 0x30);
      if ((puVar2 != (uint *)0x0) &&
         ((uVar1 = *puVar2, (uVar1 & 0xfffffffa) == 0x12 ||
          ((uVar1 < 0x1e && ((0x23319000U >> (uVar1 & 0x1f) & 1) != 0)))))) {
        WriteElementToFile(this,*(IFWD_MemoryStream **)(this + 8),uVar1,puVar2[2],(char *)puVar2);
        iVar3 = *(int *)(this + 0xcb0);
      }
    } while ((uVar6 < 199) && (uVar6 = uVar6 + 1, (long)uVar6 < (long)iVar3));
  }
  uVar7 = 0;
  PRGH_WriteElement(*(IFWD_MemoryStream **)(this + 8),2,0,(char *)0x0,0,(void *)0x0);
  pcVar5 = _malloc((long)*(int *)(*(long *)(this + 8) + 8));
  *param_1 = pcVar5;
  pIVar4 = *(IFWD_MemoryStream **)(this + 8);
  if (pcVar5 == (char *)0x0) {
    uVar7 = 5;
    if (pIVar4 == (IFWD_MemoryStream *)0x0) {
      return 5;
    }
  }
  else {
    _memcpy(pcVar5,*(void **)(pIVar4 + 0x10),(long)*(int *)(pIVar4 + 8));
    *param_2 = *(uint *)(pIVar4 + 8);
  }
  IFWD_MemoryStream::~IFWD_MemoryStream(pIVar4);
  operator_delete(pIVar4);
  *(undefined8 *)(this + 8) = 0;
  return uVar7;
}

