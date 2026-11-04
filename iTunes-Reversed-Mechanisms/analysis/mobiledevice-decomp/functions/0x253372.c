// rea decompile_all
// name: SERestoreInfo::SEException::SEException
// address: 0x253372
// body: available
// range: 0x253372-0x253522 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x25351e to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::SEException::SEException(std::string const&, int, __CFString const*) */

void __thiscall
SERestoreInfo::SEException::SEException
          (SEException *this,string *param_1,int param_2,__CFString *param_3)

{
  SEException SVar1;
  SEException SVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  SEException *pSVar8;
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  byte local_70 [16];
  void *local_60;
  ulong local_58;
  ulong uStack_50;
  void *local_48;
  undefined6 uStack_40;
  undefined2 local_3a;
  undefined6 uStack_38;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_004412b8;
  *(undefined ***)this = &PTR__SEException_0044f338;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  if (((byte)*param_1 & 1) == 0) {
    *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined4 *)(param_1 + 4);
    uVar4 = *(undefined4 *)(param_1 + 8);
    uVar5 = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(this + 0x20) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0x24) = uVar3;
    *(undefined4 *)(this + 0x28) = uVar4;
    *(undefined4 *)(this + 0x2c) = uVar5;
  }
  else {
    std::string::__init_copy_ctor_external
              ((string *)(this + 0x20),*(char **)(param_1 + 0x10),*(ulong *)(param_1 + 8));
  }
  *(int *)(this + 0x40) = param_2;
  if (param_3 == (__CFString *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = _CFRetain(param_3);
  }
  *(undefined8 *)(this + 0x38) = uVar6;
  std::to_string((longlong)local_70);
  puVar7 = (ulong *)std::string::insert((ulong)local_70,(char *)0x0);
  local_78 = (void *)puVar7[2];
  local_88 = *puVar7;
  uStack_80 = puVar7[1];
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7 = (ulong *)std::string::append((char *)&local_88);
  local_48 = (void *)puVar7[2];
  local_58 = *puVar7;
  uStack_50 = puVar7[1];
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  if (((byte)this[0x20] & 1) == 0) {
    pSVar8 = this + 0x21;
  }
  else {
    pSVar8 = *(SEException **)(this + 0x30);
  }
  pSVar8 = (SEException *)std::string::append((char *)&local_58,(ulong)pSVar8);
  SVar1 = *pSVar8;
  SVar2 = pSVar8[1];
  uStack_38 = (undefined6)((ulong)*(undefined8 *)(pSVar8 + 8) >> 0x10);
  uStack_40 = (undefined6)*(undefined8 *)(pSVar8 + 2);
  local_3a = (undefined2)((ulong)*(undefined8 *)(pSVar8 + 2) >> 0x30);
  uVar6 = *(undefined8 *)(pSVar8 + 0x10);
  *(undefined8 *)pSVar8 = 0;
  *(undefined8 *)(pSVar8 + 8) = 0;
  *(undefined8 *)(pSVar8 + 0x10) = 0;
  if (((byte)this[8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x18));
  }
  this[8] = SVar1;
  this[9] = SVar2;
  *(ulong *)(this + 10) = CONCAT26(local_3a,uStack_40);
  *(ulong *)(this + 0x10) = CONCAT62(uStack_38,local_3a);
  *(undefined8 *)(this + 0x18) = uVar6;
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

