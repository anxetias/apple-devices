// rea decompile_all
// name: ___stream_image_block_invoke_2
// address: 0x11a4ab
// body: available
// range: 0x11a4ab-0x11a58f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool ___stream_image_block_invoke_2(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  iVar4 = _AMDServiceConnectionSend(*(undefined8 *)(param_1 + 0x30));
  lVar7 = (long)iVar4;
  if (lVar7 == param_3) {
    plVar1 = (long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30);
    *plVar1 = *plVar1 + param_3;
    lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    if (*(long *)(lVar6 + 0x30) == *(long *)(lVar6 + 0x20)) {
      *(long *)(lVar6 + 0x28) = *(long *)(lVar6 + 0x28) + 1;
      lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    }
    _fire_transfer_callback
              (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),lVar6 + 0x18,
               *(undefined8 *)(param_1 + 0x48));
  }
  else {
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0xe800002d;
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar3 = _md_log_log;
    uVar2 = *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18);
    uVar5 = _AMDErrorString(uVar2);
    __os_log_internal(0,uVar3,0x10,
                      "AMDServiceConnectionSend failed: 0x%08x, %s, buflen: %lld, sent: %lld",uVar2,
                      uVar5,param_3,lVar7);
  }
  return lVar7 == param_3;
}

