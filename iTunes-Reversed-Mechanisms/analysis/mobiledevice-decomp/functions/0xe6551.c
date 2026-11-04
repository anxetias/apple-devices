// rea decompile_all
// name: __AMRestoreMountBaseSystemImage
// address: 0xe6551
// body: available
// range: 0xe6551-0xe670b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xe6707 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__AMRestoreMountBaseSystemImage(long param_1,long param_2,undefined8 param_3,byte *param_4)

{
  int iVar1;
  char *pcVar2;
  byte *pbVar3;
  cfstringStruct *pcVar4;
  undefined8 uVar5;
  char *local_2098;
  char *local_2090;
  char *local_2088;
  char *local_2080;
  char *local_2078;
  char *local_2070;
  char *local_2068;
  long local_2060;
  char *local_2058;
  undefined8 local_2050;
  long local_2048;
  undefined8 local_2040;
  char local_2038 [8200];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_004412b8;
  local_2098 = "/usr/bin/hdiutil";
  local_2090 = "attach";
  local_2088 = "-agent";
  local_2080 = "hdid";
  local_2078 = "-nobrowse";
  local_2070 = "-readwrite";
  local_2068 = "-mountroot";
  local_2058 = "-shadow";
  local_2040 = 0;
  local_2060 = param_2;
  local_2050 = param_3;
  local_2048 = param_1;
  if (param_1 == 0) {
    pcVar4 = &cf__sdoesn_tnotsupportnullimagepath_;
  }
  else {
    if (param_2 != 0) {
      ___bzero(local_2038,0x2000);
      iVar1 = __AMRestoreExecuteCmd(&local_2098,local_2038,0x2000);
      if (iVar1 == 0) {
        pcVar2 = _strtok(local_2038,"\t");
        _strncpy((char *)param_4,pcVar2,0x400);
        param_4[0x3ff] = 0;
        for (pbVar3 = param_4; (*pbVar3 & 0xdf) != 0; pbVar3 = pbVar3 + 1) {
        }
        *pbVar3 = 0;
        uVar5 = 0;
        _AMRLog(6,&cf_gotmntpointof_sandmountdeviceNodeof_s,param_2,param_4);
      }
      else {
        _AMRLog(3,&
                  cf_Mountingthewritableimagein_s_status_d__thismightbeduetobasesystemdmgtypethatisn_tsupportedinMacOSversionbefore10_15_6_considerupdatingyourOStogetbasesystemrootssupport_
                ,param_1,iVar1);
        uVar5 = 0x1b;
      }
      goto LAB_000e6689;
    }
    pcVar4 = &cf__sdoesn_tnotsupportnulloutputmountpointpath_;
  }
  _AMRLog(3,pcVar4,"_AMRestoreMountBaseSystemImage");
  uVar5 = 1;
LAB_000e6689:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_30) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

