// rea decompile_all
// name: _ramrod_socket_sockaddr_to_string
// address: 0xc990a
// body: available
// range: 0xc990a-0xc9b1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xc9b17 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _ramrod_socket_sockaddr_to_string(char *param_1,size_t param_2,sockaddr *param_3,long param_4)

{
  sa_family_t sVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  socklen_t sVar7;
  char *pcVar8;
  socklen_t sVar9;
  ulong uVar10;
  ulong local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  char local_448 [1040];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  sVar1 = param_3->sa_family;
  if (sVar1 == '\x1e') {
    pcVar8 = "[";
    pcVar4 = "]";
LAB_000c997e:
    ___bzero(local_448,0x401);
    local_458 = 0;
    uStack_450 = 0;
    local_468 = 0;
    uStack_460 = 0;
    sVar7 = 0x1c;
    if (sVar1 != '\x1e') {
      sVar7 = 0;
    }
    sVar9 = 0x10;
    if (sVar1 != '\x02') {
      sVar9 = sVar7;
    }
    if (param_3->sa_len != 0) {
      sVar9 = (socklen_t)param_3->sa_len;
    }
    iVar3 = _getnameinfo(param_3,sVar9,local_448,0x401,(char *)&local_468,0x20,10);
    if (iVar3 == 0) {
      if (((char)local_468 == '\0') || ((short)local_468 == 0x30)) {
        local_468 = local_468 & 0xffffffffffffff00;
        pcVar5 = "";
      }
      else {
        pcVar5 = ":";
      }
      iVar3 = _snprintf(param_1,param_2,"%s%s%s%s%s",pcVar8,local_448,pcVar4,pcVar5,&local_468);
    }
    else {
      if ((param_3->sa_family != '\x01') || (uVar2 = param_3->sa_len - 2, uVar2 == 0))
      goto joined_r0x000c9a63;
      uVar10 = 0x68;
      if (uVar2 < 0x68) {
        uVar10 = (ulong)uVar2;
      }
      iVar3 = _snprintf(param_1,param_2,"%s%.*s%s",pcVar8,uVar10,param_3->sa_data,pcVar4);
    }
  }
  else {
    pcVar4 = "";
    if (sVar1 == '\x01') {
      pcVar8 = "unix:";
      goto LAB_000c997e;
    }
    pcVar8 = "";
    if (sVar1 != '\0') goto LAB_000c997e;
joined_r0x000c9a63:
    if (param_4 == 0) {
      lVar6 = -1;
      goto LAB_000c9af5;
    }
    iVar3 = _snprintf(param_1,param_2,"%s",param_4);
  }
  lVar6 = (long)iVar3;
LAB_000c9af5:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar6;
}

