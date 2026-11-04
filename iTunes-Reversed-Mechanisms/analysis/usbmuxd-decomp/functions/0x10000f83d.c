// rea decompile_all
// name: FUN_10000f83d
// address: 0x10000f83d
// body: available
// range: 0x10000f83d-0x10000f896 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000f88b to 0x100013557 _pthread_mutex_unlock (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000f83d(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  
  cVar2 = FUN_100010271();
  if (cVar2 == '\0') {
    return;
  }
  _pthread_mutex_lock((pthread_mutex_t *)&DAT_1000212d8);
  puVar1 = &DAT_1000212c8;
  do {
    puVar3 = puVar1;
    puVar1 = (undefined8 *)*puVar3;
    if (puVar1 == (undefined8 *)0x0) goto LAB_10000f87e;
  } while (puVar1[1] != param_1);
  *puVar3 = *puVar1;
  FUN_10000f897();
LAB_10000f87e:
  _pthread_mutex_unlock((pthread_mutex_t *)&DAT_1000212d8);
  return;
}

