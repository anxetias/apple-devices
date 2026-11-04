// rea decompile_all
// name: _usbDFU_copyStringDescriptor
// address: 0x264f6e
// body: available
// range: 0x264f6e-0x2650be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2650ba to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * _usbDFU_copyStringDescriptor(long param_1,byte param_2)

{
  long *plVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  undefined2 local_148;
  ushort local_146;
  uint local_144;
  byte *local_140;
  undefined8 local_138;
  byte local_12a [2];
  byte local_128 [2];
  undefined1 local_126 [254];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  if (param_1 != 0) {
    lVar4 = *(long *)(param_1 + 0x28);
    local_138 = 0;
    local_148 = 0x680;
    local_146 = param_2 | 0x300;
    local_144 = 0x20409;
    local_140 = local_12a;
    plVar1 = *(long **)(lVar4 + 8);
    iVar3 = (**(code **)(*plVar1 + 0xd0))(plVar1,&local_148);
    bVar2 = local_12a[0];
    pvVar6 = (void *)0x0;
    if ((iVar3 != 0) || (local_12a[0] == 0)) goto LAB_00265095;
    ___bzero(local_128,0x100);
    local_144 = (uint)CONCAT12(bVar2,(undefined2)local_144);
    local_140 = local_128;
    iVar3 = (**(code **)(**(long **)(lVar4 + 8) + 0xd0))();
    if (iVar3 == 0) {
      uVar7 = (ulong)local_12a[0] - 2 >> 1;
      pvVar6 = (void *)0x0;
      lVar4 = _CFStringCreateWithCharacters(0,local_126,uVar7);
      if (lVar4 != 0) {
        lVar5 = _CFStringGetMaximumSizeForEncoding(uVar7,0x8000100);
        pvVar6 = _malloc(lVar5 + 1);
        if (pvVar6 != (void *)0x0) {
          _CFStringGetCString(lVar4,pvVar6,lVar5,0x8000100);
        }
        _CFRelease(lVar4);
      }
      goto LAB_00265095;
    }
  }
  pvVar6 = (void *)0x0;
LAB_00265095:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_28) {
    return pvVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

