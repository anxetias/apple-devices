// rea decompile_all
// name: std::stringbuf::str
// address: 0x220ed4
// body: available
// range: 0x220ed4-0x220f3d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::stringbuf::str() const */

void std::stringbuf::str(void)

{
  ulong uVar1;
  char *pcVar2;
  long in_RSI;
  char *pcVar3;
  string *in_RDI;
  
  if ((*(uint *)(in_RSI + 0x60) & 0x10) == 0) {
    if ((*(uint *)(in_RSI + 0x60) & 8) == 0) {
      *(undefined8 *)in_RDI = 0;
      *(undefined8 *)(in_RDI + 8) = 0;
      *(undefined8 *)(in_RDI + 0x10) = 0;
      return;
    }
    pcVar3 = *(char **)(in_RSI + 0x10);
    pcVar2 = *(char **)(in_RSI + 0x20);
    uVar1 = (long)pcVar2 - (long)pcVar3;
  }
  else {
    pcVar3 = *(char **)(in_RSI + 0x30);
    pcVar2 = *(char **)(in_RSI + 0x58);
    if (*(char **)(in_RSI + 0x58) < pcVar3) {
      *(char **)(in_RSI + 0x58) = pcVar3;
      pcVar2 = pcVar3;
    }
    pcVar3 = *(char **)(in_RSI + 0x28);
    uVar1 = (long)pcVar2 - (long)pcVar3;
  }
  string::__init_with_size_abi_ne190102_<char*,char*>(in_RDI,pcVar3,pcVar2,uVar1);
  return;
}

