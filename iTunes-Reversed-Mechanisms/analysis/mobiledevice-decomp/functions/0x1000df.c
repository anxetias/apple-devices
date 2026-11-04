// rea decompile_all
// name: __copyAuthInstallPreflightProperty
// address: 0x1000df
// body: available
// range: 0x1000df-0x1006cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __copyAuthInstallPreflightProperty(undefined8 param_1,ulong param_2,code *param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long local_70;
  long local_50;
  undefined4 local_34;
  
  local_34 = 0;
  uVar2 = _CFGetAllocator();
  lVar3 = _CFDictionaryCreateMutable
                    (uVar2,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar3 == 0) {
    _AMRLog(3,&cf_failedtoallocateapPreflightInfo);
    return 0;
  }
  lVar12 = (param_2 & 0xffffffff) * 0x40;
  lVar4 = (*param_3)(param_1,*(undefined8 *)(&_devicePropertyKeyTable + lVar12),&local_34);
  if (lVar4 == 0) {
    uVar2 = _AMDErrorString(local_34);
    lVar12 = 0;
    _AMRLog(3,&cf____Failedtoretrieve_____fromdevice_____s__,
            &cf_devicedoesn_tsupporthardwareModelStrquery,0,&cf_HardwareModel,0,uVar2);
    goto LAB_001006b7;
  }
  lVar5 = _CFGetTypeID(lVar4);
  lVar6 = _CFStringGetTypeID();
  if (lVar5 != lVar6) {
    uVar2 = _AMDErrorString(local_34);
    lVar12 = 0;
    _AMRLog(3,&cf____Failedtoretrieve_____fromdevice_____s__,
            &cf_devicedoesn_tsupporthardwareModelStrquery,0,&cf_HardwareModel,lVar4,uVar2);
    _CFRelease(lVar3);
    lVar3 = lVar4;
    goto LAB_001006b7;
  }
  _CFDictionarySetValue(lVar3,&cf_HardwareModel,lVar4);
  lVar5 = (*param_3)(param_1,&cf_UniqueChipID,&local_34);
  if (lVar5 == 0) {
LAB_001002ca:
    uVar2 = _AMDErrorString(local_34);
    local_50 = 0;
    _AMRLog(3,&cf____Failedtoretrieve_____fromdevice_____s__,
            &cf_devicedoesn_tsupportUniqueChipIDquery,0,&cf_UniqueChipID,lVar5,uVar2);
LAB_0010030b:
    _CFRelease(lVar3);
    _CFRelease(lVar4);
    local_70 = 0;
    lVar9 = 0;
    lVar11 = 0;
    lVar3 = 0;
    lVar8 = 0;
    lVar13 = 0;
    lVar4 = 0;
    lVar10 = 0;
    lVar12 = 0;
    lVar6 = 0;
    lVar7 = 0;
    if (lVar5 != 0) goto LAB_0010064c;
  }
  else {
    lVar6 = _CFGetTypeID(lVar5);
    lVar7 = _CFNumberGetTypeID();
    if (lVar6 != lVar7) goto LAB_001002ca;
    _CFDictionarySetValue(lVar3,&cf_ECID,lVar5);
    local_50 = (*param_3)(param_1,*(undefined8 *)(&DAT_00447538 + lVar12),0);
    if (local_50 != 0) {
      lVar12 = _CFGetTypeID(local_50);
      lVar6 = _CFBooleanGetTypeID();
      if (lVar12 == lVar6) goto LAB_0010038a;
      _AMRLog(3,&cf_productionModeisofanunexpectedtype);
      goto LAB_0010030b;
    }
    _AMRLog(3,&cf_devicedoesn_tsupportProductionSOCquery_assumingproduction);
    local_50 = _CFRetain(*(undefined8 *)PTR__kCFBooleanTrue_00441110);
LAB_0010038a:
    _CFDictionarySetValue(lVar3,&cf_ApProductionMode,local_50);
    local_70 = (*param_3)(param_1,&cf_Image4CryptoHashMethod,&local_34);
    if (local_70 == 0) {
LAB_001003e6:
      uVar2 = _AMDErrorString(local_34);
      _AMRLog(3,&cf____Failedtoretrieve_____fromdevice_____s__,&cf___,0,&cf_Image4CryptoHashMethod,
              local_70,uVar2);
    }
    else {
      lVar12 = _CFGetTypeID(local_70);
      lVar6 = _CFStringGetTypeID();
      if (lVar12 != lVar6) goto LAB_001003e6;
      _CFDictionarySetValue(lVar3,&cf_ApImg4DigestType,local_70);
    }
    lVar6 = (*param_3)(param_1,&cf_Image4Supported,&local_34);
    if (lVar6 == 0) {
LAB_00100472:
      uVar2 = _AMDErrorString(local_34);
      _AMRLog(3,&cf____Failedtoretrieve_____fromdevice_____s__,&cf___,0,&cf_Image4Supported,lVar6,
              uVar2);
    }
    else {
      lVar12 = _CFGetTypeID(lVar6);
      lVar7 = _CFBooleanGetTypeID();
      if ((lVar12 != lVar7) || (cVar1 = _CFBooleanGetValue(lVar6), cVar1 == '\0'))
      goto LAB_00100472;
      _CFDictionarySetValue(lVar3,&cf_ApSupportsImg4,lVar6);
    }
    lVar11 = (*param_3)(param_1,&cf_CertificateSecurityMode,&local_34);
    if (lVar11 == 0) {
LAB_001004f2:
      uVar2 = _AMDErrorString(local_34);
      _AMRLog(3,&cf____Failedtoretrieve_____fromdevice_____s__,&cf___,0,&cf_CertificateSecurityMode,
              lVar11,uVar2);
    }
    else {
      lVar12 = _CFGetTypeID(lVar11);
      lVar7 = _CFBooleanGetTypeID();
      if (lVar12 != lVar7) goto LAB_001004f2;
      _CFDictionarySetValue(lVar3,&cf_ApSecurityMode,lVar11);
    }
    lVar9 = (*param_3)(param_1,&cf_EffectiveSecurityModeAp,&local_34);
    if (lVar9 == 0) {
LAB_00100572:
      uVar2 = _AMDErrorString(local_34);
      _AMRLog(3,&cf____Failedtoretrieve_____fromdevice_____s__,&cf___,0,&cf_EffectiveSecurityModeAp,
              lVar9,uVar2);
    }
    else {
      lVar12 = _CFGetTypeID(lVar9);
      lVar7 = _CFBooleanGetTypeID();
      if (lVar12 != lVar7) goto LAB_00100572;
      _CFDictionarySetValue(lVar3,&cf_ApEffectiveSecurityMode,lVar9);
    }
    lVar7 = (*param_3)(param_1,&cf_EffectiveProductionStatusAp,&local_34);
    if (lVar7 == 0) {
LAB_001005f8:
      uVar2 = _AMDErrorString(local_34);
      _AMRLog(3,&cf____Failedtoretrieve_____fromdevice_____s__,&cf___,0,
              &cf_EffectiveProductionStatusAp,lVar7,uVar2);
    }
    else {
      lVar12 = _CFGetTypeID(lVar7);
      lVar13 = _CFBooleanGetTypeID();
      if (lVar12 != lVar13) goto LAB_001005f8;
      _CFDictionarySetValue(lVar3,&cf_ApEffectiveProductionMode,lVar7);
    }
    _CFRelease(lVar4);
LAB_0010064c:
    lVar8 = lVar7;
    lVar10 = lVar6;
    _CFRelease(lVar5);
    lVar12 = lVar3;
    lVar4 = lVar11;
    lVar13 = lVar9;
  }
  if (local_50 != 0) {
    _CFRelease();
  }
  if (lVar10 != 0) {
    _CFRelease(lVar10);
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  if (lVar13 != 0) {
    _CFRelease(lVar13);
  }
  if (lVar8 != 0) {
    _CFRelease(lVar8);
  }
  lVar3 = local_70;
  if (local_70 == 0) {
    return lVar12;
  }
LAB_001006b7:
  _CFRelease(lVar3);
  return lVar12;
}

