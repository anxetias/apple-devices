// rea decompile_all
// name: _DLStatusFromOSStatus
// address: 0xb2e4
// body: available
// range: 0xb2e4-0xb391 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _DLStatusFromOSStatus(int param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  if (param_1 != -1) {
    return 0;
  }
  if (param_2 != (undefined8 *)0x0) {
    piVar2 = ___error();
    pcVar3 = _strerror(*piVar2);
    piVar2 = ___error();
    uVar4 = _CFStringCreateWithFormat(0,0,&cf__s__d_,pcVar3,*piVar2);
    *param_2 = uVar4;
  }
  piVar2 = ___error();
  iVar1 = *piVar2;
  if (iVar1 < 0x14) {
    if (iVar1 == 2) {
      return 0xfffffffa;
    }
    if (iVar1 == 5) {
      return 0xfffffff5;
    }
    if (iVar1 == 0x11) {
      return 0xfffffff9;
    }
  }
  else if (iVar1 < 0x1c) {
    if (iVar1 == 0x14) {
      return 0xfffffff8;
    }
    if (iVar1 == 0x15) {
      return 0xfffffff7;
    }
  }
  else {
    if (iVar1 == 0x1c) {
      return 0xfffffff1;
    }
    if (iVar1 == 0x3e) {
      return 0xfffffff6;
    }
  }
  return 0xffffffff;
}

