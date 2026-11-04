// rea decompile_all
// name: _DFUTransferOneBlock
// address: 0xf43c5
// body: available
// range: 0xf43c5-0xf44f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_DFUTransferOneBlock
          (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
          undefined4 param_5,char param_6)

{
  uint uVar1;
  undefined8 uVar2;
  undefined2 local_40;
  uint local_38;
  undefined2 local_34;
  
  _AMRLog(7,&cf_IssuingDNLOADrequest);
  uVar2 = __AMRUSBDeviceSendDeviceRequest(param_1,param_2,0,1,1,1,param_3,param_5,param_4);
  if ((int)uVar2 == 0) {
    local_34 = 0;
    local_38 = 0;
    local_40 = (undefined2)param_2;
    uVar1 = 0;
    do {
      if (uVar1 != 0) {
        _usleep(uVar1 * 1000);
      }
      uVar2 = __AMRUSBDeviceSendDeviceRequest(param_1,local_40,1,1,1,3,0,6,&local_38);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      _AMRLog(7,&cf_IssuedGETSTATUSrequest_state__dstatus__d,(char)local_34,(char)local_38);
      if ((char)local_38 != '\0') {
        _AMRLog(3,&cf_GETSTATUSstatusis_d);
        return 0xffffffff;
      }
      uVar1 = local_38 >> 8;
    } while ((char)local_34 != param_6);
    uVar2 = 0;
  }
  return uVar2;
}

