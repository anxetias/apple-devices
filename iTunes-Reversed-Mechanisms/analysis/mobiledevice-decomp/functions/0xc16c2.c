// rea decompile_all
// name: __AMSGetiTunesBackupPasswordFromKeychainForTarget
// address: 0xc16c2
// body: available
// range: 0xc16c2-0xc17b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __AMSGetiTunesBackupPasswordFromKeychainForTarget(long param_1,undefined8 *param_2)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_40;
  undefined4 local_34;
  
  uVar5 = 3;
  if (param_2 != (undefined8 *)0x0 && param_1 != 0) {
    if (_sMainProcessLink == 0) {
      uVar5 = 2;
    }
    else {
      pcVar2 = (char *)__copyCStr();
      local_34 = 0;
      local_40 = 0;
      sVar3 = _strlen(pcVar2);
      iVar1 = _SecKeychainFindGenericPassword
                        (0,10,"iOS Backup",sVar3 & 0xffffffff,pcVar2,&local_34,&local_40,0);
      if (pcVar2 != (char *)0x0) {
        _free(pcVar2);
      }
      uVar5 = 3;
      if (local_40 != 0 && iVar1 == 0) {
        uVar5 = 0;
        uVar4 = _CFStringCreateWithBytes(0,local_40,local_34,0x8000100,0);
        *param_2 = uVar4;
        _SecKeychainItemFreeContent(0,local_40);
      }
    }
  }
  return uVar5;
}

