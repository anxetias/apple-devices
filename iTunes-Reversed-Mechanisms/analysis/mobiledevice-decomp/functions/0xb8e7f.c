// rea decompile_all
// name: ___AFCOperationCopyDescription
// address: 0xb8e7f
// body: available
// range: 0xb8e7f-0xb8f6a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 ___AFCOperationCopyDescription(long param_1)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = _CFGetAllocator();
  if ((ulong)*(uint *)(param_1 + 0x18) < 6) {
    pcVar2 = *(cfstringStruct **)(&___OperationStates + (ulong)*(uint *)(param_1 + 0x18) * 8);
  }
  else {
    pcVar2 = &cf_Invalid;
  }
  uVar3 = _AFCCopyErrorString(*(undefined4 *)(param_1 + 0x28));
  uVar4 = _AFCCopyPacketTypeString(*(undefined8 *)(param_1 + 0x30));
  uVar5 = _CFStringCreateMutable(uVar1,0);
  _CFStringAppendFormat
            (uVar5,0,&cf_<AFCOperation_p[_p]>_Packet______qu__State______d__Status_____0x_x_,param_1
             ,uVar1,uVar4,*(undefined8 *)(param_1 + 0x30),pcVar2,*(undefined4 *)(param_1 + 0x18),
             uVar3,*(undefined4 *)(param_1 + 0x28));
  if (*(long *)(param_1 + 0xf0) != 0) {
    _CFStringAppendFormat(uVar5,0,&cf_ResultObject____);
  }
  _CFStringAppendFormat(uVar5,0,&cf__);
  _CFRelease(uVar3);
  _CFRelease(uVar4);
  return uVar5;
}

