// rea decompile_all
// name: FUN_100001d13
// address: 0x100001d13
// body: available
// range: 0x100001d13-0x100001e98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100001e94 to 0x10001348b _exit (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_100001d13(void)

{
  launch_data_type_t lVar1;
  int iVar2;
  launch_data_t p_Var3;
  launch_data_t p_Var4;
  size_t sVar5;
  int *piVar6;
  char *pcVar7;
  cfstringStruct *pcVar8;
  
  p_Var3 = _launch_data_new_string("CheckIn");
  p_Var4 = _launch_msg(p_Var3);
  if (p_Var4 == (launch_data_t)0x0) {
    if (DAT_100021030 < 3) goto LAB_100001e8f;
    pcVar8 = &cf_launch_msg__s_IPCfailure;
    pcVar7 = "CheckIn";
LAB_100001e88:
    FUN_1000008d2(3,0,pcVar8,pcVar7);
  }
  else {
    _launch_data_free(p_Var3);
    lVar1 = _launch_data_get_type(p_Var4);
    if (lVar1 == LAUNCH_DATA_ERRNO) {
      iVar2 = _launch_data_get_errno(p_Var4);
      piVar6 = ___error();
      *piVar6 = iVar2;
      if (2 < DAT_100021030) {
        piVar6 = ___error();
        iVar2 = *piVar6;
        piVar6 = ___error();
        pcVar7 = _strerror(*piVar6);
        FUN_1000008d2(3,0,&cf_Check_infailed__d__s,iVar2,pcVar7);
      }
      goto LAB_100001e8f;
    }
    p_Var3 = _launch_data_dict_lookup(p_Var4,"Sockets");
    if (p_Var3 == (launch_data_t)0x0) {
      if (DAT_100021030 < 3) goto LAB_100001e8f;
      pcVar8 = &cf_Nosocketsfoundtoanswerrequestson_;
    }
    else {
      p_Var3 = _launch_data_dict_lookup(p_Var3,"Listeners");
      if (p_Var3 != (launch_data_t)0x0) {
        sVar5 = _launch_data_array_get_count(p_Var3);
        if (sVar5 == 1) {
          p_Var3 = _launch_data_array_get_index(p_Var3,0);
          iVar2 = _launch_data_get_fd(p_Var3);
          _launch_data_free(p_Var4);
          return iVar2;
        }
        if (DAT_100021030 < 3) goto LAB_100001e8f;
        pcVar7 = (char *)_launch_data_array_get_count(p_Var3);
        pcVar8 = &cf_socketcountwas_ld;
        goto LAB_100001e88;
      }
      if (DAT_100021030 < 3) goto LAB_100001e8f;
      pcVar8 = &cf_Noknownsocketfoundtoanswerrequestson_;
    }
    FUN_1000008d2(3,0,pcVar8);
  }
LAB_100001e8f:
                    /* WARNING: Subroutine does not return */
  _exit(1);
}

