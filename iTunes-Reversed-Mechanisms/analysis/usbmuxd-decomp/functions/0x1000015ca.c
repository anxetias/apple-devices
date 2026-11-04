// rea decompile_all
// name: FUN_1000015ca
// address: 0x1000015ca
// body: available
// range: 0x1000015ca-0x100001666 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100001653 to 0x10001348b _exit (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000015ca(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined1 local_34 [4];
  
  do {
    while( true ) {
      while( true ) {
        iVar1 = _getopt_long_only(param_1,param_2,"lvd:",&PTR_s_launchd_100021040,local_34);
        if (iVar1 < 0x6c) break;
        if (iVar1 == 0x6c) {
          DAT_100021288 = 1;
        }
        else if (iVar1 == 0x76) {
          FUN_100002013();
                    /* WARNING: Subroutine does not return */
          _exit(0);
        }
      }
      if (iVar1 != 100) break;
      if (*(char **)PTR__optarg_10001c088 != (char *)0x0) {
        uVar2 = _strtoul(*(char **)PTR__optarg_10001c088,(char **)0x0,0);
        FUN_100001fa3(uVar2 & 0xffffffff);
      }
    }
  } while (iVar1 != -1);
  return;
}

