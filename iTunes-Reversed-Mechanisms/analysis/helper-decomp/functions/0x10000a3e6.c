// rea decompile_all
// name: FUN_10000a3e6
// address: 0x10000a3e6
// body: available
// range: 0x10000a3e6-0x10000a4b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10000a3e6(undefined8 param_1,undefined *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  
  puVar2 = _calloc(0x20,1);
  puVar2[3] = param_1;
  puVar3 = &DAT_1000166d0;
  if (param_2 != (undefined *)0x0) {
    puVar3 = param_2;
  }
  puVar2[2] = puVar3;
  *puVar2 = 1;
  puVar2[1] = 0xffffffffffffffff;
  if (DAT_1000166d8 == '\0') {
    _signal(0xd);
    DAT_1000166d8 = '\x01';
  }
  if (DAT_100016740 == (pthread_mutex_t *)0x0) {
    DAT_100016740 = _calloc(0x40,1);
    uVar1 = _pthread_mutex_init(DAT_100016740,(pthread_mutexattr_t *)0x0);
    if (uVar1 != 0) {
      _fprintf(*(FILE **)PTR____stderrp_100012128,
               "*** Error initializing mutex for ProcessLink Lock: %d!!! The application may step all over itself without this lock to protext it!\n"
               ,(ulong)uVar1);
      _free(DAT_100016740);
      DAT_100016740 = (pthread_mutex_t *)0x0;
    }
  }
  return puVar2;
}

