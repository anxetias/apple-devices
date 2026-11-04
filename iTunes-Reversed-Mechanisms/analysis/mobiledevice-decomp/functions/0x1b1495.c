// rea decompile_all
// name: _AMAuthInstallMonetLocalProvisionDevice
// address: 0x1b1495
// body: available
// range: 0x1b1495-0x1b161e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallMonetLocalProvisionDevice(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long local_40;
  undefined8 local_38;
  long local_30;
  
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  if (param_1 == 0) {
    _AMAuthInstallMonetLocalProvisionDevice_cold_8();
LAB_001b15aa:
    iVar1 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x30) == 0) {
      _AMAuthInstallMonetLocalProvisionDevice_cold_7();
      goto LAB_001b15aa;
    }
    iVar1 = _AMAuthInstallMonetLocalCreateProvisioningTicket(param_1,&local_30);
    lVar3 = local_30;
    if (iVar1 != 0) {
      _AMAuthInstallLog(3,"AMAuthInstallMonetLocalProvisionDevice",
                        "AMAuthInstallMonetLocalCreateProvisioningTicket failed\n");
      lVar3 = local_30;
      goto LAB_001b1574;
    }
    if (local_30 != 0) {
      lVar4 = local_30;
      if (*(char *)(param_1 + 0x100) == '\0') {
        if (*(long *)(param_1 + 0x110) == 0) {
          _AMAuthInstallMonetLocalProvisionDevice_cold_5();
        }
        else {
          lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x48);
          if (lVar4 != 0) {
            iVar1 = _AMAuthInstallCryptoDecryptSessionKey
                              (param_1,&cf_bb_monet_ticket_provisioning,lVar4,&local_38);
            if (iVar1 != 0) {
              _AMAuthInstallMonetLocalProvisionDevice_cold_1();
              goto LAB_001b1574;
            }
            iVar1 = _AMAuthInstallCryptoEncryptWithSessionKeyAndIVPrependIV
                              (param_1,local_38,*(undefined8 *)(param_1 + 0x110),lVar3,&local_40);
            if (iVar1 != 0) {
              _AMAuthInstallMonetLocalProvisionDevice_cold_2();
              goto LAB_001b1574;
            }
            lVar4 = local_40;
            if (local_40 != 0) goto LAB_001b1569;
            _AMAuthInstallMonetLocalProvisionDevice_cold_3();
            goto LAB_001b1571;
          }
          _AMAuthInstallMonetLocalProvisionDevice_cold_4();
        }
        iVar1 = 1;
      }
      else {
LAB_001b1569:
        uVar2 = _CFRetain(lVar4);
        *param_2 = uVar2;
LAB_001b1571:
        iVar1 = 0;
      }
      goto LAB_001b1574;
    }
    _AMAuthInstallMonetLocalProvisionDevice_cold_6();
    iVar1 = 0xe;
  }
  lVar3 = 0;
LAB_001b1574:
  _SafeRelease(local_40);
  _SafeRelease(local_38);
  _SafeRelease(lVar3);
  return iVar1;
}

