// rea decompile_all
// name: ___enqueue_files_for_diffing_block_invoke
// address: 0xb0239
// body: available
// range: 0xb0239-0xb031e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xb02fa to 0xae4ee _set_error (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___enqueue_files_for_diffing_block_invoke(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  lVar3 = _CFArrayCreateMutable(0,0,PTR__kCFTypeArrayCallBacks_004411a8);
  *(long *)(*(long *)(param_1 + 0x28) + 0xf8) = lVar3;
  if (lVar3 == 0) {
    ___enqueue_files_for_diffing_block_invoke_cold_3();
  }
  else {
    bVar1 = true;
    do {
      bVar4 = bVar1;
      _dispatch_group_enter(*(dispatch_group_t *)(*(long *)(param_1 + 0x28) + 0xd0));
      iVar2 = _CreateThreadWithLargeStack(_bsdiff_thread_func,*(undefined8 *)(param_1 + 0x28));
      if (iVar2 != 0) {
        ___enqueue_files_for_diffing_block_invoke_cold_1();
        goto LAB_000b02dc;
      }
      bVar1 = false;
    } while (bVar4);
    lVar3 = _CFDictionaryGetValue(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18),&cf_DIFFS);
    *(long *)(*(long *)(param_1 + 0x28) + 0xe8) = lVar3;
    if (lVar3 == 0) {
      ___enqueue_files_for_diffing_block_invoke_cold_2();
    }
    else {
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
    }
  }
LAB_000b02dc:
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) == '\x01') {
    _set_error(*(undefined8 *)(param_1 + 0x28),0);
    return;
  }
  return;
}

