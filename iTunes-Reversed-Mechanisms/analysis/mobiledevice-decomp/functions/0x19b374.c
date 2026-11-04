// rea decompile_all
// name: _print_fw_update_regs
// address: 0x19b374
// body: available
// range: 0x19b374-0x19b47e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _print_fw_update_regs(long *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_38;
  
  lVar1 = _uarpZalloc(0x34);
  if (lVar1 != 0) {
    local_38 = 0;
    (**(code **)(*param_1 + 0x28))(param_1,0,0x2d,lVar1,0x34,0,&local_38);
    if (_inRestore == '\x01') {
      _puts("otpBuf:");
    }
    else {
      _uarpLogError(3,"otpBuf:\n");
    }
    uVar2 = 1;
    do {
      if (_inRestore == '\x01') {
        _printf("%02X",(ulong)*(byte *)(lVar1 + -1 + uVar2));
      }
      else {
        _uarpLogError(3,"%02X");
      }
      if ((uVar2 & 0xf) == 0) {
        if (_inRestore == '\x01') {
          _putchar(10);
        }
        else {
          _uarpLogError(3,"\n");
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != 0x35);
    _image3Free(lVar1);
  }
  return;
}

