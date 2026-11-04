// rea decompile_all
// name: FUN_10000c72f
// address: 0x10000c72f
// body: available
// range: 0x10000c72f-0x10000c7bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10000c72f(undefined8 param_1,char *param_2,size_t param_3)

{
  char cVar1;
  size_t sVar2;
  int *piVar3;
  char *pcVar4;
  
  cVar1 = __set_user_dir_suffix("com.apple.usbmuxd");
  if (cVar1 == '\0') {
    pcVar4 = "failed to set temporary directory suffix: %{public}d";
  }
  else {
    if (param_3 == 0 || param_2 == (char *)0x0) {
      return 0;
    }
    sVar2 = _confstr(0x10001,param_2,param_3);
    if (sVar2 != 0) {
      return 0;
    }
    pcVar4 = "failed to initialize temporary directory: %d";
  }
  piVar3 = ___error();
  __os_log_internal(0x100000000,param_1,0x10,pcVar4,*piVar3);
  return 1;
}

