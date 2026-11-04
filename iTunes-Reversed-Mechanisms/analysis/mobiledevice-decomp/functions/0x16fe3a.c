// rea decompile_all
// name: _AMRCopyFileURLForNetworkURL
// address: 0x16fe3a
// body: available
// range: 0x16fe3a-0x17020b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMRCopyFileURLForNetworkURL(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  cfstringStruct *pcVar13;
  undefined8 local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  lVar5 = _CFURLCopyScheme();
  if (lVar5 == 0) {
    pcVar13 = &cf_FailedtogetschemefromnetworkURL;
    lVar5 = 0;
LAB_00170158:
    lVar6 = 0;
    lVar7 = 0;
  }
  else {
    cVar4 = _AMRIsURLSchemeType(param_1,&cf_file);
    if (cVar4 == '\0') {
      lVar6 = _AMRCopyNormalizedNetworkURL(param_1);
      if (lVar6 == 0) {
        pcVar13 = &cf_FailedtocreatenormalizednetworkURL;
        goto LAB_00170158;
      }
      lVar7 = _CFURLGetString(lVar6);
      puVar2 = PTR__kCFURLVolumeURLForRemountingKey_004411c8;
      if (lVar7 == 0) {
        pcVar13 = &cf_FailedtoconvertURLtostring;
      }
      else {
        uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
        lVar8 = _CFArrayCreate(uVar1,PTR__kCFURLVolumeURLForRemountingKey_004411c8,1,
                               PTR__kCFTypeArrayCallBacks_004411a8);
        if (lVar8 != 0) {
          lVar9 = _CFURLEnumeratorCreateForMountedVolumes(uVar1,0,lVar8);
          if (lVar9 == 0) {
            lVar7 = 0;
            _AMRSafeLog(3,&cf___,&cf_Failedtocreatemountedvolumesenumerator);
            _CFRelease(&cf_Failedtocreatemountedvolumesenumerator);
            lVar10 = 0;
            local_38 = 0;
          }
          else {
            uVar12 = *(undefined8 *)puVar2;
            local_38 = 0;
            local_40 = 0;
            local_50 = lVar6;
            local_48 = lVar5;
            do {
              do {
                do {
                  lVar5 = _CFURLEnumeratorGetNextURL(lVar9,&local_68,&local_58);
                  if (lVar5 != 1) {
                    lVar7 = 0;
                    lVar10 = 0;
                    if (local_58 != 0) goto LAB_001701f7;
                    goto LAB_0017009f;
                  }
                  cVar4 = _CFURLCopyResourcePropertyForKey(local_68,uVar12,&local_60,&local_58);
                } while (local_60 == 0 || cVar4 == '\0');
                if (local_40 != 0) {
                  _CFRelease(local_40);
                }
                local_40 = _AMRCopyNormalizedNetworkURL(local_60);
              } while (local_40 == 0);
              lVar10 = _CFURLGetString(local_40);
              if (lVar10 == 0) {
                lVar7 = 0;
                pcVar13 = &cf_FailedtoconvertmountedvolumeURLtostring;
                lVar6 = local_50;
                lVar5 = local_48;
                goto LAB_001700c7;
              }
              lVar5 = _CFStringFind(lVar7,lVar10,0);
            } while (lVar5 != 0);
            local_38 = _CFStringCreateMutable(uVar1,0);
            if (local_38 == 0) {
              local_38 = 0;
              pcVar13 = &cf_Failedtoallocatefinalpath;
              lVar7 = 0;
              lVar6 = local_50;
              lVar5 = local_48;
            }
            else {
              lVar11 = _CFURLGetString(local_68);
              lVar3 = local_38;
              lVar5 = local_48;
              lVar6 = local_50;
              if (lVar11 == 0) {
                pcVar13 = &cf_FailedtogetstringfromnextURL;
                lVar7 = 0;
              }
              else {
                _CFStringAppend(local_38,lVar7);
                uVar12 = _CFStringGetLength(lVar10);
                _CFStringReplace(lVar3,0,uVar12,lVar11);
                lVar7 = _AMAuthInstallSupportCreateURLFromString(uVar1,lVar3);
                _AMRSafePrintLog(7,&cf_LocatedmountpointforURL___Location___,param_1,lVar7);
                lVar10 = local_38;
                if (local_58 == 0) {
                  if (lVar7 != 0) {
                    pcVar13 = (cfstringStruct *)0x0;
                    goto LAB_001700c7;
                  }
LAB_0017009f:
                  pcVar13 = &cf_FailedtolocatemountedvolumeforURL___;
                  lVar7 = 0;
                }
                else {
LAB_001701f7:
                  pcVar13 = &cf_CFURLEnumeratorerror___;
                  param_1 = local_58;
                }
                pcVar13 = (cfstringStruct *)_AMRMakeString(pcVar13,param_1);
                lVar6 = local_50;
                lVar5 = local_48;
                local_38 = lVar10;
              }
            }
LAB_001700c7:
            lVar10 = local_40;
            _AMRSafeLogAndRelease(3,pcVar13);
          }
          _CFRelease(lVar8);
          if (local_58 != 0) {
            _CFRelease();
          }
          goto LAB_001700eb;
        }
        pcVar13 = &cf_Failedtocreatepropertiesarrayforenumerator;
      }
      lVar7 = 0;
    }
    else {
      _CFRetain();
      lVar6 = 0;
      pcVar13 = (cfstringStruct *)0x0;
      lVar7 = param_1;
    }
  }
  _AMRSafeLogAndRelease(3,pcVar13);
  local_38 = 0;
  lVar10 = 0;
  lVar9 = 0;
LAB_001700eb:
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (local_38 != 0) {
    _CFRelease();
  }
  if (lVar9 != 0) {
    _CFRelease(lVar9);
  }
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  if (lVar10 != 0) {
    _CFRelease(lVar10);
  }
  return lVar7;
}

