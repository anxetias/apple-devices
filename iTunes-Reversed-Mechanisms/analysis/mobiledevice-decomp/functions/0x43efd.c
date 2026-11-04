// rea decompile_all
// name: __CreateErrorV
// address: 0x43efd
// body: available
// range: 0x43efd-0x44113 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4410f to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __CreateErrorV(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined *puVar9;
  
  puVar9 = PTR__objc_retain_004410a8;
  uVar2 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  lVar3 = (*(code *)puVar9)(param_5);
  puVar4 = (undefined *)(*(code *)puVar9)(param_6);
  lVar5 = (*(code *)puVar9)(param_7);
  if (puVar4 == (undefined *)0x0) {
    puVar9 = &_OBJC_CLASS___NSMutableDictionary;
    pcVar8 = "new";
  }
  else {
    pcVar8 = "mutableCopy";
    puVar9 = puVar4;
  }
  uVar6 = (*(code *)PTR__objc_msgSend_00441098)(puVar9,pcVar8);
  uVar7 = _IXStringForIXError(uVar2,param_4);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)PTR__objc_msgSend_00441098)
            (uVar6,"setObject:forKeyedSubscript:",uVar7,
             *(undefined8 *)PTR__NSLocalizedFailureReasonErrorKey_00441068);
  (*(code *)PTR__objc_release_004410a0)(uVar7);
  if (lVar5 != 0) {
    uVar7 = _objc_alloc(&_OBJC_CLASS___NSString);
    puVar9 = PTR__objc_msgSend_00441098;
    uVar7 = (*(code *)PTR__objc_msgSend_00441098)(uVar7,"initWithFormat:arguments:",lVar5,param_8);
    (*(code *)puVar9)(uVar6,"setObject:forKeyedSubscript:",uVar7,
                      *(undefined8 *)PTR__NSLocalizedDescriptionKey_00441060);
    (*(code *)PTR__objc_release_004410a0)(uVar7);
  }
  if (lVar3 != 0) {
    (*(code *)PTR__objc_msgSend_00441098)
              (uVar6,"setObject:forKeyedSubscript:",lVar3,
               *(undefined8 *)PTR__NSUnderlyingErrorKey_00441088);
  }
  puVar9 = PTR__objc_msgSend_00441098;
  uVar7 = (*(code *)PTR__objc_msgSend_00441098)
                    (&_OBJC_CLASS___NSString,"stringWithUTF8String:",param_1);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)puVar9)(uVar6,"setObject:forKeyedSubscript:",uVar7,&cf_FunctionName);
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar7);
  uVar7 = (*(code *)puVar9)(&_OBJC_CLASS___NSNumber,"numberWithInt:",param_2);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)puVar9)(uVar6,"setObject:forKeyedSubscript:",uVar7,&cf_SourceFileLine);
  (*(code *)puVar1)(uVar7);
  uVar7 = (*(code *)puVar9)(&_OBJC_CLASS___NSError,"errorWithDomain:code:userInfo:",uVar2,param_4,
                            uVar6);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)puVar1)(uVar6);
  (*(code *)puVar1)(lVar5);
  (*(code *)puVar1)(puVar4);
  (*(code *)puVar1)(lVar3);
  (*(code *)puVar1)(uVar2);
  _objc_autoreleaseReturnValue(uVar7);
  return;
}

