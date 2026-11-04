// rea decompile_all
// name: _Img4EncodeItemBegin
// address: 0x24276b
// body: available
// range: 0x24276b-0x24286c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _Img4EncodeItemBegin(long *param_1,undefined4 param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  
  if (param_1 == (long *)0x0) {
    return 0x65;
  }
  puVar3 = (undefined4 *)*param_1;
  if (puVar3 == (undefined4 *)0x0) {
    pvVar4 = _calloc(1,0x28);
    *param_1 = (long)pvVar4;
    if (pvVar4 == (void *)0x0) {
      return 0x66;
    }
    pvVar4 = _calloc(1,0x400);
    *(void **)(*param_1 + 8) = pvVar4;
    lVar1 = *param_1;
    if (*(long *)(lVar1 + 8) == 0) {
      return 0x66;
    }
    *(undefined4 *)(lVar1 + 0x10) = 0x400;
    *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 8);
    puVar3 = (undefined4 *)*param_1;
  }
  else {
    if (**(long **)(puVar3 + 8) != 0) {
      return 0x65;
    }
    if ((int)(*(long **)(puVar3 + 8))[1] != 0) {
      return 0x65;
    }
  }
  *puVar3 = param_2;
  pvVar4 = _calloc(1,0x18);
  *(void **)(*param_1 + 0x20) = pvVar4;
  uVar5 = 0x66;
  if (*(long *)(*param_1 + 0x20) != 0) {
    pvVar4 = _calloc(1,0x400);
    **(undefined8 **)(*param_1 + 0x20) = pvVar4;
    plVar2 = *(long **)(*param_1 + 0x20);
    if (*plVar2 != 0) {
      *(undefined4 *)(plVar2 + 1) = 0x400;
      plVar2[2] = *plVar2;
      uVar5 = 100;
    }
  }
  return uVar5;
}

