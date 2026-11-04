// rea decompile_all
// name: FUN_10000de65
// address: 0x10000de65
// body: available
// range: 0x10000de65-0x10000df55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10000de65(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 local_2c;
  
  local_2c = 0x20000;
  iVar2 = _setsockopt(param_1,0xffff,0x1001,&local_2c,4);
  if (iVar2 == 0) {
    iVar2 = _setsockopt(param_1,0xffff,0x1002,&local_2c,4);
    if (iVar2 == 0) {
      return 0;
    }
    piVar3 = ___error();
    uVar7 = local_2c;
    iVar2 = *piVar3;
    piVar3 = ___error();
    iVar1 = *piVar3;
    piVar3 = ___error();
    pcVar4 = _strerror(*piVar3);
    pcVar6 = "%s:%d %s setsockopt(%d, SOL_SOCKET, SO_RCVBUF, %d) failed: %d - %s";
    uVar5 = 0x100;
  }
  else {
    piVar3 = ___error();
    uVar7 = local_2c;
    iVar2 = *piVar3;
    piVar3 = ___error();
    iVar1 = *piVar3;
    piVar3 = ___error();
    pcVar4 = _strerror(*piVar3);
    pcVar6 = "%s:%d %s setsockopt(%d, SOL_SOCKET, SO_SNDBUF, %d) failed: %d - %s";
    uVar5 = 0xf8;
  }
  FUN_10000d8c6(pcVar6,"USBMuxConfigureNewClientSocket",uVar5,"USBMuxConfigureNewClientSocket",
                param_1,uVar7,iVar1,pcVar4);
  return iVar2;
}

