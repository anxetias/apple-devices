// rea decompile_all
// name: _AMRestoreAttestationShouldAttest
// address: 0xe7f5c
// body: available
// range: 0xe7f5c-0xe82d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000e8015) */
/* WARNING: Removing unreachable block (ram,0x000e8037) */
/* WARNING: Removing unreachable block (ram,0x000e80f9) */
/* WARNING: Removing unreachable block (ram,0x000e8062) */
/* WARNING: Removing unreachable block (ram,0x000e8101) */
/* WARNING: Removing unreachable block (ram,0x000e80b0) */
/* WARNING: Removing unreachable block (ram,0x000e80d8) */
/* WARNING: Removing unreachable block (ram,0x000e8115) */
/* WARNING: Removing unreachable block (ram,0x000e8163) */
/* WARNING: Removing unreachable block (ram,0x000e8129) */
/* WARNING: Removing unreachable block (ram,0x000e8174) */
/* WARNING: Removing unreachable block (ram,0x000e8199) */
/* WARNING: Removing unreachable block (ram,0x000e81d2) */
/* WARNING: Removing unreachable block (ram,0x000e814e) */
/* WARNING: Removing unreachable block (ram,0x000e81c0) */
/* WARNING: Removing unreachable block (ram,0x000e81c9) */
/* WARNING: Removing unreachable block (ram,0x000e81d9) */
/* WARNING: Removing unreachable block (ram,0x000e81e1) */
/* WARNING: Removing unreachable block (ram,0x000e81e8) */
/* WARNING: Removing unreachable block (ram,0x000e8201) */
/* WARNING: Removing unreachable block (ram,0x000e8262) */

ulong _AMRestoreAttestationShouldAttest(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_38;
  
  if ((param_3 != 0) &&
     (lVar3 = _CFDictionaryGetValue(param_3,&cf_AttestationRequested), lVar3 != 0)) {
    lVar4 = _CFGetTypeID(lVar3);
    lVar5 = _CFBooleanGetTypeID();
    if (lVar4 == lVar5) {
      _AMRLog(6,&cf_Returningcachedvalue__forattestationenabled,lVar3);
      cVar1 = _CFBooleanGetValue(lVar3);
      uVar6 = CONCAT71((int7)((ulong)param_1 >> 8),cVar1 != '\0');
      goto LAB_000e82a4;
    }
  }
  lVar3 = _AMRAuthInstallCopyVariant(param_1,param_2);
  if (lVar3 == 0) {
    _AMRestoreAttestationShouldAttest_cold_3();
  }
  else {
    local_38 = 0;
    iVar2 = _AMRAuthInstallCopyBuildIdentity(param_1,param_2,lVar3);
    if (iVar2 == 0) {
      _AMRestoreAttestationShouldAttest_cold_2();
    }
    else {
      _AMRestoreAttestationShouldAttest_cold_1();
    }
  }
  _AMSupportSafeRelease(lVar3);
  _AMSupportSafeRelease(local_38);
  (*(code *)PTR__objc_release_004410a0)(0);
  uVar6 = 0;
  _AMRLog(6,&cf_RestoreattestationrequiresAppleSiliconhost);
  if (param_3 != 0) {
    _CFDictionarySetValue
              (param_3,&cf_AttestationRequested,*(undefined8 *)PTR__kCFBooleanFalse_00441108);
    _CFDictionarySetValue(param_3,&cf_AttestationUnsupportedReason,&cf_hostarchitecture);
    uVar6 = 0;
  }
LAB_000e82a4:
  return uVar6 & 0xffffffff;
}

