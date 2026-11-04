// rea decompile_all
// name: _deviceWithService
// address: 0x31a76
// body: available
// range: 0x31a76-0x31e06 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * _deviceWithService(ulong param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  void *pvVar9;
  undefined4 local_40 [2];
  long local_38;
  
  if ((int)param_1 == 0) {
    return (undefined4 *)0x0;
  }
  iVar3 = _IOObjectConformsTo(param_1,"TADFUDevice");
  if (iVar3 == 0) {
    return (undefined4 *)0x0;
  }
  puVar4 = _calloc(1,0x40);
  if (puVar4 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar4 = 3;
  *(undefined **)(puVar4 + 0xc) = &_taDFUDeviceFunctions;
  piVar5 = _calloc(1,0x18);
  if (piVar5 == (int *)0x0) goto LAB_00031dde;
  *(int **)(puVar4 + 10) = piVar5;
  *piVar5 = (int)param_1;
  _IOObjectRetain(param_1 & 0xffffffff);
  local_38 = 0;
  piVar5 = *(int **)(puVar4 + 10);
  if (piVar5 == (int *)0x0) goto LAB_00031dde;
  if ((((*piVar5 == 0) ||
       (iVar3 = _IORegistryEntryCreateCFProperties
                          (*piVar5,&local_38,*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0),
       iVar3 != 0)) || (lVar6 = _CFDictionaryGetValue(local_38,&cf_idVendor), lVar6 == 0)) ||
     (cVar2 = _CFNumberGetValue(lVar6,0xb,local_40), cVar2 == '\0')) {
LAB_00031e02:
    bVar1 = false;
  }
  else {
    *(undefined2 *)(puVar4 + 9) = (undefined2)local_40[0];
    lVar6 = _CFDictionaryGetValue(local_38,&cf_idProduct);
    if ((lVar6 == 0) || (cVar2 = _CFNumberGetValue(lVar6,0xb,local_40), cVar2 == '\0'))
    goto LAB_00031e02;
    *(undefined2 *)((long)puVar4 + 0x26) = (undefined2)local_40[0];
    lVar6 = _CFDictionaryGetValue(local_38,&cf_locationID);
    if ((lVar6 == 0) || (cVar2 = _CFNumberGetValue(lVar6,0xb,local_40), cVar2 == '\0'))
    goto LAB_00031e02;
    puVar4[8] = local_40[0];
    lVar6 = _CFDictionaryGetValue(local_38,&cf_Nonce);
    if (lVar6 != 0) {
      uVar7 = _CFStringGetLength(lVar6);
      lVar8 = _CFStringGetMaximumSizeForEncoding(uVar7,0x8000100);
      pvVar9 = _malloc(lVar8 + 1U);
      if (pvVar9 != (void *)0x0) {
        cVar2 = _CFStringGetCString(lVar6,pvVar9,lVar8 + 1U,0x8000100);
        if (cVar2 != '\0') {
          *(void **)(piVar5 + 2) = pvVar9;
          goto LAB_00031c38;
        }
LAB_00031dfa:
        _free(pvVar9);
      }
      goto LAB_00031e02;
    }
LAB_00031c38:
    lVar6 = _CFDictionaryGetValue(local_38,&cf_Epoch);
    if (lVar6 != 0) {
      uVar7 = _CFStringGetLength(lVar6);
      lVar8 = _CFStringGetMaximumSizeForEncoding(uVar7,0x8000100);
      pvVar9 = _malloc(lVar8 + 1U);
      if (pvVar9 == (void *)0x0) goto LAB_00031e02;
      cVar2 = _CFStringGetCString(lVar6,pvVar9,lVar8 + 1U,0x8000100);
      if (cVar2 == '\0') goto LAB_00031dfa;
      *(void **)(piVar5 + 4) = pvVar9;
    }
    lVar6 = _CFDictionaryGetValue(local_38,&cf_kUSBVendorString);
    if (lVar6 != 0) {
      uVar7 = _CFStringGetLength(lVar6);
      lVar8 = _CFStringGetMaximumSizeForEncoding(uVar7,0x8000100);
      pvVar9 = _malloc(lVar8 + 1U);
      if (pvVar9 == (void *)0x0) goto LAB_00031e02;
      cVar2 = _CFStringGetCString(lVar6,pvVar9,lVar8 + 1U,0x8000100);
      if (cVar2 == '\0') goto LAB_00031dfa;
      *(void **)(puVar4 + 2) = pvVar9;
    }
    lVar6 = _CFDictionaryGetValue(local_38,&cf_kUSBProductString);
    if (lVar6 != 0) {
      uVar7 = _CFStringGetLength(lVar6);
      lVar8 = _CFStringGetMaximumSizeForEncoding(uVar7,0x8000100);
      pvVar9 = _malloc(lVar8 + 1U);
      if (pvVar9 == (void *)0x0) goto LAB_00031e02;
      cVar2 = _CFStringGetCString(lVar6,pvVar9,lVar8 + 1U,0x8000100);
      if (cVar2 == '\0') goto LAB_00031dfa;
      *(void **)(puVar4 + 4) = pvVar9;
    }
    lVar6 = _CFDictionaryGetValue(local_38,&cf_kUSBSerialNumberString);
    bVar1 = true;
    if (lVar6 != 0) {
      uVar7 = _CFStringGetLength(lVar6);
      lVar8 = _CFStringGetMaximumSizeForEncoding(uVar7,0x8000100);
      pvVar9 = _malloc(lVar8 + 1U);
      if (pvVar9 == (void *)0x0) goto LAB_00031e02;
      cVar2 = _CFStringGetCString(lVar6,pvVar9,lVar8 + 1U,0x8000100);
      if (cVar2 == '\0') goto LAB_00031dfa;
      *(void **)(puVar4 + 6) = pvVar9;
    }
  }
  if (local_38 != 0) {
    _CFRelease();
  }
  if (bVar1) {
    return puVar4;
  }
LAB_00031dde:
  _libDFU_release(puVar4);
  return (undefined4 *)0x0;
}

