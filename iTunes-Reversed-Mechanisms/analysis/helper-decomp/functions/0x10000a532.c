// rea decompile_all
// name: FUN_10000a532
// address: 0x10000a532
// body: available
// range: 0x10000a532-0x10000a57d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10000a532(void)

{
  undefined4 uVar1;
  ulong in_RAX;
  undefined8 uStack_18;
  
  if (DAT_1000166d9 == '\0') {
    DAT_1000166d9 = '\x01';
    uStack_18 = in_RAX & 0xffffffffffffff;
    uVar1 = _CFPreferencesGetAppIntegerValue
                      (&cf_ProcessLinkLog,&cf_com_apple_DeviceLink,(long)&uStack_18 + 7);
    if (uStack_18._7_1_ != '\0') {
      DAT_100016664 = uVar1;
    }
  }
  return DAT_100016664;
}

