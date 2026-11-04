// rea decompile_all
// name: AppleTypeCRetimerFirmwareAggregateRequestCreatorBackDeploy::parseOptions:
// address: 0x22fb35
// body: available
// range: 0x22fb35-0x230235 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

char AppleTypeCRetimerFirmwareAggregateRequestCreatorBackDeploy::parseOptions_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  cfstringStruct *pcVar16;
  code *pcVar17;
  
  uVar3 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  puVar1 = PTR__objc_msgSend_00441098;
  uVar4 = (*(code *)PTR__objc_msgSend_00441098)(uVar3,"objectForKeyedSubscript:",&cf_FirmwareData);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSData,"class");
  cVar2 = (*(code *)puVar1)(uVar4,"isKindOfClass:",uVar5);
  if (cVar2 == '\0') {
    cVar2 = '\0';
    (*(code *)PTR__objc_msgSend_00441098)(param_1,"log:",&cf_Unabletolocatefirmwaredata);
    goto LAB_0023018b;
  }
  uVar5 = _objc_alloc(&objc::class_t::FTABFileBackDeploy);
  lVar6 = (*(code *)PTR__objc_msgSend_00441098)(uVar5,"initWithData:",uVar4);
  if (lVar6 == 0) {
    uVar5 = _objc_alloc(&objc::class_t::UARPSuperBinaryBackDeploy);
    lVar7 = (*(code *)PTR__objc_msgSend_00441098)
                      (uVar5,"initWithData:delegate:delegateQueue:",uVar4,0,0);
    if (lVar7 == 0) {
      pcVar16 = &cf_Failedtoparsefirmwaredata;
      goto LAB_0022ff6a;
    }
    uVar5 = _objc_alloc(&objc::class_t::UARPAssetTagBackDeploy);
    uVar5 = (*(code *)puVar1)(uVar5,"initWithString:",&cf_RRKO);
    uVar8 = (*(code *)puVar1)(lVar7,"payloadWith4ccTag:",uVar5);
    lVar9 = _objc_retainAutoreleasedReturnValue(uVar8);
    if (lVar9 == 0) {
      (*(code *)PTR__objc_msgSend_00441098)(param_1,"log:",&cf_Failedtolocaterrkofileinsuperbinary);
      pcVar17 = (code *)PTR__objc_release_004410a0;
    }
    else {
      uVar8 = (*(code *)puVar1)(lVar9,"payloadData");
      uVar15 = _objc_retainAutoreleasedReturnValue(uVar8);
      uVar8 = *(undefined8 *)(param_1 + _rrkoData);
      *(undefined8 *)(param_1 + _rrkoData) = uVar15;
      (*(code *)PTR__objc_release_004410a0)(uVar8);
      uVar8 = _objc_alloc(&objc::class_t::UARPAssetTagBackDeploy);
      uVar8 = (*(code *)puVar1)(uVar8,"initWithString:",&cf_FIRM);
      uVar15 = (*(code *)puVar1)(lVar7,"payloadWith4ccTag:",uVar8);
      lVar10 = _objc_retainAutoreleasedReturnValue(uVar15);
      if (lVar10 == 0) {
        (*(code *)PTR__objc_msgSend_00441098)(param_1,"log:",&cf_FailedtolocateFTABinsuperbinary);
        pcVar17 = (code *)PTR__objc_release_004410a0;
        (*(code *)PTR__objc_release_004410a0)(uVar8);
      }
      else {
        uVar15 = _objc_alloc(&objc::class_t::FTABFileBackDeploy);
        uVar11 = (*(code *)PTR__objc_msgSend_00441098)(lVar10,"payloadData");
        uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
        lVar12 = (*(code *)PTR__objc_msgSend_00441098)(uVar15,"initWithData:",uVar11);
        (*(code *)PTR__objc_release_004410a0)(uVar11);
        if (lVar12 != 0) {
          uVar15 = (*(code *)PTR__objc_msgSend_00441098)(lVar12,"subfileWithTag:",&cf_rkos);
          lVar13 = _objc_retainAutoreleasedReturnValue(uVar15);
          puVar1 = PTR__objc_msgSend_00441098;
          if (lVar13 == 0) {
            (*(code *)PTR__objc_msgSend_00441098)
                      (param_1,"log:",&cf_Failedtolocaterkosfileinsuperbinaryftab);
          }
          else {
            uVar15 = (*(code *)PTR__objc_msgSend_00441098)(lVar13,"data");
            uVar11 = _objc_retainAutoreleasedReturnValue(uVar15);
            uVar15 = *(undefined8 *)(param_1 + _rkosData);
            *(undefined8 *)(param_1 + _rkosData) = uVar11;
            (*(code *)PTR__objc_release_004410a0)(uVar15);
            uVar15 = (*(code *)puVar1)(lVar12,"subfileWithTag:",&cf_cphy);
            lVar14 = _objc_retainAutoreleasedReturnValue(uVar15);
            if (lVar14 == 0) {
              (*(code *)PTR__objc_msgSend_00441098)(param_1,"log:",&cf_Nocphydatafound);
            }
            else {
              uVar15 = (*(code *)PTR__objc_msgSend_00441098)(lVar14,"data");
              uVar11 = _objc_retainAutoreleasedReturnValue(uVar15);
              uVar15 = *(undefined8 *)(param_1 + _cphyData);
              *(undefined8 *)(param_1 + _cphyData) = uVar11;
              (*(code *)PTR__objc_release_004410a0)(uVar15);
            }
            (*(code *)PTR__objc_release_004410a0)(lVar14);
          }
          puVar1 = PTR__objc_release_004410a0;
          (*(code *)PTR__objc_release_004410a0)(lVar13);
          (*(code *)puVar1)(lVar12);
          (*(code *)puVar1)(lVar10);
          (*(code *)puVar1)(uVar8);
          (*(code *)puVar1)(lVar9);
          (*(code *)puVar1)(uVar5);
          (*(code *)puVar1)(lVar7);
          if (lVar13 != 0) goto LAB_0022ffb4;
          cVar2 = '\0';
          goto LAB_00230181;
        }
        (*(code *)PTR__objc_msgSend_00441098)(param_1,"log:",&cf_FailedtoparseFTABinsuperbinary);
        pcVar17 = (code *)PTR__objc_release_004410a0;
        (*(code *)PTR__objc_release_004410a0)(lVar10);
        (*pcVar17)(uVar8);
      }
      (*pcVar17)(lVar9);
    }
    (*pcVar17)(uVar5);
    (*pcVar17)(lVar7);
LAB_0023017d:
    cVar2 = '\0';
  }
  else {
    uVar5 = (*(code *)PTR__objc_msgSend_00441098)(lVar6,"subfileWithTag:",&cf_rrko);
    lVar7 = _objc_retainAutoreleasedReturnValue(uVar5);
    puVar1 = PTR__objc_msgSend_00441098;
    if (lVar7 == 0) {
      pcVar16 = &cf_Failedtolocaterrkofileinftab;
LAB_0022ff6a:
      cVar2 = '\0';
      (*(code *)PTR__objc_msgSend_00441098)(param_1,"log:",pcVar16);
    }
    else {
      uVar5 = (*(code *)PTR__objc_msgSend_00441098)(lVar7,"data");
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar5);
      uVar5 = *(undefined8 *)(param_1 + _rrkoData);
      *(undefined8 *)(param_1 + _rrkoData) = uVar8;
      (*(code *)PTR__objc_release_004410a0)(uVar5);
      uVar5 = (*(code *)puVar1)(lVar6,"subfileWithTag:",&cf_rkos);
      lVar9 = _objc_retainAutoreleasedReturnValue(uVar5);
      if (lVar9 == 0) {
        (*(code *)PTR__objc_msgSend_00441098)(param_1,"log:",&cf_Failedtolocaterkosfileinftab);
        (*(code *)PTR__objc_release_004410a0)(lVar7);
        goto LAB_0023017d;
      }
      uVar5 = (*(code *)puVar1)(lVar9,"data");
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar5);
      uVar5 = *(undefined8 *)(param_1 + _rkosData);
      *(undefined8 *)(param_1 + _rkosData) = uVar8;
      (*(code *)PTR__objc_release_004410a0)(uVar5);
      uVar5 = (*(code *)puVar1)(lVar6,"subfileWithTag:",&cf_cphy);
      lVar10 = _objc_retainAutoreleasedReturnValue(uVar5);
      if (lVar10 == 0) {
        (*(code *)PTR__objc_msgSend_00441098)(param_1,"log:",&cf_Nocphydatafound);
      }
      else {
        uVar5 = (*(code *)PTR__objc_msgSend_00441098)(lVar10,"data");
        uVar8 = _objc_retainAutoreleasedReturnValue(uVar5);
        uVar5 = *(undefined8 *)(param_1 + _cphyData);
        *(undefined8 *)(param_1 + _cphyData) = uVar8;
        (*(code *)PTR__objc_release_004410a0)(uVar5);
      }
      puVar1 = PTR__objc_release_004410a0;
      (*(code *)PTR__objc_release_004410a0)(lVar10);
      (*(code *)puVar1)(lVar9);
      (*(code *)puVar1)(lVar7);
LAB_0022ffb4:
      puVar1 = PTR__objc_msgSend_00441098;
      uVar5 = (*(code *)PTR__objc_msgSend_00441098)(uVar3,"objectForKeyedSubscript:",&cf_DeviceInfo)
      ;
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      uVar8 = (*(code *)puVar1)(&_OBJC_CLASS___NSDictionary,"class");
      cVar2 = (*(code *)puVar1)(uVar5,"isKindOfClass:",uVar8);
      if (cVar2 == '\0') {
        pcVar16 = &cf_Failedtolocatedeviceinfo;
LAB_002300f7:
        cVar2 = '\0';
        (*(code *)PTR__objc_msgSend_00441098)(param_1,"log:",pcVar16);
      }
      else {
        uVar8 = (*(code *)puVar1)(uVar5,"objectForKeyedSubscript:",&cf_InfoArray);
        uVar15 = _objc_retainAutoreleasedReturnValue(uVar8);
        lVar7 = _deviceInfoArray;
        uVar8 = *(undefined8 *)(param_1 + _deviceInfoArray);
        *(undefined8 *)(param_1 + _deviceInfoArray) = uVar15;
        (*(code *)PTR__objc_release_004410a0)(uVar8);
        uVar8 = *(undefined8 *)(param_1 + lVar7);
        uVar15 = (*(code *)puVar1)(&_OBJC_CLASS___NSArray,"class");
        cVar2 = (*(code *)puVar1)(uVar8,"isKindOfClass:",uVar15);
        if (cVar2 == '\0') {
          pcVar16 = &cf_Failedtolocatedeviceinfoarray;
          goto LAB_002300f7;
        }
        uVar8 = (*(code *)PTR__objc_msgSend_00441098)(uVar5,"objectForKeyedSubscript:",&cf_APInfo);
        uVar15 = _objc_retainAutoreleasedReturnValue(uVar8);
        uVar8 = *(undefined8 *)(param_1 + _apParameters);
        *(undefined8 *)(param_1 + _apParameters) = uVar15;
        (*(code *)PTR__objc_release_004410a0)(uVar8);
        cVar2 = '\x01';
      }
      (*(code *)PTR__objc_release_004410a0)(uVar5);
    }
  }
LAB_00230181:
  (*(code *)PTR__objc_release_004410a0)(lVar6);
LAB_0023018b:
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar4);
  (*(code *)puVar1)(uVar3);
  return cVar2;
}

