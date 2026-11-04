// rea decompile_all
// name: _disconnectFromDevice
// address: 0xd0d6c
// body: available
// range: 0xd0d6c-0xd0e04 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _disconnectFromDevice(__AMRestoreModeDevice*) */

void _disconnectFromDevice(__AMRestoreModeDevice *param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  
  iVar2 = *(int *)(param_1 + 0x78);
  if (iVar2 != -1) {
    *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
    _AMRLog(6,&cf_sock_3d__s,iVar2,"closed");
    _close(iVar2);
  }
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x1c8));
  plVar3 = *(long **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x1c8));
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3);
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000d0df7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x48))(plVar3);
      return;
    }
  }
  return;
}

