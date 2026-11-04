// rea decompile_all
// name: _ProcessLinkSetupParent
// address: 0xc3a83
// body: available
// range: 0xc3a83-0xc3b50 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * _ProcessLinkSetupParent(undefined8 param_1,undefined *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  
  puVar2 = _calloc(0x20,1);
  puVar2[3] = param_1;
  puVar3 = &_kEmptyArgs;
  if (param_2 != (undefined *)0x0) {
    puVar3 = param_2;
  }
  puVar2[2] = puVar3;
  *puVar2 = 1;
  puVar2[1] = 0xffffffffffffffff;
  if (_sSetSignalForSigPipe == '\0') {
    _signal(0xd);
    _sSetSignalForSigPipe = '\x01';
  }
  if (_sProcessLinkLock == (pthread_mutex_t *)0x0) {
    _sProcessLinkLock = _calloc(0x40,1);
    uVar1 = _pthread_mutex_init(_sProcessLinkLock,(pthread_mutexattr_t *)0x0);
    if (uVar1 != 0) {
      _fprintf(*(FILE **)PTR____stderrp_004412c0,
               "*** Error initializing mutex for ProcessLink Lock: %d!!! The application may step all over itself without this lock to protext it!\n"
               ,(ulong)uVar1);
      _free(_sProcessLinkLock);
      _sProcessLinkLock = (pthread_mutex_t *)0x0;
    }
  }
  return puVar2;
}

