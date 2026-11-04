// rea decompile_all
// name: __AMAuthInstallApImg4LocalCreateSignedManifest
// address: 0x1a2fbe
// body: available
// range: 0x1a2fbe-0x1a34f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__AMAuthInstallApImg4LocalCreateSignedManifest
          (long param_1,long param_2,long param_3,long param_4,long param_5,long *param_6,
          char param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 local_6c;
  undefined8 local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  local_40 = 0;
  local_50 = 0;
  local_60 = 0;
  local_68 = 0;
  if (((param_1 == 0) || (param_2 == 0)) || (param_6 == (long *)0x0)) {
    lVar9 = 0;
    uVar3 = 3;
    _AMAuthInstallLog(3,"_AMAuthInstallApImg4LocalCreateSignedManifest",
                      "%s failed to create DER file");
    local_48 = 0;
    lVar8 = 0;
    local_38 = 0;
    lVar4 = 0;
    if (param_6 == (long *)0x0) goto LAB_001a31b4;
  }
  else {
    local_58 = param_1;
    local_48 = param_4;
    uVar3 = _CFGetAllocator();
    lVar4 = _CFDataCreateMutable(uVar3,0);
    lVar8 = 0;
    lVar9 = 0;
    lVar7 = 0;
    local_38 = 0;
    if (lVar4 != 0) {
      lVar8 = _AMAuthInstallApImg4LocalCreateEncodedTag(&cf_IM4M);
      if (lVar8 == 0) {
        __AMAuthInstallApImg4LocalCreateSignedManifest_cold_9();
        local_38 = 0;
        lVar8 = 0;
        lVar9 = 0;
        lVar7 = 0;
      }
      else {
        uVar3 = _CFDataGetBytePtr(lVar8);
        local_38 = lVar8;
        uVar5 = _CFDataGetLength(lVar8);
        _CFDataAppendBytes(lVar4,uVar3,uVar5);
        lVar8 = _AMAuthInstallApImg4LocalCreateEncodedVersion(0);
        if (lVar8 == 0) {
          __AMAuthInstallApImg4LocalCreateSignedManifest_cold_8();
          lVar8 = 0;
        }
        else {
          uVar3 = _CFDataGetBytePtr(lVar8);
          uVar5 = _CFDataGetLength(lVar8);
          _CFDataAppendBytes(lVar4,uVar3,uVar5);
          if (param_3 == 0) {
            iVar2 = _AMAuthInstallApImg4LocalCreateManifestBody(local_58,param_2,&local_40);
            if (iVar2 != 0) {
              __AMAuthInstallApImg4LocalCreateSignedManifest_cold_1();
              goto LAB_001a33b0;
            }
            uVar3 = 0;
          }
          else {
            local_40 = _CFRetain(param_3);
            uVar3 = 99;
          }
          if (local_40 == 0) {
            __AMAuthInstallApImg4LocalCreateSignedManifest_cold_7();
          }
          else {
            uVar5 = _CFDataGetBytePtr();
            uVar6 = _CFDataGetLength(local_40);
            _CFDataAppendBytes(lVar4,uVar5,uVar6);
            if (param_7 != '\0') {
              local_48 = 0;
LAB_001a312b:
              lVar9 = _DEREncoderCreate(0);
              if (lVar9 == 0) {
LAB_001a34cc:
                lVar9 = 0;
                lVar7 = local_48;
              }
              else {
                uVar5 = _CFDataGetBytePtr(lVar4);
                uVar1 = _CFDataGetLength(lVar4);
                iVar2 = _DEREncoderAddData(lVar9,0,0x10,uVar5,uVar1,1);
                lVar7 = local_48;
                if ((iVar2 == 0) &&
                   (iVar2 = _DEREncoderCreateEncodedBuffer(lVar9,&local_68,&local_6c),
                   lVar7 = local_48, iVar2 == 0)) {
                  uVar5 = _CFGetAllocator(local_58);
                  lVar7 = _CFDataCreate(uVar5,local_68,local_6c);
                  *param_6 = lVar7;
                  if (lVar7 == 0) {
                    __AMAuthInstallApImg4LocalCreateSignedManifest_cold_3();
                    uVar3 = 2;
                  }
                  goto LAB_001a31b4;
                }
              }
              goto LAB_001a33b4;
            }
            iVar2 = _AMAuthInstallApImg4LocalRegisterKeys(local_58);
            lVar9 = local_58;
            if (iVar2 == 0) {
              if (local_48 == 0) {
                iVar2 = *(int *)(*(long *)(local_58 + 0x10) + 0x70);
                if (iVar2 == 0x180) {
                  uVar3 = *(undefined8 *)(local_58 + 0x188);
                  uVar5 = _CFDataGetBytePtr(local_40);
                  uVar1 = _CFDataGetLength(local_40);
                  iVar2 = _AMAuthInstallCryptoCreateRsaSignature_SHA384
                                    (lVar9,uVar3,uVar5,uVar1,&local_50);
                }
                else if (iVar2 == 0x100) {
                  uVar3 = *(undefined8 *)(local_58 + 0x188);
                  uVar5 = _CFDataGetBytePtr(local_40);
                  uVar1 = _CFDataGetLength(local_40);
                  iVar2 = _AMAuthInstallCryptoCreateRsaSignature_SHA256
                                    (lVar9,uVar3,uVar5,uVar1,&local_50);
                }
                else {
                  if (iVar2 != 1) {
                    _AMAuthInstallLog(3,"_AMAuthInstallApImg4LocalCreateSignedManifest",
                                      "Unsupported digest type: %d");
                    goto LAB_001a33b0;
                  }
                  uVar3 = *(undefined8 *)(local_58 + 0x188);
                  uVar5 = _CFDataGetBytePtr(local_40);
                  uVar1 = _CFDataGetLength(local_40);
                  iVar2 = _AMAuthInstallCryptoCreateRsaSignature(lVar9,uVar3,uVar5,uVar1,&local_50);
                }
                if (iVar2 != 0) goto LAB_001a33b0;
              }
              else {
                local_50 = _CFRetain();
              }
              if (local_50 == 0) {
                __AMAuthInstallApImg4LocalCreateSignedManifest_cold_6();
              }
              else {
                lVar7 = _AMAuthInstallApImg4LocalCreateEncodedData();
                if (lVar7 != 0) {
                  uVar3 = _CFDataGetBytePtr(lVar7);
                  uVar5 = _CFDataGetLength(lVar7);
                  _CFDataAppendBytes(lVar4,uVar3,uVar5);
                  if (param_5 == 0) {
                    iVar2 = _AMAuthInstallApImg4LocalCreateEncodedCertificateChain
                                      (local_58,&local_60);
                    if (iVar2 != 0) {
                      __AMAuthInstallApImg4LocalCreateSignedManifest_cold_2();
                      lVar9 = 0;
                      goto LAB_001a33b4;
                    }
                  }
                  else {
                    local_60 = _CFRetain();
                  }
                  local_48 = lVar7;
                  if (local_60 != 0) {
                    uVar3 = _CFDataGetBytePtr();
                    uVar5 = _CFDataGetLength(local_60);
                    _CFDataAppendBytes(lVar4,uVar3,uVar5);
                    uVar3 = 0;
                    goto LAB_001a312b;
                  }
                  __AMAuthInstallApImg4LocalCreateSignedManifest_cold_4();
                  goto LAB_001a34cc;
                }
                __AMAuthInstallApImg4LocalCreateSignedManifest_cold_5();
              }
            }
          }
        }
LAB_001a33b0:
        lVar9 = 0;
        lVar7 = 0;
      }
    }
LAB_001a33b4:
    local_48 = lVar7;
    _AMAuthInstallLog(3,"_AMAuthInstallApImg4LocalCreateSignedManifest",
                      "%s failed to create DER file");
  }
  _SafeRelease(*param_6);
  *param_6 = 0;
  uVar3 = 3;
LAB_001a31b4:
  _SafeRelease(lVar4);
  _SafeRelease(local_38);
  _SafeRelease(lVar8);
  _SafeRelease(local_40);
  _SafeRelease(local_50);
  _SafeRelease(local_48);
  _SafeRelease(local_60);
  _SafeFree(local_68);
  _DEREncoderDestroy(lVar9);
  return uVar3;
}

