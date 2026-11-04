// rea decompile_all
// name: AMDeviceProxy::ResolveSystemRestoreImage
// address: 0x104230
// body: available
// range: 0x104230-0x1044e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* AMDeviceProxy::ResolveSystemRestoreImage(__CFDictionary*) */

ulong __thiscall
AMDeviceProxy::ResolveSystemRestoreImage(AMDeviceProxy *this,__CFDictionary *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  __CFDictionary *p_Var5;
  long lVar6;
  long lVar7;
  long lVar8;
  cfstringStruct *pcVar9;
  undefined8 unaff_R15;
  ulong uVar10;
  long local_40;
  long local_38;
  undefined7 uVar11;
  
  if (this == (AMDeviceProxy *)0x0) {
    pcVar9 = &cf_CantresolvesystemimagewithNULLproxy;
  }
  else {
    if (param_1 != (__CFDictionary *)0x0) {
      uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      local_38 = _AMAuthInstallCreate(uVar1);
      uVar11 = (undefined7)((ulong)unaff_R15 >> 8);
      uVar10 = CONCAT71(uVar11,1);
      if (local_38 == 0) {
        pcVar9 = &cf_Couldn_tinstantiateAMAuthInstall;
        goto LAB_00104439;
      }
      p_Var5 = (__CFDictionary *)
               _CFDictionaryCreateMutable
                         (uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                          PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      if (p_Var5 == (__CFDictionary *)0x0) {
        _CFRelease(local_38);
        pcVar9 = &cf_FailedtocreateapParametersdict;
        goto LAB_00104439;
      }
      cVar3 = _AMDeviceProxySetApParameters(this,p_Var5);
      if (cVar3 == '\0') {
        pcVar9 = &cf_FailedtosetapParametersdict;
        uVar10 = 0;
      }
      else {
        iVar4 = _AMAuthInstallApSetParameters(local_38,p_Var5);
        uVar10 = CONCAT71(uVar11,1);
        if (iVar4 == 0) {
          lVar6 = _CFDictionaryGetValue(param_1,&cf_PersonalizedRestoreBundlePath);
          if (lVar6 == 0) {
            pcVar9 = &cf_FailedtofindPersonalisedBundlePath;
          }
          else {
            lVar7 = _CFDictionaryGetValue(param_1,&cf_RestoreBundlePath);
            if (lVar7 == 0) {
              pcVar9 = &cf_FailedtofindRestoreBundlePath;
            }
            else {
              _CFDictionarySetValue(param_1,&cf_PersonalizedRestoreBundlePath,lVar7);
              local_40 = 0;
              lVar7 = _CFDictionaryGetValue(param_1,&cf_ShouldRestoreSystemImage);
              bVar2 = true;
              if ((lVar7 == 0) || (lVar7 != *(long *)PTR__kCFBooleanFalse_00441108)) {
                iVar4 = _AMRAuthInstallCopyURLForKey(local_38,param_1,&cf_OS,&local_40);
                if (iVar4 != 0) {
                  bVar2 = false;
                  uVar11 = 0;
                  _AMRLog(3,&cf__s_FailedtofindURLfor____key,
                          "AMBootedOSResolveSystemRestoreImageOptions",&cf_OS);
                  goto LAB_001043d8;
                }
                lVar7 = _CFURLCopyFileSystemPath(local_40,0);
                if (lVar7 == 0) {
                  _AMRLog(3,&cf_FailedtoconvertURLintostring);
                  goto LAB_001043d8;
                }
                lVar8 = _CFDictionaryCreateMutable
                                  (uVar1,1,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                   PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                _CFDictionarySetValue(lVar8,&cf_ImageFile,lVar7);
                _CFDictionarySetValue(param_1,&cf_SystemImage,lVar8);
              }
              else {
LAB_001043d8:
                lVar7 = 0;
                lVar8 = 0;
              }
              if (local_40 != 0) {
                _CFRelease();
              }
              if (lVar7 != 0) {
                _CFRelease(lVar7);
              }
              if (lVar8 != 0) {
                _CFRelease(lVar8);
              }
              if (bVar2) {
                pcVar9 = (cfstringStruct *)0x0;
              }
              else {
                pcVar9 = &
                         cf__AMRestoreModeDeviceResolveSystemRestoreImage_failedtoresolvesystemrestoreImage
                ;
              }
              _CFDictionarySetValue(param_1,&cf_PersonalizedRestoreBundlePath,lVar6);
              uVar10 = CONCAT71(uVar11,bVar2) ^ 1;
            }
          }
        }
        else {
          pcVar9 = &cf_Failedtosetapparameters;
        }
      }
      _CFRelease(local_38);
      _CFRelease(p_Var5);
      goto LAB_00104439;
    }
    pcVar9 = &cf_CantresolvesystemimagewithNULLrestoreoptions;
  }
  uVar10 = 0;
LAB_00104439:
  LogAndRelease(this,3,(__CFString *)pcVar9);
  return uVar10 & 0xffffffff;
}

