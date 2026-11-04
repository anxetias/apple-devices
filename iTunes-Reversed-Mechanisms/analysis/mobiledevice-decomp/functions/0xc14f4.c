// rea decompile_all
// name: _AMSSetBackupPasswordInKeychain
// address: 0xc14f4
// body: available
// range: 0xc14f4-0xc16c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMSSetBackupPasswordInKeychain(long param_1,long param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  size_t sVar5;
  size_t sVar6;
  char *pcVar7;
  undefined8 local_30;
  
  if (param_1 == 0) {
    return 3;
  }
  if (_sMainProcessLink == 0) {
    return 2;
  }
  local_30 = 0;
  pcVar3 = (char *)__copyCStr();
  if (param_2 == 0) {
    sVar5 = _strlen(pcVar3);
    iVar2 = _SecKeychainFindGenericPassword
                      (0,10,"iOS Backup",sVar5 & 0xffffffff,pcVar3,0,0,&local_30);
    if (iVar2 == 0) {
      iVar2 = _SecKeychainItemDelete(local_30);
      if (iVar2 == 0) {
        if (param_3 != (undefined1 *)0x0) {
          *param_3 = 1;
        }
      }
      else {
        __AMSDebugLog("Could not remove keychain entry for %s",pcVar3);
      }
    }
    else {
      __AMSDebugLog("Could not find a keychain item to delete");
    }
    goto LAB_000c169b;
  }
  pcVar4 = (char *)__copyCStr(param_2);
  sVar5 = _strlen(pcVar3);
  sVar6 = _strlen(pcVar4);
  iVar2 = _SecKeychainAddGenericPassword
                    (0,10,"iOS Backup",sVar5 & 0xffffffff,pcVar3,sVar6 & 0xffffffff,pcVar4,0);
  if (iVar2 == -0x62d3) {
    sVar5 = _strlen(pcVar3);
    iVar2 = _SecKeychainFindGenericPassword
                      (0,10,"iOS Backup",sVar5 & 0xffffffff,pcVar3,0,0,&local_30);
    uVar1 = local_30;
    if (iVar2 == 0) {
      sVar5 = _strlen(pcVar4);
      iVar2 = _SecKeychainItemModifyContent(uVar1,0,sVar5 & 0xffffffff,pcVar4);
      if (iVar2 == 0) goto LAB_000c159b;
      pcVar7 = "Could not update the backup password: %d";
    }
    else {
      pcVar7 = "Can\'t update backup password: the keychain has lost its mind: %d";
    }
    __AMSDebugLog(pcVar7,iVar2);
  }
  else if (iVar2 == 0) {
    __AMSDebugLog("Password stored in keychain for target %s",pcVar3);
LAB_000c159b:
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
  }
  if (pcVar4 != (char *)0x0) {
    _free(pcVar4);
  }
LAB_000c169b:
  if (pcVar3 != (char *)0x0) {
    _free(pcVar3);
  }
  return 0;
}

