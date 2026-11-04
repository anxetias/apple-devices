// rea decompile_all
// name: _AMAuthInstallApImg4LocalCreateManifestBody
// address: 0x1a260f
// body: available
// range: 0x1a260f-0x1a2d32 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallApImg4LocalCreateManifestBody(long param_1,long param_2,long *param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  char *pcVar13;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
  local_48 = 0;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == (long *)0x0)) {
    local_38 = 0;
    iVar4 = 3;
    _AMAuthInstallLog(3,"AMAuthInstallApImg4LocalCreateManifestBody","%s DER operation failed");
    lVar6 = 0;
    lVar8 = 0;
    lVar9 = 0;
    lVar10 = 0;
    if (param_3 == (long *)0x0) goto LAB_001a2bf5;
  }
  else {
    uVar11 = 0;
    local_40 = param_3;
    _AMAuthInstallDebugWriteObject(param_1,param_2,&cf_tss_request);
    lVar6 = _DEREncoderCreate(1);
    if (lVar6 == 0) {
LAB_001a2c9a:
      local_38 = 0;
LAB_001a2ca2:
      lVar8 = 0;
      lVar9 = 0;
      lVar10 = 0;
    }
    else {
      uVar7 = _CFGetAllocator(param_1);
      local_38 = _CFNumberCreate(uVar7,9,*(long *)(param_1 + 0x10) + 0x44);
      if (local_38 == 0) goto LAB_001a2c9a;
      iVar4 = _AMAuthInstallApImg4AddInteger32Property(lVar6,&cf_CEPO,local_38);
      if (iVar4 != 0) goto LAB_001a2ca2;
      lVar8 = _CFDictionaryGetValue(param_2,&cf_ApChipID);
      if (lVar8 != 0) {
        lVar9 = _CFGetTypeID(lVar8);
        lVar10 = _CFNumberGetTypeID();
        if ((lVar9 == lVar10) &&
           (iVar4 = _AMAuthInstallApImg4AddInteger32Property(lVar6,&cf_CHIP,lVar8), iVar4 != 0))
        goto LAB_001a2ca2;
      }
      lVar8 = _CFDictionaryGetValue(param_2,&cf_ApBoardID);
      if (lVar8 != 0) {
        lVar9 = _CFGetTypeID(lVar8);
        lVar10 = _CFNumberGetTypeID();
        if ((lVar9 == lVar10) &&
           (iVar4 = _AMAuthInstallApImg4AddInteger32Property(lVar6,&cf_BORD,lVar8), iVar4 != 0))
        goto LAB_001a2ca2;
      }
      lVar8 = _CFDictionaryGetValue(param_2,&cf_ApECID);
      if (lVar8 == 0) {
LAB_001a27a5:
        uVar1 = 0;
      }
      else {
        lVar9 = _CFGetTypeID(lVar8);
        lVar10 = _CFNumberGetTypeID();
        if (lVar9 != lVar10) goto LAB_001a27a5;
        iVar4 = _AMAuthInstallApImg4AddInteger64Property(lVar6,&cf_ECID,lVar8);
        uVar1 = (int)CONCAT71((int7)((ulong)uVar11 >> 8),1);
        if (iVar4 != 0) {
          _AMAuthInstallApImg4LocalCreateManifestBody_cold_1();
          goto LAB_001a2ca2;
        }
      }
      local_4c = uVar1;
      lVar8 = _CFDictionaryGetValue(param_2,&cf_ApSecurityDomain);
      if (lVar8 == 0) {
LAB_001a27f3:
        lVar8 = _CFDictionaryGetValue(param_2,&cf_ApProductionMode);
        if (lVar8 == 0) {
LAB_001a2830:
          uVar11 = 0;
        }
        else {
          lVar9 = _CFGetTypeID(lVar8);
          lVar10 = _CFBooleanGetTypeID();
          if (lVar9 != lVar10) goto LAB_001a2830;
          cVar2 = _CFBooleanGetValue(lVar8);
          uVar11 = 1;
          if (cVar2 == '\0') goto LAB_001a2830;
        }
        iVar5 = _AMAuthInstallApImg4AddBooleanProperty(lVar6,&cf_CPRO,uVar11);
        if (iVar5 != 0) goto LAB_001a2c3a;
        lVar8 = _CFDictionaryGetValue(param_2,&cf_ApSecurityMode);
        if (lVar8 == 0) {
LAB_001a2889:
          uVar11 = 0;
        }
        else {
          lVar9 = _CFGetTypeID(lVar8);
          lVar10 = _CFBooleanGetTypeID();
          if (lVar9 != lVar10) goto LAB_001a2889;
          cVar2 = _CFBooleanGetValue(lVar8);
          uVar11 = 1;
          if (cVar2 == '\0') goto LAB_001a2889;
        }
        iVar5 = _AMAuthInstallApImg4AddBooleanProperty(lVar6,&cf_CSEC,uVar11);
        if (iVar5 != 0) goto LAB_001a2c3a;
        lVar8 = _CFDictionaryGetValue(param_2,&cf_ApLocalNonceHash);
        if (lVar8 != 0) {
          lVar9 = _CFGetTypeID(lVar8);
          lVar10 = _CFDataGetTypeID();
          if ((lVar9 == lVar10) &&
             (iVar5 = _AMAuthInstallApImg4AddDataProperty(lVar6,&cf_LNCH,lVar8), iVar5 != 0))
          goto LAB_001a2c3a;
        }
        lVar8 = _CFDictionaryGetValue(param_2,&cf_ApNonce);
        if (lVar8 != 0) {
          lVar9 = _CFGetTypeID(lVar8);
          lVar10 = _CFDataGetTypeID();
          if ((lVar9 == lVar10) &&
             (iVar5 = _AMAuthInstallApImg4AddDataProperty(lVar6,&cf_BNCH,lVar8), iVar5 != 0))
          goto LAB_001a2c3a;
        }
        lVar8 = _CFDictionaryGetValue(param_2,&cf_SepNonce);
        if (lVar8 != 0) {
          lVar9 = _CFGetTypeID(lVar8);
          lVar10 = _CFDataGetTypeID();
          if ((lVar9 == lVar10) &&
             (iVar5 = _AMAuthInstallApImg4AddDataProperty(lVar6,&cf_snon,lVar8), iVar5 != 0))
          goto LAB_001a2c3a;
        }
        lVar8 = _CFDictionaryGetValue(param_2,&cf_ApAllowMixAndMatch);
        if (lVar8 != 0) {
          lVar9 = _CFGetTypeID(lVar8);
          lVar10 = _CFBooleanGetTypeID();
          if (((lVar9 == lVar10) && (cVar2 = _CFBooleanGetValue(lVar8), cVar2 != '\0')) &&
             (iVar5 = _AMAuthInstallApImg4AddBooleanProperty(lVar6,&cf_AMNM,1), iVar5 != 0))
          goto LAB_001a2c3a;
        }
        lVar8 = _CFDictionaryGetValue(param_2,&cf_Ap_NextStageIM4MHash);
        if (lVar8 != 0) {
          lVar9 = _CFGetTypeID(lVar8);
          lVar10 = _CFDataGetTypeID();
          if ((lVar9 == lVar10) &&
             (iVar5 = _AMAuthInstallApImg4AddDataProperty(lVar6,&cf_nsih,lVar8), iVar5 != 0))
          goto LAB_001a2c3a;
        }
        lVar8 = _CFDictionaryGetValue(param_2,&cf_Ap_RecoveryOSPolicyNonceHash);
        if (lVar8 != 0) {
          lVar9 = _CFGetTypeID(lVar8);
          lVar10 = _CFDataGetTypeID();
          if ((lVar9 == lVar10) &&
             (iVar5 = _AMAuthInstallApImg4AddDataProperty(lVar6,&cf_ronh,lVar8), iVar5 != 0))
          goto LAB_001a2c3a;
        }
        lVar8 = _CFDictionaryGetValue(param_2,&cf_Ap_VolumeUUID);
        if (lVar8 != 0) {
          lVar9 = _CFGetTypeID(lVar8);
          lVar10 = _CFDataGetTypeID();
          if ((lVar9 == lVar10) &&
             (iVar5 = _AMAuthInstallApImg4AddDataProperty(lVar6,&cf_vuid,lVar8), iVar5 != 0))
          goto LAB_001a2c3a;
        }
        lVar8 = _CFDictionaryGetValue(param_2,&cf_Ap_LocalBoot);
        if (lVar8 != 0) {
          lVar9 = _CFGetTypeID(lVar8);
          lVar10 = _CFBooleanGetTypeID();
          if (lVar9 == lVar10) {
            uVar3 = _CFBooleanGetValue(lVar8);
            iVar5 = _AMAuthInstallApImg4AddBooleanProperty(lVar6,&cf_lobo,uVar3);
            if (iVar5 != 0) goto LAB_001a2c3a;
          }
        }
        lVar8 = _DEREncoderCreate(1);
        iVar5 = 2;
        if (lVar8 == 0) goto LAB_001a2c3a;
        iVar4 = _AMAuthInstallApImg4AddDictionaryProperty(lVar6,lVar8,&cf_MANP);
        if (iVar4 != 0) {
          lVar9 = 0;
          lVar10 = 0;
          goto LAB_001a2ce7;
        }
        uVar11 = _CFGetAllocator(param_1);
        iVar4 = _AMAuthInstallApImg4LocalAddImages(uVar11,param_2,lVar8);
        if (iVar4 != 0) {
          pcVar13 = "failed to add img objects to the manifest body";
          lVar9 = 0;
LAB_001a2ccf:
          lVar10 = 0;
          _AMAuthInstallLog(3,"AMAuthInstallApImg4LocalCreateManifestBody",pcVar13);
          goto LAB_001a2ce7;
        }
        lVar10 = 0;
        lVar9 = _DEREncoderCreate(0);
        if (lVar9 == 0) {
          lVar9 = 0;
          iVar4 = iVar5;
          goto LAB_001a2ce7;
        }
        iVar4 = _AMAuthInstallApImg4AddDictionaryProperty(lVar8,lVar9,&cf_MANB);
        if (iVar4 != 0) {
          pcVar13 = "failed to create the signed section";
          goto LAB_001a2ccf;
        }
        lVar10 = _DEREncoderCreate(0);
        if (lVar10 == 0) goto LAB_001a2c40;
        iVar4 = _DEREncoderAddSetFromEncoder(lVar9,lVar10);
        if (iVar4 != 0) goto LAB_001a2ce7;
        iVar4 = _DEREncoderCreateEncodedBuffer(lVar10,&local_48,&local_50);
        if (iVar4 == 0) {
          uVar11 = _CFGetAllocator(param_1);
          lVar12 = _CFDataCreate(uVar11,local_48,local_50);
          *local_40 = lVar12;
          iVar4 = 0;
          if (lVar12 == 0) {
            _AMAuthInstallApImg4LocalCreateManifestBody_cold_2();
            iVar4 = 2;
          }
          goto LAB_001a2bf5;
        }
      }
      else {
        lVar9 = _CFGetTypeID(lVar8);
        lVar10 = _CFNumberGetTypeID();
        if ((lVar9 != lVar10) ||
           (iVar5 = _AMAuthInstallApImg4AddInteger32Property(lVar6,&cf_SDOM,lVar8), iVar5 == 0))
        goto LAB_001a27f3;
LAB_001a2c3a:
        lVar8 = 0;
        lVar9 = 0;
LAB_001a2c40:
        lVar10 = 0;
        iVar4 = iVar5;
LAB_001a2ce7:
        if ((char)local_4c != '\0') goto LAB_001a2bf5;
      }
    }
    _AMAuthInstallLog(3,"AMAuthInstallApImg4LocalCreateManifestBody","%s DER operation failed");
    param_3 = local_40;
  }
  _SafeRelease(*param_3);
  iVar4 = 3;
LAB_001a2bf5:
  _SafeFree(local_48);
  _DEREncoderDestroy(lVar6);
  _DEREncoderDestroy(lVar8);
  _DEREncoderDestroy(lVar9);
  _DEREncoderDestroy(lVar10);
  _SafeRelease(local_38);
  return iVar4;
}

