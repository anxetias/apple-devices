// rea decompile_all
// name: ACFURestoreHost::createNum32FromString
// address: 0x214ff0
// body: available
// range: 0x214ff0-0x2150a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFURestoreHost::createNum32FromString(__CFString const*, __CFNumber const**) */

ulong ACFURestoreHost::createNum32FromString(__CFString *param_1,__CFNumber **param_2)

{
  __CFNumber *p_Var1;
  undefined8 uVar2;
  char *pcVar3;
  ulong uVar4;
  ACFUCommon local_30 [8];
  ulong local_28;
  void *local_20;
  
  ACFUCommon::stringFromCFString(local_30,param_1);
  if (((byte)local_30[0] & 1) == 0) {
    local_28 = (ulong)((byte)local_30[0] >> 1);
  }
  if (local_28 == 0) {
    uVar2 = ACFULogging::getLogInstance();
    pcVar3 = "%s::%s: failed to get string\n";
  }
  else {
    std::stoi((string *)local_30,(ulong *)0x0,0);
    p_Var1 = (__CFNumber *)_CFNumberCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,3);
    *param_2 = p_Var1;
    uVar4 = CONCAT71((int7)((ulong)param_2 >> 8),1);
    if (p_Var1 != (__CFNumber *)0x0) goto LAB_00215053;
    uVar2 = ACFULogging::getLogInstance();
    pcVar3 = "%s::%s: Failed to create CF number from int value\n";
  }
  uVar4 = 0;
  ACFULogging::handleMessage(uVar2,2,pcVar3,"ACFURestoreHost","createNum32FromString");
LAB_00215053:
  if (((byte)local_30[0] & 1) != 0) {
    operator_delete(local_20);
  }
  return uVar4 & 0xffffffff;
}

