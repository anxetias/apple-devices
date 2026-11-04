// rea decompile_all
// name: _GenericHashFinal
// address: 0x9c078
// body: available
// range: 0x9c078-0x9c0d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x9c099 to 0x2a9390 _CC_MD5_Final (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x9c0a3 to 0x2a93ba _CC_SHA224_Final (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x9c0ad to 0x2a9402 _CC_SHA512_Final (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x9c0b9 to 0x2a93a8 _CC_SHA1_Final (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x9c0c3 to 0x2a93d2 _CC_SHA256_Final (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x9c0cd to 0x2a93ea _CC_SHA384_Final (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GenericHashFinal(uchar *param_1,undefined4 *param_2)

{
  switch(*param_2) {
  case 0:
    _CC_MD5_Final(param_1,(CC_MD5_CTX *)(param_2 + 2));
    return;
  case 1:
    _CC_SHA1_Final(param_1,(CC_SHA1_CTX *)(param_2 + 2));
    return;
  default:
    return;
  case 4:
    _CC_SHA224_Final(param_1,(CC_SHA256_CTX *)(param_2 + 2));
    return;
  case 5:
    _CC_SHA256_Final(param_1,(CC_SHA256_CTX *)(param_2 + 2));
    return;
  case 6:
    _CC_SHA384_Final(param_1,(CC_SHA512_CTX *)(param_2 + 2));
    return;
  case 7:
    _CC_SHA512_Final(param_1,(CC_SHA512_CTX *)(param_2 + 2));
    return;
  }
}

