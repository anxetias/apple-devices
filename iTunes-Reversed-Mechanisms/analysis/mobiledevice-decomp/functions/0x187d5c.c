// rea decompile_all
// name: _Ace3UARPExternalDFUFirmwareTssRequest
// address: 0x187d5c
// body: available
// range: 0x187d5c-0x187e35 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x187e31 to 0x2aa28a _dispatch_semaphore_signal (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _Ace3UARPExternalDFUFirmwareTssRequest
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if ((code *)puVar1[0xe] != (code *)0x0) {
    (*(code *)puVar1[0xe])(puVar1[0xf],"Ace3UARPExternalDFUFirmwareTssRequest.");
  }
  if (param_3 == 0) {
    UNRECOVERED_JUMPTABLE = (code *)puVar1[0xe];
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return;
    }
    uVar3 = puVar1[0xf];
    pcVar4 = "Error: Received Invalid tssOptions.";
  }
  else {
    if (puVar1[4] == 0) {
      puVar1[9] = *(undefined8 *)(param_1 + 0x28);
      *puVar1 = param_2;
      uVar3 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      uVar2 = _CFDictionaryCreateCopy(uVar3,param_3);
      puVar1[4] = uVar2;
      uVar3 = _CFStringCreateWithCString(uVar3,param_4,0x8000100);
      puVar1[3] = uVar3;
      _dispatch_semaphore_signal((dispatch_semaphore_t)puVar1[6]);
      return;
    }
    UNRECOVERED_JUMPTABLE = (code *)puVar1[0xe];
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return;
    }
    uVar3 = puVar1[0xf];
    pcVar4 = "Error: Multiple payload needs personalization.";
  }
                    /* WARNING: Could not recover jumptable at 0x00187dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3,pcVar4);
  return;
}

