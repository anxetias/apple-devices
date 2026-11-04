// rea decompile_all
// name: _addDeviceToList
// address: 0x30227
// body: available
// range: 0x30227-0x30c1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _addDeviceToList(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  char cVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  ushort local_38;
  undefined2 uStack_36;
  undefined4 uStack_34;
  
  pcVar11 = "YES";
  pcVar10 = "YES";
  if (param_1 == 0) {
    pcVar10 = "NO";
  }
  pcVar4 = "YES";
  if (param_2 == 0) {
    pcVar4 = "NO";
  }
  pcVar9 = "YES";
  if (param_3 == (undefined8 *)0x0) {
    pcVar9 = "NO";
  }
  __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s key %s value %s context %s.",
                    "addDeviceToList",pcVar10,pcVar4,pcVar9);
  puVar2 = PTR___os_log_default_004412f0;
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if (param_3 == (undefined8 *)0x0) {
    return;
  }
  pcVar4 = "YES";
  pcVar10 = "YES";
  __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s interfaceID %llu device %s context %s.",
                    "addDeviceToList",param_1,"YES","YES");
  __os_log_internal(0,puVar2,0,"%s dictionary %s","taDFU_deviceinterfaced_createDFUDevice","YES");
  puVar5 = _calloc(1,0x40);
  if (puVar5 == (undefined4 *)0x0) goto LAB_00030be3;
  puVar6 = _calloc(1,0x28);
  if (puVar6 != (undefined8 *)0x0) {
    pcVar10 = "YES";
    __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s allocated device %s deviceData %s",
                      "taDFU_deviceinterfaced_createDFUDevice","YES","YES",pcVar4);
    *puVar5 = 3;
    *(undefined **)(puVar5 + 0xc) = &_taDFUDeviceFunctions;
    if (PTR__TADFU_Device_Manufacturer_String_00441370 != (undefined *)0x0) {
      uVar1 = *(undefined8 *)PTR__TADFU_Device_Manufacturer_String_00441370;
      uVar8 = _CFDictionaryGetValue(param_2,uVar1);
      lVar7 = _cfstring_to_c_string(uVar8);
      *(long *)(puVar5 + 2) = lVar7;
      pcVar10 = "YES";
      if (lVar7 == 0) {
        pcVar10 = "NO";
      }
      __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s device->_vendorString %@ %s",
                        "taDFU_deviceinterfaced_createDFUDevice",uVar1,pcVar10);
      pcVar9 = *(char **)(puVar5 + 2);
      if (pcVar9 != (char *)0x0) {
        __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s %@ device->_vendorString %s",
                          "taDFU_deviceinterfaced_createDFUDevice",uVar1,pcVar9);
        pcVar10 = pcVar9;
      }
    }
    if (PTR__TADFU_Device_Product_String_00441398 != (undefined *)0x0) {
      uVar1 = *(undefined8 *)PTR__TADFU_Device_Product_String_00441398;
      uVar8 = _CFDictionaryGetValue(param_2,uVar1);
      lVar7 = _cfstring_to_c_string(uVar8);
      *(long *)(puVar5 + 4) = lVar7;
      pcVar10 = "YES";
      if (lVar7 == 0) {
        pcVar10 = "NO";
      }
      __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s device->_productString %@ %s",
                        "taDFU_deviceinterfaced_createDFUDevice",uVar1,pcVar10);
      pcVar9 = *(char **)(puVar5 + 4);
      if (pcVar9 != (char *)0x0) {
        __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s %@ device->_productString %s",
                          "taDFU_deviceinterfaced_createDFUDevice",uVar1,pcVar9);
        pcVar10 = pcVar9;
      }
    }
    if (PTR__TADFU_Device_Serial_Number_String_004413a0 != (undefined *)0x0) {
      uVar1 = *(undefined8 *)PTR__TADFU_Device_Serial_Number_String_004413a0;
      uVar8 = _CFDictionaryGetValue(param_2,uVar1);
      lVar7 = _cfstring_to_c_string(uVar8);
      *(long *)(puVar5 + 6) = lVar7;
      pcVar10 = "YES";
      if (lVar7 == 0) {
        pcVar10 = "NO";
      }
      __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s device->_serialNumberString %@ %s",
                        "taDFU_deviceinterfaced_createDFUDevice",uVar1,pcVar10);
      pcVar9 = *(char **)(puVar5 + 6);
      if (pcVar9 != (char *)0x0) {
        __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s %@ device->_serialNumberString %s",
                          "taDFU_deviceinterfaced_createDFUDevice",uVar1,pcVar9);
        pcVar10 = pcVar9;
      }
    }
    if (PTR__TADFU_Device_LocationID_00441368 != (undefined *)0x0) {
      uVar1 = *(undefined8 *)PTR__TADFU_Device_LocationID_00441368;
      lVar7 = _CFDictionaryGetValue(param_2,uVar1);
      pcVar10 = "YES";
      if (lVar7 == 0) {
        pcVar10 = "NO";
      }
      __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s dictionaryValue %@ %s",
                        "taDFU_deviceinterfaced_createDFUDevice",uVar1,pcVar10);
      if (lVar7 != 0) {
        cVar3 = _CFNumberGetValue(lVar7,3,&local_38);
        if (cVar3 == '\0') goto LAB_00030baf;
        pcVar10 = (char *)(ulong)CONCAT22(uStack_36,local_38);
        __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s %@ locationID %u",
                          "taDFU_deviceinterfaced_createDFUDevice",uVar1,pcVar10);
        puVar5[8] = CONCAT22(uStack_36,local_38);
      }
    }
    if (PTR__TADFU_Device_VendorID_004413a8 != (undefined *)0x0) {
      uVar1 = *(undefined8 *)PTR__TADFU_Device_VendorID_004413a8;
      lVar7 = _CFDictionaryGetValue(param_2,uVar1);
      pcVar10 = "YES";
      if (lVar7 == 0) {
        pcVar10 = "NO";
      }
      __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s dictionaryValue %@ %s",
                        "taDFU_deviceinterfaced_createDFUDevice",uVar1,pcVar10);
      if (lVar7 != 0) {
        cVar3 = _CFNumberGetValue(lVar7,2,&local_38);
        if (cVar3 == '\0') goto LAB_00030baf;
        pcVar10 = (char *)(ulong)local_38;
        __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s %@ vendorID %u",
                          "taDFU_deviceinterfaced_createDFUDevice",uVar1,pcVar10);
        *(ushort *)(puVar5 + 9) = local_38;
      }
    }
    if (PTR__TADFU_Device_ProductID_00441390 != (undefined *)0x0) {
      uVar1 = *(undefined8 *)PTR__TADFU_Device_ProductID_00441390;
      lVar7 = _CFDictionaryGetValue(param_2,uVar1);
      pcVar10 = "YES";
      if (lVar7 == 0) {
        pcVar10 = "NO";
      }
      __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s dictionaryValue %@ %s",
                        "taDFU_deviceinterfaced_createDFUDevice",uVar1,pcVar10);
      if (lVar7 != 0) {
        cVar3 = _CFNumberGetValue(lVar7,2,&local_38);
        if (cVar3 == '\0') goto LAB_00030baf;
        pcVar10 = (char *)(ulong)local_38;
        __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s %@ productID %u",
                          "taDFU_deviceinterfaced_createDFUDevice",uVar1,pcVar10);
        *(ushort *)((long)puVar5 + 0x26) = local_38;
      }
    }
    if (PTR__TADFU_Device_InterfaceID_00441360 != (undefined *)0x0) {
      uVar1 = *(undefined8 *)PTR__TADFU_Device_InterfaceID_00441360;
      lVar7 = _CFDictionaryGetValue(param_2,uVar1);
      pcVar10 = "YES";
      if (lVar7 == 0) {
        pcVar10 = "NO";
      }
      __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s dictionaryValue %@ %s",
                        "taDFU_deviceinterfaced_createDFUDevice",uVar1,pcVar10);
      if (lVar7 != 0) {
        cVar3 = _CFNumberGetValue(lVar7,4,&local_38);
        if (cVar3 == '\0') goto LAB_00030baf;
        pcVar10 = (char *)CONCAT44(uStack_34,CONCAT22(uStack_36,local_38));
        __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s %@ interfaceID %llu",
                          "taDFU_deviceinterfaced_createDFUDevice",uVar1,pcVar10);
        puVar6[4] = CONCAT44(uStack_34,CONCAT22(uStack_36,local_38));
      }
    }
    if (PTR__TADFU_Device_Payload_Base_Address_00441380 != (undefined *)0x0) {
      uVar1 = *(undefined8 *)PTR__TADFU_Device_Payload_Base_Address_00441380;
      lVar7 = _CFDictionaryGetValue(param_2,uVar1);
      pcVar10 = "YES";
      if (lVar7 == 0) {
        pcVar10 = "NO";
      }
      __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s dictionaryValue %@ %s",
                        "taDFU_deviceinterfaced_createDFUDevice",uVar1,pcVar10);
      if (lVar7 != 0) {
        cVar3 = _CFNumberGetValue(lVar7,4,&local_38);
        if (cVar3 == '\0') goto LAB_00030baf;
        pcVar10 = (char *)CONCAT44(uStack_34,CONCAT22(uStack_36,local_38));
        __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s %@ payloadBaseAddress %llu",
                          "taDFU_deviceinterfaced_createDFUDevice",uVar1,pcVar10);
        *puVar6 = CONCAT44(uStack_34,CONCAT22(uStack_36,local_38));
      }
    }
    if (PTR__TADFU_Device_Payload_Capacity_00441388 == (undefined *)0x0) {
LAB_000307fa:
      if (PTR__TADFU_Device_Nonce_String_00441378 != (undefined *)0x0) {
        uVar1 = *(undefined8 *)PTR__TADFU_Device_Nonce_String_00441378;
        uVar8 = _CFDictionaryGetValue(param_2,uVar1);
        lVar7 = _cfstring_to_c_string(uVar8);
        puVar6[2] = lVar7;
        pcVar10 = "YES";
        if (lVar7 == 0) {
          pcVar10 = "NO";
        }
        __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s deviceData->nonceString %@ %s",
                          "taDFU_deviceinterfaced_createDFUDevice",uVar1,pcVar10);
        pcVar4 = (char *)puVar6[2];
        if (pcVar4 != (char *)0x0) {
          __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s %@ deviceData->nonceString %s",
                            "taDFU_deviceinterfaced_createDFUDevice",uVar1,pcVar4);
          pcVar10 = pcVar4;
        }
      }
      if (PTR__TADFU_Device_Epoch_String_00441358 != (undefined *)0x0) {
        uVar1 = *(undefined8 *)PTR__TADFU_Device_Epoch_String_00441358;
        uVar8 = _CFDictionaryGetValue(param_2,uVar1);
        lVar7 = _cfstring_to_c_string(uVar8);
        puVar6[3] = lVar7;
        if (lVar7 == 0) {
          pcVar11 = "NO";
        }
        __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s deviceData->epochString %@ %s",
                          "taDFU_deviceinterfaced_createDFUDevice",uVar1,pcVar11);
        pcVar4 = (char *)puVar6[3];
        pcVar10 = pcVar11;
        if (pcVar4 != (char *)0x0) {
          __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s %@ deviceData->epochString %s",
                            "taDFU_deviceinterfaced_createDFUDevice",uVar1,pcVar4);
          pcVar10 = pcVar4;
        }
      }
      *(undefined8 **)(puVar5 + 10) = puVar6;
      puVar2 = PTR___os_log_default_004412f0;
      __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s finished creating device %s",
                        "taDFU_deviceinterfaced_createDFUDevice","YES",pcVar10);
      __os_log_internal(0,puVar2,0,"%s dfuDevice %s with interfaceID %llu.","addDeviceToList","YES",
                        param_1);
      *(undefined8 *)(puVar5 + 0xe) = *(undefined8 *)*param_3;
      *(undefined4 **)*param_3 = puVar5;
      return;
    }
    uVar1 = *(undefined8 *)PTR__TADFU_Device_Payload_Capacity_00441388;
    lVar7 = _CFDictionaryGetValue(param_2,uVar1);
    pcVar10 = "YES";
    if (lVar7 == 0) {
      pcVar10 = "NO";
    }
    __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s dictionaryValue %@ %s",
                      "taDFU_deviceinterfaced_createDFUDevice",uVar1,pcVar10);
    if (lVar7 == 0) goto LAB_000307fa;
    cVar3 = _CFNumberGetValue(lVar7,3,&local_38);
    if (cVar3 != '\0') {
      pcVar10 = (char *)(ulong)CONCAT22(uStack_36,local_38);
      __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s %@ payloadCapacity %u",
                        "taDFU_deviceinterfaced_createDFUDevice",uVar1,pcVar10);
      *(uint *)(puVar6 + 1) = CONCAT22(uStack_36,local_38);
      goto LAB_000307fa;
    }
  }
LAB_00030baf:
  __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s did not succeed. Releasing device %s",
                    "taDFU_deviceinterfaced_createDFUDevice","YES",pcVar10);
  _libDFU_release(puVar5);
LAB_00030be3:
  __os_log_internal(0,PTR___os_log_default_004412f0,0,"%s dfuDevice %s with interfaceID %llu.",
                    "addDeviceToList","NO",param_1,pcVar4);
  return;
}

