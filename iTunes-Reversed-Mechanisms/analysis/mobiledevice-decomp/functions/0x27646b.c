// rea decompile_all
// name: _AMAuthInstallApFtabCreateMeasurementsWithTag
// address: 0x27646b
// body: available
// range: 0x27646b-0x27674e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallApFtabCreateMeasurementsWithTag
          (undefined8 param_1,long param_2,long param_3,undefined4 param_4,undefined8 *param_5)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uStack_80;
  long local_60;
  undefined8 local_58;
  int local_49;
  undefined4 local_44;
  long local_40;
  long local_38;
  
  local_40 = 0;
  lVar3 = 0;
  uStack_80 = 1;
  local_58 = param_1;
  if ((param_2 != 0) && (param_3 != 0)) {
    lVar7 = 0;
    if (param_5 == (undefined8 *)0x0) goto LAB_0027666d;
    local_44 = param_4;
    lVar3 = _CFStringGetLength(param_3);
    if (lVar3 == 4) {
      lVar3 = __AMAuthInstallApFtabCopyFtabFromFile(local_58,param_2,&local_60);
      if (lVar3 == 0) {
        pcVar6 = "ftabData is NULL";
        lVar3 = 0;
      }
      else {
        lVar7 = _CFDataGetLength(lVar3);
        lVar4 = _CFDataGetBytePtr(lVar3);
        cVar2 = _CFStringGetCString(param_3,&local_49,5,0x8000100);
        if (cVar2 != '\0') {
          uStack_80 = 8;
          if (*(int *)(local_60 + 0x28) != 0) {
            lVar8 = 0x30;
            uVar9 = 0;
            local_38 = lVar3;
            do {
              _AMAuthInstallLog(7,"AMAuthInstallApFtabCopyDataForTag",
                                "Payload %2d: [%.4s], %7u bytes.",uVar9 & 0xffffffff,
                                local_60 + lVar8,*(undefined4 *)(local_60 + 8 + lVar8));
              uVar5 = local_58;
              if (*(int *)(local_60 + lVar8) == local_49) {
                uVar1 = *(uint *)(local_60 + 4 + lVar8);
                if (lVar7 < (long)(ulong)(*(int *)(local_60 + 8 + lVar8) + uVar1)) {
                  pcVar6 = "Encoded payload is larger than data.";
                }
                else {
                  lVar3 = _CFDataCreate(local_58,lVar4 + (ulong)uVar1);
                  if (lVar3 != 0) {
                    _AMSupportSafeRelease(local_38);
                    _AMAuthInstallCryptoCreateDigestForDataType(uVar5,lVar3,&local_40,local_44);
                    if (local_40 == 0) {
                      pcVar6 = "created digest is NULL";
                    }
                    else {
                      lVar7 = _CFDictionaryCreateMutable
                                        (uVar5,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                         PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                      if (lVar7 != 0) {
                        uStack_80 = 0;
                        _CFDictionarySetValue(lVar7,&cf_Digest,local_40);
                        uVar5 = _CFRetain(lVar7);
                        *param_5 = uVar5;
                        goto LAB_0027666d;
                      }
                      pcVar6 = "failed to create mutable dict measurementDict";
                    }
                    lVar7 = 0;
                    _AMAuthInstallLog(3,"AMAuthInstallApFtabCreateMeasurementsWithTag",pcVar6);
                    uStack_80 = 2;
                    goto LAB_0027666d;
                  }
                  pcVar6 = "payload is NULL";
                }
                _AMAuthInstallLog(3,"AMAuthInstallApFtabCopyDataForTag",pcVar6);
                uStack_80 = 99;
                lVar3 = local_38;
                goto LAB_0027658e;
              }
              uVar9 = uVar9 + 1;
              lVar8 = lVar8 + 0x10;
            } while (uVar9 < *(uint *)(local_60 + 0x28));
            uStack_80 = 8;
            lVar3 = local_38;
          }
          goto LAB_0027658e;
        }
        pcVar6 = "CFStringGetCString failed.";
      }
      _AMAuthInstallLog(3,"AMAuthInstallApFtabCopyDataForTag",pcVar6);
      uStack_80 = 99;
    }
    else {
      lVar3 = 0;
      _AMAuthInstallLog(3,"AMAuthInstallApFtabCopyDataForTag","payloadTag is not 4 bytes");
      uStack_80 = 1;
    }
LAB_0027658e:
    _AMSupportSafeRelease(lVar3);
    _AMAuthInstallLog(3,"AMAuthInstallApFtabCreateMeasurementsWithTag",
                      "AMAuthInstallApFtabCopyDataForTag returned %d",uStack_80);
  }
  lVar3 = 0;
  lVar7 = 0;
LAB_0027666d:
  _AMSupportSafeRelease(lVar3);
  _AMSupportSafeRelease(local_40);
  _AMSupportSafeRelease(lVar7);
  return uStack_80;
}

