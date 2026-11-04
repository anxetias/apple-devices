// rea decompile_all
// name: _AMAuthInstallBasebandCopyAllPersonalizedComponents
// address: 0x27bcd8
// body: available
// range: 0x27bcd8-0x27c54c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallBasebandCopyAllPersonalizedComponents
              (long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
              undefined8 param_6,undefined8 *param_7)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  char *pcVar9;
  undefined8 *puVar10;
  char local_60;
  undefined7 uStack_5f;
  undefined8 local_58;
  undefined8 local_50;
  char local_41;
  undefined8 local_40;
  long local_38;
  
  local_58 = 0;
  local_50 = 0;
  local_40 = param_2;
  local_38 = param_5;
  _SavageSafeRetain(param_4);
  _SavageSafeRetain(param_5);
  iVar2 = 1;
  if ((param_1 != 0) && (*(long *)(param_1 + 0x30) != 0)) {
    uVar5 = _CFGetAllocator(param_1);
    lVar6 = _CFDictionaryCreateMutable
                      (uVar5,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar6 != 0) {
      iVar2 = *(int *)(*(long *)(param_1 + 0x30) + 4);
      if ((iVar2 - 0x5eU < 0xb) && ((0x685U >> (iVar2 - 0x5eU & 0x1f) & 1) != 0)) {
        iVar2 = _USBMuxStartWSA(param_1,local_40,lVar6);
LAB_0027be79:
        if (iVar2 != 0) goto LAB_0027c36a;
      }
      else {
        if ((iVar2 == 0x3b0e1) || (iVar2 == 0x7f0e1)) {
LAB_0027be37:
          iVar2 = _AMAuthInstallBasebandMAV10FuseIfNecessary(param_1,local_40,lVar6);
          goto LAB_0027be79;
        }
        if ((iVar2 == 0xe50e1) ||
           ((((iVar2 == 0x1440e1 || (iVar2 == 0x1720e1)) || (iVar2 == 0x19f0e1)) ||
            ((iVar2 == 0x1fe0e1 || (iVar2 == 0x2af0e1)))))) {
          iVar2 = _AMAuthInstallBasebandMAV10FuseIfNecessary(param_1,local_40,lVar6);
          goto LAB_0027be79;
        }
        if (iVar2 == 0x4600e1) {
          iVar2 = _AMAuthInstallBasebandMAV10FuseIfNecessary(param_1,local_40,lVar6);
          goto LAB_0027be79;
        }
        if (iVar2 == 0x9540e1) goto LAB_0027be37;
        if (iVar2 == 0x5a00e1) {
          iVar2 = _AMAuthInstallBasebandMAV10FuseIfNecessary(param_1,local_40,lVar6);
          goto LAB_0027be79;
        }
        if ((iVar2 == 0x6f10e1) || (iVar2 == 0x6f20e1)) {
          iVar2 = _AMAuthInstallBasebandMAV10FuseIfNecessary(param_1,local_40,lVar6);
          goto LAB_0027be79;
        }
        if ((iVar2 == 0x7f50e1) || (iVar2 == 0x9210e1)) goto LAB_0027be37;
        if (iVar2 == 0x5000e1) {
          iVar2 = _AMAuthInstallBasebandMAV10FuseIfNecessary(param_1,local_40,lVar6);
          goto LAB_0027be79;
        }
      }
      lVar8 = *(long *)(param_1 + 0x30);
      if (*(long *)(lVar8 + 0x10) == 0) {
LAB_0027c358:
        uVar5 = _CFRetain(lVar6);
        *param_7 = uVar5;
        iVar2 = 0;
        goto LAB_0027c36a;
      }
      if (param_4 == 0) {
        iVar2 = _AMAuthInstallBasebandCreateMeasurements(param_1,local_40,param_3,&local_60);
        if (iVar2 != 0) {
          param_4 = 0;
          goto LAB_0027c36a;
        }
        param_4 = CONCAT71(uStack_5f,local_60);
        lVar8 = *(long *)(param_1 + 0x30);
        if (lVar8 != 0) goto LAB_0027be99;
      }
      else {
LAB_0027be99:
        if (*(int *)(lVar8 + 4) == 0x68) {
          cVar1 = _AMAuthInstallIsICE19BBGoldCertIDECDSA(*(undefined4 *)(lVar8 + 8));
          puVar7 = &_kAMAuthInstallTagBbPsi2PartialDigest;
          if (cVar1 == '\0') {
            puVar7 = (undefined8 *)PTR__kAMAuthInstallTagBbPsiPartialDigest_00441040;
          }
          puVar10 = &_kAMAuthInstallTagBbRestorePsi2PartialDigest;
          if (cVar1 == '\0') {
            puVar10 = (undefined8 *)PTR__kAMAuthInstallTagBbRestorePsiPartialDigest_00441048;
          }
          _CFDictionaryRemoveValue(param_4,*puVar7);
          _CFDictionaryRemoveValue(param_4,*puVar10);
        }
      }
      if (local_38 == 0) {
        iVar2 = _AMAuthInstallBasebandLocalSigningEnabled(param_1,&local_60);
        if (iVar2 == 0) {
          iVar2 = _AMAuthInstallBasebandCreateServerRequestDictionary
                            (param_1,param_4,param_6,&local_50,local_40);
          if (iVar2 != 0) goto LAB_0027c36a;
          if (local_60 != '\0') {
            _AMAuthInstallLog(6,"AMAuthInstallBasebandCopyAllPersonalizedComponents",
                              "this certid specifies local signing");
            iVar2 = *(int *)(*(long *)(param_1 + 0x30) + 4);
            if ((iVar2 - 0x5eU < 0xb) && ((0x685U >> (iVar2 - 0x5eU & 0x1f) & 1) != 0)) {
              iVar2 = _AMAuthInstallBasebandRembrandtHandleLocalSigningRequest
                                (param_1,local_50,&local_38);
            }
            else if ((((iVar2 == 0x3b0e1) ||
                      (((iVar2 == 0x7f0e1 || (iVar2 == 0xe50e1)) || (iVar2 == 0x1440e1)))) ||
                     (((iVar2 == 0x1720e1 || (iVar2 == 0x19f0e1)) || (iVar2 == 0x1fe0e1)))) ||
                    (iVar2 == 0x2af0e1)) {
LAB_0027c3ae:
              iVar2 = _AMAuthInstallBasebandMAV10HandleLocalSigningRequest
                                (param_1,local_50,&local_38);
            }
            else if (iVar2 == 0x4600e1) {
              iVar2 = _AMAuthInstallBasebandMAV10HandleLocalSigningRequest
                                (param_1,local_50,&local_38);
            }
            else {
              if (iVar2 == 0x9540e1) goto LAB_0027c3ae;
              if (iVar2 == 0x5a00e1) {
                iVar2 = _AMAuthInstallBasebandMAV10HandleLocalSigningRequest
                                  (param_1,local_50,&local_38);
              }
              else if ((iVar2 == 0x6f10e1) || (iVar2 == 0x6f20e1)) {
                iVar2 = _AMAuthInstallBasebandMAV10HandleLocalSigningRequest
                                  (param_1,local_50,&local_38);
              }
              else {
                if ((iVar2 == 0x7f50e1) || (iVar2 == 0x9210e1)) goto LAB_0027c3ae;
                if (iVar2 != 0x5000e1) {
                  iVar2 = 0xe;
                  _AMAuthInstallLog(3,"AMAuthInstallBasebandCopyAllPersonalizedComponents",
                                    "chipID: 0x%x is not supported");
                  goto LAB_0027c36a;
                }
                iVar2 = _AMAuthInstallBasebandMAV10HandleLocalSigningRequest
                                  (param_1,local_50,&local_38);
              }
            }
            if ((iVar2 != 0) ||
               (iVar2 = _AMAuthInstallBasebandVinylLocalHandleRequest(param_1,local_50,&local_38),
               iVar2 != 0)) goto LAB_0027c36a;
            if (local_38 != 0) goto LAB_0027beeb;
            goto LAB_0027bf4b;
          }
          iVar2 = _AMAuthInstallBasebandSupportsServerSigning(param_1,&local_41);
          if (iVar2 == 0) {
            if (local_41 != '\x01') {
              _AMAuthInstallLog(3,"AMAuthInstallBasebandCopyAllPersonalizedComponents",
                                "This chipid/certid does not support local or server personalization."
                               );
              iVar2 = 0xd;
              goto LAB_0027c36a;
            }
            iVar2 = _AMAuthInstallRequestSendSync(param_1,local_50,&local_38);
            if (iVar2 != 0) goto LAB_0027c36a;
            if (local_38 == 0) {
              iVar2 = 0xe;
              goto LAB_0027c36a;
            }
            goto LAB_0027beeb;
          }
        }
        iVar2 = 1;
        goto LAB_0027c36a;
      }
LAB_0027beeb:
      lVar8 = _CFDictionaryGetValue(local_38,&cf_BBTicket);
      if (lVar8 != 0) {
        uVar5 = _CFDataGetBytePtr(lVar8);
        uVar3 = _CFDataGetLength(lVar8);
        _AMAuthInstallLogDumpMemory
                  (8,"AMAuthInstallBasebandCopyAllPersonalizedComponents","BBTicket:",uVar5,uVar3);
      }
LAB_0027bf4b:
      iVar2 = *(int *)(*(long *)(param_1 + 0x30) + 4);
      uVar4 = iVar2 - 0x50;
      if (uVar4 < 0x19) {
        if ((0x1a14000U >> (uVar4 & 0x1f) & 1) == 0) {
          if (uVar4 != 0) goto LAB_0027bf5e;
          iVar2 = _AMAuthInstallBasebandICE3StitchFirmware(param_1,local_40,local_38,lVar6);
        }
        else {
          iVar2 = _AMAuthInstallBasebandRembrandtStitchFirmware(param_1,local_40,local_38,lVar6);
        }
LAB_0027c2a5:
        if (iVar2 != 0) goto LAB_0027c260;
        if (((*(long *)(*(long *)(param_1 + 0x30) + 0x18) != 0) &&
            (*(int *)(*(long *)(param_1 + 0x30) + 4) != 0x50)) &&
           (lVar8 = _CFDictionaryGetValue(local_38,&cf_BBTicket), lVar8 != 0)) {
          _CFDictionaryAddValue(lVar6,&cf_bbticket_der,lVar8);
        }
        local_58 = _CFRetain(local_38);
        if (((param_3 == 0) || (*(long *)(*(long *)(param_1 + 0x30) + 0xa0) == 0)) ||
           (iVar2 = _AMAuthInstallVinylPersonalizeFirmware(param_1,param_3,0,&local_58,param_6),
           iVar2 == 0)) {
          iVar2 = _AMAuthInstallBasebandVinylStitchFirmware(param_1,local_40,param_3,local_58,lVar6)
          ;
          if (iVar2 == 0) {
            iVar2 = _AMAuthInstallProvisioningProvisionIfNecessary(param_1,lVar6);
            if (iVar2 == 0) goto LAB_0027c358;
            pcVar9 = "AMAuthInstallProvisioningProvisionIfNecessary failed";
          }
          else {
            pcVar9 = "failed to stitch vinyl fw";
          }
        }
        else {
          pcVar9 = "failed to personalize vinyl fw";
        }
      }
      else {
LAB_0027bf5e:
        if ((iVar2 == 0x3b0e1) || (iVar2 == 0x7f0e1)) {
LAB_0027c016:
          iVar2 = _AMAuthInstallBasebandMAV10StitchFirmware(param_1,local_40,local_38,lVar6);
          goto LAB_0027c2a5;
        }
        if (iVar2 == 0xe50e1) {
          iVar2 = _AMAuthInstallBasebandMAV20StitchFirmware(param_1,local_40,local_38,lVar6);
          goto LAB_0027c2a5;
        }
        if (iVar2 == 0x1440e1) {
LAB_0027c068:
          iVar2 = _AMAuthInstallBasebandMAV21StitchFirmware(param_1,local_40,local_38,lVar6);
          goto LAB_0027c2a5;
        }
        if (iVar2 == 0x1720e1) {
LAB_0027c050:
          iVar2 = _AMAuthInstallBasebandMAV22StitchFirmware(param_1,local_40,local_38,lVar6);
          goto LAB_0027c2a5;
        }
        if (iVar2 == 0x19f0e1) goto LAB_0027c068;
        if ((iVar2 == 0x1fe0e1) || (iVar2 == 0x2af0e1)) goto LAB_0027c050;
        if (iVar2 == 0x4600e1) {
          iVar2 = _AMAuthInstallBasebandJ2StitchFirmware(param_1,local_40,local_38,lVar6);
          goto LAB_0027c2a5;
        }
        if (iVar2 == 0x5000e1) {
          iVar2 = _AMAuthInstallBasebandN92StitchFirmware(param_1,local_40,local_38,lVar6);
          goto LAB_0027c2a5;
        }
        if (iVar2 == 0x5a00e1) {
          iVar2 = _AMAuthInstallBasebandN94StitchFirmware(param_1,local_40,local_38,lVar6);
          goto LAB_0027c2a5;
        }
        if ((iVar2 == 0x6f10e1) || (iVar2 == 0x6f20e1)) {
          iVar2 = _AMAuthInstallBasebandN41StitchFirmware(param_1,local_40,local_38,lVar6);
          goto LAB_0027c2a5;
        }
        if (((iVar2 == 0x7f50e1) || (iVar2 == 0x9210e1)) || (iVar2 == 0x9540e1)) goto LAB_0027c016;
        _AMAuthInstallLog(3,"AMAuthInstallBasebandCopyAllPersonalizedComponents",
                          "chipID: 0x%x is not supported");
        iVar2 = 0xd;
LAB_0027c260:
        pcVar9 = "failed to stitch bbfw";
      }
      _AMAuthInstallLog(3,"AMAuthInstallBasebandCopyAllPersonalizedComponents",pcVar9);
      goto LAB_0027c36a;
    }
    iVar2 = 2;
  }
  lVar6 = 0;
LAB_0027c36a:
  _SafeRelease(param_4);
  _SafeRelease(local_58);
  _SafeRelease(local_38);
  _SafeRelease(local_50);
  _SafeRelease(lVar6);
  _SafeRelease(0);
  return iVar2;
}

