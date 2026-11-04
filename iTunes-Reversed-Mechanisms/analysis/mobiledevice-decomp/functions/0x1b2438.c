// rea decompile_all
// name: _AMAuthInstallSsoShouldUseStealthMode
// address: 0x1b2438
// body: available
// range: 0x1b2438-0x1b24d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool _AMAuthInstallSsoShouldUseStealthMode(long param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  bool bVar5;
  auditinfo_addr local_38;
  
  if (param_1 == 0) {
    if (__forceStealthModeForProcess != '\0') {
      return true;
    }
  }
  else if (__forceStealthModeForProcess != '\0' || *(char *)(param_1 + 0x70) != '\0') {
    return true;
  }
  pcVar3 = _getenv("AUTHINSTALL_SSO_FORCE_STEALTH_MODE");
  if ((pcVar3 != (char *)0x0) && (uVar4 = _strtoul(pcVar3,(char **)0x0,0), uVar4 != 0)) {
    return true;
  }
  local_38.ai_termid.at_addr[3] = 0;
  local_38.ai_asid = 0;
  local_38.ai_flags = 0;
  local_38.ai_termid.at_type = 0;
  local_38.ai_termid.at_addr[0] = 0;
  local_38.ai_termid.at_addr[1] = 0;
  local_38.ai_termid.at_addr[2] = 0;
  local_38.ai_auid = 0;
  local_38.ai_mask.am_success = 0;
  local_38.ai_mask.am_failure = 0;
  local_38.ai_termid.at_port = 0;
  iVar2 = _getaudit_addr(&local_38,0x30);
  if ((iVar2 != 0) || (bVar5 = true, (local_38.ai_flags & 0x10) != 0)) {
    cVar1 = _AMAuthInstallPreferencesGetBooleanValue
                      (&cf_AuthInstallSSOForceStealthMode,&cf_SSOForceStealthMode,0);
    bVar5 = cVar1 != '\0';
  }
  return bVar5;
}

