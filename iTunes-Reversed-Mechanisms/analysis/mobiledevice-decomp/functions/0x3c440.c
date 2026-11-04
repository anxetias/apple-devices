// rea decompile_all
// name: IXRemoteInstallResult::isEqual:
// address: 0x3c440
// body: available
// range: 0x3c440-0x3c76f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

char IXRemoteInstallResult::isEqual_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  ID IVar4;
  undefined8 uVar5;
  ID IVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  IVar4 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  puVar1 = PTR__objc_msgSend_00441098;
  if (IVar4 == param_1) {
    cVar3 = '\x01';
    goto LAB_0003c728;
  }
  uVar5 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"class");
  cVar3 = (*(code *)puVar1)(IVar4,"isKindOfClass:",uVar5);
  puVar2 = PTR__objc_retain_004410a8;
  if (cVar3 == '\0') {
    cVar3 = '\0';
    goto LAB_0003c728;
  }
  uVar5 = (*(code *)PTR__objc_retain_004410a8)(IVar4);
  IVar6 = dbUUID(param_1,"dbUUID");
  uVar7 = _objc_retainAutoreleasedReturnValue(IVar6);
  uVar8 = (*(code *)puVar1)(uVar5,"dbUUID");
  uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
  lVar9 = (*(code *)puVar2)(uVar7);
  lVar10 = (*(code *)puVar2)(uVar8);
  if ((lVar9 != 0) == (lVar10 != 0)) {
    if (lVar10 != 0 && lVar9 != 0) {
      cVar3 = (*(code *)PTR__objc_msgSend_00441098)(lVar9,"isEqual:",lVar10);
      if (cVar3 == '\0') goto LAB_0003c6f1;
    }
    puVar1 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(lVar10);
    (*(code *)puVar1)(lVar9);
    (*(code *)puVar1)(lVar10);
    (*(code *)puVar1)(lVar9);
    puVar1 = PTR__objc_msgSend_00441098;
    IVar6 = dbSequenceNumber(param_1,"dbSequenceNumber");
    uVar7 = _objc_retainAutoreleasedReturnValue(IVar6);
    uVar8 = (*(code *)puVar1)(uVar5,"dbSequenceNumber");
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    puVar1 = PTR__objc_retain_004410a8;
    lVar9 = (*(code *)PTR__objc_retain_004410a8)(uVar7);
    lVar10 = (*(code *)puVar1)(uVar8);
    if ((lVar9 != 0) != (lVar10 != 0)) goto LAB_0003c6f1;
    if (lVar10 != 0 && lVar9 != 0) {
      cVar3 = (*(code *)PTR__objc_msgSend_00441098)(lVar9,"isEqual:",lVar10);
      if (cVar3 == '\0') goto LAB_0003c6f1;
    }
    puVar1 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(lVar10);
    (*(code *)puVar1)(lVar9);
    (*(code *)puVar1)(lVar10);
    (*(code *)puVar1)(lVar9);
    puVar1 = PTR__objc_msgSend_00441098;
    IVar6 = URLOfInstalledApp(param_1,"URLOfInstalledApp");
    uVar7 = _objc_retainAutoreleasedReturnValue(IVar6);
    uVar8 = (*(code *)puVar1)(uVar5,"URLOfInstalledApp");
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    puVar1 = PTR__objc_retain_004410a8;
    lVar9 = (*(code *)PTR__objc_retain_004410a8)(uVar7);
    lVar10 = (*(code *)puVar1)(uVar8);
    if ((lVar9 != 0) != (lVar10 != 0)) goto LAB_0003c6f1;
    if (lVar10 != 0 && lVar9 != 0) {
      cVar3 = (*(code *)PTR__objc_msgSend_00441098)(lVar9,"isEqual:",lVar10);
      if (cVar3 == '\0') goto LAB_0003c6f1;
    }
    puVar1 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(lVar10);
    (*(code *)puVar1)(lVar9);
    (*(code *)puVar1)(lVar10);
    (*(code *)puVar1)(lVar9);
    puVar1 = PTR__objc_msgSend_00441098;
    IVar6 = persistentIdentifier(param_1,"persistentIdentifier");
    uVar7 = _objc_retainAutoreleasedReturnValue(IVar6);
    uVar8 = (*(code *)puVar1)(uVar5,"persistentIdentifier");
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    puVar1 = PTR__objc_retain_004410a8;
    lVar9 = (*(code *)PTR__objc_retain_004410a8)(uVar7);
    lVar10 = (*(code *)puVar1)(uVar8);
    if ((lVar9 != 0) != (lVar10 != 0)) goto LAB_0003c6f1;
    if (lVar10 != 0 && lVar9 != 0) {
      cVar3 = (*(code *)PTR__objc_msgSend_00441098)(lVar9,"isEqual:",lVar10);
      if (cVar3 == '\0') goto LAB_0003c6f1;
    }
    cVar3 = '\x01';
  }
  else {
LAB_0003c6f1:
    cVar3 = '\0';
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(lVar10);
  (*(code *)puVar1)(lVar9);
  (*(code *)puVar1)(lVar10);
  (*(code *)puVar1)(lVar9);
  (*(code *)puVar1)(uVar5);
LAB_0003c728:
  (*(code *)PTR__objc_release_004410a0)(IVar4);
  return cVar3;
}

