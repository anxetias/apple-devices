// rea decompile_all
// name: UARPSuperBinaryBackDeploy::generatePersonalizedSuperBinaryInternal:
// address: 0x22d334
// body: available
// range: 0x22d334-0x22d8f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x22d8f4 to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

ID UARPSuperBinaryBackDeploy::generatePersonalizedSuperBinaryInternal_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  size_t sVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  ID IVar17;
  int *piVar18;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  int local_6c;
  undefined4 local_68;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 *local_50;
  char *local_48;
  ulong local_40;
  undefined8 local_38;
  
  uVar7 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  puVar1 = PTR__objc_msgSend_00441098;
  local_38 = uVar7;
  uVar8 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSMutableData,"new");
  uVar9 = (*(code *)puVar1)(&_OBJC_CLASS___NSMutableData,"new");
  local_58 = (*(code *)puVar1)(&_OBJC_CLASS___NSMutableData,"new");
  local_8c = *(undefined4 *)(param_1 + 0x28);
  local_88 = 0x2c;
  local_80 = (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x30),"majorVersion");
  local_7c = (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x30),"minorVersion");
  local_78 = (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x30),"releaseVersion");
  local_74 = (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x30),"buildVersion");
  local_68 = 0x2c;
  iVar4 = (*(code *)puVar1)(uVar7,"count");
  iVar4 = iVar4 * 0x28;
  local_64 = iVar4;
  uVar7 = (*(code *)puVar1)(param_1,"personalizedMetaData");
  uVar10 = _objc_retainAutoreleasedReturnValue(uVar7);
  local_70 = iVar4 + 0x2c;
  local_60 = uVar9;
  local_6c = (*(code *)puVar1)(uVar10,"length");
  iVar4 = iVar4 + local_6c + 0x2c;
  local_84 = iVar4;
  (*(code *)puVar1)(uVar9,"appendData:",uVar10);
  uVar7 = local_38;
  sVar11 = (*(code *)puVar1)(local_38,"count");
  puVar12 = _calloc(sVar11,0x28);
  lVar13 = (*(code *)puVar1)(uVar7,"count");
  local_50 = puVar12;
  if (lVar13 != 0) {
    local_40 = 0;
    do {
      puVar1 = PTR__objc_msgSend_00441098;
      local_48 = (char *)CONCAT44(local_48._4_4_,iVar4);
      uVar7 = (*(code *)PTR__objc_msgSend_00441098)(local_38,"objectAtIndex:",local_40);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      uVar9 = (*(code *)puVar1)(uVar7,"personalizedMetaData");
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      *puVar12 = 0x28;
      uVar14 = (*(code *)puVar1)(uVar7,"tag");
      uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
      uVar3 = (*(code *)puVar1)(uVar14,"char1");
      *(undefined1 *)(puVar12 + 1) = uVar3;
      (*(code *)PTR__objc_release_004410a0)(uVar14);
      uVar14 = (*(code *)puVar1)(uVar7,"tag");
      uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
      uVar3 = (*(code *)puVar1)(uVar14,"char2");
      *(undefined1 *)((long)puVar12 + 5) = uVar3;
      (*(code *)PTR__objc_release_004410a0)(uVar14);
      uVar14 = (*(code *)puVar1)(uVar7,"tag");
      uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
      uVar3 = (*(code *)puVar1)(uVar14,"char3");
      *(undefined1 *)((long)puVar12 + 6) = uVar3;
      (*(code *)PTR__objc_release_004410a0)(uVar14);
      uVar14 = (*(code *)puVar1)(uVar7,"tag");
      uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
      uVar3 = (*(code *)puVar1)(uVar14,"char4");
      *(undefined1 *)((long)puVar12 + 7) = uVar3;
      (*(code *)PTR__objc_release_004410a0)(uVar14);
      uVar14 = (*(code *)puVar1)(uVar7,"version");
      uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
      uVar5 = (*(code *)puVar1)(uVar14,"majorVersion");
      puVar12[2] = uVar5;
      (*(code *)PTR__objc_release_004410a0)(uVar14);
      uVar14 = (*(code *)puVar1)(uVar7,"version");
      uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
      uVar5 = (*(code *)puVar1)(uVar14,"minorVersion");
      puVar12[3] = uVar5;
      (*(code *)PTR__objc_release_004410a0)(uVar14);
      uVar14 = (*(code *)puVar1)(uVar7,"version");
      uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
      uVar5 = (*(code *)puVar1)(uVar14,"releaseVersion");
      puVar12[4] = uVar5;
      (*(code *)PTR__objc_release_004410a0)(uVar14);
      uVar14 = (*(code *)puVar1)(uVar7,"version");
      uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
      uVar5 = (*(code *)puVar1)(uVar14,"buildVersion");
      puVar12[5] = uVar5;
      iVar4 = (int)local_48;
      (*(code *)PTR__objc_release_004410a0)(uVar14);
      puVar12[6] = iVar4;
      iVar6 = (*(code *)puVar1)(uVar9,"length");
      puVar12[7] = iVar6;
      iVar4 = iVar4 + iVar6;
      (*(code *)puVar1)(local_60,"appendData:",uVar9);
      puVar2 = PTR__objc_release_004410a0;
      (*(code *)PTR__objc_release_004410a0)(uVar9);
      (*(code *)puVar2)(uVar7);
      local_40 = local_40 + 1;
      uVar15 = (*(code *)puVar1)(local_38,"count");
      puVar12 = puVar12 + 10;
    } while (local_40 < uVar15);
  }
  uVar7 = local_38;
  lVar13 = (*(code *)PTR__objc_msgSend_00441098)(local_38,"count");
  if (lVar13 != 0) {
    local_48 = "personalizedData";
    piVar18 = local_50 + 9;
    uVar15 = 0;
    do {
      puVar1 = PTR__objc_msgSend_00441098;
      uVar7 = (*(code *)PTR__objc_msgSend_00441098)(uVar7,"objectAtIndex:",uVar15);
      local_40 = _objc_retainAutoreleasedReturnValue(uVar7);
      uVar7 = (*(code *)puVar1)(local_40,local_48);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      piVar18[-1] = iVar4;
      iVar6 = (*(code *)puVar1)(uVar7,"length");
      *piVar18 = iVar6;
      iVar4 = iVar4 + iVar6;
      (*(code *)puVar1)(local_58,"appendData:",uVar7);
      puVar1 = PTR__objc_release_004410a0;
      (*(code *)PTR__objc_release_004410a0)(uVar7);
      uVar7 = local_38;
      (*(code *)puVar1)(local_40);
      uVar15 = uVar15 + 1;
      uVar16 = (*(code *)PTR__objc_msgSend_00441098)(uVar7,"count");
      piVar18 = piVar18 + 10;
    } while (uVar15 < uVar16);
  }
  local_84 = iVar4;
  _uarpSuperBinaryHeaderEndianSwap(&local_8c,&local_8c);
  puVar1 = PTR__objc_msgSend_00441098;
  (*(code *)PTR__objc_msgSend_00441098)(uVar8,"appendBytes:length:",&local_8c,0x2c);
  lVar13 = (*(code *)puVar1)(uVar7,"count");
  if (lVar13 != 0) {
    uVar15 = 0;
    puVar12 = local_50;
    do {
      _uarpPayloadHeaderEndianSwap(puVar12,puVar12);
      (*(code *)puVar1)(uVar8,"appendBytes:length:",puVar12,0x28);
      uVar15 = uVar15 + 1;
      uVar16 = (*(code *)puVar1)(uVar7,"count");
      puVar12 = puVar12 + 10;
    } while (uVar15 < uVar16);
  }
  uVar9 = local_60;
  (*(code *)puVar1)(uVar8,"appendData:",local_60);
  uVar14 = local_58;
  (*(code *)puVar1)(uVar8,"appendData:",local_58);
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar10);
  (*(code *)puVar1)(uVar14);
  (*(code *)puVar1)(uVar9);
  (*(code *)puVar1)(uVar7);
  IVar17 = _objc_autoreleaseReturnValue(uVar8);
  return IVar17;
}

