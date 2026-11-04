// rea decompile_all
// name: PRGSequencer::AllocateAndCopy
// address: 0x1b9e7a
// body: available
// range: 0x1b9e7a-0x1ba03e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* PRGSequencer::AllocateAndCopy(char*, unsigned int) */

undefined8 __thiscall PRGSequencer::AllocateAndCopy(PRGSequencer *this,char *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined8 uVar4;
  void *pvVar5;
  segment_command *this_00;
  section *psVar6;
  size_t sVar7;
  
  iVar2 = *(int *)(this + 0xcb0);
  if ((long)iVar2 < 200) {
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
      this_00 = (segment_command *)&MACH_HEADER.sizeofcmds;
      puVar3 = _malloc(0x14);
      sVar7 = 0x14;
      break;
    case 0xb:
      this_00 = (segment_command *)(section_00000650.segname + 8);
      puVar3 = _malloc(0x668);
      sVar7 = 0x668;
      break;
    case 0xd:
      psVar6 = &section_000000b8;
      puVar3 = _malloc(0xb8);
      sVar7 = 0xb8;
      this_00 = (segment_command *)psVar6;
      break;
    case 0xe:
      this_00 = (segment_command *)(section_00000478.sectname + 4);
      puVar3 = _malloc(0x47c);
      sVar7 = 0x47c;
      break;
    case 0xf:
      this_00 = (segment_command *)((long)&section_000007e0.size + 4);
      puVar3 = _malloc(0x80c);
      sVar7 = 0x80c;
      break;
    case 0x10:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
      this_00 = (segment_command *)&MACH_HEADER.flags;
      puVar3 = _malloc(0x18);
      sVar7 = 0x18;
      break;
    case 0x11:
      this_00 = (segment_command *)&MACH_HEADER.reserved;
      puVar3 = _malloc(0x1c);
      sVar7 = 0x1c;
      break;
    case 0x12:
    case 0x13:
      this_00 = &segment_command_00000020;
      puVar3 = _malloc(0x20);
      sVar7 = 0x20;
      break;
    default:
      if (param_2 != 1000) goto LAB_001b9e98;
    case 0xc:
    case 0x1d:
      this_00 = (segment_command *)segment_command_00000020.segname;
      puVar3 = _malloc(0x28);
      sVar7 = 0x28;
    }
    *(uint **)(this + (long)iVar2 * 8 + 0x30) = puVar3;
    if (param_1 == (char *)0x0) {
      InitializeElement((PRGSequencer *)this_00,puVar3,param_2,(uint)sVar7);
      *puVar3 = param_2;
      puVar3[1] = (uint)sVar7;
    }
    else {
      _memcpy(puVar3,param_1,sVar7);
      uVar1 = TamperDataAfterRead(this,param_2,param_1);
      if (*(int *)(this + 0xcb8) == 2) {
        if (((int)uVar1 < 0) || (*(int *)(this + 0xcb4) <= (int)uVar1)) {
          pvVar5 = (void *)0x0;
        }
        else {
          pvVar5 = *(void **)(this + (ulong)uVar1 * 8 + 0x670);
        }
        PRGH_SwapElementEndian
                  (*(void **)(this + (long)*(int *)(this + 0xcb0) * 8 + 0x30),param_2,pvVar5);
      }
    }
    iVar2 = *(int *)(this + 0xcb0);
    if (*(code **)(this + 0x10) != (code *)0x0) {
      (**(code **)(this + 0x10))(*(undefined8 *)(this + (long)iVar2 * 8 + 0x30));
      iVar2 = *(int *)(this + 0xcb0);
    }
    *(int *)(this + 0xcb0) = iVar2 + 1;
    uVar4 = CONCAT71((uint7)(uint3)((uint)(iVar2 + 1) >> 8),1);
  }
  else {
LAB_001b9e98:
    uVar4 = 0;
  }
  return uVar4;
}

