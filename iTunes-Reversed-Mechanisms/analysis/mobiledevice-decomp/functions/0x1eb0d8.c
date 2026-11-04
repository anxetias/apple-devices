// rea decompile_all
// name: _smb_encode_buffer
// address: 0x1eb0d8
// body: available
// range: 0x1eb0d8-0x1eb136 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1eb11c to 0x1efbb3 _smb_lz77_encode_buffer (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1eb127 to 0x1e2541 _smb_lz77h_encode_buffer (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1eb132 to 0x1d4e27 _smb_lznt1_encode_buffer (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_smb_encode_buffer(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,uint param_6)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (param_4 < 0xffffffffff000001) {
    uVar3 = 0xffffffffff000000;
    if (param_2 < 0xffffffffff000000) {
      uVar3 = param_2;
    }
    uVar1 = param_6 & 0xfffffff0;
    if (uVar1 == 0xc00) {
      uVar2 = _smb_lznt1_encode_buffer
                        (param_1,uVar3 & 0xffffffff,param_3,param_4 & 0xffffffff,param_5,
                         param_6 & 0xf);
      return uVar2;
    }
    if (uVar1 == 0xc20) {
      uVar2 = _smb_lz77h_encode_buffer(param_1,uVar3 & 0xffffffff,param_3,param_4 & 0xffffffff);
      return uVar2;
    }
    if (uVar1 == 0xc10) {
      uVar2 = _smb_lz77_encode_buffer(param_1,uVar3 & 0xffffffff,param_3,param_4 & 0xffffffff);
      return uVar2;
    }
  }
  return 0;
}

