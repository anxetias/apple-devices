// rea decompile_all
// name: _wait_for_mode
// address: 0x19b47f
// body: available
// range: 0x19b47f-0x19b642 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _wait_for_mode(undefined8 param_1,uint param_2,char param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  char *pcVar4;
  int iVar5;
  undefined8 local_38;
  
  local_38 = (ulong)param_4 << 0x20;
  iVar5 = 10;
  do {
    uVar1 = _get_mode(param_1,&local_38);
    if (uVar1 == 0) {
      uVar3 = local_38 & 0xffffffff;
      if ((uint)local_38 == param_2) {
        return 0;
      }
      if ((uint)local_38 == 0x424f4f54) {
        if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
          pcVar4 = "Ace is in boot mode, trying to read mode again after 1000ms";
          goto LAB_0019b5c3;
        }
        pcVar4 = "Ace is in boot mode, trying to read mode again after 1000ms\n";
LAB_0019b5a1:
        _uarpLogInfo(3,pcVar4);
      }
      else {
        if ((uint)local_38 == 0x41444655 && param_3 == '\x01') {
          if ((_inRestore != '\x01') || ((_logLevel & 2) == 0)) {
            pcVar4 = "Ace is in ADFU mode, trying to read mode again after 1000ms\n";
            goto LAB_0019b5a1;
          }
          pcVar4 = "Ace is in ADFU mode, trying to read mode again after 1000ms";
        }
        else {
          if (((uint)local_38 != 0x41505020) || (local_38._4_1_ == '\0')) {
            if (_inRestore == '\0') {
              pcVar4 = "Ace in unexpected mode 0x%08x\n";
              goto LAB_0019b609;
            }
            pcVar4 = "Ace in unexpected mode 0x%08x\n";
            param_2 = (uint)local_38;
            goto LAB_0019b5f4;
          }
          if ((_inRestore == '\0') || ((_logLevel & 2) == 0)) {
            pcVar4 = "Ace is in APP mode, trying to read mode again after 1000ms\n";
            goto LAB_0019b5a1;
          }
          pcVar4 = "Ace is in APP mode, trying to read mode again after 1000ms";
        }
LAB_0019b5c3:
        _puts(pcVar4);
      }
      uVar2 = _delay_ms(1000);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    else {
      if (_inRestore == '\x01') {
        _printf("Warning: Received status 0x%x when reading mode, delaying 1000ms and trying again",
                (ulong)uVar1);
      }
      else {
        _uarpLogError(3,
                      "Warning: Received status 0x%x when reading mode, delaying 1000ms and trying again"
                      ,uVar1);
      }
      _delay_ms(1000);
    }
    iVar5 = iVar5 + -1;
    if (iVar5 == 0) {
      if (_inRestore == '\x01') {
        pcVar4 = "Ace never enterred mode 0x%x\n";
LAB_0019b5f4:
        _printf(pcVar4,(ulong)param_2);
      }
      else {
        pcVar4 = "Ace never enterred mode 0x%x\n";
        uVar3 = (ulong)param_2;
LAB_0019b609:
        _uarpLogError(3,pcVar4,uVar3);
      }
      return 0xe00002e9;
    }
  } while( true );
}

