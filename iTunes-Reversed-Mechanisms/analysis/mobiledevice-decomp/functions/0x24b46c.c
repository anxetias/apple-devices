// rea decompile_all
// name: std::operator+[abi:ne190102]<char,std::char_traits<char>,std::allocator<char>>
// address: 0x24b46c
// body: available
// range: 0x24b46c-0x24b4be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::string std::operator+[abi:ne190102]<char, std::char_traits<char>, std::allocator<char>
   >(std::string&&, std::string&&) */

string * std::operator+[abi_ne190102_<char,std::char_traits<char>,std::allocator<char>>
                   (string *param_1,string *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  byte *in_RDX;
  byte *pbVar3;
  
  if ((*in_RDX & 1) == 0) {
    pbVar3 = in_RDX + 1;
  }
  else {
    pbVar3 = *(byte **)(in_RDX + 0x10);
  }
  puVar2 = (undefined8 *)std::string::append((char *)param_2,(ulong)pbVar3);
  *(undefined8 *)(param_1 + 0x10) = puVar2[2];
  uVar1 = puVar2[1];
  *(undefined8 *)param_1 = *puVar2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  return param_1;
}

