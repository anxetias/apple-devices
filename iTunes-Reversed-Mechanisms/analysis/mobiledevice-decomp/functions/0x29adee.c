// rea decompile_all
// name: _AMAuthInstallProvisioningGetProvisionedInfo
// address: 0x29adee
// body: available
// range: 0x29adee-0x29aff6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallProvisioningGetProvisionedInfo(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  
  if (param_1 == 0) {
    return 1;
  }
  if (param_2 == (long *)0x0) {
    return 1;
  }
  if (*(long *)(param_1 + 0x138) == 0) {
    if ((*(uint *)(param_1 + 0x130) | 8) == 9) {
      lVar2 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 0x140),&cf_WIFI_MAC);
      lVar3 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 0x140),&cf_BT_MAC);
      lVar4 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 0x140),&cf_USB_ETHER_MAC);
      bVar7 = false;
      bVar6 = false;
      if (lVar2 == 0) {
        bVar6 = *(char *)(param_1 + 0x14c) == '\0';
      }
      if (lVar3 == 0) {
        bVar7 = *(char *)(param_1 + 0x14a) == '\0';
      }
      bVar8 = false;
      if (lVar4 == 0) {
        bVar8 = *(char *)(param_1 + 0x14b) == '\0';
      }
      if ((*(char *)(param_1 + 0x148) != '\0') || ((bVar7 || bVar6) || bVar8)) {
        pcVar5 = "NO";
        if ((bVar7 || bVar6) || bVar8) {
          pcVar5 = "YES";
        }
        _AMAuthInstallLog(6,"AMAuthInstallProvisioningGetProvisionedInfo",
                          "Forcing reprovisioning.  macAddressMissing=%s",pcVar5);
      }
      else {
        _AMAuthInstallLog(5,"AMAuthInstallProvisioningGetProvisionedInfo",
                          "AP: already fully provisioned, sending ACK");
        iVar1 = _AMAuthInstallProvisioningSendAck(param_1,0);
        if (iVar1 == 0) {
          _AMAuthInstallLog(5,"AMAuthInstallProvisioningGetProvisionedInfo",
                            "AP: ACK successful. Not attempting to provision.");
          *param_2 = 0;
          return 0;
        }
        if (iVar1 != 0x18) {
          _AMAuthInstallLog(3,"AMAuthInstallProvisioningGetProvisionedInfo",
                            "AP: provisioning server failed to respond, cannot provision.");
          *param_2 = 0;
          return iVar1;
        }
        _AMAuthInstallLog(5,"AMAuthInstallProvisioningGetProvisionedInfo",
                          "AP: provisioning ack failed, sending provisioning request.");
      }
      iVar1 = _AMAuthInstallProvisioningSendRequest(param_1,&cf_100,param_2);
      if (iVar1 != 0) {
        _AMAuthInstallLog(3,"AMAuthInstallProvisioningGetProvisionedInfo",
                          "AMAuthInstallProvisioningSendRequest failed");
        return iVar1;
      }
      if (*param_2 != 0) {
        return 0;
      }
      _AMAuthInstallLog(3,"AMAuthInstallProvisioningGetProvisionedInfo","*outInfo is NULL");
      return 0xe;
    }
    *param_2 = 0;
  }
  else {
    *param_2 = *(long *)(param_1 + 0x138);
  }
  return 0;
}

