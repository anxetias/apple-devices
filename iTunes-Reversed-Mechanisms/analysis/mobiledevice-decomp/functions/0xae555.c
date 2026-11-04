// rea decompile_all
// name: _MDMPatchAndVerifyBundles
// address: 0xae555
// body: available
// range: 0xae555-0xae7a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xae7a3 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _MDMPatchAndVerifyBundles(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int *piVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char local_828 [1024];
  char local_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar4 = _MDMCreateDeltaState(param_2,param_1);
  if (lVar4 == 0) {
    _MDMPatchAndVerifyBundles_cold_2();
    uVar8 = 0xffffffff;
    goto LAB_000ae6f6;
  }
  iVar2 = _MDMPatchBundle(lVar4);
  if (iVar2 == 0) {
    iVar2 = _MDMCompareBundles(param_1,param_2);
    if (iVar2 != 0) {
      _dmlog("MDMPatchAndVerifyBundles",0x68a,&cf_MDMCompareBundlesfailedfor_sand_s,param_1,param_2)
      ;
      goto LAB_000ae798;
    }
    ___bzero(local_428,0x400);
    ___bzero(local_828,0x400);
    uVar3 = _snprintf(local_428,0x400,"%s/%s",*(undefined8 *)(lVar4 + 0x10),"ManifestCache.plist");
    if (uVar3 < 0x400) {
      uVar3 = _snprintf(local_828,0x400,"%s/%s",*(undefined8 *)(lVar4 + 0x38),"ManifestCache.plist")
      ;
      if (0x3ff < uVar3) {
        uVar8 = *(undefined8 *)(lVar4 + 0x38);
        uVar7 = 0x670;
        goto LAB_000ae66a;
      }
      cVar1 = _verbose();
      if (cVar1 != '\0') {
        _dmlog("copyManifestCacheToPatchedBundle",0x673,&cf_copying__sto_s,local_428,local_828);
      }
      uVar8 = 0;
      iVar2 = _copyfile(local_428,local_828,(copyfile_state_t)0x0,0xc000f);
      if (iVar2 != 0) {
        cVar1 = _verbose();
        if (cVar1 != '\0') {
          piVar5 = ___error();
          pcVar6 = _strerror(*piVar5);
          _dmlog("copyManifestCacheToPatchedBundle",0x675,&cf_copyfilefailedtocopy__sto_serror__s,
                 local_428,local_828,pcVar6);
        }
        goto LAB_000ae671;
      }
    }
    else {
      uVar8 = *(undefined8 *)(lVar4 + 0x10);
      uVar7 = 0x66c;
LAB_000ae66a:
      _dmlog("copyManifestCacheToPatchedBundle",uVar7,&cf_pathtoolong__s__s,uVar8,
             "ManifestCache.plist");
LAB_000ae671:
      uVar8 = 0;
      cVar1 = _verbose();
      if (cVar1 != '\0') {
        uVar8 = 0;
        _dmlog("MDMPatchAndVerifyBundles",0x68d,
               &cf_Warning_MDMCopyManifestCacheToPatchedBundlefailed);
      }
    }
  }
  else {
    _MDMPatchAndVerifyBundles_cold_1();
LAB_000ae798:
    uVar8 = 0xffffffff;
  }
  _MDMDestroyDeltaState(lVar4);
LAB_000ae6f6:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_28) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

