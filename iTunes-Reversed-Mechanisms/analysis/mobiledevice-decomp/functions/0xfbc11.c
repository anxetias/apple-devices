// rea decompile_all
// name: AMRLocalUSBDevice::interfaceWithClass:subclass:withReply:
// address: 0xfbc11
// body: available
// range: 0xfbc11-0xfbd25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xfbd21 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

void AMRLocalUSBDevice::interfaceWithClass_subclass_withReply_
               (ID param_1,SEL param_2,unsigned_short param_3,unsigned_short param_4,ID param_5,
               undefined4 param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  unsigned_short local_48;
  unsigned_short uStack_46;
  undefined4 uStack_44;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  local_3c = 0;
  _local_48 = CONCAT44(0xffffffff,CONCAT22(param_4,param_3));
  iVar2 = (**(code **)(**(long **)(param_1 + 8) + 0xe0))
                    (*(long **)(param_1 + 8),&local_48,&local_3c);
  if (iVar2 != 0) {
    cVar1 = _os_log_type_enabled(PTR___os_log_default_004412f0,0);
    if (cVar1 != '\0') {
      local_38 = 0x4000100;
      local_34 = iVar2;
      __os_log_impl(0,PTR___os_log_default_004412f0,0,"error creating interface iterator: 0x%x\n",
                    &local_38,8);
    }
    (**(code **)(param_5 + 0x10))(param_5,0,0);
  }
  uVar3 = _IOIteratorNext(local_3c);
  _IOObjectRelease(local_3c);
  uVar4 = _objc_alloc(&objc::class_t::AMRLocalUSBInterface);
  uVar4 = (*(code *)PTR__objc_msgSend_00441098)(uVar4,"initWithService:",uVar3);
  _IOObjectRelease(uVar3);
  (**(code **)(param_5 + 0x10))(param_5,uVar4,0);
  (*(code *)PTR__objc_release_004410a0)(uVar4);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

