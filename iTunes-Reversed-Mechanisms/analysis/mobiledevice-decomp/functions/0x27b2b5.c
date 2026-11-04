// rea decompile_all
// name: _AMAuthInstallApImg4LocalAddImageProperties
// address: 0x27b2b5
// body: available
// range: 0x27b2b5-0x27b5e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallApImg4LocalAddImageProperties
              (undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  
  if (param_2 == 0) {
    pcVar7 = "toEncoder cannot be NULL";
  }
  else if (param_3 == 0) {
    pcVar7 = "imageTag cannot be NULL";
  }
  else {
    if (param_4 != 0) {
      lVar4 = _DEREncoderCreate(1);
      if (lVar4 == 0) {
        iVar2 = 2;
        lVar4 = 0;
        goto LAB_0027b4c0;
      }
      lVar5 = _CFDictionaryGetValue(param_4,&cf_Digest);
      if (lVar5 == 0) {
LAB_0027b369:
        lVar5 = _CFDictionaryGetValue(param_4,&cf_Trusted);
        if (lVar5 != 0) {
          uVar1 = _CFBooleanGetValue(lVar5);
          iVar2 = _AMAuthInstallApImg4AddBooleanProperty(lVar4,&cf_EKEY,uVar1);
          if (iVar2 != 0) {
            pcVar7 = "failed to add EKEY property for \'%@\'";
            goto LAB_0027b5a5;
          }
        }
        lVar5 = _CFDictionaryGetValue(param_4,&cf_DPRO);
        if (lVar5 != 0) {
          uVar1 = _CFBooleanGetValue(lVar5);
          iVar2 = _AMAuthInstallApImg4AddBooleanProperty(lVar4,&cf_DPRO,uVar1);
          if (iVar2 != 0) {
            pcVar7 = "failed to add DPRO property for \'%@\'";
            goto LAB_0027b5a5;
          }
        }
        lVar5 = _CFDictionaryGetValue(param_4,&cf_DSEC);
        if (lVar5 != 0) {
          uVar1 = _CFBooleanGetValue(lVar5);
          iVar2 = _AMAuthInstallApImg4AddBooleanProperty(lVar4,&cf_DSEC,uVar1);
          if (iVar2 != 0) {
            pcVar7 = "failed to add DSEC property for \'%@\'";
            goto LAB_0027b5a5;
          }
        }
        lVar5 = _CFDictionaryGetValue(param_4,&cf_ESEC);
        if (lVar5 != 0) {
          uVar1 = _CFBooleanGetValue(lVar5);
          iVar2 = _AMAuthInstallApImg4AddBooleanProperty(lVar4,&cf_ESEC,uVar1);
          if (iVar2 != 0) {
            pcVar7 = "failed to add ESEC property for \'%@\'";
            goto LAB_0027b5a5;
          }
        }
        lVar5 = _CFDictionaryGetValue(param_4,&cf_EPRO);
        if (lVar5 != 0) {
          uVar1 = _CFBooleanGetValue(lVar5);
          iVar2 = _AMAuthInstallApImg4AddBooleanProperty(lVar4,&cf_EPRO,uVar1);
          if (iVar2 != 0) {
            pcVar7 = "failed to add EPRO property for \'%@\'";
            goto LAB_0027b5a5;
          }
        }
        lVar5 = _CFDictionaryGetValue(param_4,&cf_TBMDigests);
        if (lVar5 != 0) {
          iVar2 = _AMAuthInstallApImg4AddDataProperty(lVar4,&cf_tbms,lVar5);
          if (iVar2 != 0) {
            _AMAuthInstallLog(3,"AMAuthInstallApImg4LocalAddImageProperties",
                              "failed to add %@ property for \'%@\'",&cf_tbms,param_3);
            goto LAB_0027b4c0;
          }
        }
        iVar3 = _AMAuthInstallApImg4AddDictionaryProperty(lVar4,param_2,param_3);
        iVar2 = 0;
        if (iVar3 != 0) {
          _AMAuthInstallLog(3,"AMAuthInstallApImg4LocalAddImageProperties",
                            "AMAuthInstallApImg4LocalAddDictionaryProperty failed for \'%@\'",
                            param_3);
          iVar2 = iVar3;
        }
      }
      else {
        lVar6 = _CFDataGetLength(lVar5);
        if (lVar6 < 1) {
          _AMAuthInstallLog(6,"AMAuthInstallApImg4LocalAddImageProperties",
                            "\'%@\' has zero length digest - skipping digest",param_3);
          goto LAB_0027b369;
        }
        iVar2 = _AMAuthInstallApImg4AddDataProperty(lVar4,&cf_DGST,lVar5);
        if (iVar2 == 0) goto LAB_0027b369;
        pcVar7 = "failed to add Digest property for \'%@\'";
LAB_0027b5a5:
        _AMAuthInstallLog(3,"AMAuthInstallApImg4LocalAddImageProperties",pcVar7,param_3);
      }
      goto LAB_0027b4c0;
    }
    pcVar7 = "requestDict cannot be NULL";
  }
  lVar4 = 0;
  _AMAuthInstallLog(3,"AMAuthInstallApImg4LocalAddImageProperties",pcVar7);
  iVar2 = 1;
LAB_0027b4c0:
  _DEREncoderDestroy(lVar4);
  return iVar2;
}

