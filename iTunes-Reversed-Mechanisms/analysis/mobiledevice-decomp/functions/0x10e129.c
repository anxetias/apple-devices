// rea decompile_all
// name: __AMDServiceConnectionCopyDebugDescription
// address: 0x10e129
// body: available
// range: 0x10e129-0x10e1fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10e1f9 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMDServiceConnectionCopyDebugDescription(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  socklen_t local_4c;
  sockaddr local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar4 = _CFGetAllocator();
  iVar1 = *(int *)(param_1 + 0x10);
  local_4c = 0x10;
  iVar3 = _getsockname(iVar1,&local_48,&local_4c);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = _CFGetRetainCount(param_1);
  pcVar6 = "false";
  if (*(char *)(param_1 + 0x20) != '\0') {
    pcVar6 = "true";
  }
  _CFStringCreateWithFormat
            (uVar4,0,&
                     cf_AMDServiceConnection_p_conn_Socket__d_port_d_conn_SSLContext__p_retaincount__ldcloseOnInvalidate__s_
             ,param_1,iVar1,
             -(uint)(iVar3 != 0) |
             (uint)(ushort)(local_48.sa_data._0_2_ << 8 | (ushort)local_48.sa_data._0_2_ >> 8),uVar2
             ,uVar5,pcVar6);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

