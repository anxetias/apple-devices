// rea decompile_all
// name: _AMAuthInstallApCreateDigest
// address: 0x1a00c3
// body: available
// range: 0x1a00c3-0x1a014e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1a0116 to 0x3edd _AMSupportCreateDigest (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallApCreateDigest(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  
  if (param_1 == 0) {
    pcVar3 = &cf__s_srcURLisNULL;
LAB_001a012f:
    _AMSupportCreateErrorInternal
              (param_4,&cf_AuthInstallErrorDomain,1,0,pcVar3,"AMAuthInstallApCreateDigest");
    return 0;
  }
  if (param_3 == 1) {
    puVar2 = &_kAMAuthInstallDigestInfoSha1;
  }
  else if (param_3 == 0x180) {
    puVar2 = &_kAMAuthInstallDigestInfoSha384;
  }
  else {
    if (param_3 != 0x100) {
      pcVar3 = &cf__s_unsupporteddigesttype__d;
      goto LAB_001a012f;
    }
    puVar2 = &_kAMAuthInstallDigestInfoSha256;
  }
  uVar1 = _AMSupportCreateDigest(param_1,param_2,puVar2);
  return uVar1;
}

