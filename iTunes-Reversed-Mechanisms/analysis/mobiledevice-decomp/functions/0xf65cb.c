// rea decompile_all
// name: _AMRAuthInstallCopyBasebandPreflightOptions
// address: 0xf65cb
// body: available
// range: 0xf65cb-0xf68ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xf68e9 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMRAuthInstallCopyBasebandPreflightOptions
          (long param_1,undefined8 *param_2,undefined8 *param_3,int *param_4,undefined1 *param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  void *pvVar8;
  cfstringStruct *pcVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  int local_54;
  undefined1 *local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_54 = -1;
  local_40 = 0;
  local_48 = 0;
  uVar10 = 1;
  if (param_1 == 0) {
LAB_000f677d:
    *param_5 = 0;
    if (param_4 != (int *)0x0) goto LAB_000f67f0;
  }
  else {
    local_50 = param_5;
    lVar2 = _CFDictionaryGetTypeID();
    lVar3 = _CFGetTypeID(param_1);
    puVar11 = local_50;
    if (lVar2 != lVar3) {
      _AMRLog(3,&cf__s_bbPreflightDictisofunexpectedtype,
              "AMRAuthInstallCopyBasebandPreflightOptions");
      uVar10 = 0xffffffff;
      param_5 = local_50;
      goto LAB_000f677d;
    }
    param_5 = local_50;
    if (param_4 == (int *)0x0 || (param_3 == (undefined8 *)0x0 || param_2 == (undefined8 *)0x0))
    goto LAB_000f677d;
    lVar2 = _CFDictionaryGetValue(param_1,&cf_ChipSerialNo);
    if (lVar2 == 0) {
      _AMRLog(3,&cf__s_bbSnumisNULL_Skippingpreflight_,"AMRAuthInstallCopyBasebandPreflightOptions")
      ;
    }
    else {
      lVar3 = _CFGetTypeID(lVar2);
      lVar4 = _CFDataGetTypeID();
      if (lVar3 == lVar4) {
        lVar3 = _CFDictionaryGetValue(param_1,&cf_Nonce);
        if (lVar3 == 0) {
          pcVar9 = &cf__s_bbNonceisNULL_Skippingpreflight_;
          goto LAB_000f67cf;
        }
        lVar4 = _CFGetTypeID(lVar3);
        lVar5 = _CFDataGetTypeID();
        if (lVar4 != lVar5) {
          pcVar9 = &cf__s_bbNonceisofinvalidtype_Skippingpreflight_;
          goto LAB_000f67cf;
        }
        lVar4 = _CFDictionaryGetValue(param_1,&cf_CertID);
        if (lVar4 == 0) {
          pcVar9 = &cf__s_bbGoldCertIDisNULL_Skippingpreflight_;
          goto LAB_000f67cf;
        }
        lVar5 = _CFGetTypeID(lVar4);
        lVar6 = _CFNumberGetTypeID();
        if (lVar5 != lVar6) {
          pcVar9 = &cf__s_bbGoldCertIDisofinvalidtype_Skippingpreflight_;
          goto LAB_000f67cf;
        }
        _CFNumberGetValue(lVar4,3,&local_54);
        lVar4 = _CFGetTypeID(lVar2);
        lVar5 = _CFDataGetTypeID();
        if (lVar4 != lVar5) {
LAB_000f68c5:
          uVar10 = _CFRetain(lVar3);
          *param_3 = uVar10;
          *param_4 = local_54;
          *local_50 = 1;
          uVar10 = 0;
          goto LAB_000f6814;
        }
        pcVar7 = (char *)_CFDataGetLength(lVar2);
        if ((long)pcVar7 < 0xd) {
          ___memset_chk(&local_48,0,pcVar7,0xc);
          pvVar8 = (void *)_CFDataGetBytePtr(lVar2);
          iVar1 = _memcmp(pvVar8,&local_48,(size_t)pcVar7);
          if (iVar1 == 0) {
            _AMRLog(6,&cf_Receivedvalueof0forbasebandsnum_willproceedwithanon_preflightedrestore);
          }
          ___memset_chk(&local_48,0xff,pcVar7,0xc);
          pvVar8 = (void *)_CFDataGetBytePtr(lVar2);
          iVar1 = _memcmp(pvVar8,&local_48,(size_t)pcVar7);
          if ((iVar1 == 0) || (local_54 == -1)) {
            _AMRLog(6,&
                      cf_Receivedsentinelvalueforbasebandsnumand_orgoldcertID_willproceedwithanon_preflightedrestore
                   );
          }
          goto LAB_000f68c5;
        }
        pcVar9 = &cf_unexpectedlylargebasebandsnum_size__ld;
      }
      else {
        pcVar9 = &cf__s_bbSnumisofinvalidtype_Skippingpreflight_;
LAB_000f67cf:
        pcVar7 = "AMRAuthInstallCopyBasebandPreflightOptions";
      }
      _AMRLog(3,pcVar9,pcVar7);
      puVar11 = local_50;
    }
    *puVar11 = 0;
    uVar10 = 1;
LAB_000f67f0:
    *param_4 = -1;
  }
  if (param_2 != (undefined8 *)0x0) {
    _CFDictionarySetValue
              (*param_2,&cf_SkipPreflightPersonalization,*(undefined8 *)PTR__kCFBooleanTrue_00441110
              );
  }
LAB_000f6814:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar10;
}

