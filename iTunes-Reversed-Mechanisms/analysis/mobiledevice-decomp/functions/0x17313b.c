// rea decompile_all
// name: AMRManagedDiskImage::mountVolumeInImage:
// address: 0x17313b
// body: available
// range: 0x17313b-0x173287 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x173283 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

char AMRManagedDiskImage::mountVolumeInImage_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  long local_38;
  
  puVar1 = PTR__objc_msgSend_00441098;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_48 = &cf_IOProviderClass;
  local_40 = &cf_AppleAPFSVolume;
  uVar3 = (*(code *)PTR__objc_msgSend_00441098)
                    (&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",&local_40,
                     &local_48,1);
  local_68 = &cf_IOProviderClass;
  local_58 = &cf_IOMedia;
  local_60 = &cf_Content;
  local_50 = &cf_48465300_0000_11AA_AA11_00306543ECAC;
  uVar4 = (*(code *)puVar1)(&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                            &local_58,&local_68,2);
  lVar5 = (*(code *)puVar1)(param_1,"mediaInImage:matching:",param_3,uVar3);
  if (lVar5 == 0) {
    lVar5 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"mediaInImage:matching:",param_3,uVar4);
    if (lVar5 == 0) {
      uVar3 = (*(code *)PTR__objc_msgSend_00441098)(*(undefined8 *)(param_1 + 8),"absoluteString");
      cVar2 = '\0';
      _AMRSafeLog(3,&cf_FailedtofindanyvolumesinDMG_____BSDname___,uVar3,param_3);
      goto LAB_00173231;
    }
  }
  cVar2 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"mountVolume:",lVar5);
LAB_00173231:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return cVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

