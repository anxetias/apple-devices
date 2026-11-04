// rea decompile_all
// name: __applyBundleOverrideToBuildIdentity
// address: 0x26cb36
// body: available
// range: 0x26cb36-0x26cd4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* __applyBundleOverrideToBuildIdentity(void const*, void const*, void*) */

void __applyBundleOverrideToBuildIdentity(void *param_1,void *param_2,void *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStackY_60;
  long local_40;
  void *local_38;
  
  lVar1 = *(long *)param_3;
  lVar2 = *(long *)((long)param_3 + 8);
  local_40 = 0;
  lVar7 = 0;
  local_38 = param_2;
  if ((param_1 == (void *)0x0) || (lVar1 == 0)) goto LAB_0026ccfe;
  lVar10 = 0;
  if (lVar2 == 0) goto LAB_0026ccd4;
  lVar5 = _CFGetTypeID();
  lVar6 = _CFStringGetTypeID();
  lVar7 = 0;
  if (local_38 == (void *)0x0) goto LAB_0026ccfe;
  lVar10 = 0;
  if (lVar5 != lVar6) goto LAB_0026ccd4;
  lVar7 = _CFGetTypeID(local_38);
  lVar10 = _CFStringGetTypeID();
  if (lVar7 == lVar10) {
    uVar3 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    lVar7 = _AMAuthInstallICreateTranslationOfRecoveryEnteryName(uVar3,param_1);
    if (lVar7 != 0) {
      lVar10 = _CFDictionaryGetValue(lVar2,lVar7);
      if (lVar10 == 0) {
        pcVar8 = &cf_Entryforoverride__doesn_texist_skipping;
LAB_0026ccc4:
        lVar10 = 0;
        uStackY_60 = 3;
      }
      else {
        lVar10 = _CFDictionaryGetValue(lVar10,&cf_Digest);
        if (lVar10 == 0) {
LAB_0026cd03:
          pcVar8 = &cf_Failedtolookupexistingdigestfor__;
          goto LAB_0026ccc4;
        }
        lVar5 = _CFGetTypeID(lVar10);
        lVar6 = _CFDataGetTypeID();
        if (lVar5 != lVar6) goto LAB_0026cd03;
        lVar10 = _CFDataGetLength(lVar10);
        if (lVar10 == 0x14) {
          uVar9 = 1;
        }
        else if (lVar10 == 0x20) {
          uVar9 = 0x100;
        }
        else {
          if (lVar10 != 0x30) {
            pcVar8 = &cf_Unknowndigestlengthfor__;
            goto LAB_0026ccc4;
          }
          uVar9 = 0x180;
        }
        lVar10 = _AMAuthInstallSupportCreateURLFromString(uVar3,local_38);
        if (lVar10 == 0) {
          lVar10 = 0;
          _AMRLog(3,&cf_FailedtocreateURLfor__fromstring___,lVar7,local_38);
          goto LAB_0026ccd4;
        }
        iVar4 = _AMAuthInstallApCreateMeasurementsWithTag(lVar1,lVar10,0,uVar9,0,0,&local_40);
        if ((iVar4 != 0) || (local_40 == 0)) {
          _AMRLog(3,&cf_Failedtomeasureoverridefor____d,local_38,iVar4);
          goto LAB_0026ccd4;
        }
        _CFDictionarySetValue(lVar2,lVar7);
        pcVar8 = &cf_Appliedbuildidentityoverridefor__;
        uStackY_60 = 6;
      }
      _AMRLog(uStackY_60,pcVar8,lVar7);
      goto LAB_0026ccd4;
    }
  }
LAB_0026ccfe:
  lVar7 = 0;
  lVar10 = 0;
LAB_0026ccd4:
  _AMSupportSafeRelease(lVar7);
  _AMSupportSafeRelease(lVar10);
  _AMSupportSafeRelease(local_40);
  return;
}

