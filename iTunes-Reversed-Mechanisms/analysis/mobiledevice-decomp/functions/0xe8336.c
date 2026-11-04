// rea decompile_all
// name: RamrodHostMessagePlist::initWithPropertyList:error:
// address: 0xe8336
// body: available
// range: 0xe8336-0xe8487 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

ID RamrodHostMessagePlist::initWithPropertyList_error_
             (ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  long lVar1;
  undefined *puVar2;
  ID *pIVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ID IVar9;
  objc_super local_58;
  undefined8 local_48;
  ID *local_40;
  undefined8 local_38;
  
  uVar4 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  local_58.super_class = &objc::class_t::RamrodHostMessagePlist;
  local_58.receiver = param_1;
  IVar5 = _objc_msgSendSuper2(&local_58,"init");
  if (IVar5 != 0) {
    local_38 = _objc_autoreleasePoolPush();
    uVar6 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
    puVar2 = PTR__objc_msgSend_00441098;
    local_40 = param_4;
    uVar7 = (*(code *)PTR__objc_msgSend_00441098)(uVar6,"initWithCapacity:",4);
    uVar6 = *(undefined8 *)(IVar5 + _chunks);
    *(undefined8 *)(IVar5 + _chunks) = uVar7;
    (*(code *)PTR__objc_release_004410a0)(uVar6);
    local_48 = 0;
    uVar6 = (*(code *)puVar2)(&_OBJC_CLASS___NSPropertyListSerialization,
                              "writePropertyList:toStream:format:options:error:",uVar4,IVar5,200,0,
                              &local_48);
    lVar8 = (*(code *)PTR__objc_retain_004410a8)(local_48);
    pIVar3 = local_40;
    lVar1 = _length;
    *(undefined8 *)(IVar5 + _length) = uVar6;
    _objc_autoreleasePoolPop(local_38);
    if (lVar8 != 0 && pIVar3 != (ID *)0x0) {
      IVar9 = _objc_retainAutorelease(lVar8);
      *pIVar3 = IVar9;
    }
    lVar1 = *(long *)(IVar5 + lVar1);
    (*(code *)PTR__objc_release_004410a0)(lVar8);
    if (lVar1 == 0) {
      IVar9 = 0;
      goto LAB_000e8463;
    }
  }
  IVar9 = (*(code *)PTR__objc_retain_004410a8)(IVar5);
LAB_000e8463:
  puVar2 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar4);
  (*(code *)puVar2)(IVar5);
  return IVar9;
}

