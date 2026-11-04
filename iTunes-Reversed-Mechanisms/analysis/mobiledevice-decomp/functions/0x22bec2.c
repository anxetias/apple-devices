// rea decompile_all
// name: UARPSuperBinaryBackDeploy::preparePayload:
// address: 0x22bec2
// body: available
// range: 0x22bec2-0x22c09b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

char UARPSuperBinaryBackDeploy::preparePayload_(ID param_1,SEL param_2,UARPPayloadHeader2 *param_3)

{
  unsigned_int uVar1;
  unsigned_int uVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 local_38;
  
  uVar5 = _objc_alloc(&objc::class_t::UARPAssetTagBackDeploy);
  puVar3 = PTR__objc_msgSend_00441098;
  uVar5 = (*(code *)PTR__objc_msgSend_00441098)
                    (uVar5,"initWithChar1:char2:char3:char4:",(int)(param_3->field1_0x4).field0_0x0,
                     (int)(param_3->field1_0x4).field1_0x1,(int)(param_3->field1_0x4).field2_0x2,
                     (int)(param_3->field1_0x4).field3_0x3);
  uVar6 = _objc_alloc(&objc::class_t::UARPAssetVersionBackDeploy);
  uVar6 = (*(code *)puVar3)(uVar6,"initWithMajorVersion:minorVersion:releaseVersion:buildVersion:",
                            (param_3->field2_0x8).field0_0x0,(param_3->field2_0x8).field1_0x4,
                            (param_3->field2_0x8).field2_0x8,(param_3->field2_0x8).field3_0xc);
  uVar1 = param_3->field4_0x1c;
  uVar2 = param_3->field3_0x18;
  uVar7 = (*(code *)puVar3)(*(undefined8 *)(param_1 + 0x20),"length");
  if (uVar7 < uVar1 + uVar2) {
    cVar4 = '\0';
    goto LAB_0022c077;
  }
  if (param_3->field4_0x1c == 0) {
    local_38 = 0;
  }
  else {
    uVar8 = (*(code *)PTR__objc_msgSend_00441098)
                      (*(undefined8 *)(param_1 + 0x20),"subdataWithRange:",param_3->field3_0x18);
    local_38 = _objc_retainAutoreleasedReturnValue(uVar8);
  }
  uVar1 = param_3->field6_0x24;
  uVar2 = param_3->field5_0x20;
  uVar7 = (*(code *)PTR__objc_msgSend_00441098)(*(undefined8 *)(param_1 + 0x20),"length");
  if (uVar7 < uVar1 + uVar2) {
    cVar4 = '\0';
  }
  else {
    if (param_3->field6_0x24 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (*(code *)PTR__objc_msgSend_00441098)
                        (*(undefined8 *)(param_1 + 0x20),"subdataWithRange:",param_3->field5_0x20);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    }
    uVar9 = _objc_alloc(&objc::class_t::UARPSuperBinaryPayloadBackDeploy);
    lVar10 = (*(code *)PTR__objc_msgSend_00441098)
                       (uVar9,"initWithData:metaData:tag:version:",uVar8,local_38,uVar5,uVar6);
    if (lVar10 == 0) {
LAB_0022c056:
      cVar4 = '\0';
    }
    else {
      cVar4 = (*(code *)PTR__objc_msgSend_00441098)(lVar10,"expandTLVs");
      if (cVar4 == '\0') goto LAB_0022c056;
      (*(code *)PTR__objc_msgSend_00441098)(*(undefined8 *)(param_1 + 0x50),"addObject:",lVar10);
      cVar4 = '\x01';
    }
    puVar3 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(lVar10);
    (*(code *)puVar3)(uVar8);
  }
  (*(code *)PTR__objc_release_004410a0)(local_38);
LAB_0022c077:
  puVar3 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar6);
  (*(code *)puVar3)(uVar5);
  return cVar4;
}

