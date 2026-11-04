// rea decompile_all
// name: FUN_10000e2cd
// address: 0x10000e2cd
// body: available
// range: 0x10000e2cd-0x10000e39c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10000e2cd(char *param_1,void *param_2,undefined8 param_3)

{
  DNSServiceErrorType DVar1;
  long lVar2;
  DNSServiceRef local_18;
  
  local_18 = (DNSServiceRef)0x0;
  DVar1 = _DNSServiceBrowse(&local_18,0,0,param_1,"local",FUN_1000116a4,param_2);
  if ((DVar1 == 0) && (local_18 != (DNSServiceRef)0x0)) {
    lVar2 = FUN_10000f5f2(&local_18,FUN_100011b5a,param_3);
    if (lVar2 != 0) goto LAB_10000e385;
    if (2 < DAT_100021030) {
      lVar2 = 0;
      FUN_1000008d2(3,0,&cf__sCouldnotcreatesource_,"_CreateBonjourDeviceBrowseService");
      goto LAB_10000e385;
    }
  }
  else if (2 < DAT_100021030) {
    lVar2 = 0;
    FUN_1000008d2(3,0,&cf__sDNSServiceBrowse__failed_d_,"_CreateBonjourDeviceBrowseService",DVar1);
    goto LAB_10000e385;
  }
  lVar2 = 0;
LAB_10000e385:
  if (local_18 != (DNSServiceRef)0x0) {
    _DNSServiceRefDeallocate(local_18);
  }
  return lVar2;
}

