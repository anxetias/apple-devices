// rea decompile_all
// name: SERestoreInfo::SEException::SEException
// address: 0x25353e
// body: available
// range: 0x25353e-0x2537a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2537a5 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::SEException::SEException(__CFError*) */

void __thiscall SERestoreInfo::SEException::SEException(SEException *this,__CFError *param_1)

{
  SEException SVar1;
  SEException SVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong *puVar7;
  SEException *pSVar8;
  byte local_90 [16];
  void *local_80;
  ulong local_78;
  ulong uStack_70;
  void *local_68;
  uchar *local_58;
  uchar *puStack_50;
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
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  lVar4 = _CFErrorCopyDescription(param_1);
  if (lVar4 != 0) {
    uVar5 = _CFStringGetLength(lVar4);
    lVar6 = _CFStringGetBytes(lVar4,0,uVar5,0x8000100,0,0,0,0,&local_78);
    if ((local_78 != 0) && (lVar6 != 0)) {
      std::vector<unsigned_char,std::allocator<unsigned_char>>::vector_abi_ne190102_
                ((vector<unsigned_char,std::allocator<unsigned_char>> *)&local_58,local_78);
      lVar6 = _CFStringGetBytes(lVar4,0,uVar5,0x8000100,0,0,local_58,
                                (long)puStack_50 - (long)local_58,0);
      if (lVar6 != 0) {
        std::string::__assign_trivial_abi_ne190102_<unsigned_char*,unsigned_char*>
                  ((string *)(this + 0x20),local_58,puStack_50,(long)puStack_50 - (long)local_58);
      }
      if (local_58 != (uchar *)0x0) {
        puStack_50 = local_58;
        operator_delete(local_58);
      }
    }
    _CFRelease(lVar4);
  }
  uVar3 = _CFErrorGetCode(param_1);
  *(undefined4 *)(this + 0x40) = uVar3;
  lVar4 = _CFErrorGetDomain(param_1);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = _CFRetain(lVar4);
  }
  *(undefined8 *)(this + 0x38) = uVar5;
  std::to_string((longlong)local_90);
  puVar7 = (ulong *)std::string::insert((ulong)local_90,(char *)0x0);
  local_68 = (void *)puVar7[2];
  local_78 = *puVar7;
  uStack_70 = puVar7[1];
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7 = (ulong *)std::string::append((char *)&local_78);
  local_48 = (void *)puVar7[2];
  local_58 = (uchar *)*puVar7;
  puStack_50 = (uchar *)puVar7[1];
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
  uVar5 = *(undefined8 *)(pSVar8 + 0x10);
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
  *(undefined8 *)(this + 0x18) = uVar5;
  if (((ulong)local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

