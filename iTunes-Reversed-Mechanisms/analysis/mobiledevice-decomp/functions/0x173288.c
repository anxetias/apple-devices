// rea decompile_all
// name: AMRManagedDiskImage::mountVolume:
// address: 0x173288
// body: available
// range: 0x173288-0x17341e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x17341a to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

char AMRManagedDiskImage::mountVolume_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  bool bVar9;
  int local_5c [9];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  bVar9 = false;
  lVar4 = _DASessionCreate(0);
  if (lVar4 != 0) {
    uVar5 = _CFRunLoopGetCurrent();
    uVar1 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_00441190;
    _DASessionScheduleWithRunLoop(lVar4,uVar5);
    puVar3 = PTR__objc_msgSend_00441098;
    uVar5 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"UTF8String");
    uVar5 = _DADiskCreateFromBSDName(0,lVar4,uVar5);
    local_5c[5] = 0;
    local_5c[6] = 0;
    local_5c[1] = 0x47bad0;
    local_5c[2] = 0;
    local_5c[3] = 0x47baf0;
    local_5c[4] = 0;
    uVar6 = (*(code *)puVar3)(&_OBJC_CLASS___NSURL,"fileURLWithPath:",
                              *(undefined8 *)(param_1 + 0x10));
    local_5c[0] = 0;
    _DADiskMountWithArguments(uVar5,uVar6,0,_mountDACallback,local_5c,local_5c + 1);
    uVar6 = (*(code *)puVar3)(&_OBJC_CLASS___NSRunLoop,"currentRunLoop");
    if (local_5c[0] == 0) {
      uVar2 = *(undefined8 *)PTR__NSDefaultRunLoopMode_004410c8;
      uVar8 = 0;
      do {
        uVar7 = (*(code *)puVar3)(0,&_OBJC_CLASS___NSDate,"dateWithTimeIntervalSinceNow:");
        (*(code *)puVar3)(uVar6,"runMode:beforeDate:",uVar2,uVar7);
        if (local_5c[0] != 0) break;
        bVar9 = uVar8 < 9;
        uVar8 = uVar8 + 1;
      } while (bVar9);
    }
    uVar6 = _CFRunLoopGetCurrent();
    _DASessionUnscheduleFromRunLoop(lVar4,uVar6,uVar1);
    _CFRelease(uVar5);
    _CFRelease(lVar4);
    bVar9 = local_5c[0] == 1;
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return bVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

