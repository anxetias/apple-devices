// rea decompile_all
// name: _AFCConditionWait
// address: 0x26a00f
// body: available
// range: 0x26a00f-0x26a108 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _AFCConditionWait(double param_1,long param_2)

{
  pthread_mutex_t *ppVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  time_t tVar5;
  double dVar6;
  timespec local_58;
  long local_48;
  long local_40;
  double local_38;
  
  ppVar1 = (pthread_mutex_t *)(param_2 + 0x10);
  local_38 = param_1;
  iVar3 = _pthread_mutex_lock(ppVar1);
  if (iVar3 == 0) {
    local_48 = (long)local_38;
    dVar6 = (double)_floor();
    local_40 = (long)((local_38 - dVar6) * 1000000000.0);
    do {
      cVar2 = *(char *)(param_2 + 0x80);
      if (cVar2 != '\0') {
        *(undefined1 *)(param_2 + 0x80) = 0;
        iVar4 = 0;
        break;
      }
      if ((local_38 != 0.0) || (NAN(local_38))) {
        tVar5 = _time((time_t *)0x0);
        local_58.tv_sec = tVar5 + local_48;
        local_58.tv_nsec = local_40;
        iVar4 = _pthread_cond_timedwait((pthread_cond_t *)(param_2 + 0x50),ppVar1,&local_58);
      }
      else {
        iVar4 = _pthread_cond_wait((pthread_cond_t *)(param_2 + 0x50),ppVar1);
      }
    } while (iVar4 == 0);
    iVar3 = _pthread_mutex_unlock(ppVar1);
    if (iVar3 == 0) {
      iVar3 = iVar4;
    }
    if (cVar2 == '\0') {
      iVar3 = iVar4;
    }
  }
  _AFCErrnoToAFCDomainError(iVar3,0xe8004017);
  return;
}

