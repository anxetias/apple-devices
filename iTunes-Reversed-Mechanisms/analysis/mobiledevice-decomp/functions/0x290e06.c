// rea decompile_all
// name: _AMAuthInstallFusingProgramRequest
// address: 0x290e06
// body: available
// range: 0x290e06-0x29117c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallFusingProgramRequest(long param_1)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  long local_40;
  long local_38;
  
  iVar2 = 1;
  if (param_1 == 0) {
LAB_002910f0:
    lVar5 = 0;
  }
  else {
    if (*(long *)(param_1 + 0xa0) == 0) {
      pcVar9 = "no fusing server specified";
LAB_002910c4:
      _AMAuthInstallLog(3,"AMAuthInstallFusingProgramRequest",pcVar9);
      goto LAB_002910f0;
    }
    if (*(long *)(param_1 + 0xa8) == 0) {
      pcVar9 = "no fusing profile specified";
      goto LAB_002910c4;
    }
    puVar1 = *(undefined4 **)(param_1 + 0x30);
    local_4c = *puVar1;
    local_44 = puVar1[1];
    local_48 = puVar1[0x18];
    lVar3 = _AMAuthInstallFusingCreateProfileName(param_1);
    if (lVar3 == 0) {
      _AMAuthInstallLog(3,"AMAuthInstallFusingProgramRequest","failed to create fusing profile name"
                       );
      iVar2 = 99;
      goto LAB_002910f0;
    }
    if (*(long *)(param_1 + 0xb0) != 0) {
      _AMAuthInstallLog(6,"AMAuthInstallFusingProgramRequest","fusing program already exists");
      lVar5 = 0;
      lVar7 = 0;
      lVar8 = 0;
      iVar2 = 0;
      lVar3 = 0;
      lVar6 = 0;
      goto LAB_00291067;
    }
    uVar4 = _CFGetAllocator(param_1);
    lVar5 = _CFDictionaryCreateMutable
                      (uVar4,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    iVar2 = 2;
    if (lVar5 == 0) {
      lVar5 = 0;
      lVar7 = 0;
      lVar8 = 0;
      lVar3 = 0;
      lVar6 = 0;
      goto LAB_00291067;
    }
    uVar4 = _CFGetAllocator(param_1);
    local_38 = _CFNumberCreate(uVar4,3,&local_4c);
    if (local_38 != 0) {
      uVar4 = _CFGetAllocator(param_1);
      lVar6 = _CFNumberCreate(uVar4,3,&local_44);
      if (lVar6 == 0) {
        lVar7 = 0;
        lVar8 = 0;
        lVar3 = 0;
        lVar6 = local_38;
        goto LAB_00291067;
      }
      local_40 = lVar6;
      uVar4 = _CFGetAllocator(param_1);
      lVar7 = _CFNumberCreate(uVar4,3,&local_48);
      if (lVar7 == 0) {
        lVar7 = 0;
      }
      else {
        _CFDictionarySetValue(lVar5,&cf_VendorID,local_38);
        _CFDictionarySetValue(lVar5,&cf_ChipID,local_40);
        _CFDictionarySetValue(lVar5,&cf_ProfileName,lVar3);
        _CFDictionarySetValue(lVar5,&cf_FusingStatus,lVar7);
        if ((((local_44 != 0xe50e1) && (local_44 != 0x1440e1)) && (local_44 != 0x1720e1)) &&
           (((local_44 != 0x19f0e1 && (local_44 != 0x2af0e1)) && (local_44 != 0x1fe0e1)))) {
          lVar8 = 0;
LAB_0029100c:
          uVar4 = _CFGetAllocator(param_1);
          iVar2 = _AMAuthInstallFusingProgramRequestInternal
                            (uVar4,*(undefined8 *)(param_1 + 0xa0),lVar5,param_1 + 0xb0,lVar8);
          lVar3 = local_40;
          lVar6 = local_38;
          if (iVar2 == 0) {
            _AMAuthInstallDebugWriteObject
                      (param_1,*(undefined8 *)(param_1 + 0xb0),&cf_fusingprogram,2);
            iVar2 = 0;
            lVar3 = local_40;
            lVar6 = local_38;
          }
          goto LAB_00291067;
        }
        if (*(long *)(param_1 + 0xc0) == 0) {
          pcVar9 = "Failed to get fusing server root CA!";
        }
        else {
          uVar4 = _CFGetAllocator(param_1);
          lVar8 = _CFDictionaryCreateMutable
                            (uVar4,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                             PTR__kCFTypeDictionaryValueCallBacks_004411b8);
          if (lVar8 != 0) {
            _CFDictionarySetValue(lVar8,&cf_TrustedServerCAs,*(undefined8 *)(param_1 + 0xc0));
            goto LAB_0029100c;
          }
          pcVar9 = "Failed to create option Dictionary for SSL connection!";
        }
        _AMAuthInstallLog(3,"AMAuthInstallFusingProgramRequest",pcVar9);
        iVar2 = 99;
      }
      lVar8 = 0;
      lVar3 = local_40;
      lVar6 = local_38;
      goto LAB_00291067;
    }
  }
  lVar7 = 0;
  lVar8 = 0;
  lVar3 = 0;
  lVar6 = 0;
LAB_00291067:
  _SafeRelease(lVar5);
  _SafeRelease(lVar6);
  _SafeRelease(lVar3);
  _SafeRelease(lVar7);
  _SafeRelease(lVar8);
  return iVar2;
}

