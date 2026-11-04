// rea decompile_all
// name: PSIORegistryEntry::enumeratePlane:options:usingBlock:
// address: 0x32d0f
// body: available
// range: 0x32d0f-0x32e95 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x32e91 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x24 bytes */

void PSIORegistryEntry::enumeratePlane_options_usingBlock_
               (ID param_1,SEL param_2,ID param_3,unsigned_int param_4,ID param_5,undefined4 param_6
               )

{
  undefined *puVar1;
  int iVar2;
  unsigned_int uVar3;
  long lVar4;
  ID IVar5;
  undefined8 uVar6;
  long local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar4 = (*(code *)PTR__objc_retain_004410a8)(param_5);
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  (*(code *)PTR__objc_msgSend_00441098)(param_3,"getCString:maxLength:encoding:",&local_b8,0x80,4);
  local_bc = 0;
  iVar2 = _IORegistryEntryCreateIterator(*(undefined4 *)(param_1 + 8),&local_b8,param_4);
  if (iVar2 == 0) {
    uVar3 = _IOIteratorNext(local_bc);
    puVar1 = PTR__objc_release_004410a0;
    if (uVar3 != 0) {
      do {
        local_c8 = 0;
        IVar5 = entryWithNativeHandle_freeWhenDone_
                          ((ID)&objc::class_t::PSIORegistryEntry,
                           "entryWithNativeHandle:freeWhenDone:",uVar3,'\x01');
        uVar6 = _objc_retainAutoreleasedReturnValue(IVar5);
        (**(code **)(lVar4 + 0x10))(lVar4,uVar6,&local_c8);
        if (local_c8 == 2) {
          _IORegistryIteratorExitEntry(local_bc);
        }
        else if (local_c8 == 1) {
          (*(code *)PTR__objc_release_004410a0)(uVar6);
          break;
        }
        (*(code *)puVar1)(uVar6);
        uVar3 = _IOIteratorNext(local_bc);
      } while (uVar3 != 0);
    }
    _IOObjectRelease(local_bc);
  }
  (*(code *)PTR__objc_release_004410a0)(lVar4);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

