// rea decompile_all
// name: PRGSequencer::ReadBuffer
// address: 0x1ba5de
// body: available
// range: 0x1ba5de-0x1ba728 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* PRGSequencer::ReadBuffer(char const*, unsigned int, unsigned int, unsigned int, void (*)(void*))
    */

ulong __thiscall
PRGSequencer::ReadBuffer
          (PRGSequencer *this,char *param_1,uint param_2,uint param_3,uint param_4,
          _func_void_void_ptr *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  ulong uVar7;
  uint uVar8;
  uint local_34;
  
  IFWD_MemoryStream::~IFWD_MemoryStream(*(IFWD_MemoryStream **)this);
  pcVar6 = operator_new__((ulong)(param_2 + 1));
  puVar1 = *(undefined8 **)this;
  *puVar1 = pcVar6;
  puVar1[2] = pcVar6;
  _memcpy(pcVar6,param_1,(ulong)param_2);
  *(uint *)(puVar1 + 1) = param_2;
  uVar4 = PRGH_GetEndian(pcVar6);
  *(undefined4 *)(this + 0xcb8) = uVar4;
  iVar5 = PRGH_FileCheck(*(char **)(*(long *)this + 0x10));
  if (iVar5 == -1) {
    uVar7 = 0xffffffff;
  }
  else {
    *(uint *)(this + 0xcbc) = param_3;
    *(int *)(this + 0xcc4) = iVar5;
    uVar8 = 0;
    if (iVar5 != 5) {
      uVar7 = PRGH_VersionCheck(*(char **)(*(long *)this + 0x10),param_3,param_4);
      if ((uint)uVar7 != 0) {
        if (*(int *)(this + 0xcbc) != 5) {
          return uVar7;
        }
        if (param_4 >> 0x10 <= ((uint)(uVar7 >> 0x10) & 0xffff)) {
          return uVar7;
        }
        uVar8 = (uint)uVar7;
        if (*(int *)(this + 0xcc4) != 1) {
          return uVar7;
        }
      }
    }
    *(_func_void_void_ptr **)(this + 0x10) = param_5;
    pcVar6 = *(char **)(*(long *)this + 0x10);
    cVar3 = PRGH_GetElementIndex(pcVar6,1000,0,&local_34);
    if (cVar3 != '\0') {
      uVar7 = (ulong)local_34;
      *(undefined4 *)(this + 0x28) = *(undefined4 *)(pcVar6 + uVar7 + 0x24);
      uVar2 = *(undefined8 *)(pcVar6 + uVar7 + 0x14 + 8);
      *(undefined8 *)(this + 0x18) = *(undefined8 *)(pcVar6 + uVar7 + 0x14);
      *(undefined8 *)(this + 0x20) = uVar2;
      while( true ) {
        AddToGlobalStruct(this,pcVar6 + uVar7);
        cVar3 = PRGH_GetNextElementIndex(pcVar6,&local_34);
        if (cVar3 == '\0') break;
        uVar7 = (ulong)local_34;
      }
    }
    uVar7 = (ulong)uVar8;
  }
  return uVar7;
}

