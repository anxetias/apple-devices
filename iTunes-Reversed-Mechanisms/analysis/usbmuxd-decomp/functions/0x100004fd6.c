// rea decompile_all
// name: FUN_100004fd6
// address: 0x100004fd6
// body: available
// range: 0x100004fd6-0x100005092 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100004fd6(void)

{
  char cVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  
  puVar2 = DAT_1000212b0;
  do {
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    cVar1 = *(char *)(puVar2 + 10);
    if (((puVar2[7] == 0) || (cVar3 = FUN_100000fb1(), cVar3 == '\0')) &&
       ((puVar2[8] == 0 || (cVar3 = FUN_100000fb1(), cVar3 == '\0')))) {
      *(undefined1 *)(puVar2 + 10) = 0;
      if (cVar1 != '\0') {
        pcVar5 = &cf__sun_blacklisting_s;
joined_r0x000100005042:
        if (4 < DAT_100021030) {
          uVar4 = FUN_10000302f(puVar2);
          FUN_1000008d2(5,0,pcVar5,"HandleNewBlacklist",uVar4);
        }
      }
    }
    else {
      *(undefined1 *)(puVar2 + 10) = 1;
      if (cVar1 == '\0') {
        pcVar5 = &cf__sblacklisting_s;
        goto joined_r0x000100005042;
      }
    }
    puVar2 = (undefined8 *)*puVar2;
  } while( true );
}

