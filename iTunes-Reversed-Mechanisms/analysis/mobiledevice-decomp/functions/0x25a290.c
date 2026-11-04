// rea decompile_all
// name: SERestoreInfo::SERestoreInfoLog::printToOsLog
// address: 0x25a290
// body: available
// range: 0x25a290-0x25a368 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::SERestoreInfoLog::printToOsLog(void*, char const*) */

void SERestoreInfo::SERestoreInfoLog::printToOsLog(void *param_1,char *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined1 *puVar3;
  ulong uVar4;
  string local_68;
  undefined1 local_67 [15];
  undefined1 *local_58;
  string local_50 [8];
  ulong local_48;
  void *local_40;
  allocator local_31;
  
  iVar2 = ___isPlatformVersionAtLeast(1,10,0xc,0);
  if (iVar2 == 0) {
    return;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (local_50,param_2);
  puVar1 = PTR___os_log_default_004412f0;
  uVar4 = 0;
  do {
    if (((byte)local_50[0] & 1) == 0) {
      if ((byte)local_50[0] >> 1 <= uVar4) {
        return;
      }
    }
    else if (local_48 <= uVar4) {
      operator_delete(local_40);
      return;
    }
    std::string::string(&local_68,local_50,uVar4,1000,&local_31);
    puVar3 = local_67;
    if (((byte)local_68 & 1) != 0) {
      puVar3 = local_58;
    }
    __os_log_internal(0,puVar1,0,"%s",puVar3);
    if (((byte)local_68 & 1) != 0) {
      operator_delete(local_58);
    }
    uVar4 = uVar4 + 1000;
  } while( true );
}

