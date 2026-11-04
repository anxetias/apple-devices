// rea decompile_all
// name: ACFUFirmware::hashData
// address: 0x21e856
// body: available
// range: 0x21e856-0x21e980 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x21e97c to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUFirmware::hashData(__CFData const*) const */

undefined8 __thiscall ACFUFirmware::hashData(ACFUFirmware *this,__CFData *param_1)

{
  int iVar1;
  CC_LONG CVar2;
  __CFData *p_Var3;
  uchar *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uchar local_68 [72];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_004412b8;
  iVar1 = *(int *)(this + 0x38);
  if (iVar1 == 2) {
    p_Var3 = (__CFData *)_CFDataGetBytePtr(param_1);
    CVar2 = _CFDataGetLength(param_1);
    puVar4 = _CC_SHA512(p_Var3,CVar2,local_68);
    if (puVar4 == local_68) {
      uVar5 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      uVar6 = 0x40;
LAB_0021e947:
      uVar5 = _CFDataCreate(uVar5,local_68,uVar6);
      goto LAB_0021e963;
    }
    hashData(p_Var3);
  }
  else if (iVar1 == 1) {
    p_Var3 = (__CFData *)_CFDataGetBytePtr(param_1);
    CVar2 = _CFDataGetLength(param_1);
    puVar4 = _CC_SHA384(p_Var3,CVar2,local_68);
    if (puVar4 == local_68) {
      uVar5 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      uVar6 = 0x30;
      goto LAB_0021e947;
    }
    hashData(p_Var3);
  }
  else if (iVar1 == 0) {
    p_Var3 = (__CFData *)_CFDataGetBytePtr(param_1);
    CVar2 = _CFDataGetLength(param_1);
    puVar4 = _CC_SHA256(p_Var3,CVar2,local_68);
    if (puVar4 == local_68) {
      uVar5 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      uVar6 = 0x20;
      goto LAB_0021e947;
    }
    hashData(p_Var3);
  }
  uVar5 = 0;
LAB_0021e963:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_20) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

