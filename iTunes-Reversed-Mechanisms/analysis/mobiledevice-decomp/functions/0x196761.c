// rea decompile_all
// name: rps_sockaddr_to_string
// address: 0x196761
// body: available
// range: 0x196761-0x1968e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1968e2 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* rps_sockaddr_to_string(char*, unsigned long, sockaddr const*, char const*) */

void rps_sockaddr_to_string(char *param_1,ulong param_2,sockaddr *param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  socklen_t sVar5;
  socklen_t sVar6;
  ulong uVar7;
  char *pcVar8;
  char *pcVar9;
  ushort local_468 [16];
  char local_448 [1040];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  cVar1 = *(char *)(param_2 + 1);
  if (cVar1 == '\x1e') {
    pcVar9 = "[";
    pcVar8 = "]";
LAB_001967c1:
    sVar5 = 0x1c;
    if (cVar1 != '\x1e') {
      sVar5 = 0;
    }
    sVar6 = 0x10;
    if (cVar1 != '\x02') {
      sVar6 = sVar5;
    }
    if (*(byte *)param_2 != 0) {
      sVar6 = (socklen_t)*(byte *)param_2;
    }
    iVar2 = _getnameinfo((sockaddr *)param_2,sVar6,local_448,0x401,(char *)local_468,0x20,10);
    if (iVar2 == 0) {
      if (((char)local_468[0] == '\0') || (local_468[0] == 0x30)) {
        local_468[0] = local_468[0] & 0xff00;
        pcVar4 = "";
      }
      else {
        pcVar4 = ":";
      }
      _snprintf(param_1,0x401,"%s%s%s%s%s",pcVar9,local_448,pcVar8,pcVar4,local_468);
      goto LAB_001968c0;
    }
    if ((*(char *)(param_2 + 1) == '\x01') && (uVar3 = *(byte *)param_2 - 2, uVar3 != 0)) {
      uVar7 = 0x68;
      if (uVar3 < 0x68) {
        uVar7 = (ulong)uVar3;
      }
      _snprintf(param_1,0x401,"%s%.*s%s",pcVar9,uVar7,param_2 + 2,pcVar8);
      goto LAB_001968c0;
    }
  }
  else {
    pcVar8 = "";
    if (cVar1 == '\x01') {
      pcVar9 = "unix:";
      goto LAB_001967c1;
    }
    pcVar9 = "";
    if (cVar1 != '\0') goto LAB_001967c1;
  }
  builtin_strncpy(param_1,"<unknown>",10);
LAB_001968c0:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

