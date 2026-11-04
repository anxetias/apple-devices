// rea decompile_all
// name: _GenericHashInit
// address: 0x9bec1
// body: available
// range: 0x9bec1-0x9bf6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x9bf33 to 0x2a9396 _CC_MD5_Init (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x9bf3d to 0x2a93c0 _CC_SHA224_Init (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x9bf47 to 0x2a9408 _CC_SHA512_Init (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x9bf53 to 0x2a93ae _CC_SHA1_Init (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x9bf5d to 0x2a93d8 _CC_SHA256_Init (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x9bf67 to 0x2a93f0 _CC_SHA384_Init (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GenericHashInit(undefined4 *param_1,undefined4 param_2)

{
  *(undefined8 *)(param_1 + 0x31) = 0;
  *(undefined8 *)(param_1 + 0x33) = 0;
  *(undefined8 *)(param_1 + 0x2d) = 0;
  *(undefined8 *)(param_1 + 0x2f) = 0;
  *(undefined8 *)(param_1 + 0x29) = 0;
  *(undefined8 *)(param_1 + 0x2b) = 0;
  *(undefined8 *)(param_1 + 0x25) = 0;
  *(undefined8 *)(param_1 + 0x27) = 0;
  *(undefined8 *)(param_1 + 0x21) = 0;
  *(undefined8 *)(param_1 + 0x23) = 0;
  *(undefined8 *)(param_1 + 0x1d) = 0;
  *(undefined8 *)(param_1 + 0x1f) = 0;
  *(undefined8 *)(param_1 + 0x19) = 0;
  *(undefined8 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)(param_1 + 0x15) = 0;
  *(undefined8 *)(param_1 + 0x17) = 0;
  *(undefined8 *)(param_1 + 0x11) = 0;
  *(undefined8 *)(param_1 + 0x13) = 0;
  *(undefined8 *)(param_1 + 0xd) = 0;
  *(undefined8 *)(param_1 + 0xf) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  param_1[0x35] = 0;
  *param_1 = param_2;
  switch(param_2) {
  case 0:
    _CC_MD5_Init((CC_MD5_CTX *)(param_1 + 2));
    return;
  case 1:
    _CC_SHA1_Init((CC_SHA1_CTX *)(param_1 + 2));
    return;
  default:
    return;
  case 4:
    _CC_SHA224_Init((CC_SHA256_CTX *)(param_1 + 2));
    return;
  case 5:
    _CC_SHA256_Init((CC_SHA256_CTX *)(param_1 + 2));
    return;
  case 6:
    _CC_SHA384_Init((CC_SHA512_CTX *)(param_1 + 2));
    return;
  case 7:
    _CC_SHA512_Init((CC_SHA512_CTX *)(param_1 + 2));
    return;
  }
}

