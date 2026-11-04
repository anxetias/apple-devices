// rea decompile_all
// name: FTABFileBackDeploy::parseFileData
// address: 0x237eed
// body: available
// range: 0x237eed-0x2382b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

char FTABFileBackDeploy::parseFileData(ID param_1,SEL param_2)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  
  puVar4 = PTR__objc_msgSend_00441098;
  if (*(ulong *)(param_1 + 0x38) < 0x30) {
    uVar7 = _os_log_create("com.apple.accessoryupdater.ftab","parsing");
    cVar6 = _os_log_type_enabled(uVar7,0x10);
    if (cVar6 != '\0') {
      __FTABFileBackDeploy_parseFileData__cold_6(uVar7);
    }
  }
  else {
    puVar11 = *(undefined4 **)(param_1 + 0x30);
    plVar1 = (long *)(puVar11 + 8);
    if ((*(long *)(puVar11 + 8) == 0x42415446534f4b52) || (*plVar1 == 0x62617466736f6b72)) {
      uVar7 = (*(code *)PTR__objc_msgSend_00441098)
                        (&_OBJC_CLASS___NSData,"dataWithBytes:length:",plVar1,8);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar7);
      uVar7 = *(undefined8 *)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x50) = uVar8;
      puVar5 = PTR__objc_release_004410a0;
      (*(code *)PTR__objc_release_004410a0)(uVar7);
      *(undefined4 *)(param_1 + 0x28) = *puVar11;
      *(undefined4 *)(param_1 + 0x2c) = puVar11[1];
      uVar7 = (*(code *)puVar4)(&_OBJC_CLASS___NSData,"dataWithBytes:length:",puVar11 + 2,8);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar7);
      uVar7 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x48) = uVar8;
      (*(code *)puVar5)(uVar7);
      iVar12 = puVar11[5];
      if (iVar12 != 0) {
        uVar2 = puVar11[4];
        cVar6 = (*(code *)PTR__objc_msgSend_00441098)
                          (param_1,"fileValidForOffset:length:",(ulong)uVar2,iVar12);
        if (cVar6 == '\0') {
          uVar7 = _os_log_create("com.apple.accessoryupdater.ftab","parsing");
          cVar6 = _os_log_type_enabled(uVar7,0x10);
          if (cVar6 != '\0') {
            __FTABFileBackDeploy_parseFileData__cold_2(uVar7);
          }
          goto LAB_0023828b;
        }
        uVar7 = _objc_alloc(&objc::class_t::FTABSubfileBackDeploy);
        uVar8 = (*(code *)PTR__objc_msgSend_00441098)
                          (uVar7,"initWithTag:dataPointer:dataLength:",&cf_Manifest,
                           (ulong)uVar2 + *(long *)(param_1 + 0x30),iVar12);
        uVar7 = *(undefined8 *)(param_1 + 0x58);
        *(undefined8 *)(param_1 + 0x58) = uVar8;
        (*(code *)PTR__objc_release_004410a0)(uVar7);
      }
      puVar4 = PTR__objc_msgSend_00441098;
      iVar12 = puVar11[10];
      if (iVar12 == 0) {
        return '\x01';
      }
      puVar11 = puVar11 + 0xc;
      iVar13 = 0x30;
      while( true ) {
        cVar6 = (*(code *)puVar4)(param_1,"fileValidForOffset:length:",iVar13,0x10);
        if (cVar6 == '\0') {
          uVar7 = _os_log_create("com.apple.accessoryupdater.ftab","parsing");
          cVar6 = _os_log_type_enabled(uVar7,0x10);
          if (cVar6 != '\0') {
            __FTABFileBackDeploy_parseFileData__cold_5(iVar13,uVar7);
          }
          goto LAB_0023828b;
        }
        uVar10 = (ulong)(uint)puVar11[1];
        uVar3 = puVar11[2];
        cVar6 = (*(code *)puVar4)(param_1,"fileValidForOffset:length:",uVar10,uVar3);
        if (cVar6 == '\0') break;
        uVar7 = _objc_alloc(&_OBJC_CLASS___NSString);
        lVar9 = (*(code *)puVar4)(uVar7,"initWithBytes:length:encoding:",puVar11,4,4);
        if (lVar9 == 0) {
          uVar7 = _os_log_create("com.apple.accessoryupdater.ftab","parsing");
          cVar6 = _os_log_type_enabled(uVar7,0x10);
          if (cVar6 != '\0') {
            __FTABFileBackDeploy_parseFileData__cold_3(puVar11,uVar7);
          }
          goto LAB_0023828b;
        }
        uVar7 = _objc_alloc(&objc::class_t::FTABSubfileBackDeploy);
        uVar7 = (*(code *)puVar4)(uVar7,"initWithTag:dataPointer:dataLength:",lVar9,
                                  *(long *)(param_1 + 0x30) + uVar10,uVar3);
        (*(code *)puVar4)(*(undefined8 *)(param_1 + 0x10),"addObject:",uVar7);
        puVar5 = PTR__objc_release_004410a0;
        puVar11 = puVar11 + 4;
        iVar13 = iVar13 + 0x10;
        (*(code *)PTR__objc_release_004410a0)(uVar7);
        (*(code *)puVar5)(lVar9);
        iVar12 = iVar12 + -1;
        if (iVar12 == 0) {
          return '\x01';
        }
      }
      uVar7 = _os_log_create("com.apple.accessoryupdater.ftab","parsing");
      cVar6 = _os_log_type_enabled(uVar7,0x10);
      if (cVar6 != '\0') {
        __FTABFileBackDeploy_parseFileData__cold_4(uVar10,uVar3,uVar7);
      }
    }
    else {
      uVar7 = _os_log_create("com.apple.accessoryupdater.ftab","parsing");
      cVar6 = _os_log_type_enabled(uVar7,0x10);
      if (cVar6 != '\0') {
        __FTABFileBackDeploy_parseFileData__cold_1(plVar1,puVar11,uVar7);
      }
    }
  }
LAB_0023828b:
  (*(code *)PTR__objc_release_004410a0)(uVar7);
  return '\0';
}

