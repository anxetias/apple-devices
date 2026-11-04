// rea decompile_all
// name: std::less<std::string>::operator()[abi:ne190102]
// address: 0x21bf08
// body: available
// range: 0x21bf08-0x21bf70 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::less<std::string >::operator()[abi:ne190102](std::string const&, std::string const&) const
    */

bool __thiscall
std::less<std::string>::operator()[abi_ne190102_
          (less<std::string> *this,string *param_1,string *param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  string *psVar4;
  ulong uVar5;
  string *psVar6;
  ulong uVar7;
  
  if (((byte)*param_1 & 1) == 0) {
    uVar7 = (ulong)((byte)*param_1 >> 1);
    psVar6 = param_1 + 1;
  }
  else {
    uVar7 = *(ulong *)(param_1 + 8);
    psVar6 = *(string **)(param_1 + 0x10);
  }
  if (((byte)*param_2 & 1) == 0) {
    uVar5 = (ulong)((byte)*param_2 >> 1);
    psVar4 = param_2 + 1;
  }
  else {
    uVar5 = *(ulong *)(param_2 + 8);
    psVar4 = *(string **)(param_2 + 0x10);
  }
  uVar3 = uVar7;
  if (uVar5 < uVar7) {
    uVar3 = uVar5;
  }
  iVar2 = _memcmp(psVar6,psVar4,uVar3);
  bVar1 = iVar2 < 0;
  if (iVar2 == 0) {
    bVar1 = uVar7 < uVar5;
  }
  return bVar1;
}

