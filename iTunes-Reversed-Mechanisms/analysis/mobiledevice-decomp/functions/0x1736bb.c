// rea decompile_all
// name: __serviceAddedCallback
// address: 0x1736bb
// body: available
// range: 0x1736bb-0x1737b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __serviceAddedCallback(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_34;
  
  while( true ) {
    iVar1 = _IOIteratorNext(param_2);
    if (iVar1 == 0) break;
    _AMRLog(6,&cf_Foundunauthorizedtransport_);
    iVar2 = _IOObjectConformsTo(iVar1,"IOPortTransportState");
    if (iVar2 == 0) {
      _AMRLog(3,&cf_Invalidtransportclass_);
    }
    else {
      iVar2 = _IOServiceOpen(iVar1,*(undefined4 *)PTR__mach_task_self__00441340,0,&local_34);
      if (iVar2 == 0) {
        local_40 = 4;
        iVar2 = _IOConnectCallScalarMethod(local_34,1,&local_40,1,0,0);
        if (iVar2 != 0) {
          _AMRLog(3,&cf_Failedtosetuserauthorizationstatus_IOConnectCallScalarMethodreturned0x_08x,
                  iVar2);
        }
        _IOServiceClose(local_34);
      }
      else {
        _AMRLog(3,&cf_Failedtoopenuserclient_IOServiceOpenreturned0x_08x,iVar2);
      }
    }
    _IOObjectRelease(iVar1);
  }
  return;
}

