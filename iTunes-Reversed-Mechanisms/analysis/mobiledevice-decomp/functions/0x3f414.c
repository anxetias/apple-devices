// rea decompile_all
// name: -[NSURL(InstallCoordinationAdditions)_urlByAppendingPathComponents:lastIsDirectory:]
// address: 0x3f414
// body: available
// range: 0x3f414-0x3f57b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f577 to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __NSURL_InstallCoordinationAdditions__urlByAppendingPathComponents_lastIsDirectory__
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar1 = PTR__objc_retain_004410a8;
  uVar2 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  uVar3 = _objc_autoreleasePoolPush();
  uVar4 = (*(code *)puVar1)(param_1);
  lVar5 = (*(code *)PTR__objc_msgSend_00441098)(uVar2,"count");
  uVar7 = uVar4;
  if (lVar5 != 0) {
    if (lVar5 != 1) {
      lVar8 = 0;
      do {
        puVar1 = PTR__objc_msgSend_00441098;
        uVar4 = (*(code *)PTR__objc_msgSend_00441098)(uVar2,"objectAtIndexedSubscript:",lVar8);
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar4);
        uVar4 = (*(code *)puVar1)(uVar7,"URLByAppendingPathComponent:isDirectory:",uVar6,1);
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
        puVar1 = PTR__objc_release_004410a0;
        (*(code *)PTR__objc_release_004410a0)(uVar7);
        (*(code *)puVar1)(uVar6);
        lVar8 = lVar8 + 1;
        uVar7 = uVar4;
      } while (lVar5 + -1 != lVar8);
    }
    puVar1 = PTR__objc_msgSend_00441098;
    uVar7 = (*(code *)PTR__objc_msgSend_00441098)(uVar2);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar7);
    uVar7 = (*(code *)puVar1)(uVar4,"URLByAppendingPathComponent:isDirectory:",uVar6,(int)param_4);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    puVar1 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(uVar4);
    (*(code *)puVar1)(uVar6);
  }
  uVar7 = (*(code *)PTR__objc_retain_004410a8)(uVar7);
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar7);
  _objc_autoreleasePoolPop(uVar3);
  (*(code *)puVar1)(uVar2);
  _objc_autoreleaseReturnValue(uVar7);
  return;
}

