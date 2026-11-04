// rea decompile_all
// name: FUN_100008fdb
// address: 0x100008fdb
// body: available
// range: 0x100008fdb-0x10000907b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100009076 to 0x10000907c FUN_10000907c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100008fdb(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if (*(char *)(param_1 + 0x38) == '\0') {
    puVar1 = &DAT_1000212c0;
    do {
      puVar2 = puVar1;
      puVar1 = (undefined8 *)*puVar2;
      if (puVar1 == (undefined8 *)0x0) goto LAB_100009056;
    } while (puVar1 != param_1);
    if (6 < DAT_100021030) {
      uVar3 = FUN_100008d22(param_1);
      FUN_1000008d2(7,0,&cf__sRemoveinterface__s,"MuxInterfaceUnlink",uVar3);
    }
    *puVar2 = *param_1;
    *param_1 = 0;
    FUN_100002aeb(param_1);
LAB_100009056:
    *(undefined1 *)(param_1 + 0x38) = 1;
    if ((long *)param_1[0x2b] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x2b] + 0x48))();
    }
  }
  FUN_10000907c(param_1);
  return;
}

