// rea decompile_all
// name: _AMAuthInstallBasebandCreateMeasurements
// address: 0x27c54d
// body: available
// range: 0x27c54d-0x27c8bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallBasebandCreateMeasurements
              (long param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  void *pvVar5;
  char *pcVar6;
  undefined8 local_40;
  int local_38;
  char local_31;
  
  local_38 = 0;
  uVar4 = _CFGetAllocator();
  uVar4 = _CFDictionaryCreateMutable
                    (uVar4,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  local_40 = uVar4;
  if ((*(long *)(param_1 + 0x30) == 0) ||
     (iVar3 = *(int *)(*(long *)(param_1 + 0x30) + 4), iVar3 == 0)) {
    iVar3 = _AMAuthInstallBasebandReadChipIDFromBbfw(param_2,&local_38);
    if (iVar3 == 0) {
      if (local_38 == 0) {
        _AMAuthInstallLog(3,"AMAuthInstallBasebandCreateMeasurements",
                          "chipid 0 read from Info.plist!");
        iVar3 = 0xe;
        goto LAB_0027c808;
      }
      pcVar6 = "Using ChipID 0x%08X from Info.plist to measure";
      iVar3 = local_38;
    }
    else {
      cVar1 = _AMAuthInstallBasebandICE3FirmwareSupported(param_2);
      if (cVar1 == '\0') {
        pcVar6 = "Using default ChipID 0x%08X to measure";
        iVar3 = 0x5000e1;
      }
      else {
        pcVar6 = "Using detected ICE3 ChipID 0x%08X to measure";
        iVar3 = 0x50;
      }
    }
    _AMAuthInstallLog(5,"AMAuthInstallBasebandCreateMeasurements",pcVar6,iVar3);
    pvVar5 = _calloc(1,0xb0);
    if (pvVar5 == (void *)0x0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
      iVar3 = 2;
      goto LAB_0027c808;
    }
    ___bzero(pvVar5,0xb0);
    *(void **)(param_1 + 0x30) = pvVar5;
    *(int *)((long)pvVar5 + 4) = iVar3;
  }
  else {
    _AMAuthInstallLog(5,"AMAuthInstallBasebandCreateMeasurements",
                      "Using set ChipID 0x%08X to measure",iVar3);
  }
  uVar2 = iVar3 - 0x50;
  if (uVar2 < 0x19) {
    if ((0x1a14000U >> (uVar2 & 0x1f) & 1) == 0) {
      if (uVar2 != 0) goto LAB_0027c5d5;
      iVar3 = _AMAuthInstallBasebandICE3MeasureFirmware(param_1,param_2,uVar4);
    }
    else {
      iVar3 = _AMAuthInstallBasebandRembrandtMeasureFirmware(param_1,param_2,uVar4);
    }
  }
  else {
LAB_0027c5d5:
    if ((iVar3 == 0x3b0e1) || (iVar3 == 0x7f0e1)) {
LAB_0027c69d:
      iVar3 = _AMAuthInstallBasebandMAV10MeasureFirmware(param_1,param_2,uVar4);
    }
    else if ((iVar3 == 0xe50e1) ||
            ((((iVar3 == 0x1440e1 || (iVar3 == 0x1720e1)) || (iVar3 == 0x19f0e1)) ||
             ((iVar3 == 0x1fe0e1 || (iVar3 == 0x2af0e1)))))) {
      iVar3 = _AMAuthInstallBasebandMAV20MeasureFirmware(param_1,param_2,uVar4);
    }
    else if (iVar3 == 0x4600e1) {
      iVar3 = _AMAuthInstallBasebandJ2MeasureFirmware(param_1,param_2,uVar4);
    }
    else if (iVar3 == 0x5000e1) {
      iVar3 = _AMAuthInstallBasebandN92MeasureFirmware(param_1,param_2,uVar4);
    }
    else if (iVar3 == 0x5a00e1) {
      iVar3 = _AMAuthInstallBasebandN94MeasureFirmware(param_1,param_2,uVar4);
    }
    else {
      if ((iVar3 != 0x6f10e1) && (iVar3 != 0x6f20e1)) {
        if ((iVar3 != 0x7f50e1) && ((iVar3 != 0x9210e1 && (iVar3 != 0x9540e1)))) {
          _AMAuthInstallLog(3,"AMAuthInstallBasebandCreateMeasurements",
                            "unrecognized chipid: 0x%08X",iVar3);
          iVar3 = 0xd;
          goto LAB_0027c808;
        }
        goto LAB_0027c69d;
      }
      iVar3 = _AMAuthInstallBasebandN41MeasureFirmware(param_1,param_2,uVar4);
    }
  }
  if (iVar3 != 0) goto LAB_0027c808;
  local_31 = '\0';
  if (param_3 == 0) {
    iVar3 = _AMAuthInstallBasebandVinylCreateMeasurements(param_1,param_2,uVar4);
LAB_0027c7ed:
    if (iVar3 != 0) goto LAB_0027c808;
  }
  else {
    iVar3 = _AMAuthInstallVinylIsLegacyChipId(param_1,&local_31);
    if ((iVar3 == 0) && (local_31 != '\0')) {
      iVar3 = _AMAuthInstallVinylCreateMeasurements(param_1,param_3,&local_40,0);
      uVar4 = local_40;
      goto LAB_0027c7ed;
    }
  }
  uVar4 = _CFRetain(uVar4);
  *param_4 = uVar4;
  iVar3 = 0;
  uVar4 = local_40;
LAB_0027c808:
  _SafeRelease(uVar4);
  return iVar3;
}

