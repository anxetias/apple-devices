// rea decompile_all
// name: FUN_100011123
// address: 0x100011123
// body: available
// range: 0x100011123-0x10001117d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100011123(char *param_1,ulong param_2)

{
  uint uVar1;
  size_t sVar2;
  char *pcVar3;
  
  sVar2 = _strlen(param_1);
  if ((int)sVar2 == 0x18) {
    uVar1 = 0x19;
    pcVar3 = param_1;
    do {
      if ((long)*pcVar3 < 0) {
        return;
      }
      if ((PTR___DefaultRuneLocale_10001c068[(long)*pcVar3 * 4 + 0x3e] & 1) == 0) {
        return;
      }
      pcVar3 = pcVar3 + 1;
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
    if (0x19 < param_2) {
      param_1[0x19] = param_1[0x18];
      *(undefined8 *)(param_1 + 9) = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 0x11) = *(undefined8 *)(param_1 + 0x10);
      param_1[8] = '-';
    }
  }
  return;
}

