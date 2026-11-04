// rea decompile_all
// name: __AMRecoveryModeDeviceOpen
// address: 0xee804
// body: available
// range: 0xee804-0xee924 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __AMRecoveryModeDeviceOpen(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = __AMRUSBDeviceSendDeviceRequest(*(undefined8 *)(param_1 + 0x28),1,0,0,1,0xb,0,0,0);
  if (iVar1 != 0) {
    _AMRLog(4,&cf_errorsettinginterface_salternatesetting__d_expected_notfatal__,iVar1);
  }
  iVar1 = __AMRUSBDeviceOpen(*(undefined8 *)(param_1 + 0x28));
  if (iVar1 == 0) {
    lVar2 = __AMRUSBDeviceGetInterface(*(undefined8 *)(param_1 + 0x28),0xffff,0xffff);
    *(long *)(param_1 + 0x30) = lVar2;
    if (lVar2 == 0) {
      iVar1 = 0x7d2;
    }
    else {
      iVar1 = __AMRUSBInterfaceOpen(lVar2);
      if (iVar1 == 0) {
        if (*(char *)(param_1 + 0x38) == '\0') {
          iVar1 = __AMRUSBInterfaceGetPipes
                            (*(undefined8 *)(param_1 + 0x30),param_1 + 0x39,param_1 + 0x3a,
                             param_1 + 0x3b,param_1 + 0x3d,param_1 + 0x3c);
          if (iVar1 != 0) goto LAB_000ee866;
        }
        else {
          iVar1 = __AMRUSBInterfaceGetFileTransferPipe
                            (*(undefined8 *)(param_1 + 0x30),(undefined1 *)(param_1 + 0x3c),
                             param_1 + 0x3e);
          if (iVar1 != 0) {
            _AMRLog(4,&cf__AMRUSBInterfaceGetFileTransferPipereturned_d,iVar1);
            *(undefined1 *)(param_1 + 0x3c) = 0xff;
            return 0;
          }
        }
        return 0;
      }
    }
  }
LAB_000ee866:
  if (*(long *)(param_1 + 0x30) != 0) {
    __AMRUSBInterfaceClose();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return iVar1;
}

