// rea decompile_all
// name: _AMRLazyFileOpenForPath
// address: 0x26fd43
// body: available
// range: 0x26fd43-0x26fdfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * _AMRLazyFileOpenForPath(char *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined1 local_b8 [96];
  undefined8 local_58;
  
  puVar4 = (undefined8 *)0x0;
  iVar1 = _open(param_1,0);
  if (iVar1 != -1) {
    ___bzero(local_b8,0x90);
    iVar2 = _fstat_INODE64(iVar1,local_b8);
    if (iVar2 == 0) {
      piVar3 = _calloc(1,0x10);
      *piVar3 = iVar1;
      piVar3[2] = 0;
      piVar3[3] = 0;
      puVar4 = _calloc(1,0x40);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = piVar3;
      puVar4[3] = &__AMRDiskFileCallbacks;
      puVar4[4] = 0;
      puVar4[5] = local_58;
      puVar4[6] = 0;
      *(undefined1 *)(puVar4 + 7) = 0;
    }
    else {
      _close(iVar1);
      puVar4 = (undefined8 *)0x0;
    }
  }
  return puVar4;
}

