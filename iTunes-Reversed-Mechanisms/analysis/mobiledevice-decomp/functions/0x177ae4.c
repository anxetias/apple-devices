// rea decompile_all
// name: __AMRestorableStateMachinePrint
// address: 0x177ae4
// body: available
// range: 0x177ae4-0x177c03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x177bff to 0x16f561 _AMRSafeLogAndRelease (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMRestorableStateMachinePrint(long param_1)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  ulong uVar8;
  
  uVar5 = _CFStringCreateMutable(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0);
  cVar2 = __AMRestorableStateMachineIsComplete(param_1);
  if (cVar2 == '\0') {
    pcVar6 = &cf_RUNNING;
  }
  else {
    pcVar6 = &cf_SUCCESSFUL;
    if (*(char *)(param_1 + 0x2c) != '\0') {
      pcVar6 = &cf_ERROR;
    }
  }
  _CFStringAppendFormat(uVar5,0,&cf_StateMachineDump_status____,pcVar6);
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar7 = 0;
    uVar8 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x20);
      uVar3 = *(int *)(lVar1 + lVar7) - 1;
      pcVar6 = &cf_Unknown;
      if (uVar3 < 6) {
        pcVar6 = *(cfstringStruct **)(&DAT_0044a380 + (ulong)uVar3 * 8);
      }
      _CFStringAppendFormat
                (uVar5,0,&cf__state___remaining_cycles__d,pcVar6,*(undefined4 *)(lVar1 + 4 + lVar7))
      ;
      if (lVar1 + lVar7 == *(long *)(param_1 + 0x18)) {
        _CFStringAppend(uVar5,&cf__currentstate_);
      }
      _CFStringAppend(uVar5);
      iVar4 = *(int *)(param_1 + 0x28);
      if (uVar8 != iVar4 - 1) {
        _CFStringAppend(uVar5);
        iVar4 = *(int *)(param_1 + 0x28);
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0xc;
    } while ((long)uVar8 < (long)iVar4);
  }
  _AMRSafeLogAndRelease(3,uVar5);
  return;
}

