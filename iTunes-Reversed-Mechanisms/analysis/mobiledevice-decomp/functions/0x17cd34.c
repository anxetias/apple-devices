// rea decompile_all
// name: _CoreUARPRestoreEndpointMsgRecv
// address: 0x17cd34
// body: available
// range: 0x17cd34-0x17cde4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _CoreUARPRestoreEndpointMsgRecv(long param_1,undefined2 *param_2,undefined4 param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  
  uVar1 = _uarpNtohs(*param_2);
  uVar2 = _uarpNtohs(param_2[1]);
  uVar3 = _uarpNtohs(param_2[2]);
  _CoreUARPRestoreLogDebug
            (param_1,1,
             "UARP Restore: UARP RX: Buffer = %p, Payload Length = %u, Type = 0x%04x, Total Length = %u, ID = %u"
             ,param_2,param_3,uVar1,uVar2,uVar3);
  iVar4 = _uarpPlatformEndpointRecvMessage(param_1 + 0x298,param_1 + 0x6d0,param_2,param_3);
  if (iVar4 != 0) {
    _CoreUARPRestoreLogError(param_1,1,"UARP Restore: Failed to process rx uarp message");
  }
  return iVar4;
}

