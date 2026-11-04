// rea decompile_all
// name: _get_retimer_nor_access
// address: 0x19a6d6
// body: available
// range: 0x19a6d6-0x19a784 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _get_retimer_nor_access(undefined8 param_1,byte param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_28;
  undefined4 local_20;
  int local_1c;
  
  local_1c = 0;
  uVar2 = 0;
  uVar1 = _IOServiceOpen(param_1,*(undefined4 *)PTR__mach_task_self__00441340,0);
  uVar3 = (ulong)param_2;
  if (uVar1 == 0) {
    local_20 = 0;
    local_28 = uVar3;
    uVar1 = _IOConnectCallScalarMethod(local_1c,3,&local_28,1,0);
    if (uVar1 == 0) goto LAB_0019a76e;
  }
  uVar2 = (ulong)uVar1;
  if (_inRestore == '\x01') {
    _printf("Retimer SPI NOR access failed, value = %u, status = 0x%X\n",uVar3,uVar2);
  }
  else {
    _uarpLogError(3,"Retimer SPI NOR access failed, value = %u, status = 0x%X\n",uVar3,uVar2);
  }
LAB_0019a76e:
  if (local_1c != 0) {
    _IOServiceClose();
  }
  return uVar2;
}

