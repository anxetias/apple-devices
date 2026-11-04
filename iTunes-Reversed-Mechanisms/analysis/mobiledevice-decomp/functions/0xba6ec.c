// rea decompile_all
// name: ___AFCConnectionDispatchReply
// address: 0xba6ec
// body: available
// range: 0xba6ec-0xba792 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 ___AFCConnectionDispatchReply(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  long *plVar4;
  
  _AFCLockLock(*(undefined8 *)(param_2 + 0xf8));
  if (*(long *)(param_2 + 0x58) == 0) {
    _AFCLockUnlock(*(undefined8 *)(param_2 + 0xf8));
    uVar3 = 0xe8004017;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x30);
    lVar2 = *(long *)(*(long *)(param_2 + 0x58) + 0x20);
    _AFCLockUnlock(*(undefined8 *)(param_2 + 0xf8));
    UNRECOVERED_JUMPTABLE = ___AFCProcessStatusPacket;
    plVar4 = &DAT_004452e8;
    do {
      if (((plVar4[-1] == 0) || (plVar4[-1] == lVar1)) && (*plVar4 == lVar2)) {
        *(undefined4 *)(param_2 + 0x18) = 5;
                    /* WARNING: Could not recover jumptable at 0x000ba791. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
        return uVar3;
      }
      UNRECOVERED_JUMPTABLE = (code *)plVar4[4];
      plVar4 = plVar4 + 3;
    } while (UNRECOVERED_JUMPTABLE != (code *)0x0);
    *(undefined4 *)(param_2 + 0x18) = 5;
    uVar3 = 0xe8004006;
  }
  return uVar3;
}

