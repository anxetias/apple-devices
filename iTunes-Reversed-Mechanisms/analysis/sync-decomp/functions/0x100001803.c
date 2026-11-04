// rea decompile_all
// name: FUN_100001803
// address: 0x100001803
// body: available
// range: 0x100001803-0x1000018b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


cfstringStruct * FUN_100001803(long param_1)

{
  long lVar1;
  cfstringStruct *pcVar2;
  
  if (param_1 == 0) {
    return (cfstringStruct *)0x0;
  }
  lVar1 = _CFStringCompare(param_1,&cf_Bookmarks,0);
  if (lVar1 == 0) {
    pcVar2 = &cf_com_apple_Bookmarks;
  }
  else {
    lVar1 = _CFStringCompare(param_1,&cf_Calendars,0);
    if (lVar1 == 0) {
      pcVar2 = &cf_com_apple_Calendars;
    }
    else {
      lVar1 = _CFStringCompare(param_1,&cf_Contacts,0);
      if (lVar1 == 0) {
        pcVar2 = &cf_com_apple_Contacts;
      }
      else {
        lVar1 = _CFStringCompare(param_1,&cf_MailAccounts,0);
        if (lVar1 == 0) {
          pcVar2 = &cf_com_apple_MailAccounts;
        }
        else {
          lVar1 = _CFStringCompare(param_1,&cf_Notes,0);
          pcVar2 = &cf_com_apple_Notes;
          if (lVar1 != 0) {
            pcVar2 = (cfstringStruct *)0x0;
          }
        }
      }
    }
  }
  return pcVar2;
}

